(bootstrapping-type String type ((size smallint) (hash smallint) (value "wchar_t*"))
   ((eval ()
        "
        return_from_context(context, context->self);
        ")
    (eval: ()
        "
        return_from_context(context, context->self);
        ")
    (objectAt: (w_idx)
        "
        cast(idx, w_idx, smallint);
        symbol_object self = context->self.symbol;

        error_guard(idx->value < self->size->value, \"Out of bounds.\");
        error_guard(0 <= idx->value, \"Out of bounds.\");
        return_from_context(context,
            (object)make_char(self->value[idx->value]));
        ")
    (objectAt:put: (w_idx w_char)
        "
        cast(idx, w_idx, smallint);
        string_object self = context->self.string;
        error_guard(idx->value < self->size->value, \"Out of bounds.\");
        error_guard(0 <= idx->value, \"Out of bounds.\");
        cast(chr, w_char, chr);
        self->value[idx->value] = chr->value;
        pop_context();
        ")
    (size ()
        "
        return_from_context(context, (object)context->self.string->size);
        "))
   ((basicNew: (w_size)
        "
        cast(size, w_size, smallint);
        return_from_context(context, (object)make_string_sized(size->value));
        "))
   (("int inline string_equals(string_object string1, string_object string2)"
        "
        return symbol_equals((symbol_object) string1, (symbol_object) string2);
        ")
    ("string_object make_string(const wchar_t* value)"
        "
        // string and symbol share the same struct
        string_object result = NEW(struct symbol);
        result->hash         = NULL;
        result->value        = wcsdup(value);
        result->size         = make_smallint(wcslen(value));
        header(result)       = (object)woodstock->string_class;
        return result;
        ")
    ("string_object make_string_sized(int size)"
        "
        // string and symbol share the same struct
        string_object result = NEW(struct symbol);
        result->hash         = NULL;
        result->value        = (wchar_t*)PALLOC(sizeof(wchar_t[size]));
        result->size         = make_smallint(size);
        header(result)       = (object)woodstock->string_class;
        return result;
        ")))
