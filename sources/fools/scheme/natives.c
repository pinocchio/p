#include <model.h>
#include <bootstrap.h>
#include <system.h>
#include <scheme/natives.h>
#include <scheme/system.h>
#include <thread.h>

#include <assert.h>
#include <stdio.h>

#define preval2(name) \
void name##_##func() {\
    context_object context = get_context();\
    assert_argsize(context, 2);\
    push_eval_of(context, 0);\
    push_eval_of(context, 1);\
    context->code = &name##_##func_do;\
}

// XXX breaks encapsulation. FIX!
#define binop(name, op)\
object scheme##_##name;\
void scheme##_##name##_##func_do() {\
    context_object context = get_context();\
    debug("scheme>>"#name"\n");\
    number_object arg1 = argument_at(context, 0).number;\
    number_object arg2 = argument_at(context, 1).number;\
    number_object result = make_number(arg1->value op arg2->value);\
\
    set_argument(return_context(context), 1, (object)result);\
    debug("ret>>scheme>>"#name"\n");\
    pop_context();\
}\
preval2(scheme##_##name);

#define load_op(name)\
    scheme##_##name = (object)make_iconst(\
                        (object)make_object(0,\
                            (object)make_native(&scheme##_##name##_##func)));
#define load_direct_op(name)\
    scheme##_##name = (object)make_object(0,\
                        (object)make_native(&scheme##_##name##_##func));


binop(plus,  +)
binop(minus, -)

object scheme_true;

void scheme_true_func() {
    context_object context = get_context();
    debug("in scheme_true\n");
    // XXX breaks encapsulation
    object env = context->env;
    object if_true = argument_at(context, 0);

    pop_context();
    context = make_context(if_true, 1);
    context->env = env;
    set_message(context, EVAL);

    debug("exit scheme_true\n");
}

object scheme_false;

void scheme_false_func() {
    context_object context = get_context();
    debug("in scheme_false\n");
    object if_false = argument_at(context, 1);

    object env = context->env;

    pop_context();
    context = make_context(if_false, 1);
    context->env = env;
    set_message(context, EVAL);

    debug("exit scheme_false\n");
}

object scheme_smallerp;

static void scheme_smallerp_func_do() {
    dec();
    debug("scheme>>smallerp\n");
    context_object context = get_context();

    object result;
    if (number_value(argument_at(context, 0).number) <
        number_value(argument_at(context, 1).number)) {
        result = scheme_true;
    } else { 
        result = scheme_false;
    }

    set_argument(return_context(context), 1, result);
    pop_context();
    debug("ret>>scheme>>smallerp(pre)\n");
}

preval2(scheme_smallerp)

object scheme_eqp;

static void scheme_eqp_func_do() {
    dec();
    debug("scheme>>eqp\n");
    context_object context = get_context();

    object result;
    if (argument_at(context, 0).pointer == argument_at(context, 1).pointer) {
        result = scheme_true;
    } else { 
        result = scheme_false;
    }

    set_argument(return_context(context), 1, result);
    pop_context();
    debug("ret>>scheme>>eqp(pre)\n");
}

preval2(scheme_eqp)

void bootstrap_scheme() {

    load_op(plus);
    load_op(minus);
    load_op(smallerp);
    load_op(eqp);
    load_direct_op(true);
    load_direct_op(false);
}
