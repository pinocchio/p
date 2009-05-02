#include <model.h>
#include <bootstrap.h>
#include <system.h>
#include <scheme_natives.h>
#include <ast.h>

#include <assert.h>
#include <stdio.h>

object scheme_plus;
object scheme_plus_1;
object scheme_plus_2;

void scheme_plus_func(context_object context) {
    printf("in plus\n");
    // XXX breaks encapsulation. FIX!
    assert(argument_at(context, 0).pointer ==
           symbol_known_to_the_vm("eval:").pointer);

    env_object env = argument_at(context, 1).env;
    number_object arg1 = env_at(env, 1).number;
    number_object arg2 = env_at(env, 2).number;
    number_object result = make_number(arg1->value + arg2->value);

    set_argument(return_context(context), 1, (object)result);

    printf("exit plus\n");
    return_from_context(context);
}

object scheme_minus;
object scheme_minus_1;
object scheme_minus_2;

void scheme_minus_func(context_object context) {
    // XXX breaks encapsulation. FIX!
    printf("in minus\n");
    assert(argument_at(context, 0).pointer ==
           symbol_known_to_the_vm("eval:").pointer);

    env_object env = argument_at(context, 1).env;
    number_object arg1 = env_at(env, 1).number;
    number_object arg2 = env_at(env, 2).number;
    number_object result = make_number(arg1->value - arg2->value);

    set_argument(return_context(context), 1, (object)result);

    printf("exit minus\n");
    return_from_context(context);
}

object scheme_smallerp;
object scheme_smallerp_1;
object scheme_smallerp_2;

void scheme_smallerp_func(context_object context) {
    printf("in smallerp\n");
    // XXX breaks encapsulation. FIX!
    assert(argument_at(context, 0).pointer ==
           symbol_known_to_the_vm("eval:").pointer);

    env_object env = argument_at(context, 1).env;
    number_object arg1 = env_at(env, 1).number;
    number_object arg2 = env_at(env, 2).number;

    object result;
    if (arg1->value < arg2->value) {
        result = fools_system->true;
    } else {
        result = fools_system->false;
    }

    set_argument(return_context(context), 1, result);

    return_from_context(context);
    printf("exit smallerp\n");
}

object scheme_string_to_symbol;
object scheme_string_to_symbol_1;

void scheme_sts_func(context_object context) {
    // XXX breaks encapsulation. FIX!
    printf("in sts\n");
    assert(argument_at(context, 0).pointer ==
           symbol_known_to_the_vm("eval:").pointer);

    env_object env = argument_at(context, 1).env;
    string_object arg1 = env_at(env, 1).string;
    object result = symbol_known_to_the_vm(arg1->value);

    set_argument(return_context(context), 1, result);

    return_from_context(context);
    printf("exit sts\n");
}

void bootstrap_scheme() {
    scheme_plus_1 = (object)make_ivar();
    scheme_plus_2 = (object)make_ivar();
    array_object arguments = make_array(2);
    array_at_put(arguments, 0, scheme_plus_1);
    array_at_put(arguments, 1, scheme_plus_2);
    scheme_plus = make_func(arguments, (object)make_native(&scheme_plus_func));

    scheme_minus_1 = (object)make_ivar();
    scheme_minus_2 = (object)make_ivar();
    arguments = make_array(2);
    array_at_put(arguments, 0, scheme_minus_1);
    array_at_put(arguments, 1, scheme_minus_2);
    scheme_minus = make_func(arguments, (object)make_native(&scheme_minus_func));

    scheme_smallerp_1 = (object)make_ivar();
    scheme_smallerp_2 = (object)make_ivar();
    arguments = make_array(2);
    array_at_put(arguments, 0, scheme_smallerp_1);
    array_at_put(arguments, 1, scheme_smallerp_2);
    scheme_smallerp = make_func(arguments, (object)make_native(&scheme_smallerp_func));

    scheme_string_to_symbol_1 = (object)make_ivar();
    arguments = make_array(1);
    array_at_put(arguments, 0, scheme_string_to_symbol_1);
    scheme_string_to_symbol = make_func(arguments,
                        (object)make_native(&scheme_sts_func));
}
