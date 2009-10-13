
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Array.h>

/* ========================================================================= */

Type_Class Type_Array_Class;
Type_Array empty_Type_Array;

/* ========================================================================= */

Type_Array new_Raw_Type_Array(int c)
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = NEW_ARRAYED(struct Type_Array_t, Object[c]);
    HEADER(result)      = (Object)Type_Array_Class;
    result->size        = new_Type_SmallInt(c);
    return result;
}

Type_Array new_Type_Array(int c, Object v[])
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = new_Raw_Type_Array(c);
    while (0 < c) {
        c--;
        result->values[c] = v[c];
    }
    return result;
}

Type_Array new_Type_Array_With(int c, Object init)
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = new_Raw_Type_Array(c);
    while (0 < c) {
        c--;
        result->values[c] = init;
    }
    return result;
}

void pre_init_Type_Array() 
{
    Type_Array_Class         = new_Named_Class((Object)Type_Object_Class,
                                               L"Type_Array",
                                               create_type(0, ARRAY));
    empty_Type_Array         = NEW_t(Type_Array);
    HEADER(empty_Type_Array) = (Object)Type_Array_Class;
}

/* ========================================================================= */

Object Type_Array_Type_ObjectAt(Type_Array array, unsigned int index)
{
    assert(index < array->size->value, 
        printf("Index %u out of bounds %u", index, array->size->value));
    return array->values[index];
}

NATIVE1(Type_Array_Type_ObjectAt_)
    ASSERT_ARG_TYPE(0, Type_SmallInt_Class)
    int index = ((Type_SmallInt) args->values[0])->value;
    poke_EXP(1, ((Type_Array)self)->values[index]);
}

NATIVE2(Type_Array_Type_ObjectAt_put_)
    ASSERT_ARG_TYPE(0, Type_SmallInt_Class)
    unsigned int index = ((Type_SmallInt)args->values[0])->value;
    ((Type_Array)self)->values[index] = args->values[1];
    poke_EXP(1, args->values[1]);
}

NATIVE0(Type_Array_size)
    poke_EXP(1, new_Type_SmallInt(((Type_Array)self)->size->value));
}

/* ========================================================================= */

void post_init_Type_Array()
{
    empty_Type_Array->size   = new_Type_SmallInt(0);
    Type_Array_Class->methods = new_Type_Dictionary();
    
    store_native_method(Type_Array_Class, SMB_objectAt_,     NM_Type_Array_Type_ObjectAt_);
    store_native_method(Type_Array_Class, SMB_objectAt_put_, NM_Type_Array_Type_ObjectAt_put_);
    store_native_method(Type_Array_Class, SMB_size,          NM_Type_Array_size);
}
