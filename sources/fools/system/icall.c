#include <system.h>
#include <stdio.h>

// icall>>invoke:env:
void inline icall_invoke_env() {
    debug("icall>>invoke:env:\n");
    context_object icall_context = get_context();

    icall_object icall  = header(icall_context).icall;

    object env          = argument_at(icall_context, 0);
    object interpreter  = argument_at(icall_context, 1);

    new_target(icall_context, interpreter);

    // XXX Do an ensuring copy! Check it's an array!
    int argsize = number_value(array_size(icall->arguments));
    array_object context_arguments = make_array(argsize);

    int i;
    for (i = 0; i < argsize; i++) {
        raw_array_at_put(context_arguments, i, raw_array_at(icall->arguments, i));
    }
    // until here.

    icall_context->arguments = context_arguments;
    set_argument(icall_context, 1, env);

    debug("ret>>icall>>invoke:env:\n");
    dec();
}

// icall>>eval:
void inline icall_eval() {
    debug("icall>>eval:\n");
    context_object icall_context = get_context();
    assert_argsize(icall_context, 2);

    icall_object icall = header(icall_context).icall;

    object env = argument_at(icall_context, 1);
    set_argument(icall_context, 0, env);
    icall_context->code = &icall_invoke_env;
    
    context_object context = make_context(icall->interpreter, 2);
    set_message(context, EVAL);
    set_argument(context, 1, env);
    context->return_context = (object)icall_context;

    set_transfer(context);

    debug("ret>>icall>>eval:\n");
    inc();
}

void icall_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         icall_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("icall", selector);
}
