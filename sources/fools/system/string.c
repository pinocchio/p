#include <system.h>
#include <thread.h>

static void inline identity() {
    context_object context = get_context();
    return_from_context(context, context->self);
}

void string_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         identity);
    if_selector(selector, PRE_EVAL_ENV, identity);
    doesnotunderstand("string", selector);
}
