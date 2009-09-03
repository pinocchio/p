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

void Array_objectAt()
{
    // TODO implement
}

void Array_size()
{
    // TODO implement
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
    // TODO install methods 
}
