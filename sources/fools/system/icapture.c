#include <system.h>

// icapture>>eval:
static void inline icapture_eval() {
    context_object icapture_context = get_context();
    assert_argsize(icapture_context, 2);

    debug("icapture>>eval:\n");

    object dynamic_env = argument_at(icapture_context, 1);
    set_argument(return_context(icapture_context), 1, dynamic_env);

    debug("ret>>icapture>>eval:\n");

    return_from_context(icapture_context);
}

void icapture_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL, icapture_eval);
    doesnotunderstand("icapture", selector);
}

// Object creation
icapture_object make_icapture() {
    new_instance(icapture);
    return result;
}
