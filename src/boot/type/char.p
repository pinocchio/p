(bootstrapping-type Chr type ((value "wchar_t"))
   ((eval ()
        "
        return_from_context(context, context->self);
        ")
    (hash ()
        "
        return_from_context(context,
            (object)make_number((int)context->self.chr->value));
        "))
   ()
   (("chr_object do_make_char(wchar_t value)"
        "
        new_instance(chr);
        result->value = value;
        return result;
        ")
    ("chr_object make_char(wchar_t value)"
       "
        if (value < 256) {
            object result = object_at(woodstock->chartable.object, value);
            if (result.object == woodstock->nil) {
                result = (object)do_make_char(value);
                object_at_put(woodstock->chartable.object, value, result);
            }
           return result.chr;
        }
        return do_make_char(value);
        ")))
