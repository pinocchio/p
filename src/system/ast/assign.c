#include <system.h>
#include <thread.h>

// ast_assign>>eval:
static void inline ast_assign_eval() {
    context_object ast_assign_context = get_context();
    ast_assign_object ast_assign = ast_assign_context->self.ast_assign;

    debug("ast_assign>>eval\n");
    
    object env = ast_assign_context->env;

    pop_context();

    context_object context = make_context((object)ast_assign->variable, 2);
    context->env = env;
    set_message(context, ASSIGN_);
    set_argument(context, 1, ast_assign->expression);
    debug("ret>>ast_assign>>eval\n");
}

with_pre_eval2(ast_assign_new, context, variable, expression,
    return_from_context(context, (object)make_ast_assign(variable, expression));
)

define_bootstrapping_type(ast_assign,
    // instance
    if_selector(EVAL,           ast_assign_eval);
    if_selector(EVAL_,     		pre_eval_env);,
    // class
    if_selector(TO_EXPRESSION_, ast_assign_new);
)

// Object creation
ast_assign_object make_ast_assign(object variable, object expression) {
    new_instance(ast_assign);
    result->variable        = variable;
    result->expression      = expression;
    return result;
}


preval2(ast_assign_new_from_variable_expression, variable, expression,
	return_from_context(context, (object)make_ast_assign(variable, expression));
)
