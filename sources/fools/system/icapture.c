#include <system.h>
#include <thread.h>

// icapture>>eval:
static void inline icapture_eval() {
    context_object context = get_context();
    debug("icapture>>eval\n");
    return_from_context(context, context->env);
    debug("ret>>icapture>>eval %p\n", context->env.env);
}

define_bootstrapping_instance(icapture,
    if_selector(selector, EVAL, icapture_eval);
)

// Object creation
icapture_object make_icapture() {
    new_instance(icapture);
    return result;
}
