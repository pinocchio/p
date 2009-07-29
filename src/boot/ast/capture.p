(bootstrapping-type Capture ast ()
   ((eval ()
        "
        return_from_context(context, context->env);
        "))
   ((instance ()
        "
        return_from_context(context, woodstock->ast_capture);
        "))
   ())
