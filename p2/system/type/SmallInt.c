
Type_SmallInt ** SmallInt_cache;

Type_SmallInt *
new_SmallInt(int value)
{
    if (INT_CACHE_LOWER <= value && value < INT_CACHE_UPPER) {
        return SmallInt_cache[value];
    }
    Type_SmallInt * result = NEW(Type_SmallInt);
    HEADER(result)         = (Object) SmallInt_Class;
    result->value          = value;
    return result;
}

/* =========================================================================*/

NATIVE(NM_SmallInt_plus) 
{
    //assert(HEADER(self) == (Object)SmallInt_Class);
    ASSERT_ARG_SIZE(1);
    Type_SmallInt * arg = (Type_SmallInt *)args->values[0];
    assert(HEADER(arg) == (Object)SmallInt_Class);
    Type_SmallInt * number = ((Type_SmallInt *) self);
    poke_EXP(1, new_SmallInt(arg->value + number->value));
}

NATIVE(NM_SmallInt_minus) 
{
    //assert(HEADER(self) == (Object)SmallInt_Class);
    ASSERT_ARG_SIZE(1);
    Type_SmallInt * arg = (Type_SmallInt *)args->values[0];
    assert(HEADER(arg) == (Object)SmallInt_Class);
    Type_SmallInt * number = ((Type_SmallInt *) self);
    poke_EXP(1, new_SmallInt(arg->value - number->value));
}

NATIVE(NM_SmallInt_equals) 
{
    //assert(HEADER(self) == (Object)SmallInt_Class);
    ASSERT_ARG_SIZE(1);
    assert(HEADER(args->values[0]) == (Object)SmallInt_Class);
    Type_SmallInt * number = ((Type_SmallInt *) self);
    if (number->value == ((Type_SmallInt *) args->values[0])->value) {
        push_EXP(True);        
    } else {
        push_EXP(False);
    }
}

/* =========================================================================*/

void pre_initialize_Type_SmallInt() 
{
    SmallInt_Class = new_Class((Object)Object_Class);
    
    SmallInt_cache = (Type_SmallInt **)PALLOC(sizeof(Type_SmallInt*[INT_CACHE_UPPER-INT_CACHE_LOWER]));
    SmallInt_cache -= INT_CACHE_LOWER;
    
    int i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        Type_SmallInt * o = NEW(Type_SmallInt);
        o->value = i;
        HEADER(o) = (Object)SmallInt_Class;
        SmallInt_cache[i] = o;
    }
}

void post_initialize_Type_SmallInt()
{
    SmallInt_Class->name = new_String(L"SmallInt");
    store_native_method((Type_Class *)SmallInt_Class, Symbol_plus_, NM_SmallInt_plus);
    store_native_method((Type_Class *)SmallInt_Class, Symbol_minus_, NM_SmallInt_minus);
    store_native_method((Type_Class *)SmallInt_Class, Symbol_equals_, NM_SmallInt_equals);
    
    assert(Dictionary_lookup(SmallInt_Class->methods, Symbol_plus_));
    assert(Dictionary_lookup(SmallInt_Class->methods, Symbol_minus_));
    assert(Dictionary_lookup(SmallInt_Class->methods, Symbol_equals_));
}
