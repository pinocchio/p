#include <system.h>
#include <thread.h>

accessor_for(iconst, constant)

with_pre_eval1(iconst_new, context, constant,
    return_from_context(context, (object)make_iconst(constant));
)

define_bootstrapping_type(ast_const, 
    // instance
    if_selector(EVAL,         iconst_constant);
    if_selector(EVAL_, pre_eval_env);,
    // class
    if_selector(BASICNEW_,        iconst_new);
)

// Object creation
ast_const_object make_iconst(object constant) {
    new_instance(ast_const);
    result->constant        = constant;
    return result;
}


preval1(iconst_new_from_object, constant,
	return_from_context(context, (object)make_iconst(constant));
)
