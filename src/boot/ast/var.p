(bootstrapping-type Var ast ((name string) (scope "object") (index smallint))
   ((assign: (value)
        "
        var_object self = context->self.var;
        object env          = context->env;
        pop_context();

        context = make_empty_context(4);
        // Optimization, avoid const rewrapping if type is known
        if (isinstance(env, env)) {
            context->self = env;
            set_argument(context, 1, value);
            set_argument(context, 2, (object)self->index);
            set_argument(context, 3, self->scope);
            gen_env_store_col_at_col_in_col__do();
        } else {
            new_target(context, env);
            context->env = env;
        
            set_message(context, STORE_AT_IN_);
            set_argument_const(context, 1, value);
            set_argument_const(context, 2, (object)self->index);
            set_argument_const(context, 3, self->scope);
        }
        ")
    (eval ()
        "
        var_object self = context->self.var;
        debug(\"var>>eval \\\"%ls\\\"\\n\", self->name->value);

        object env = context->env;

        pop_context();
        context      = make_context(env, 3);
        context->env = env;
        set_message(context, FETCH_FROM_);
        set_argument_const(context, 1, (object)self->index);
        set_argument_const(context, 2, self->scope);
        ")
    (eval: (w_env)
        "
        context->env = w_env;
        gen_var_eval();
        "))
   ((basicNew: (w_name)
        "
        cast(name, w_name, string);
        return_from_context(context, (object)make_ast_var(name->value));
        "))
   (("var_object make_ast_var(const wchar_t* name)"
        "
        new_instance(var);
        result->name            = make_string(name);
        result->scope           = (object)woodstock->nil;
        result->index           = make_smallint(0);
        return result;
        ")))
