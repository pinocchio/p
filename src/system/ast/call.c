#include <system.h>
#include <thread.h>
#include <scheme/natives.h>

// icall>>invoke:env:
static void inline icall_invoke_env() {
    context_object icall_context = get_context();

    ast_call_object icall = icall_context->self.icall;

    object env          = icall_context->env;
    object self         = argument_at(icall_context, 1);

    int argsize = scheme_list_size(icall->arguments);
    debug("icall>>invoke: %p (%i)\n", self.pointer, argsize);

    pop_context();
    icall_context       = make_context(self, argsize);
    icall_context->env  = env;

    int i;
    for (i = 0; i < argsize; i++) {
        set_argument(icall_context, i, scheme_list_at(icall->arguments, i));
    }
    // until here.

    debug("ret>>icall>>invoke:\n");
    dec();
}

// icall>>eval:
static void inline icall_eval() {
    context_object icall_context = get_context();

    ast_call_object icall = icall_context->self.icall;
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
    cast(size, w_size, number);
    return_from_context(context, (object)make_icall(w_self, size->value));
)

define_bootstrapping_type(ast_call,
    // instance
    if_selector(EVAL,         icall_eval);
    if_selector(EVAL_, pre_eval_env);,
    // class
    if_selector(TO_SIZED_,     icall_new);
)

// Object creation
ast_call_object make_icall(object self, int argsize) {
    new_instance(ast_call);
    result->self        = self;
    result->arguments   = make_scheme_list(argsize);
    return result;
}

preval2(icall_new_from_self_size, self, value,
	cast(number_var, value, number);
	return_from_context(context, (object)make_icall(self, number_var->value));
)

// Accessors
void inline set_callarg(ast_call_object icall, int index, object value) {
    scheme_list_at_put(icall->arguments, index, value);
}

void inline set_callmsg(ast_call_object icall, object msg) {
    set_callarg(icall, 0, msg);
}
