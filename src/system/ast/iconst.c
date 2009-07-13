#include <system.h>
#include <thread.h>

accessor_for(iconst, constant)

with_pre_eval1(iconst_new, context, constant,
    return_from_context(context, (object)make_iconst(constant));
)

define_bootstrapping_class(ast_const, 
    // instance
    if_selector(EVAL,         iconst_constant);
    if_selector(PRE_EVAL_ENV, pre_eval_env);,
    // class
    // TODO: rename SIZED to something related to the action symbol: basicNew:
    if_selector(SIZED,        iconst_new);
)

// Object creation
iconst_object make_iconst(object constant) {
    new_instance(iconst);
    result->constant        = constant;
    return result;
}
