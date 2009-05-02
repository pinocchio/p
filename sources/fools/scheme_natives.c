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
    printf("In scheme_plus_func!\n");

    assert(argument_at(context, 0).pointer ==
           symbol_known_to_the_vm("eval:").pointer);

    env_object env = argument_at(context, 1).env;
    number_object arg1 = env_at(env, 1).number;
    number_object arg2 = env_at(env, 2).number;
    number_object result = make_number(arg1->value + arg2->value);

    set_argument(return_context(context), 1, (object)result);

    return_from_context(context);
}

void bootstrap_scheme() {
    scheme_plus_1 = (object)make_ivar();
    scheme_plus_2 = (object)make_ivar();
    array_object arguments = make_array(2);
    array_at_put(arguments, 0, scheme_plus_1);
    array_at_put(arguments, 1, scheme_plus_2);
    scheme_plus = make_func(arguments, (object)make_native(&scheme_plus_func));
}
