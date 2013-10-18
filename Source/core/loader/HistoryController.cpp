/*
 * Copyright (C) 2006, 2007, 2008, 2009 Apple Inc. All rights reserved.
 * Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies)
 * Copyright (C) 2008, 2009 Torch Mobile Inc. All rights reserved. (http://www.torchmobile.com/)
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "core/loader/HistoryController.h"

#include "core/dom/Document.h"
#include "core/history/BackForwardController.h"
#include "core/history/HistoryItem.h"
#include "core/html/HTMLFrameOwnerElement.h"
#include "core/loader/DocumentLoader.h"
#include "core/loader/FrameLoader.h"
#include "core/loader/FrameLoaderClient.h"
#include "core/loader/FrameLoaderStateMachine.h"
#include "core/frame/Frame.h"
#include "core/page/FrameTree.h"
#include "core/frame/FrameView.h"
#include "core/page/Page.h"
#include "core/page/scrolling/ScrollingCoordinator.h"
#include "platform/Logging.h"
#include "wtf/text/CString.h"

namespace WebCore {

HistoryController::HistoryController(Frame* frame)
    : m_frame(frame)
    , m_defersLoading(false)
{
}

HistoryController::~HistoryController()
{
}

void HistoryController::clearScrollPositionAndViewState()
{
    if (!m_currentItem)
        return;

    m_currentItem->clearScrollPoint();
    m_currentItem->setPageScaleFactor(0);
}

/*
 There is a race condition between the layout and load completion that affects restoring the scroll position.
 We try to restore the scroll position at both the first layout and upon load completion.

 1) If first layout happens before the load completes, we want to restore the scroll position then so that the
 first time we draw the page is already scrolled to the right place, instead of starting at the top and later
 jumping down.  It is possible that the old scroll position is past the part of the doc laid out so far, in
 which case the restore silent fails and we will fix it in when we try to restore on doc completion.
 2) If the layout happens after the load completes, the attempt to restore at load completion time silently
 fails.  We then successfully restore it when the layout happens.
*/
void HistoryController::restoreScrollPositionAndViewState()
{
    if (!m_currentItem || !m_frame->loader()->stateMachine()->committedFirstRealDocumentLoad())
        return;

    if (FrameView* view = m_frame->view()) {
        Page* page = m_frame->page();
        if (page && page->mainFrame() == m_frame) {
            if (ScrollingCoordinator* scrollingCoordinator = page->scrollingCoordinator())
                scrollingCoordinator->frameViewRootLayerDidChange(view);
        }

        if (!view->wasScrolledByUser()) {
            if (page && page->mainFrame() == m_frame && m_currentItem->pageScaleFactor())
                page->setPageScaleFactor(m_currentItem->pageScaleFactor(), m_currentItem->scrollPoint());
            else
                view->setScrollPositionNonProgrammatically(m_currentItem->scrollPoint());
        }
    }
}

void HistoryController::updateBackForwardListForFragmentScroll()
{
    createNewBackForwardItem(false);
}

void HistoryController::saveDocumentAndScrollState()
{
    if (!m_currentItem)
        return;

    Document* document = m_frame->document();
    ASSERT(document);

    if (m_currentItem->isCurrentDocument(document) && document->isActive()) {
        LOG(Loading, "WebCoreLoading %s: saving form state to %p", m_frame->tree()->uniqueName().string().utf8().data(), m_currentItem.get());
        m_currentItem->setDocumentState(document->formElementsState());
    }

    if (!m_frame->view())
        return;

    m_currentItem->setScrollPoint(m_frame->view()->scrollPosition());

    Page* page = m_frame->page();
    if (page && page->mainFrame() == m_frame)
        m_currentItem->setPageScaleFactor(page->pageScaleFactor());
}

void HistoryController::restoreDocumentState()
{
    if (m_currentItem && m_frame->loader()->loadType() == FrameLoadTypeBackForward)
        m_frame->document()->setStateForNewFormElements(m_currentItem->documentState());
}

bool HistoryController::shouldStopLoadingForHistoryItem(HistoryItem* targetItem) const
{
    if (!m_currentItem)
        return false;
    // Don't abort the current load if we're navigating within the current document.
    return !m_currentItem->shouldDoSameDocumentNavigationTo(targetItem);
}

// Main funnel for navigating to a previous location (back/forward, non-search snap-back)
// This includes recursion to handle loading into framesets properly
void HistoryController::goToItem(HistoryItem* targetItem)
{
    ASSERT(!m_frame->tree()->parent());

    // shouldGoToHistoryItem is a private delegate method. This is needed to fix:
    // <rdar://problem/3951283> can view pages from the back/forward cache that should be disallowed by Parental Controls
    // Ultimately, history item navigations should go through the policy delegate. That's covered in:
    // <rdar://problem/3979539> back/forward cache navigations should consult policy delegate
    Page* page = m_frame->page();
    if (!page)
        return;
    if (m_defersLoading) {
        m_deferredItem = targetItem;
        return;
    }

    // Set the BF cursor before commit, which lets the user quickly click back/forward again.
    // - plus, it only makes sense for the top level of the operation through the frametree,
    // as opposed to happening for some/one of the page commits that might happen soon
    RefPtr<HistoryItem> currentItem = page->backForward().currentItem();
    page->backForward().setCurrentItem(targetItem);

    // First set the provisional item of any frames that are not actually navigating.
    // This must be done before trying to navigate the desired frame, because some
    // navigations can commit immediately (such as about:blank).  We must be sure that
    // all frames have provisional items set before the commit.
    recursiveSetProvisionalItem(targetItem, currentItem.get());
    // Now that all other frames have provisional items, do the actual navigation.
    recursiveGoToItem(targetItem, currentItem.get());
}

void HistoryController::setDefersLoading(bool defer)
{
    m_defersLoading = defer;
    if (!defer && m_deferredItem) {
        goToItem(m_deferredItem.get());
        m_deferredItem = 0;
    }
}

// There are 2 things you might think of as "history", all of which are handled by these functions.
//
//     1) Back/forward: The m_currentItem is part of this mechanism.
//     2) Global history: Handled by the client.
//
void HistoryController::updateForStandardLoad()
{
    LOG(History, "WebCoreHistory: Updating History for Standard Load in frame %s", m_frame->loader()->documentLoader()->url().string().ascii().data());
    createNewBackForwardItem(true);
}

void HistoryController::updateForInitialLoadInChildFrame()
{
    Frame* parentFrame = m_frame->tree()->parent();
    if (parentFrame && parentFrame->loader()->history()->m_currentItem)
        parentFrame->loader()->history()->m_currentItem->setChildItem(createItem());
}

void HistoryController::updateForCommit()
{
    FrameLoader* frameLoader = m_frame->loader();
#if !LOG_DISABLED
    if (m_frame->document())
        LOG(History, "WebCoreHistory: Updating History for commit in frame %s", m_frame->document()->title().utf8().data());
#endif
    FrameLoadType type = frameLoader->loadType();
    if (isBackForwardLoadType(type)) {
        // Once committed, we want to use current item for saving DocState, and
        // the provisional item for restoring state.
        // Note previousItem must be set before we close the URL, which will
        // happen when the data source is made non-provisional below
        m_previousItem = m_currentItem;
        ASSERT(m_provisionalItem);
        m_currentItem = m_provisionalItem;
        m_provisionalItem = 0;

        // Tell all other frames in the tree to commit their provisional items and
        // restore their scroll position.  We'll avoid this frame (which has already
        // committed) and its children (which will be replaced).
        Page* page = m_frame->page();
        ASSERT(page);
        page->mainFrame()->loader()->history()->recursiveUpdateForCommit();
    }

    if (type == FrameLoadTypeStandard)
        updateForStandardLoad();
    else if (type == FrameLoadTypeInitialInChildFrame)
        updateForInitialLoadInChildFrame();
    else
        updateWithoutCreatingNewBackForwardItem();
}

void HistoryController::recursiveUpdateForCommit()
{
    // The frame that navigated will now have a null provisional item.
    // Ignore it and its children.
    if (!m_provisionalItem)
        return;

    // For each frame that already had the content the item requested (based on
    // (a matching URL and frame tree snapshot), just restore the scroll position.
    // Save form state
    if (m_currentItem && itemsAreClones(m_currentItem.get(), m_provisionalItem.get())) {
        if (FrameView* view = m_frame->view())
            view->setWasScrolledByUser(false);

        // Now commit the provisional item
        m_previousItem = m_currentItem;
        m_currentItem = m_provisionalItem;
        m_provisionalItem = 0;

        // Restore the scroll position (we choose to do this rather than going back to the anchor point)
        restoreScrollPositionAndViewState();
    }

    // Iterate over the rest of the tree
    for (Frame* child = m_frame->tree()->firstChild(); child; child = child->tree()->nextSibling())
        child->loader()->history()->recursiveUpdateForCommit();
}

void HistoryController::updateForSameDocumentNavigation()
{
    if (m_frame->document()->url().isEmpty())
        return;

    Page* page = m_frame->page();
    if (!page)
        return;

    page->mainFrame()->loader()->history()->recursiveUpdateForSameDocumentNavigation();

    if (m_currentItem)
        m_currentItem->setURL(m_frame->document()->url());
}

void HistoryController::recursiveUpdateForSameDocumentNavigation()
{
    // The frame that navigated will now have a null provisional item.
    // Ignore it and its children.
    if (!m_provisionalItem)
        return;

    // The provisional item may represent a different pending navigation.
    // Don't commit it if it isn't a same document navigation.
    if (m_currentItem && !m_currentItem->shouldDoSameDocumentNavigationTo(m_provisionalItem.get()))
        return;

    // Commit the provisional item.
    m_previousItem = m_currentItem;
    m_currentItem = m_provisionalItem;
    m_provisionalItem = 0;

    // Iterate over the rest of the tree.
    for (Frame* child = m_frame->tree()->firstChild(); child; child = child->tree()->nextSibling())
        child->loader()->history()->recursiveUpdateForSameDocumentNavigation();
}

void HistoryController::setCurrentItem(HistoryItem* item)
{
    m_previousItem = m_currentItem;
    m_currentItem = item;
}

bool HistoryController::currentItemShouldBeReplaced() const
{
    // From the HTML5 spec for location.assign():
    //  "If the browsing context's session history contains only one Document,
    //   and that was the about:blank Document created when the browsing context
    //   was created, then the navigation must be done with replacement enabled."
    return m_currentItem && !m_previousItem && equalIgnoringCase(m_currentItem->urlString(), blankURL());
}

void HistoryController::setProvisionalItem(HistoryItem* item)
{
    m_provisionalItem = item;
}

void HistoryController::initializeItem(HistoryItem* item)
{
    DocumentLoader* documentLoader = m_frame->loader()->documentLoader();
    ASSERT(documentLoader);

    KURL unreachableURL = documentLoader->unreachableURL();

    KURL url;
    KURL originalURL;

    if (!unreachableURL.isEmpty()) {
        url = unreachableURL;
        originalURL = unreachableURL;
    } else {
        url = documentLoader->url();
        originalURL = documentLoader->originalURL();
    }

    // Frames that have never successfully loaded any content
    // may have no URL at all. Currently our history code can't
    // deal with such things, so we nip that in the bud here.
    // Later we may want to learn to live with nil for URL.
    // See bug 3368236 and related bugs for more information.
    if (url.isEmpty())
        url = blankURL();
    if (originalURL.isEmpty())
        originalURL = blankURL();

    Frame* parentFrame = m_frame->tree()->parent();
    String parent = parentFrame ? parentFrame->tree()->uniqueName() : "";

    item->setURL(url);
    item->setTarget(m_frame->tree()->uniqueName());
    item->setOriginalURLString(originalURL.string());

    // Save form state if this is a POST
    item->setFormInfoFromRequest(documentLoader->request());
}

PassRefPtr<HistoryItem> HistoryController::createItem()
{
    RefPtr<HistoryItem> item = HistoryItem::create();
    initializeItem(item.get());

    // Set the item for which we will save document state
    m_previousItem = m_currentItem;
    m_currentItem = item;

    return item.release();
}

PassRefPtr<HistoryItem> HistoryController::createItemTree(Frame* targetFrame, bool clipAtTarget)
{
    RefPtr<HistoryItem> bfItem = createItem();

    if (!clipAtTarget || m_frame != targetFrame) {
        // clipAtTarget is false for navigations within the same document, so
        // we should copy the documentSequenceNumber over to the newly create
        // item.  Non-target items are just clones, and they should therefore
        // preserve the same itemSequenceNumber.
        if (m_previousItem) {
            if (m_frame != targetFrame)
                bfItem->setItemSequenceNumber(m_previousItem->itemSequenceNumber());
            bfItem->setDocumentSequenceNumber(m_previousItem->documentSequenceNumber());
        }

        for (Frame* child = m_frame->tree()->firstChild(); child; child = child->tree()->nextSibling()) {
            // If the child is a frame corresponding to an <object> element that never loaded,
            // we don't want to create a history item, because that causes fallback content
            // to be ignored on reload.
            FrameLoader* childLoader = child->loader();
            if (childLoader->stateMachine()->startedFirstRealLoad() || !child->ownerElement()->isObjectElement())
                bfItem->addChildItem(childLoader->history()->createItemTree(targetFrame, clipAtTarget));
        }
    }
    return bfItem;
}

// The general idea here is to traverse the frame tree and the item tree in parallel,
// tracking whether each frame already has the content the item requests.  If there is
// a match, we set the provisional item and recurse.  Otherwise we will reload that
// frame and all its kids in recursiveGoToItem.
void HistoryController::recursiveSetProvisionalItem(HistoryItem* item, HistoryItem* fromItem)
{
    ASSERT(item);

    if (itemsAreClones(item, fromItem)) {
        // Set provisional item, which will be committed in recursiveUpdateForCommit.
        m_provisionalItem = item;

        const HistoryItemVector& childItems = item->children();

        int size = childItems.size();

        for (int i = 0; i < size; ++i) {
            String childFrameName = childItems[i]->target();
            HistoryItem* fromChildItem = fromItem->childItemWithTarget(childFrameName);
            ASSERT(fromChildItem);
            Frame* childFrame = m_frame->tree()->child(childFrameName);
            ASSERT(childFrame);
            childFrame->loader()->history()->recursiveSetProvisionalItem(childItems[i].get(), fromChildItem);
        }
    }
}

// We now traverse the frame tree and item tree a second time, loading frames that
// do have the content the item requests.
void HistoryController::recursiveGoToItem(HistoryItem* item, HistoryItem* fromItem)
{
    ASSERT(item);

    if (itemsAreClones(item, fromItem)) {
        // Just iterate over the rest, looking for frames to navigate.
        const HistoryItemVector& childItems = item->children();

        int size = childItems.size();
        for (int i = 0; i < size; ++i) {
            String childFrameName = childItems[i]->target();
            HistoryItem* fromChildItem = fromItem->childItemWithTarget(childFrameName);
            ASSERT(fromChildItem);
            Frame* childFrame = m_frame->tree()->child(childFrameName);
            ASSERT(childFrame);
            childFrame->loader()->history()->recursiveGoToItem(childItems[i].get(), fromChildItem);
        }
    } else {
        m_frame->loader()->loadHistoryItem(item);
    }
}

bool HistoryController::itemsAreClones(HistoryItem* item1, HistoryItem* item2) const
{
    // If the item we're going to is a clone of the item we're at, then we do
    // not need to load it again.  The current frame tree and the frame tree
    // snapshot in the item have to match.
    // Note: Some clients treat a navigation to the current history item as
    // a reload.  Thus, if item1 and item2 are the same, we need to create a
    // new document and should not consider them clones.
    // (See http://webkit.org/b/35532 for details.)
    return item1
        && item2
        && item1 != item2
        && item1->itemSequenceNumber() == item2->itemSequenceNumber()
        && currentFramesMatchItem(item1)
        && item2->hasSameFrames(item1);
}

// Helper method that determines whether the current frame tree matches given history item's.
bool HistoryController::currentFramesMatchItem(HistoryItem* item) const
{
    if ((!m_frame->tree()->uniqueName().isEmpty() || !item->target().isEmpty()) && m_frame->tree()->uniqueName() != item->target())
        return false;

    const HistoryItemVector& childItems = item->children();
    if (childItems.size() != m_frame->tree()->childCount())
        return false;

    unsigned size = childItems.size();
    for (unsigned i = 0; i < size; ++i) {
        if (!m_frame->tree()->child(childItems[i]->target()))
            return false;
    }

    return true;
}

void HistoryController::createNewBackForwardItem(bool doClip)
{
    // In the case of saving state about a page with frames, we store a tree of items that mirrors the frame tree.
    // The item that was the target of the user's navigation is designated as the "targetItem".
    // When this function is called with doClip=true we're able to create the whole tree except for the target's children,
    // which will be loaded in the future. That part of the tree will be filled out as the child loads are committed.

    Page* page = m_frame->page();
    if (!page)
        return;

    if (m_frame->loader()->documentLoader()->originalRequest().url().isEmpty() && m_frame->loader()->documentLoader()->unreachableURL().isEmpty())
        return;

    Frame* mainFrame = page->mainFrame();
    ASSERT(mainFrame);

    RefPtr<HistoryItem> topItem = mainFrame->loader()->history()->createItemTree(m_frame, doClip);
    LOG(BackForward, "WebCoreBackForward - Adding backforward item %p for frame %s", topItem.get(), m_frame->loader()->documentLoader()->url().string().ascii().data());
    page->backForward().addItem(topItem.release());
}

void HistoryController::updateWithoutCreatingNewBackForwardItem()
{
    if (!m_currentItem)
        return;

    DocumentLoader* documentLoader = m_frame->loader()->documentLoader();

    if (!documentLoader->unreachableURL().isEmpty())
        return;

    if (m_currentItem->url() != documentLoader->url()) {
        m_currentItem->reset();
        initializeItem(m_currentItem.get());
    } else {
        // Even if the final URL didn't change, the form data may have changed.
        m_currentItem->setFormInfoFromRequest(documentLoader->request());
    }
}

void HistoryController::pushState(PassRefPtr<SerializedScriptValue> stateObject, const String& urlString)
{
    if (!m_currentItem)
        return;

    Page* page = m_frame->page();
    ASSERT(page);

    // Get a HistoryItem tree for the current frame tree.
    RefPtr<HistoryItem> topItem = page->mainFrame()->loader()->history()->createItemTree(m_frame, false);

    // Override data in the current item (created by createItemTree) to reflect
    // the pushState() arguments.
    m_currentItem->setStateObject(stateObject);
    m_currentItem->setURLString(urlString);
    page->backForward().addItem(topItem.release());
}

void HistoryController::replaceState(PassRefPtr<SerializedScriptValue> stateObject, const String& urlString)
{
    if (!m_currentItem)
        return;

    if (!urlString.isEmpty())
        m_currentItem->setURLString(urlString);
    m_currentItem->setStateObject(stateObject);
    m_currentItem->setFormData(0);
    m_currentItem->setFormContentType(String());

    ASSERT(m_frame->page());
}

} // namespace WebCore
