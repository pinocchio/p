(bootstrapping-type SmallInt type ((value "int"))
   ((eval ()
        "
        return_from_context(context, context->self);
        ")
    (hash ()
        "
        return_from_context(context, context->self);
        "))
   ()
   (("smallint_object make_smallint(int value)"
        "
        new_instance(smallint);
        result->value = value;
        return result;
        ")))
