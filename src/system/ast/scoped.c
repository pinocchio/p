#include <system.h>
#include <scheme/symbols.h>
#include <scheme/natives.h>
#include <thread.h>
#include <print.h>

// ast_scoped>>eval:
static void inline ast_scoped_eval() {
    debug("ast_scoped>>doWithArguments:\n");
    context_object ast_scoped_context = get_context();

    ast_scoped_object ast_scoped = ast_scoped_context->self.ast_scoped;

    // filling in scope with interpreter + arguments.
    // XXX have to do this by extending the continuation context!
    object args = argument_at(ast_scoped_context, 0);
    object env  = argument_at(ast_scoped_context, 1);

    env_at_put(env.env, 0, (object)ast_scoped);

    int argsize = ast_scoped->argsize.number->value;

    error_guard(scheme_list_size(args) == argsize, "Argument mismatch.");

    int i;
    for (i = 0; i < argsize; i++) {
        env_at_put(env.env, i + 1, scheme_list_at(args, i));
    }

    // we just eval the attached expression.
    pop_context();
    ast_scoped_context = make_context(ast_scoped->expression, 1);
    ast_scoped_context->env = env;
    set_message(ast_scoped_context, EVAL);

    debug("ret>>ast_scoped>>doWithArguments\n");
}

// ast_scoped>>withArguments:
with_pre_eval2(ast_scoped_apply_in, ast_scoped_context, arguments, env,
    ast_scoped_context->env = env;

    // Move argument so that the subscope will be at 1.
    set_argument(ast_scoped_context, 0, arguments);

    ast_scoped_object ast_scoped = ast_scoped_context->self.ast_scoped;

    cast(argsize, ast_scoped->argsize, number);

    context_object context = make_empty_context(3);
    // TODO should be subscope of self, rather than env
    if (isinstance(env, runtime_env)) {
        context->self = env;
        context->code = &env_subscope_do;
        set_argument(context, 1,
            (object)make_number(argsize->value + 1)); // + ast_scoped
        set_argument(context, 2, ast_scoped->expression);
    } else {
        new_target(context, env);
        context->env = env;
        set_message(context, SUBSCOPE_KEY_);
        set_argument_const(context, 1,
            (object)make_number(argsize->value + 1)); // + ast_scoped
        set_argument_const(context, 2, ast_scoped->expression);
    }

    ast_scoped_context->code = &ast_scoped_eval;
)

// ast_scoped>>scope
accessor_for(ast_scoped, scope)

void ast_scoped_shift() {
    context_object context = get_context();
    object_object func = make_object(1, woodstock->level_shifter);
    object_at_put(func, 0, context->self);
    return_from_context(context, (object)func);
}

// ast_scoped_class>>new:size:
with_pre_eval2(ast_scoped_class_new, context, expression, argsize,
    debug("iscopecls>>new:size:\n");
    context_object iscope_context = get_context();
    assert_argsize(iscope_context, 3);
    object ast_scoped =
        make_ast_scoped(
            iscope_context->env,
            expression,
            argsize);

    return_from_context(iscope_context, ast_scoped);
    debug("ret>>iscopecls>>new:size:\n");
)

define_bootstrapping_type(ast_scoped,
    // instance
    if_selector(SCOPE,      ast_scoped_scope);
    if_selector(APPLY_IN_,  ast_scoped_apply_in);
    if_selector(SHIFT,      ast_scoped_shift);,
    // class
    if_selector(NEW_SIZE_,  ast_scoped_class_new);
)

// Object creation
object make_ast_scoped(object scope, object expression, object argsize) {
    new_instance(ast_scoped);
    error_guard(scope.pointer != NULL,
                "Trying to build scope with NULL as key.")
    result->scope       = scope;
    result->expression  = expression;
    result->argsize     = argsize;
    return (object)result;
}

preval3(ast_scoped_new_from_scope_expression_size, scope, expression, argsize,
	return_from_context(context, make_ast_scoped(scope, expression, argsize));
)


