#include <system.h>
#include <stdio.h>

// appcall>>invoke:env:
void appcall_invoke() {
    debug("appcall>>invoke:env:\n");
    context_object appcall_context = get_context();

    appcall_object appcall  = header(appcall_context).appcall;

    object env          = argument_at(appcall_context, 0);
    object expression   = argument_at(appcall_context, 1);

    new_target(appcall_context, expression);
    set_message(appcall_context, EVAL_WITHARGUMENTS);
    set_argument(appcall_context, 1, env);
    set_argument(appcall_context, 2, (object)appcall->arguments);

    debug("ret>>appcall>>invoke:env:\n");
    dec();
}

// appcall>>eval:
void appcall_eval() {
    debug("appcall>>eval:\n");
    context_object appcall_context = get_context();
    assert_argsize(appcall_context, 2);

    appcall_object appcall = header(appcall_context).appcall;

    object env = argument_at(appcall_context, 1);

    context_object context = make_context((object)appcall, 3);
    set_argument(context, 0, env);
    context->code = &appcall_invoke;
    context->return_context = appcall_context->return_context;

    new_target(appcall_context, appcall->expression);
    appcall_context->return_context   = (object)context;

    debug("ret>>appcall>>eval:\n");
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
