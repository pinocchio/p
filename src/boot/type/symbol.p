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
   ((fromString: (w_string) 
        "
        cast(string, w_string, string);
        return_from_context(context, (object)make_symbol(string->value));
        "))
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

(Symbol 'dispatch:delegate: 
        objdisp 
        (newclass Symbol String () (SymbolTable)
            ((asSymbol (self super) self)
             (isSymbol (self super) #t))
            ((SymbolTable (self super) (self 'objectAt: 2))
             (SymbolTable: (self super new) (self 'objectAt:put: 2 new)))
             ))

(let ((SymbolTable (newclass SymbolTable Object (symbols) () 
                        ((symbols (self super) (self 'objectAt: 0))
                         (symbols: (self super new) (self 'objectAt:put: 0 new))
                         (intern: (self super aStringOrSymbol) 
                            (let ((value (self 'lookup: aStringOrSymbol)))
                                (if (eq? value  null)
                                    (let ((aSymbol (if (aStringOrSymbol 'isSymbol)
                                        aStringOrSymbol
                                        (Symbol 'fromString: aStringOrSymbol))))
                                        (self 'store: aSymbol)
                                        aSymbol)
                                    value)))
                         (store: (self super aSymbol) 
                            (let ((symbols (self 'symbols)))       
                                (let loop ((idx 0))
                                    (if (= idx (symbols 'size))
                                        (begin
                                        (self 'expand)
                                        ((self 'symbols) 'objectAt:put: idx aSymbol))
                                        (if (eq? (symbols 'objectAt: idx) null)
                                            (symbols 'objectAt:put: idx aSymbol)
                                            (loop (+ idx 1)))))))
                         (expand (self super)
                            (let* ((symbols (self 'symbols))
                                   (new (Array 'basicNew: (* 2 (symbols 'size)))))
                                (let loop ((idx 0))
                                    (if (= idx (symbols 'size))
                                        (self 'symbols: new)
                                        (begin
                                        (new 'objectAt:put: idx (symbols 'objectAt: idx))
                                        (loop (+ idx 1)))))))
                         (lookup: (self super aSymbol)
                            (let ((symbols (self 'symbols)))
                                (let loop ((idx 0))
                                    (if (= idx (symbols 'size))
                                        null
                                        (let ((current (symbols 'objectAt: idx)))
                                            (if (eq? current null)
                                                null
                                                (if (current '= aSymbol)
                                                    current
                                                    (loop (+ idx 1)))))))))
                         (initialize (self super)
                            (self 'symbols: (Array 'basicNew: 128))
                            self)
                         (= (self super aSymbol)
                            (if (eq? self aSymbol)
                              #t
                              (if (eq? (self 'class) (aSymbol 'class))
                                #f
                                (super (vector '= aSymbol)))))
                         )
                        ())))
        (Symbol 'SymbolTable: (SymbolTable 'new))
(load "boot/test/test-symbol.p") 
)
