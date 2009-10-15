
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Array.h>

/* ========================================================================= */

Type_Class Type_Array_Class;
Type_Array empty_Type_Array;

/* ========================================================================= */

Type_Array new_Raw_Type_Array(unsigned int c)
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = NEW_ARRAYED(struct Type_Array_t, Object[c]);
    HEADER(result)      = (Object)Type_Array_Class;
    result->size        = c;
    return result;
}

Type_Array new_Type_Array(unsigned int c, Object v[])
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = new_Raw_Type_Array(c);
    while (0 < c) {
        c--;
        result->values[c] = v[c];
    }
    return result;
}

Type_Array new_Type_Array_With(unsigned int c, Object init)
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
                                               L"Array",
                                               create_type(0, ARRAY));
    
    empty_Type_Array         = NEW_t(Type_Array);
    HEADER(empty_Type_Array) = (Object)Type_Array_Class;
}

/* ========================================================================= */

Object Type_Array_Type_ObjectAt(Type_Array array, unsigned int index)
{
    assert(index < array->size, 
        printf("Index %u out of bounds %u", index, array->size));
    return array->values[index];
}

NATIVE0(Type_Array_size)
    poke_EXP(1, new_Type_SmallInt(((Type_Array)self)->size));
}

NATIVE1(Type_Array_at_)
    int index = unwrap_int(args->values[0]);
    Type_Class cls = (Type_Class)HEADER(self);
    Type_Array as = (Type_Array)self;
    assert0(gettag(cls) == ARRAY);
    assert0(getsize(cls) + as->size > index);
    assert0(0 <= index);
    poke_EXP(1, as->values[index]);
}

NATIVE2(Type_Array_at_put_)
    int index = unwrap_int(args->values[0]);
    Type_Class cls = (Type_Class)HEADER(self);
    Type_Array as = (Type_Array)self;
    assert0(gettag(cls) == ARRAY);
    assert0(getsize(cls) + as->size > index);
    assert0(0 <= index);
    as->values[index] = args->values[1];
    poke_EXP(1, self);
}

/* ========================================================================= */

void post_init_Type_Array()
{
    empty_Type_Array->size   = 0;
    Type_Array_Class->methods = new_Type_Dictionary();
    
    store_native_method(Type_Array_Class, SMB_at_,     NM_Type_Array_at_);
    store_native_method(Type_Array_Class, SMB_at_put_, NM_Type_Array_at_put_);
    store_native_method(Type_Array_Class, SMB_size,    NM_Type_Array_size);
}
