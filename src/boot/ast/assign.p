(bootstrapping-type Assign ast ((variable "object") (expression "object"))
   ((eval ()
        "    
        assign_object self = context->self.ast_assign;
        object env = context->env;

        pop_context();

        context = make_context(self->variable, 2);
        context->env = env;
        set_message(context, ASSIGN_);
        set_argument(context, 1, self->expression);
        ")
    (eval: (w_env)
        "
        context->env = w_env;
        gen_assign_eval();
        "))
   ((to:expression: (w_var w_exp)
        "
        return_from_context(context, (object)make_ast_assign(w_var, w_exp));
        "))
   (("assign_object make_ast_assign(object variable, object expression)"
        "
        new_instance(assign);
        result->variable        = variable;
        result->expression      = expression;
        return result;
        ")))
