#include <model.h>
#include <bootstrap.h>
#include <system.h>
#include <scheme/natives.h>
#include <scheme/system.h>
#include <thread.h>

#include <assert.h>
#include <stdio.h>

object scheme_plus;
object scheme_plus_1;
object scheme_plus_2;

void scheme_plus_func() {
    context_object context = get_context();
    debug("in plus\n");
    // XXX breaks encapsulation. FIX!
    env_object env = context->env.env;
    number_object arg1 = env_at(env, 1).number;
    number_object arg2 = env_at(env, 2).number;
    number_object result = make_number(arg1->value + arg2->value);

    set_argument(return_context(context), 1, (object)result);

    debug("exit plus\n");
    pop_context();
}

object scheme_minus;
object scheme_minus_1;
object scheme_minus_2;

void scheme_minus_func() {
    context_object context = get_context();
    debug("in minus\n");
    // XXX breaks encapsulation. FIX!
    env_object env = context->env.env;
    number_object arg1 = env_at(env, 1).number;
    number_object arg2 = env_at(env, 2).number;
    number_object result = make_number(arg1->value - arg2->value);

    set_argument(return_context(context), 1, (object)result);

    debug("exit minus\n");
    pop_context();
}

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
object scheme_smallerp_1;
object scheme_smallerp_2;

void scheme_smallerp_func() {
    context_object context = get_context();
    debug("in smallerp\n");
    // XXX breaks encapsulation. FIX!

    env_object env = context->env.env;
    number_object arg1 = env_at(env, 1).number;
    number_object arg2 = env_at(env, 2).number;

    object result;
    if (arg1->value < arg2->value) {
        result = scheme_true;
        debug("smaller\n");
    } else {
        //result = fools_system->false;
        result = scheme_false;
        debug("bigger\n");
    }

    debug("result: %p\n", result.pointer);
    set_argument(return_context(context), 1, result);

    pop_context();
    debug("exit smallerp\n");
}

object scheme_eqp;
object scheme_eqp_1;
object scheme_eqp_2;

void scheme_eqp_func() {
    context_object context = get_context();
    debug("in eqp\n");
    // XXX breaks encapsulation. FIX!

    env_object env = context->env.env;
    object arg1 = env_at(env, 1);
    object arg2 = env_at(env, 2);

    object result;
    if (arg1.pointer == arg2.pointer) {
        //result = fools_system->true;
        result = scheme_true;
        debug("smaller\n");
    } else {
        //result = fools_system->false;
        result = scheme_false;
        debug("bigger\n");
    }

    debug("result: %p\n", result.pointer);
    set_argument(return_context(context), 1, result);

    pop_context();
    debug("exit eqp\n");
}

void bootstrap_scheme() {
    scheme_plus_1 = (object)make_ivar("+l");
    scheme_plus_2 = (object)make_ivar("+r");
    array_object arguments = make_array(2);
    array_at_put(arguments, 0, scheme_plus_1);
    array_at_put(arguments, 1, scheme_plus_2);
    scheme_plus = make_dyn_func(arguments, (object)make_native(&scheme_plus_func));

    scheme_minus_1 = (object)make_ivar("-l");
    scheme_minus_2 = (object)make_ivar("-r");
    arguments = make_array(2);
    array_at_put(arguments, 0, scheme_minus_1);
    array_at_put(arguments, 1, scheme_minus_2);
    scheme_minus = make_dyn_func(arguments, (object)make_native(&scheme_minus_func));

    scheme_smallerp_1 = (object)make_ivar("<l");
    scheme_smallerp_2 = (object)make_ivar("<r");
    arguments = make_array(2);
    array_at_put(arguments, 0, scheme_smallerp_1);
    array_at_put(arguments, 1, scheme_smallerp_2);
    scheme_smallerp = make_dyn_func(arguments, (object)make_native(&scheme_smallerp_func));

    scheme_eqp_1 = (object)make_ivar("eql");
    scheme_eqp_2 = (object)make_ivar("eqr");
    arguments = make_array(2);
    array_at_put(arguments, 0, scheme_eqp_1);
    array_at_put(arguments, 1, scheme_eqp_2);
    scheme_eqp = make_dyn_func(arguments, (object)make_native(&scheme_eqp_func));

    scheme_true  = (object)make_native(&scheme_true_func);
    scheme_false  = (object)make_native(&scheme_false_func);

    env_object env = empty_env;
    eval_in_scope(scheme_smallerp, env, scheme_smallerp);
    eval_in_scope(scheme_minus, env, scheme_minus);
    eval_in_scope(scheme_plus, env, scheme_plus);
    
    // Remove once the compiler is up-to-date
    scheme_smallerp = (object)make_iconst(scheme_smallerp);
    scheme_minus = (object)make_iconst(scheme_minus);
    scheme_plus = (object)make_iconst(scheme_plus);
}
