#include <system.h>
#include <thread.h>

// ast_capture>>eval:
static void inline ast_capture_eval() {
    context_object context = get_context();
    debug("ast_capture>>eval\n");
    return_from_context(context, context->env);
    debug("ret>>ast_capture>>eval %p\n", context->env.env);
}

static void inline ast_capture_instance() {
    debug("ast_capture_class>>instance\n");
    context_object context = get_context();
    return_from_context(context, woodstock->ast_capture);
    debug("ret>>ast_capture_class>>instance\n");
}

define_bootstrapping_type(ast_capture,
    // instance
    if_selector(EVAL, ast_capture_eval);,
    // class
    if_selector(INSTANCE, ast_capture_instance);
)
