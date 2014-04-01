// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestInterfaceCheckSecurity.h"

#include "RuntimeEnabledFeatures.h"
#include "bindings/v8/BindingSecurity.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(TestInterfaceCheckSecurity* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::setTypeInfoInObject(object, &V8TestInterfaceCheckSecurity::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::TestInterfaceCheckSecurity* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8TestInterfaceCheckSecurity::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestInterfaceCheckSecurity::domTemplate, V8TestInterfaceCheckSecurity::derefObject, 0, 0, 0, V8TestInterfaceCheckSecurity::installPerContextEnabledMethods, 0, WrapperTypeObjectPrototype, false };

namespace TestInterfaceCheckSecurityV8Internal {

template <typename T> void V8_USE(T) { }

static void longAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    v8SetReturnValueInt(info, impl->longAttribute());
}

static void longAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::longAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityLongAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    v8SetReturnValueInt(info, impl->doNotCheckSecurityLongAttribute());
}

static void doNotCheckSecurityLongAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityLongAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityLongAttributeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "doNotCheckSecurityLongAttribute", "TestInterfaceCheckSecurity", holder, info.GetIsolate());
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    V8TRYCATCH_EXCEPTION_VOID(int, cppValue, toInt32(v8Value, exceptionState), exceptionState);
    impl->setDoNotCheckSecurityLongAttribute(cppValue);
}

static void doNotCheckSecurityLongAttributeAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityLongAttributeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityReadonlyLongAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    v8SetReturnValueInt(info, impl->doNotCheckSecurityReadonlyLongAttribute());
}

static void doNotCheckSecurityReadonlyLongAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReadonlyLongAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityOnSetterLongAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    v8SetReturnValueInt(info, impl->doNotCheckSecurityOnSetterLongAttribute());
}

static void doNotCheckSecurityOnSetterLongAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityOnSetterLongAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityOnSetterLongAttributeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "doNotCheckSecurityOnSetterLongAttribute", "TestInterfaceCheckSecurity", holder, info.GetIsolate());
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    V8TRYCATCH_EXCEPTION_VOID(int, cppValue, toInt32(v8Value, exceptionState), exceptionState);
    impl->setDoNotCheckSecurityOnSetterLongAttribute(cppValue);
}

static void doNotCheckSecurityOnSetterLongAttributeAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityOnSetterLongAttributeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityReplaceableReadonlyLongAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    v8SetReturnValueInt(info, impl->doNotCheckSecurityReplaceableReadonlyLongAttribute());
}

static void doNotCheckSecurityReplaceableReadonlyLongAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReplaceableReadonlyLongAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void TestInterfaceCheckSecurityReplaceableAttributeSetter(v8::Local<v8::String> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(info.Holder());
    v8::Isolate* isolate = info.GetIsolate();
    v8::String::Utf8Value attributeName(name);
    ExceptionState exceptionState(ExceptionState::SetterContext, *attributeName, "TestInterfaceCheckSecurity", info.Holder(), isolate);
    if (!BindingSecurity::shouldAllowAccessToFrame(isolate, impl->frame(), exceptionState)) {
        exceptionState.throwIfNeeded();
        return;
    }
    info.This()->ForceSet(name, v8Value);
}

static void TestInterfaceCheckSecurityReplaceableAttributeSetterCallback(v8::Local<v8::String> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityReplaceableAttributeSetter(name, v8Value, info);
}

bool indexedSecurityCheck(v8::Local<v8::Object> host, uint32_t index, v8::AccessType type, v8::Local<v8::Value>)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(host);
    return BindingSecurity::shouldAllowAccessToFrame(v8::Isolate::GetCurrent(), impl->frame(), DoNotReportSecurityError);
}

bool namedSecurityCheck(v8::Local<v8::Object> host, v8::Local<v8::Value> key, v8::AccessType type, v8::Local<v8::Value>)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(host);
    return BindingSecurity::shouldAllowAccessToFrame(v8::Isolate::GetCurrent(), impl->frame(), DoNotReportSecurityError);
}

static void voidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "voidMethod", "TestInterfaceCheckSecurity", info.Holder(), info.GetIsolate());
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(info.Holder());
    if (!BindingSecurity::shouldAllowAccessToFrame(info.GetIsolate(), impl->frame(), exceptionState)) {
        exceptionState.throwIfNeeded();
        return;
    }
    impl->voidMethod();
}

static void voidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::voidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityVoidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(info.Holder());
    impl->doNotCheckSecurityVoidMethod();
}

static void doNotCheckSecurityVoidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityVoidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityVoidMethodOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(isolate);
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), isolate);
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(isolate, impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = info.This()->GetHiddenValue(v8AtomicString(isolate, "doNotCheckSecurityVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityVoidMethodOriginSafeMethodGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityVoidMethodOriginSafeMethodGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityDoNotCheckSignatureVoidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(info.Holder());
    impl->doNotCheckSecurityDoNotCheckSignatureVoidMethod();
}

static void doNotCheckSecurityDoNotCheckSignatureVoidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityDoNotCheckSignatureVoidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityDoNotCheckSignatureVoidMethodOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(isolate);
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityDoNotCheckSignatureVoidMethodMethodCallback, v8Undefined(), v8::Local<v8::Signature>(), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), isolate);
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(isolate, impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityDoNotCheckSignatureVoidMethodMethodCallback, v8Undefined(), v8::Local<v8::Signature>(), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = info.This()->GetHiddenValue(v8AtomicString(isolate, "doNotCheckSecurityDoNotCheckSignatureVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityDoNotCheckSignatureVoidMethodOriginSafeMethodGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityDoNotCheckSignatureVoidMethodOriginSafeMethodGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(info.Holder());
    impl->doNotCheckSecurityPerWorldBindingsVoidMethod();
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(isolate);
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), isolate);
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(isolate, impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = info.This()->GetHiddenValue(v8AtomicString(isolate, "doNotCheckSecurityPerWorldBindingsVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(info.Holder());
    impl->doNotCheckSecurityPerWorldBindingsVoidMethod();
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethodForMainWorld(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterForMainWorld(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(isolate);
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallbackForMainWorld, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), isolate);
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(isolate, impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallbackForMainWorld, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = info.This()->GetHiddenValue(v8AtomicString(isolate, "doNotCheckSecurityPerWorldBindingsVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterCallbackForMainWorld(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterForMainWorld(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityReadOnlyVoidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(info.Holder());
    impl->doNotCheckSecurityReadOnlyVoidMethod();
}

static void doNotCheckSecurityReadOnlyVoidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReadOnlyVoidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityReadOnlyVoidMethodOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(isolate);
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReadOnlyVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), isolate);
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(isolate, impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReadOnlyVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = info.This()->GetHiddenValue(v8AtomicString(isolate, "doNotCheckSecurityReadOnlyVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityReadOnlyVoidMethodOriginSafeMethodGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReadOnlyVoidMethodOriginSafeMethodGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityUnforgeableVoidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(info.Holder());
    impl->doNotCheckSecurityUnforgeableVoidMethod();
}

static void doNotCheckSecurityUnforgeableVoidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityUnforgeableVoidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void doNotCheckSecurityUnforgeableVoidMethodOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(isolate);
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityUnforgeableVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), isolate);
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(isolate, impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityUnforgeableVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = info.This()->GetHiddenValue(v8AtomicString(isolate, "doNotCheckSecurityUnforgeableVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityUnforgeableVoidMethodOriginSafeMethodGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityUnforgeableVoidMethodOriginSafeMethodGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void TestInterfaceCheckSecurityOriginSafeMethodSetter(v8::Local<v8::String> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), isolate);
    if (holder.IsEmpty())
        return;
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toNative(holder);
    v8::String::Utf8Value attributeName(name);
    ExceptionState exceptionState(ExceptionState::SetterContext, *attributeName, "TestInterfaceCheckSecurity", info.Holder(), isolate);
    if (!BindingSecurity::shouldAllowAccessToFrame(isolate, impl->frame(), exceptionState)) {
        exceptionState.throwIfNeeded();
        return;
    }

    V8HiddenValue::setHiddenValue(isolate, info.This(), name, v8Value);
}

static void TestInterfaceCheckSecurityOriginSafeMethodSetterCallback(v8::Local<v8::String> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetter(name, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace TestInterfaceCheckSecurityV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8TestInterfaceCheckSecurityAttributes[] = {
    {"longAttribute", TestInterfaceCheckSecurityV8Internal::longAttributeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"doNotCheckSecurityLongAttribute", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityLongAttributeAttributeGetterCallback, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityLongAttributeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::ALL_CAN_READ | v8::ALL_CAN_WRITE), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"doNotCheckSecurityReadonlyLongAttribute", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReadonlyLongAttributeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::ALL_CAN_READ), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"doNotCheckSecurityOnSetterLongAttribute", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityOnSetterLongAttributeAttributeGetterCallback, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityOnSetterLongAttributeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::ALL_CAN_WRITE), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"doNotCheckSecurityReplaceableReadonlyLongAttribute", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReplaceableReadonlyLongAttributeAttributeGetterCallback, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityReplaceableAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::ALL_CAN_READ | v8::ALL_CAN_WRITE), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8TestInterfaceCheckSecurityMethods[] = {
    {"voidMethod", TestInterfaceCheckSecurityV8Internal::voidMethodMethodCallback, 0, 0},
};

static void configureV8TestInterfaceCheckSecurityTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "TestInterfaceCheckSecurity", v8::Local<v8::FunctionTemplate>(), V8TestInterfaceCheckSecurity::internalFieldCount,
        V8TestInterfaceCheckSecurityAttributes, WTF_ARRAY_LENGTH(V8TestInterfaceCheckSecurityAttributes),
        0, 0,
        V8TestInterfaceCheckSecurityMethods, WTF_ARRAY_LENGTH(V8TestInterfaceCheckSecurityMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> ALLOW_UNUSED instanceTemplate = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> ALLOW_UNUSED prototypeTemplate = functionTemplate->PrototypeTemplate();
    instanceTemplate->SetAccessCheckCallbacks(TestInterfaceCheckSecurityV8Internal::namedSecurityCheck, TestInterfaceCheckSecurityV8Internal::indexedSecurityCheck, v8::External::New(isolate, const_cast<WrapperTypeInfo*>(&V8TestInterfaceCheckSecurity::wrapperTypeInfo)));
    prototypeTemplate->SetAccessor(v8AtomicString(isolate, "doNotCheckSecurityVoidMethod"), TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityVoidMethodOriginSafeMethodGetterCallback, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetterCallback, v8Undefined(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete));
    prototypeTemplate->SetAccessor(v8AtomicString(isolate, "doNotCheckSecurityDoNotCheckSignatureVoidMethod"), TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityDoNotCheckSignatureVoidMethodOriginSafeMethodGetterCallback, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetterCallback, v8Undefined(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete));
    if (DOMWrapperWorld::current(isolate).isMainWorld()) {
        prototypeTemplate->SetAccessor(v8AtomicString(isolate, "doNotCheckSecurityPerWorldBindingsVoidMethod"), TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterCallbackForMainWorld, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetterCallback, v8Undefined(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete));
    } else {
        prototypeTemplate->SetAccessor(v8AtomicString(isolate, "doNotCheckSecurityPerWorldBindingsVoidMethod"), TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterCallback, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetterCallback, v8Undefined(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete));
    }
    prototypeTemplate->SetAccessor(v8AtomicString(isolate, "doNotCheckSecurityReadOnlyVoidMethod"), TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReadOnlyVoidMethodOriginSafeMethodGetterCallback, 0, v8Undefined(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly));
    instanceTemplate->SetAccessor(v8AtomicString(isolate, "doNotCheckSecurityUnforgeableVoidMethod"), TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityUnforgeableVoidMethodOriginSafeMethodGetterCallback, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetterCallback, v8Undefined(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete));

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::current()->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8TestInterfaceCheckSecurity::domTemplate(v8::Isolate* isolate)
{
    V8PerIsolateData* data = V8PerIsolateData::from(isolate);
    v8::Local<v8::FunctionTemplate> result = data->existingDOMTemplate(const_cast<WrapperTypeInfo*>(&wrapperTypeInfo));
    if (!result.IsEmpty())
        return result;

    TRACE_EVENT_SCOPED_SAMPLING_STATE("Blink", "BuildDOMTemplate");
    result = v8::FunctionTemplate::New(isolate, V8ObjectConstructor::isValidConstructorMode);
    configureV8TestInterfaceCheckSecurityTemplate(result, isolate);
    data->setDOMTemplate(const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), result);
    return result;
}

bool V8TestInterfaceCheckSecurity::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TestInterfaceCheckSecurity* V8TestInterfaceCheckSecurity::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> V8TestInterfaceCheckSecurity::createWrapper(PassRefPtr<TestInterfaceCheckSecurity> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8TestInterfaceCheckSecurity>(impl.get(), isolate));
    if (ScriptWrappable::wrapperCanBeStoredInObject(impl.get())) {
        const WrapperTypeInfo* actualInfo = ScriptWrappable::getTypeInfoFromObject(impl.get());
        // Might be a XXXConstructor::wrapperTypeInfo instead of an XXX::wrapperTypeInfo. These will both have
        // the same object de-ref functions, though, so use that as the basis of the check.
        RELEASE_ASSERT_WITH_SECURITY_IMPLICATION(actualInfo->derefObjectFunction == wrapperTypeInfo.derefObjectFunction);
    }

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &wrapperTypeInfo, toInternalPointer(impl.get()), isolate);
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextEnabledProperties(wrapper, impl.get(), isolate);
    V8DOMWrapper::associateObjectWithWrapper<V8TestInterfaceCheckSecurity>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8TestInterfaceCheckSecurity::derefObject(void* object)
{
    fromInternalPointer(object)->deref();
}

template<>
v8::Handle<v8::Value> toV8NoInline(TestInterfaceCheckSecurity* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
