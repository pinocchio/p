(bootstrapping-type Constant ast ((constant "object"))
   ((eval ()
        "
        return_from_context(context, context->self.ast_const->constant);
        ")
    (eval: (w_env)
        "
        return_from_context(context, context->self.ast_const->constant);
        "))
   ((basicNew: (constant)
        "
        return_from_context(context, (object)make_constant(constant));
        "))
   (("constant_object make_constant(object constant)"
        "
        new_instance(constant);
        result->constant        = constant;
        return result;
        ")))
