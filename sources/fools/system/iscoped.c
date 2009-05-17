#include <system.h>
#include <thread.h>

// iscoped>>eval:
static void inline iscoped_eval() {
    debug("iscoped>>doWithArguments:\n");
    context_object iscoped_context = get_context();

    iscoped_object iscoped = iscoped_context->self.iscoped;

    // filling in scope with interpreter + arguments.
    // XXX have to do this by extending the continuation context!
    array_object args   = argument_at(iscoped_context, 0).array;
    object env          = argument_at(iscoped_context, 1);

    env_at_put(env.env, 0, (object)iscoped);

    int argsize = number_value(iscoped->argsize.number);
    assert(number_value(array_size(args)) == argsize);

    int i;
    for (i = 0; i < argsize; i++) {
        env_at_put(env.env, i + 1, array_at(args, i));
    }

    // we just eval the attached expression.
    pop_context();
    iscoped_context = make_context(iscoped->expression, 1);
    iscoped_context->env = env;
    set_message(iscoped_context, EVAL);

    debug("ret>>iscoped>>doWithArguments\n");
}

// iscoped>>eval:withArguments:
static void inline iscoped_eval_arguments() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!

    // TODO make subscope of the iscoped>>scope rather than the passed env.
    debug("iscoped>>withArguments:\n");
    context_object iscoped_context = get_context();
    assert_argsize(iscoped_context, 2);

    // Move argument so that the subscope will be at 1.
    set_argument(iscoped_context, 0, argument_at(iscoped_context, 1));

    iscoped_object iscoped = iscoped_context->self.iscoped;

    object env = iscoped_context->env;
    int argsize = number_value(iscoped->argsize.number);

    context_object context = make_context(env, 3);
    context->env = env;
    set_message(context, SUBSCOPE_KEY);
    set_argument(context, 1, (object)make_number(argsize + 1)); // + iscoped
    set_argument(context, 2, iscoped->expression);

    iscoped_context->code = &iscoped_eval;

    debug("ret>>iscoped>>withArguments:\n");
}

// iscoped>>scope
static void inline iscoped_scope() {
    debug("iscoped>>scope\n");
    context_object receiver = get_context();
    // arguments at: 0 -> selector
    iscoped_object iscoped = receiver->self.iscoped;
    set_argument(return_context(receiver), 1, iscoped->scope);
    pop_context();
    debug("ret>>iscoped>>scope\n");
}

void iscoped_shift() {
    context_object context = get_context();
    variable_object func = make_object(1, fools_system->level_shifter);
    object_at_put(func, 0, context->self);
    set_argument(return_context(context), 1, (object)func);
    pop_context();
}

void iscoped_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL_WITHARGUMENTS,   iscoped_eval_arguments);
    if_selector(selector, SCOPE_IN_ENV,         iscoped_scope);
    if_selector(selector, SHIFT,                iscoped_shift);
    doesnotunderstand("iscoped", selector);
}

// iscoped_class>>new:size:
static void inline iscoped_class_new() {
    debug("iscopecls>>new:size:\n");
    context_object iscope_context = get_context();
    assert_argsize(iscope_context, 3);
    object iscoped =
        make_iscoped(
            iscope_context->env,             // env
            argument_at(iscope_context, 1),  // expression
            argument_at(iscope_context, 2)); // argsize

    set_argument(return_context(iscope_context), 1, iscoped);

    debug("ret>>iscopecls>>new:size:\n");
    pop_context();
}

void iscoped_class_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, NEW_SIZE, iscoped_class_new);
    doesnotunderstand("iscoped_class", selector);
}

// Object creation
object make_iscoped(object scope, object expression, object argsize) {
    new_instance(iscoped);
    result->scope       = scope;
    result->expression  = expression;
    result->argsize     = argsize;
    return (object)result;
}