#include <model.h>
#include <ast.h>
#include <system.h>
#include <bootstrap.h>
#include <stdio.h>

#define NDEBUG 1
#define debug if (!NDEBUG) printf

/* broken
void prim_number_plus(context_object context) {
    number_object* left     = (number_object*)array_at(context->arguments, 0).pointer;
    number_object first     = array_at(context->arguments, 1).number;
    number_object second    = array_at(context->arguments, 2).number;
    *left = make_number(first->value + second->value);
}

void prim_number_minus(context_object context) {
    number_object* left     = (number_object*)array_at(context->arguments, 0).pointer;
    number_object first     = array_at(context->arguments, 1).number;
    number_object second    = array_at(context->arguments, 2).number;
    *left = make_number(first->value - second->value);
}

void prim_dict_at(context_object context) {
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    object key              = array_at(receiver->arguments, 1);
    object* value           = (object*)array_at(receiver->arguments, 2).pointer;
    *value = dict_at(header(receiver).dict, key);
    return_from_context(receiver);
}

void prim_dict_at_put(context_object context) {
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    object key              = array_at(receiver->arguments, 1);
    object value            = array_at(receiver->arguments, 2);
    dict_at_put(header(receiver).dict, key, value);
    return_from_context(receiver);
}
*/

void prim_env_fetch_from(context_object context) {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    env_object env = header(receiver).env;
    if (env->scope.pointer == array_at(receiver->arguments, 2).pointer) {
        int index = number_value(array_at(receiver->arguments, 1).number);
        array_at_put(receiver->return_context.context->arguments,
                     1, env_at(env, index));
        return return_from_context(receiver);
    }
    if (env->parent.nil == fools_system->nil) {
        return;
    }
    header(receiver) = env->parent;
    set_transfer(receiver);
}

void prim_env_store_at_in(context_object context) {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>store:at:in:\n");
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    env_object env = header(receiver).env;
    if (env->scope.pointer == array_at(receiver->arguments, 3).pointer) {
        int index = number_value(array_at(receiver->arguments, 2).number);
        object value = array_at(receiver->arguments, 1);
        env_at_put(env, index, value);
        return return_from_context(receiver);
    }
    if (env->parent.nil == fools_system->nil) {
        return;
    }
    header(receiver) = env->parent;
    debug("ret>>env>>store:at:in:\n");
    set_transfer(receiver);
}

void prim_env_subscope(context_object context) {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    context_object receiver = target_context(context);
    object env          = header(receiver);
    // arguments at: 0 -> selector
    object interpreter  = argument_at(receiver, 1);
    object arguments    = argument_at(receiver, 2);

    // XXX gravely breaking encapsulation!
    int argsize         = number_value(interpreter.instruction.iscoped->argsize.number);

    // slot 1 is reserved for the interpreter;
    // slot 2 is reserved for the dynamic env;
    env_object new_env = make_env((object)fools_system->nil,
                                  env,
                                  argsize + 2);
    
    env_at_put(new_env, 0, interpreter);

    // XXX gravely breaking encapsulation!
    int i;
    for (i = 0; i < argsize; i++) {
        env_at_put(new_env, i + 2, array_at(arguments.array, i));
    }
                                  
    context_object interp_context = return_context(receiver);
    set_argument(interp_context, 1, (object)new_env);

    return_from_context(receiver);
}

void prim_env_set_parent(context_object context) {
    debug("env>>parent:\n");
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    object env = header(receiver);
    env.env->parent = argument_at(receiver, 0);
    debug("ret>>env>>parent:\n");
    return_from_context(receiver);
}

void prim_env_parent(context_object context) {
    debug("env>>parent\n");
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    object env = header(receiver);
    set_argument(return_context(receiver), 1, env.env->parent);
    debug("ret>>env>>parent\n");
    return_from_context(receiver);
}

void prim_iscope_new(context_object context) {
    context_object iscope_context = target_context(context);
    iscoped_object iscoped =
        make_iscoped(
            argument_at(iscope_context, 1),  // env
            argument_at(iscope_context, 2),  // expression
            argument_at(iscope_context, 3)); // argsize

    set_argument(return_context(iscope_context), 1, (object)(instruction)iscoped);

    return_from_context(iscope_context);
}

void prim_iscoped_scope(context_object context) {
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    iscoped_object iscoped = header(receiver).instruction.iscoped;
    set_argument(return_context(receiver), 1, iscoped->scope);
    return_from_context(receiver);
}
