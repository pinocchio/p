(bootstrapping-type Symbol type ((size smallint) (hash smallint) (value "wchar_t*"))
   ((eval ()
        "
        return_from_context(context, context->self);
        ")
    (eval: (w_scope)
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
    (size ()
        "
        return_from_context(context, (object)context->self.symbol->size);
        ")
    (hash ()
        "
        symbol_object self     = context->self.symbol;
        if (self->hash) {
            return_from_context(context, (object)self->hash);
            return;
        }
        // create the hash int here see pythons unicode symbol hash for more infos
        int len    = self->size->value;
        wchar_t *p = self->value;
        int x      = *p << 7;
        while (--len >= 0) {
            x = (1000003*x) ^ *p++;
        }
        x ^= self->size->value;
        self->hash = make_smallint(x);
        return_from_context(context, (object)self->hash);
        "))
   ()
   (("wchar_t* wcsdup(const wchar_t* input)"
        "
        int len         = wcslen(input) + 1;
        wchar_t* output = (wchar_t*)PALLOC(sizeof(wchar_t) * len);
        int i           = 0;
        for (; i < len; i++) {
            output[i] = input[i];
        }
        return output;
        ")
    ("int inline symbol_equals(symbol_object symbol1, symbol_object symbol2)"
        "
        int left_size   = symbol1->size->value;
        int right_size  = symbol2->size->value;
        return (left_size == right_size) &&
               (memcmp(symbol1->value, symbol2->value, left_size) == 0);
        ")
    ("symbol_object make_symbol(const wchar_t* value)"
        "
        symbol_object result = NEW(struct symbol);
        result->hash         = NULL;
        result->value        = wcsdup(value);
        result->size         = make_smallint(wcslen(value));
        header(result)       = (object)woodstock->symbol_class;
        return result;
        ")
))
