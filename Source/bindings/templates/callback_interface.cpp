// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by {{code_generator}}. DO NOT MODIFY!

#include "config.h"
{% filter conditional(conditional_string) %}
#include "{{v8_class}}.h"

{% for filename in cpp_includes %}
#include "{{filename}}"
{% endfor %}

namespace WebCore {

{{v8_class}}::{{v8_class}}(v8::Handle<v8::Function> callback, ExecutionContext* context)
    : ActiveDOMCallback(context)
{
    v8::Isolate* isolate = toIsolate(context);
    m_callback.set(isolate, callback);
    m_scriptState = NewScriptState::current(isolate);
}

{{v8_class}}::~{{v8_class}}()
{
}

{% for method in methods if not method.custom %}
{{method.cpp_type}} {{v8_class}}::{{method.name}}({{method.argument_declarations | join(', ')}})
{
    {% set return_default = 'return true'
           if method.idl_type == 'boolean' else 'return' %}{# void #}
    if (!canInvokeCallback())
        {{return_default}};

    v8::Isolate* isolate = m_scriptState->isolate();
    v8::HandleScope handleScope(isolate);
    v8::Handle<v8::Context> v8Context = m_scriptState->context();
    if (v8Context.IsEmpty())
        {{return_default}};

    v8::Context::Scope scope(v8Context);
    {% if method.call_with_this_handle %}
    v8::Handle<v8::Value> thisHandle = thisValue.v8Value();
    if (thisHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        {{return_default}};
    }
    ASSERT(thisHandle->IsObject());
    {% endif %}
    {% for argument in method.arguments %}
    v8::Handle<v8::Value> {{argument.handle}} = {{argument.cpp_value_to_v8_value}};
    if ({{argument.handle}}.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        {{return_default}};
    }
    {% endfor %}
    {% if method.arguments %}
    v8::Handle<v8::Value> argv[] = { {{method.arguments | join(', ', attribute='handle')}} };
    {% else %}
    v8::Handle<v8::Value> *argv = 0;
    {% endif %}

    {% set this_handle_parameter = 'v8::Handle<v8::Object>::Cast(thisHandle), ' if method.call_with_this_handle else '' %}
    {% if method.idl_type == 'boolean' %}
    return invokeCallback(m_callback.newLocal(isolate), {{this_handle_parameter}}{{method.arguments | length}}, argv, executionContext(), isolate);
    {% else %}{# void #}
    invokeCallback(m_callback.newLocal(isolate), {{this_handle_parameter}}{{method.arguments | length}}, argv, executionContext(), isolate);
    {% endif %}
}

{% endfor %}
} // namespace WebCore
{% endfilter %}
