#include <system.h>
#include <thread.h>

// iassign>>eval:
static void inline iassign_eval() {
    context_object iassign_context = get_context();
    ast_assign_object iassign = iassign_context->self.iassign;

    debug("iassign>>eval\n");
    
    object env = iassign_context->env;

    pop_context();

    context_object context = make_context((object)iassign->variable, 2);
    context->env = env;
    set_message(context, ASSIGN_IN);

    context = make_context(iassign->expression, 1);
    context->env = env;
    set_message(context, EVAL);

    debug("ret>>iassign>>eval\n");
}

with_pre_eval2(iassign_new, context, variable, expression,
    return_from_context(context, (object)make_iassign(variable, expression));
)

define_bootstrapping_type(ast_assign,
    // instance
    if_selector(EVAL,           iassign_eval);
    if_selector(EVAL_,     		pre_eval_env);,
    // class
    if_selector(TO_EXPRESSION_, iassign_new);
)

// Object creation
ast_assign_object make_iassign(object variable, object expression) {
    new_instance(ast_assign);
    result->variable        = variable;
    result->expression      = expression;
    return result;
}


preval2(iassign_new_from_variable_expression, variable, expression,
	return_from_context(context, (object)make_iassign(variable, expression));
)
