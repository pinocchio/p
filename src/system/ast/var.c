#include <system.h>
#include <thread.h>

// ast_var>>assign:
with_pre_eval1(ast_var_assign, context, value,
    ast_var_object self = context->self.ast_var;
    object env          = context->env;
    pop_context();

    context = make_empty_context(4);
    // Optimization, avoid const rewrapping if type is known
    if (isinstance(env, runtime_env)) {
        context->self = env;
        set_argument(context, 1, value);
        set_argument(context, 2, (object)self->index);
        set_argument(context, 3, self->scope);
        env_store_at_in_do();
    } else {
        new_target(context, env);
        context->env = env;
    
        set_message(context, STORE_AT_IN_);
        set_argument_const(context, 1, value);
        set_argument_const(context, 2, (object)self->index);
        set_argument_const(context, 3, self->scope);
    }
)

// ast_var>>eval:
static void inline ast_var_eval() {
    context_object ast_var_context = get_context();
    ast_var_object ast_var         = ast_var_context->self.ast_var;
    debug("ast_var>>eval \"%ls\"\n", ast_var->name->value);

    object env = ast_var_context->env;

    pop_context();
    ast_var_context      = make_context(env, 3);
    ast_var_context->env = env;
    set_message(ast_var_context, FETCH_FROM);
    set_argument_const(ast_var_context, 1, (object)ast_var->index);
    set_argument_const(ast_var_context, 2, ast_var->scope);

    debug("ret>>ast_var>>eval:\n");
}

with_pre_eval1(ast_var_new, context, w_name,
    // XXX Should probably clone the value ...
    cast(name, w_name, string);
    return_from_context(context, (object)make_ast_var(name->value));
)

define_bootstrapping_type(ast_var,
    // instance
    if_selector(EVAL,         ast_var_eval);
    if_selector(ASSIGN_IN,    ast_var_assign);
    if_selector(EVAL_, pre_eval_env);,
    // class
    if_selector(BASICNEW_,        ast_var_new); // should rename SIZED...
)

// Object creation
ast_var_object make_ast_var(const wchar_t* name) {
    new_instance(ast_var);
    result->name            = make_string(name);
    result->scope           = (object)woodstock->nil;
    result->index           = make_number(0);
    return result;
}

preval1(ast_var_new_from_string, value,
	cast(string_var, value, string);
	return_from_context(context, (object)make_ast_var(string_var->value));
)

