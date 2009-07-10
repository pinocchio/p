#include <system.h>
#include <thread.h>

// icall>>invoke:env:
static void inline icall_invoke_env() {
    context_object icall_context = get_context();

    icall_object icall = icall_context->self.icall;

    object env          = icall_context->env;
    object self         = argument_at(icall_context, 1);

    // XXX Do an ensuring copy! Check it's an array!
    int argsize = array_size(icall->arguments);
    debug("icall>>invoke: %p (%i)\n", self.pointer, argsize);

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
    context_object icall_context = get_context();

    icall_object icall = icall_context->self.icall;
    debug("icall>>eval %p\n", icall);

    object env = icall_context->env;
    icall_context->code = &icall_invoke_env;
    
    debug("making context for: %p\n", icall->self.pointer);
    context_object context = make_context(icall->self, 1);
    debug("made context\n");
    context->env = env;
    set_message(context, EVAL);

    debug("ret>>icall>>eval\n");
    inc();
}

with_pre_eval2(icall_new, context, w_self, w_size,
    // XXX breaking encapsulation.
    int size = number_value(w_size.number);
    return_from_context(context, (object)make_icall(w_self, size));
)

define_bootstrapping_class(icall,
    // instance
    if_selector(EVAL,         icall_eval);
    if_selector(PRE_EVAL_ENV, pre_eval_env);,
    // class
    if_selector(TO_SIZED,     icall_new);
)

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
