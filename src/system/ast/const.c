#include <system.h>
#include <thread.h>

accessor_for(ast_const, constant)

with_pre_eval1(ast_const_new, context, constant,
    return_from_context(context, (object)make_ast_const(constant));
)

define_bootstrapping_type(ast_const, 
    // instance
    if_selector(EVAL,         ast_const_constant);
    if_selector(EVAL_, pre_eval_env);,
    // class
    if_selector(BASICNEW_,        ast_const_new);
)

// Object creation
ast_const_object make_ast_const(object constant) {
    new_instance(ast_const);
    result->constant        = constant;
    return result;
}

preval1(ast_const_new_from_object, constant,
	return_from_context(context, (object)make_ast_const(constant));
)
