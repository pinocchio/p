(bootstrapping-type Scoped ast ((scope "object") (expression "object")
                                (argsize "int"))
   ((apply:in: (w_args env)
        "
        context->env = env;

        // Move argument so that the subscope will be at 1.
        set_argument(context, 0, w_args);

        scoped_object self = context->self.scoped;
        context->code = &scoped_eval;


        // TODO should be subscope of self, rather than env
        // Optimization, avoid const rewrapping if type is known
        if (isinstance(env, env)) {
            context = make_empty_context(3);
            context->self = env;
            set_argument(context, 1,
                (object)make_smallint(self->argsize + 1)); // + scoped
            set_argument(context, 2, self->expression);
            gen_env_subscope_col_key_col__do();
        } else {
            "
            (send env subScope:key:
                "(object)make_smallint(self->argsize + 1)"; // + scoped
                self->expression)
            "
        }
        ")
    (scope ()
        "
        return_from_context(context, context->self.scoped->scope);
        ")
    (lambdashift ()
        "
        object_object func = make_object(1, woodstock->lambda_shifter);
        object_at_put(func, 0, context->self);
        return_from_context(context, (object)func);
        ")
    (shift ()
        "
        object_object func = make_object(1, woodstock->level_shifter);
        object_at_put(func, 0, context->self);
        return_from_context(context, (object)func);
        "))
   ((new:size: (w_exp w_size)
        "
        object scoped =
            make_scoped(
                context->env,
                w_exp,
                w_size);

        return_from_context(context, scoped);
        "))
   (("void inline scoped_eval()"
        "
        debug(\"scoped>>doWithArguments:\\n\");
        context_object scoped_context = get_context();

        scoped_object scoped = scoped_context->self.scoped;

        // filling in scope with interpreter + arguments.
        // XXX have to do this by extending the continuation context!
        object args = argument_at(scoped_context, 0);
        object env  = argument_at(scoped_context, 1);

        env_at_put(env.env, 0, (object)scoped);

        int argsize = scoped->argsize;

        error_guard(scheme_list_size(args) == argsize, \"Argument mismatch.\");

        int i;
        for (i = 0; i < argsize; i++) {
            env_at_put(env.env, i + 1, scheme_list_at(args, i));
        }

        // we just eval the attached expression.
        pop_context();
        "
        (send scoped->expression eval)
        "
        debug(\"ret>>scoped>>doWithArguments\\n\");
        ")
    ("object make_scoped(object scope, object expression, object argsize)"
        "
        new_instance(scoped);
        error_guard(scope.pointer != NULL,
                    \"Trying to build scope with NULL as key.\");
        cast(size, argsize, smallint);
        result->scope       = scope;
        result->expression  = expression;
        result->argsize     = size->value;
        return (object)result;
        ")))
