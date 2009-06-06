#include <system.h>
#include <thread.h>

accessor_for(iconst, constant)

void iconst_dispatch() {
    dispatch_header(context, selector);
    if_selector(selector, EVAL,         iconst_constant);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("iconst", selector);
}

// Object creation
iconst_object make_iconst(object constant) {
    new_instance(iconst);
    result->constant        = constant;
    return result;
}
