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
    return_from_context(context, fools_system->icapture);
    debug("ret>>icapture_class>>instance\n");
}

define_bootstrapping_class(icapture,
    // instance
    if_selector(EVAL, icapture_eval);,
    // class
    if_selector(INSTANCE, icapture_instance);
)
