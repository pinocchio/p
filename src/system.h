#ifndef SYSTEM_H
#define SYSTEM_H

#include <model.h>
#include <bootstrap.h>
#include <stdio.h>

#include <debug.h>

#include <system/ast/assign.h>
#include <system/ast/call.h>
#include <system/ast/capture.h>
#include <system/ast/const.h>
#include <system/ast/list.h>
#include <system/ast/scoped.h>
#include <system/ast/var.h>

#include <system/tool/ival.h>
#include <system/tool/fallback.h>
#include <system/tool/shift.h>

#include <system/type/ifixed.h>
#include <system/type/array.h>
#include <system/type/dict.h>
#include <system/type/symbol.h>
#include <system/type/string.h>
#include <system/type/smallint.h>
#include <system/type/char.h>

#include <system/runtime/env.h>

#include <system/io/file.h>

/* Globally used functions */
extern void pre_eval_env();
extern void doesnotunderstand(const wchar_t* class, object selector);
extern void inline identity();

// Meta-interpretation primitives.
extern void inline new_target(context_object context, object target);

// Accessor
extern void inline object_delegate();

// Convenience macros.
#define return_value(rc) argument_at(rc, 1)

#define accessor_for(cls, element)\
static void inline cls##_##element() {\
    debug(#cls">>"#element"\n");\
    context_object context = get_context();\
    return_from_context(context, context->self.cls->element);\
    debug("ret>>"#cls">>"#element"\n");\
}

#define make_eval_context(name, todo, environment)\
    name = make_context((object)todo, 1);\
    set_message(name, EVAL);\
    name->env = (object)environment;

#define eval_in_scope(input, env, output)\
    { \
        context_object make_eval_context(ci, input, env);\
        output = transfer();\
    }

#define if_selector(symb, todo)\
    if (selector.pointer == symb.pointer)\
        return todo();

#define dispatch_header(context, selector)\
    context_object context = get_context();\
    assert_argsize(context, 1);\
    object selector = message(context);

#define define_bcls(type, boot, messages)\
void type##_##class_dispatch() {\
    dispatch_header(context, selector);\
    messages;\
    new_target(context, context->self.ifixed->delegate);\
}\
with_pre_eval2(type##_##set_dispatch_delegate, context, dispatch, delegate,\
    ifixed_t_object ifixed = context->self.ifixed;\
    boot;\
    ifixed->dispatch = dispatch;\
    ifixed->delegate = delegate;\
    pop_context();\
)\
void type##_##class_stub_dispatch() {\
    dispatch_header(context, selector);\
    messages;\
    if_selector(SET_DISPATCH_DELEGATE, type##_##set_dispatch_delegate);\
    doesnotunderstand(L""#type"_stubclass", selector);\
}

#define define_bootstrapping_instance(type, messages)\
void type##_##dispatch() {\
    debug(#type"_dispatch\n");\
    context_object context = get_context();\
    if (context_size(context) >= 1) {\
        object selector = message(context);\
        if_selector(DELEGATE, object_delegate);\
        messages\
    }\
    fallback_shift(context);\
    debug("ret>>"#type"_dispatch\n");\
}\
void type##_##stub_dispatch() {\
    debug(#type"_stub_dispatch\n");\
    context_object context = get_context();\
    if (context_size(context) >= 1) {\
        object selector = message(context);\
        messages\
        doesnotunderstand(L""#type"_stub", selector);\
    }\
    debug("ret>>"#type"_stub_dispatch\n");\
}

#define define_bootstrapping_type(name, instmsgs, classmsgs)\
    define_bootstrapping_instance(name, instmsgs)\
    define_bcls(name,\
        ifixed->cdisp   = (object)&name##_##dispatch;\
        header(ifixed)  = woodstock->name##_##t_class;,\
        classmsgs)

// TODO change back to static void
#define with_pre_eval1(name, context, first, body)\
void name##_##do() {\
    debug(#name"\n");\
    context_object context = get_context();\
    object first = argument_at(context, 1);\
    body;\
    debug("ret>>"#name"\n");\
}\
void inline name() {\
    context_object context = get_context();\
    assert_argsize(context, 2);\
    push_eval_of(context, 1);\
    context->code = &name##_##do;\
}

#define with_pre_eval2(name, context, first, second, body)\
void name##_##do() {\
    debug(#name"\n");\
    context_object context = get_context();\
    object first  = argument_at(context, 1);\
    object second = argument_at(context, 2);\
    body;\
    debug("ret>>"#name"\n");\
}\
void inline name() {\
    context_object context = get_context();\
    assert_argsize(context, 3);\
    push_eval_of(context, 1);\
    push_eval_of(context, 2);\
    context->code = &name##_##do;\
}

#define with_pre_eval3(name, context, first, second, third, body)\
void name##_##do() {\
    debug(#name"\n");\
    context_object context = get_context();\
    object first  = argument_at(context, 1);\
    object second = argument_at(context, 2);\
    object third = argument_at(context, 3);\
    body;\
    debug("ret>>"#name"\n");\
}\
void inline name() {\
    context_object context = get_context();\
    assert_argsize(context, 4);\
    push_eval_of(context, 1);\
    push_eval_of(context, 2);\
    push_eval_of(context, 3);\
    context->code = &name##_##do;\
}

// =============================================================================

extern int ensure_greater_equals(int v1, int v2, const wchar_t* format,
								 const char* file, unsigned int line);

extern int ensure(int condition, const wchar_t* format, const char* file, unsigned int line);

#define error_guard(condition, format)\
	if (!ensure((condition), L"%s, line %u, " format L"\n", __FILE__, __LINE__)) {\
		/*XXX WARN THIS IS A HACK!! C-STACKFRAMES ARE LEFT OVER */\
		continue_transfer();\
	}

#define assert_argsize(context, size)\
	error_guard(greater_equals(context_size(context), (size)), L"Argument mismatch.")

#define greater_equals(number1, number2) (number1 >= number2)

#define cast(var, o, type)\
	class##_##object var = ((object)(o)).class;\
	error_guard(isinstance((object)(var), (type)), L"Type mismatch.")

#define isinstance(o, type)\
	(pheader(pheader((o).pointer)) == woodstock->type##_##t_stub_class.pointer || \
     pheader(pheader((o).pointer)) == woodstock->type##_##t_class.pointer)


// =============================================================================


#endif
