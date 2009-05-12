#include <system.h>
#include <thread.h>

// appcall>>invoke:
static void inline appcall_invoke() {
    debug("appcall>>invoke:\n");
    context_object appcall_context = get_context();

    appcall_object appcall = appcall_context->self.appcall;

    object expression = argument_at(appcall_context, 1);

    new_target(appcall_context, expression);
    set_message(appcall_context, EVAL_WITHARGUMENTS);
    set_argument(appcall_context, 1, (object)appcall->arguments);

    debug("ret>>appcall>>invoke:\n");
    dec();
}

// appcall>>eval:
static void inline appcall_eval() {
    debug("appcall>>eval\n");
    context_object appcall_context = get_context();

    appcall_object appcall = appcall_context->self.appcall;

    object env = appcall_context->env;
    pop_context();

    context_object context = make_empty_context(2); // already make it big
                                                    // enough for
                                                    // appcall_invoke.
    context->env = env;
    context->self = (object)appcall;
    context->code = &appcall_invoke;

    appcall_context = make_context(appcall->expression, 1);
    appcall_context->env = env;
    set_message(appcall_context, EVAL);

    debug("ret>>appcall>>eval\n");
    set_transfer(appcall_context);
    inc();
}

void appcall_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         appcall_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("appcall", selector);
}

// Object creation
appcall_object make_appcall(object expression, int argsize) {
    appcall_object result   = NEW(struct appcall);
    header(result)          = (object)fools_system->appcall_class;
    result->expression      = expression;
    result->arguments       = make_array(argsize);
    return result;
}

// Accessors
void inline set_appcarg(appcall_object appcall, int index, object value) {
    array_at_put(appcall->arguments, index, value);
}

void inline set_appcmsg(appcall_object appcall, object msg) {
    set_appcarg(appcall, 0, msg);
}
