#include <system.h>

void inline dircall_eval() {
    debug("dircall>>eval:\n");
    context_object dircall_context = get_context();
    assert_argsize(dircall_context, 2);
    
    dircall_object dircall = header(dircall_context).dircall;
    
    object env          = argument_at(dircall_context, 1);
    object interpreter  = dircall->interpreter;

    context_object context = make_context(interpreter, 3);
    set_message(context, EVAL_WITHARGUMENTS);
    set_argument(context, 1, env);
    set_argument(context, 2, (object)dircall->arguments);
    context->return_context = dircall_context->return_context;
    set_transfer(context);
    debug("ret>>dircall>>eval:\n");
}

void dircall_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         dircall_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("dircall", selector);
}
