/*
 * Copyright (C) 2007, 2008 Apple Inc. All rights reserved.
 * Copyright (C) 2008 Matt Lilek <webkit@mattlilek.com>
 * Copyright (C) 2010 Google Inc. All rights reserved.
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
#include "core/inspector/InjectedScriptHost.h"

#include "InspectorFrontend.h"
#include "core/dom/Element.h"
#include "core/html/HTMLFrameOwnerElement.h"
#include "core/inspector/InjectedScript.h"
#include "core/inspector/InspectorAgent.h"
#include "core/inspector/InspectorClient.h"
#include "core/inspector/InspectorConsoleAgent.h"
#include "core/inspector/InspectorDOMAgent.h"
#include "core/inspector/InspectorDOMStorageAgent.h"
#include "core/inspector/InspectorDatabaseAgent.h"
#include "core/inspector/InspectorDebuggerAgent.h"
#include "core/inspector/InspectorValues.h"
#include "core/loader/FrameLoader.h"
#include "core/page/Frame.h"
#include "core/platform/Pasteboard.h"
#include "core/storage/Storage.h"
#include "modules/webdatabase/Database.h"


#include "core/editing/markup.h"

#include <wtf/RefPtr.h>
#include <wtf/StdLibExtras.h>

using namespace std;

namespace WebCore {

PassRefPtr<InjectedScriptHost> InjectedScriptHost::create()
{
    return adoptRef(new InjectedScriptHost());
}

InjectedScriptHost::InjectedScriptHost()
    : m_inspectorAgent(0)
    , m_consoleAgent(0)
    , m_databaseAgent(0)
    , m_domStorageAgent(0)
    , m_domAgent(0)
{
    ScriptWrappable::init(this);
    m_defaultInspectableObject = adoptPtr(new InspectableObject());
}

InjectedScriptHost::~InjectedScriptHost()
{
}

void InjectedScriptHost::disconnect()
{
    m_inspectorAgent = 0;
    m_consoleAgent = 0;
    m_databaseAgent = 0;
    m_domStorageAgent = 0;
    m_domAgent = 0;
}

void InjectedScriptHost::inspectImpl(PassRefPtr<InspectorValue> object, PassRefPtr<InspectorValue> hints)
{
    if (m_inspectorAgent) {
        RefPtr<TypeBuilder::Runtime::RemoteObject> remoteObject = TypeBuilder::Runtime::RemoteObject::runtimeCast(object);
        m_inspectorAgent->inspect(remoteObject, hints->asObject());
    }
}

void InjectedScriptHost::getEventListenersImpl(Node* node, Vector<EventListenerInfo>& listenersArray)
{
    if (m_domAgent)
        m_domAgent->getEventListeners(node, listenersArray, false);
}

void InjectedScriptHost::clearConsoleMessages()
{
    if (m_consoleAgent) {
        ErrorString error;
        m_consoleAgent->clearMessages(&error);
    }
}

void InjectedScriptHost::copyText(const String& text)
{
    Pasteboard::generalPasteboard()->writePlainText(text, Pasteboard::CannotSmartReplace);
}

ScriptValue InjectedScriptHost::InspectableObject::get(ScriptState*)
{
    return ScriptValue();
};

void InjectedScriptHost::addInspectedObject(PassOwnPtr<InjectedScriptHost::InspectableObject> object)
{
    m_inspectedObjects.prepend(object);
    while (m_inspectedObjects.size() > 5)
        m_inspectedObjects.removeLast();
}

void InjectedScriptHost::clearInspectedObjects()
{
    m_inspectedObjects.clear();
}

InjectedScriptHost::InspectableObject* InjectedScriptHost::inspectedObject(unsigned int num)
{
    if (num >= m_inspectedObjects.size())
        return m_defaultInspectableObject.get();
    return m_inspectedObjects[num].get();
}

String InjectedScriptHost::databaseIdImpl(Database* database)
{
    if (m_databaseAgent)
        return m_databaseAgent->databaseId(database);
    return String();
}

String InjectedScriptHost::storageIdImpl(Storage* storage)
{
    if (m_domStorageAgent)
        return m_domStorageAgent->storageId(storage);
    return String();
}

ScriptDebugServer& InjectedScriptHost::scriptDebugServer()
{
    return m_debuggerAgent->scriptDebugServer();
}


} // namespace WebCore
