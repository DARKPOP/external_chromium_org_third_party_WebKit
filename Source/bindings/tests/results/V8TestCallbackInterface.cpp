// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestCallbackInterface.h"

#include "V8TestInterfaceEmpty.h"
#include "V8TestInterfaceWillBeGarbageCollected.h"
#include "bindings/v8/V8Binding.h"
#include "bindings/v8/V8Callback.h"
#include "core/dom/ExecutionContext.h"
#include "wtf/Assertions.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

V8TestCallbackInterface::V8TestCallbackInterface(v8::Handle<v8::Function> callback, ExecutionContext* context)
    : ActiveDOMCallback(context)
{
    v8::Isolate* isolate = toIsolate(context);
    m_callback.set(isolate, callback);
    m_scriptState = NewScriptState::current(isolate);
}

V8TestCallbackInterface::~V8TestCallbackInterface()
{
}

void V8TestCallbackInterface::voidMethod()
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        return;

    v8::Context::Scope scope(v8Context);
    v8::Handle<v8::Value> *argv = 0;

    invokeCallback(m_callback.newLocal(isolate), 0, argv, executionContext(), isolate);
}

bool V8TestCallbackInterface::booleanMethod()
{
    if (!canInvokeCallback())
        return true;

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        return true;

    v8::Context::Scope scope(v8Context);
    v8::Handle<v8::Value> *argv = 0;

    return invokeCallback(m_callback.newLocal(isolate), 0, argv, executionContext(), isolate);
}

void V8TestCallbackInterface::voidMethodBooleanArg(bool boolArg)
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        return;

    v8::Context::Scope scope(v8Context);
    v8::Handle<v8::Value> boolArgHandle = v8Boolean(boolArg, isolate);
    if (boolArgHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> argv[] = { boolArgHandle };

    invokeCallback(m_callback.newLocal(isolate), 1, argv, executionContext(), isolate);
}

void V8TestCallbackInterface::voidMethodSequenceArg(const Vector<RefPtr<TestInterfaceEmpty> >& sequenceArg)
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        return;

    v8::Context::Scope scope(v8Context);
    v8::Handle<v8::Value> sequenceArgHandle = v8Array(sequenceArg, isolate);
    if (sequenceArgHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> argv[] = { sequenceArgHandle };

    invokeCallback(m_callback.newLocal(isolate), 1, argv, executionContext(), isolate);
}

void V8TestCallbackInterface::voidMethodFloatArg(float floatArg)
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        return;

    v8::Context::Scope scope(v8Context);
    v8::Handle<v8::Value> floatArgHandle = v8::Number::New(isolate, floatArg);
    if (floatArgHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> argv[] = { floatArgHandle };

    invokeCallback(m_callback.newLocal(isolate), 1, argv, executionContext(), isolate);
}

void V8TestCallbackInterface::voidMethodTestInterfaceEmptyArg(TestInterfaceEmpty* testInterfaceEmptyArg)
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        return;

    v8::Context::Scope scope(v8Context);
    v8::Handle<v8::Value> testInterfaceEmptyArgHandle = toV8(testInterfaceEmptyArg, v8::Handle<v8::Object>(), isolate);
    if (testInterfaceEmptyArgHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> argv[] = { testInterfaceEmptyArgHandle };

    invokeCallback(m_callback.newLocal(isolate), 1, argv, executionContext(), isolate);
}

void V8TestCallbackInterface::voidMethodTestInterfaceEmptyStringArg(TestInterfaceEmpty* testInterfaceEmptyArg, const String& stringArg)
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        return;

    v8::Context::Scope scope(v8Context);
    v8::Handle<v8::Value> testInterfaceEmptyArgHandle = toV8(testInterfaceEmptyArg, v8::Handle<v8::Object>(), isolate);
    if (testInterfaceEmptyArgHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> stringArgHandle = v8String(isolate, stringArg);
    if (stringArgHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> argv[] = { testInterfaceEmptyArgHandle, stringArgHandle };

    invokeCallback(m_callback.newLocal(isolate), 2, argv, executionContext(), isolate);
}

void V8TestCallbackInterface::callbackWithThisValueVoidMethodStringArg(ScriptValue thisValue, const String& stringArg)
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        return;

    v8::Context::Scope scope(v8Context);
    v8::Handle<v8::Value> thisHandle = thisValue.v8Value();
    if (thisHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    ASSERT(thisHandle->IsObject());
    v8::Handle<v8::Value> stringArgHandle = v8String(isolate, stringArg);
    if (stringArgHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> argv[] = { stringArgHandle };

    invokeCallback(m_callback.newLocal(isolate), v8::Handle<v8::Object>::Cast(thisHandle), 1, argv, executionContext(), isolate);
}

void V8TestCallbackInterface::voidMethodWillBeGarbageCollectedSequenceArg(const WillBeHeapVector<RefPtrWillBeMember<TestInterfaceWillBeGarbageCollected> >& sequenceArg)
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        return;

    v8::Context::Scope scope(v8Context);
    v8::Handle<v8::Value> sequenceArgHandle = v8Array(sequenceArg, isolate);
    if (sequenceArgHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> argv[] = { sequenceArgHandle };

    invokeCallback(m_callback.newLocal(isolate), 1, argv, executionContext(), isolate);
}

void V8TestCallbackInterface::voidMethodWillBeGarbageCollectedArrayArg(const WillBeHeapVector<RefPtrWillBeMember<TestInterfaceWillBeGarbageCollected> >& arrayArg)
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        return;

    v8::Context::Scope scope(v8Context);
    v8::Handle<v8::Value> arrayArgHandle = v8Array(arrayArg, isolate);
    if (arrayArgHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> argv[] = { arrayArgHandle };

    invokeCallback(m_callback.newLocal(isolate), 1, argv, executionContext(), isolate);
}

} // namespace WebCore
