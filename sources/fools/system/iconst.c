#include <system.h>

// iconst>>eval:
void inline iconst_eval() {
    context_object iconst_context = get_context();
    iconst_object iconst = header(iconst_context).iconst;

    debug("iconst>>eval: %p\n", iconst);

    set_argument(return_context(iconst_context), 1, iconst->constant);

    debug("ret>>iconst>>eval:\n");

    return_from_context(iconst_context);
}

void iconst_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         iconst_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("iconst", selector);
}

// Object creation
iconst_object make_iconst(object constant) {
    new_instance(iconst);
    result->constant        = constant;
    //printf("new iconst: %p for %p\n", result, constant.pointer);
    return result;
}
