#include <system.h>
#include <thread.h>
#include <scheme/natives.h>

// ast_call>>invoke:env:
static void inline ast_call_invoke_env() {
    context_object ast_call_context = get_context();

    ast_call_object ast_call = ast_call_context->self.ast_call;

    object env          = ast_call_context->env;
    object self         = argument_at(ast_call_context, 1);

    int argsize = scheme_list_size(ast_call->arguments);
    debug("ast_call>>invoke: %p (%i)\n", self.pointer, argsize);

    pop_context();
    ast_call_context       = make_context(self, argsize);
    ast_call_context->env  = env;

    int i;
    for (i = 0; i < argsize; i++) {
        set_argument(ast_call_context, i, scheme_list_at(ast_call->arguments, i));
    }
    // until here.

    debug("ret>>ast_call>>invoke:\n");
    dec();
}

// ast_call>>eval:
static void inline ast_call_eval() {
    context_object ast_call_context = get_context();

    ast_call_object ast_call = ast_call_context->self.ast_call;
    debug("ast_call>>eval %p\n", ast_call);

    object env = ast_call_context->env;
    ast_call_context->code = &ast_call_invoke_env;
    
    debug("making context for: %p\n", ast_call->self.pointer);
    context_object context = make_context(ast_call->self, 1);
    debug("made context\n");
    context->env = env;
    set_message(context, EVAL);

    debug("ret>>ast_call>>eval\n");
    inc();
}

with_pre_eval2(ast_call_new, context, w_self, w_size,
    cast(size, w_size, number);
    return_from_context(context, (object)make_ast_call(w_self, size->value));
)

define_bootstrapping_type(ast_call,
    // instance
    if_selector(EVAL,         ast_call_eval);
    if_selector(EVAL_, pre_eval_env);,
    // class
    if_selector(TO_SIZED_,     ast_call_new);
)

// Object creation
ast_call_object make_ast_call(object self, int argsize) {
    new_instance(ast_call);
    result->self        = self;
    result->arguments   = make_scheme_list(argsize);
    return result;
}

preval2(ast_call_new_from_self_size, self, value,
	cast(number_var, value, number);
	return_from_context(context, (object)make_ast_call(self, number_var->value));
)

// Accessors
void inline set_callarg(ast_call_object ast_call, int index, object value) {
    scheme_list_at_put(ast_call->arguments, index, value);
}

void inline set_callmsg(ast_call_object ast_call, object msg) {
    set_callarg(ast_call, 0, msg);
}
