#include <system.h>
#include <thread.h>

// iscoped>>eval:
static void inline iscoped_eval() {
    debug("iscoped>>doEval:withArguments\n");
    context_object iscoped_context = get_context();
    assert_argsize(iscoped_context, 3);

    iscoped_object iscoped = iscoped_context->interpreter.iscoped;

    // filling in scope with interpreter + arguments.
    // XXX have to do this by extending the continuation context!
    object env          = argument_at(iscoped_context, 1);
    array_object args   = argument_at(iscoped_context, 2).array;
    env_at_put(env.env, 0, (object)iscoped);

    int argsize = number_value(iscoped->argsize.number);

    int i;
    for (i = 0; i < argsize; i++) {
        env_at_put(env.env, i + 1, array_at(args, i));
    }

    // we just eval the attached expression.
    pop_context();
    iscoped_context = make_context(iscoped->expression, 2);
    set_message(iscoped_context, EVAL);
    set_argument(iscoped_context, 1, env);

    debug("ret>>iscoped>>doEval:withArguments\n");
    set_transfer(iscoped_context);
}

// iscoped>>eval:withArguments:
static void inline iscoped_eval_arguments() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!

    // TODO make subscope of the iscoped>>scope rather than the passed env.
    debug("iscoped>>eval:withArguments:\n");
    context_object iscoped_context = get_context();
    assert_argsize(iscoped_context, 3);

    iscoped_object iscoped = iscoped_context->interpreter.iscoped;

    object env = argument_at(iscoped_context, 1);
    int argsize = number_value(iscoped->argsize.number);

    context_object context = make_context(env, 3);
    set_message(context, SUBSCOPE_KEY);
    set_argument(context, 1, (object)make_number(argsize + 2));
    set_argument(context, 2, iscoped->expression);

    iscoped_context->code = &iscoped_eval;

    debug("ret>>iscoped>>eval:withArguments:\n");
    set_transfer(context);
}

// iscoped>>scope
static void inline iscoped_scope() {
    debug("iscoped>>scope\n");
    context_object receiver = get_context();
    // arguments at: 0 -> selector
    iscoped_object iscoped = receiver->interpreter.iscoped;
    set_argument(return_context(receiver), 1, iscoped->scope);
    pop_context();
    debug("ret>>iscoped>>scope\n");
}

void iscoped_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL_WITHARGUMENTS,   iscoped_eval_arguments);
    if_selector(selector, SCOPE_IN_ENV,         iscoped_scope);
    doesnotunderstand("iscoped", selector);
}

// iscoped_class>>env:new:size:
static void inline iscoped_class_new() {
    debug("iscopecls>>env:new:size:\n");
    context_object iscope_context = get_context();
    assert_argsize(iscope_context, 4);
    iscoped_object iscoped =
        make_iscoped(
            argument_at(iscope_context, 1),  // env
            argument_at(iscope_context, 2),  // expression
            argument_at(iscope_context, 3)); // argsize

    set_argument(return_context(iscope_context), 1, (object)iscoped);

    debug("ret>>iscopecls>>env:new:size:\n");
    pop_context();
}

void iscoped_class_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, ENV_NEW_SIZE, iscoped_class_new);
    doesnotunderstand("iscoped_class", selector);
}

// Object creation
iscoped_object make_iscoped(object scope, object expression, object argsize) {
    new_instance(iscoped);
    result->scope           = scope;
    result->expression      = expression;
    result->argsize         = argsize;
    return result;
}
