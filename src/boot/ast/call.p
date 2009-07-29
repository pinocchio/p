(bootstrapping-type Call ast ((target "object") (arguments "object"))
   ((eval ()
        "
        call_object ast_call = context->self.ast_call;

        object env = context->env;

        // TODO clean this up...
        context->code = &ast_call_invoke_env;
        
        debug(\"making context for: %p\\n\", ast_call->target.pointer);
        context = make_context(ast_call->target, 1);
        context->env = env;
        set_message(context, EVAL);

        inc();
        ")
    (eval: (w_env)
        "
        context->env = w_env;
        gen_call_eval();
        "))
   ()
   (("void inline set_callarg(call_object ast_call, int index, object value)"
        "
        scheme_list_at_put(ast_call->arguments, index, value);
        ")
    ("void inline set_callmsg(call_object ast_call, object msg)"
        "
        set_callarg(ast_call, 0, msg);
        ")
    ("call_object make_ast_call(object self, int argsize)"
        "
        new_instance(call);
        result->target        = self;
        result->arguments   = make_scheme_list(argsize);
        return result;
        ")
    ("void ast_call_invoke_env()"
        "
        context_object context = get_context();
        call_object ast_call = context->self.ast_call;

        object env          = context->env;
        object self         = argument_at(context, 1);

        int argsize = scheme_list_size(ast_call->arguments);

        pop_context();

        context       = make_context(self, argsize);
        context->env  = env;

        int i;
        object args = ast_call->arguments;
        for (i = 0; i < argsize; i++) {
            // TODO optimize!
            set_argument(context, i, car(args));
            // Fast cdr, car has already tested if it is a cons
            args = object_at(args.object, 1);
        }
        error_guard(args.pointer == woodstock->nil, \"Too many arguments\");

        dec();
        ")))
