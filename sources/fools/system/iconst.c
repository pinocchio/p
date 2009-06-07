#include <system.h>
#include <thread.h>

accessor_for(iconst, constant)

define_bootstrapping_instance(iconst, 
    if_selector(selector, EVAL,         iconst_constant);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
)

// Object creation
iconst_object make_iconst(object constant) {
    new_instance(iconst);
    result->constant        = constant;
    return result;
}
