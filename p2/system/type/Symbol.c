
Type_Dictionary * Symbol_Table;

/* ========================================================================== */

wchar_t* wcsdup(const wchar_t* input)
{
    int len         = wcslen(input) + 1;
    wchar_t* output = (wchar_t*)PALLOC(sizeof(wchar_t) * len);
    int i           = 0;
    for (; i < len; i++) {
        output[i] = input[i];
    }
    return output;
}


Type_Symbol *
new_Symbol(const wchar_t* name)
{
    Type_Symbol * symbol = NEW(Type_Symbol);
    HEADER(symbol)       = (Object)Symbol_Class;
    symbol->hash         = NULL;
    symbol->value        = wcsdup(name);
    symbol->size         = new_SmallInt(wcslen(name));
    return symbol;
}


void pre_initialize_Symbol()
{
    Symbol_Class        = new_Named_Class((Object)Object_Class, L"Symbol");
}

void initialize_Symbol()
{
    // TODO put this method in a separate file
    Symbol_apply_   = (Object)new_Symbol(L"apply:");
    Symbol_asArray  = (Object)new_Symbol(L"asArray");
    Symbol_asSmallInt = (Object)new_Symbol(L"asSmallInt");
    Symbol_asString = (Object)new_Symbol(L"asString");
    Symbol_asSymbol = (Object)new_Symbol(L"asSymbol");
    Symbol_at_in_   = (Object)new_Symbol(L"at:in:");
    Symbol_equals_  = (Object)new_Symbol(L"equals:");
    Symbol_eval     = (Object)new_Symbol(L"eval");
    Symbol_eval_    = (Object)new_Symbol(L"eval:");
    Symbol_lookup_  = (Object)new_Symbol(L"lookup:");
    Symbol_minus_   = (Object)new_Symbol(L"minus:");
    Symbol_objectAt_     = (Object)new_Symbol(L"objectAt:");
    Symbol_objectAt_putIfAbsent_ = (Object)new_Symbol(L"objectAt:putIfAbsent:");
    Symbol_objectAt_put_ = (Object)new_Symbol(L"objectAt:put:");
    Symbol_plus_         = (Object)new_Symbol(L"plus:");
    Symbol_size          = (Object)new_Symbol(L"size");
}

/* ========================================================================== */

int Symbol_hash(const wchar_t* symbol_string)
{
    // http://www.cse.yorku.ca/~oz/hash.html
    unsigned int hash = 0;
    int c;
    while (c = *symbol_string++) {
        hash = c + (hash << 6) + (hash << 16) - hash;
    }
    return hash;
    
}

/* ========================================================================== */

NATIVE1(NM_Symbol_objectAt_)
    ASSERT_TYPE(args->values[0], SmallInt_Class);
    Type_SmallInt *index = (Type_SmallInt *)args->values[0];
    push_EXP(new_Character(((Type_Symbol *) self)->value[index->value]));
}

NATIVE0(NM_Symbol_asString)
    push_EXP(new_String(((Type_Symbol *)self)->value));
}

NATIVE0(NM_Symbol_asArray)
    Type_Symbol * self_symbol = (Type_Symbol *)self;
    Type_Array *array = new_Raw_Array(self_symbol->size->value);
    int i;
    for (i=0; i<self_symbol->size->value; i++) {
        array->values[i] = (Object)new_Character(self_symbol->value[i]);
    }
    push_EXP(array);
}

NATIVE0(NM_Symbol_hash)
    push_EXP(new_SmallInt(Symbol_hash(((Type_Symbol *)self)->value)));
}

NATIVE0(NM_Symbol_size)
    push_EXP(((Type_Symbol *)self)->size);
}


NATIVE1(NM_Symbol_concat_)
    // TODO implement
}

NATIVE1(NM_Symbol_indexOf_)
    // TODO implement
}

NATIVE1(NM_Symbol_lastIndexOf_)
    // TODO implement
}

/* ========================================================================== */

void initialize_Symbol_Table()
{
    Symbol_Table = new_Dictionary();
}

void post_initialize_Symbol()
{
    initialize_Symbol_Table();
    store_native_method(Symbol_Class, Symbol_objectAt_, NM_Symbol_objectAt_);
    store_native_method(Symbol_Class, Symbol_asString,  NM_Symbol_asString);
    store_native_method(Symbol_Class, Symbol_size,      NM_Symbol_size);
    store_native_method(Symbol_Class, Symbol_asArray,   NM_Symbol_asArray);
}
