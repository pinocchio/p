#include <system.h>
#include <thread.h>

static void inline identity() {
    context_object context = get_context();
    set_argument(return_context(context), 1, context->self);
    pop_context();
}

void string_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         identity);
    if_selector(selector, PRE_EVAL_ENV, identity);
    doesnotunderstand("string", selector);
}
