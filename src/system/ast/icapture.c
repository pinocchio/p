#include <system.h>
#include <thread.h>

// icapture>>eval:
static void inline icapture_eval() {
    context_object context = get_context();
    debug("icapture>>eval\n");
    return_from_context(context, context->env);
    debug("ret>>icapture>>eval %p\n", context->env.env);
}

static void inline icapture_instance() {
    debug("icapture_class>>instance\n");
    context_object context = get_context();
    return_from_context(context, woodstock->ast_capture);
    debug("ret>>icapture_class>>instance\n");
}

define_bootstrapping_class(ast_capture,
    // instance
    if_selector(EVAL, icapture_eval);,
    // class
    if_selector(INSTANCE, icapture_instance);
)
