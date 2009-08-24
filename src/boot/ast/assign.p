(bootstrapping-type Assign ast ((variable "object") (expression "object"))
   ((eval ()
        "    
        assign_object self = context->self.ast_assign;
        object env         = context->env;

        pop_context();
        "
        (direct-send self->variable assign: self->expression)))
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
