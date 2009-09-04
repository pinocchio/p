
Type_SmallInt ** SmallInt_cache;

Type_SmallInt *
new_raw_SmallInt(int value)
{
    Type_SmallInt * result = NEW(Type_SmallInt);
    HEADER(result)         = (Object) SmallInt_Class;
    result->value          = value;
    return result;
}


Type_SmallInt *
new_SmallInt(int value)
{
    if (INT_CACHE_LOWER <= value && value < INT_CACHE_UPPER) {
        return SmallInt_cache[value];
    }
    return new_raw_SmallInt(value);
}

void pre_initialize_Type_SmallInt() 
{
    SmallInt_Class         = NEW(Type_Class);
    HEADER(SmallInt_Class) = (Object)Class_Class;
    SmallInt_Class->super  = (Object)Object_Class;
    
    SmallInt_cache = (Type_SmallInt **)PALLOC(sizeof(Type_SmallInt*[INT_CACHE_UPPER-INT_CACHE_LOWER]));
    SmallInt_cache -= INT_CACHE_LOWER;
    
    int i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        SmallInt_cache[i] = new_raw_SmallInt(i);
    }
}

/* =========================================================================*/

NATIVE(NM_SmallInt_plus) 
{
    ASSERT_ARG_SIZE(1);
    ASSERT_TYPE(args->values[0], SmallInt_Class);
    
    Type_SmallInt * arg = (Type_SmallInt *)args->values[0];
    Type_SmallInt * number = ((Type_SmallInt *) self);
    poke_EXP(1, new_SmallInt(arg->value + number->value));
}

NATIVE(NM_SmallInt_minus) 
{
    ASSERT_ARG_SIZE(1);
    ASSERT_TYPE(args->values[0], SmallInt_Class);
    
    Type_SmallInt * arg = (Type_SmallInt *)args->values[0];
    Type_SmallInt * number = ((Type_SmallInt *) self);
    poke_EXP(1, new_SmallInt(arg->value - number->value));
}

NATIVE(NM_SmallInt_equals) 
{
    //assert(HEADER(self) == (Object)SmallInt_Class);
    ASSERT_ARG_SIZE(1);
    ASSERT_TYPE(args->values[0], SmallInt_Class);
    
    Type_SmallInt * number = ((Type_SmallInt *) self);
    if (number->value == ((Type_SmallInt *) args->values[0])->value) {
        push_EXP(True);        
    } else {
        push_EXP(False);
    }
}

/* =========================================================================*/

void post_initialize_Type_SmallInt()
{
    SmallInt_Class->name    = new_String(L"SmallInt");
    SmallInt_Class->methods = new_Dictionary();
    
    store_native_method((Type_Class *)SmallInt_Class, Symbol_plus_, NM_SmallInt_plus);
    store_native_method((Type_Class *)SmallInt_Class, Symbol_minus_, NM_SmallInt_minus);
    store_native_method((Type_Class *)SmallInt_Class, Symbol_equals_, NM_SmallInt_equals);
    
    assert(Dictionary_lookup(SmallInt_Class->methods, Symbol_plus_));
    assert(Dictionary_lookup(SmallInt_Class->methods, Symbol_minus_));
    assert(Dictionary_lookup(SmallInt_Class->methods, Symbol_equals_));
}
