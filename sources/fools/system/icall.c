#include <system.h>
#include <thread.h>

// icall>>invoke:env:
static void inline icall_invoke_env() {
    debug("icall>>invoke:\n");
    context_object icall_context = get_context();

    icall_object icall = icall_context->self.icall;

    object env          = icall_context->env;
    object self         = argument_at(icall_context, 1);

    // XXX Do an ensuring copy! Check it's an array!
    int argsize = number_value(array_size(icall->arguments));

    pop_context();
    icall_context       = make_context(self, argsize);
    icall_context->env  = env;

    int i;
    for (i = 0; i < argsize; i++) {
        set_argument(icall_context, i, raw_array_at(icall->arguments, i));
    }
    // until here.

    debug("ret>>icall>>invoke:\n");
    dec();
}

// icall>>eval:
static void inline icall_eval() {
    debug("icall>>eval\n");
    context_object icall_context = get_context();

    icall_object icall = icall_context->self.icall;

    object env = icall_context->env;
    icall_context->code = &icall_invoke_env;
    
    context_object context = make_context(icall->self, 1);
    context->env = env;
    set_message(context, EVAL);

    debug("ret>>icall>>eval\n");
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

// Object creation
icall_object make_icall(object self, int argsize) {
    new_instance(icall);
    result->self        = self;
    result->arguments   = make_array(argsize);
    return result;
}

// Accessors
void inline set_callarg(icall_object icall, int index, object value) {
    array_at_put(icall->arguments, index, value);
}

void inline set_callmsg(icall_object icall, object msg) {
    set_callarg(icall, 0, msg);
}