Type_Array * Empty_Array;

Type_Array *
new_Raw_Array(int c)
{
    if (c == 0) { return Empty_Array; }
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
    HEADER(result)      = (Object)Array_Class;
    result->size = c;
    return result;
}

Type_Array *
new_Array(int c, Object v[])
{
    if (c == 0) { return Empty_Array; }
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
    HEADER(result)      = (Object)Array_Class;
    result->size        = c;
    while (0 < c) {
        c--;
        result->values[c] = v[c];
    }
    return result;
}

Type_Array *
new_Array_With(int c, Object init)
{
    if (c == 0) { return Empty_Array; }
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
    HEADER(result)      = (Object)Array_Class;
    result->size        = c;
    while (0 < c) {
        c--;
        result->values[c] = init;
    }
    return result;
}

Object Array_ObjectAt(Type_Array * array, unsigned int index)
{
    assert(index < array->size);
    return array->values[index];
}

NATIVE(NM_Array_objectAt_)
{
    ASSERT_ARG_SIZE(1)
    ASSERT_TYPE(args->values[0], SmallInt_Class)
    int index = ((Type_SmallInt *) args->values[0])->value;
    push_EXP(((Type_Array *)self)->values[index]);
}

NATIVE(NM_Array_objectAt_put_)
{
    ASSERT_ARG_SIZE(2)
    ASSERT_TYPE(args->values[0], SmallInt_Class)
    unsigned int index = ((Type_SmallInt *)args->values[0])->value;
    ((Type_Array *)self)->values[index] = args->values[1];
}

NATIVE(NM_Array_size)
{
    ASSERT_ARG_SIZE(0);
    push_EXP(new_SmallInt(((Type_Array *)self)->size));
}

void pre_initialize_Array() 
{
    Array_Class         = new_Named_Class((Object)Object_Class, L"Array");
    
    Empty_Array         = NEW(Type_Array);
    Empty_Array->size   = 0;
    HEADER(Empty_Array) = (Object)Array_Class;
}

void post_initialize_Array()
{
    store_native_method(Array_Class, Symbol_objectAt_,     NM_Array_objectAt_);
    store_native_method(Array_Class, Symbol_objectAt_put_, NM_Array_objectAt_put_);
    store_native_method(Array_Class, Symbol_size,          NM_Array_size);
}
