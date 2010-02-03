#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <pinocchio.h>

/* ========================================================================= */

DECLARE_CLASS(Type_Array);
Type_Array empty_Type_Array;

/* ========================================================================= */

Type_Array new_Type_Array_raw(uns_int c)
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = NEW_ARRAYED(struct Type_Array_t, Object[c]);
    HEADER(result)      = (Object)Type_Array_Class;
    result->size        = c;
    return result;
}

Type_Array new_Type_Array(uns_int c, Object v[])
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = new_Type_Array_raw(c);
    while (0 < c) {
        c--;
        result->values[c] = v[c];
    }
    return result;
}

Type_Array new_Type_Array_with(uns_int c, ...)
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = new_Type_Array_raw(c);
    va_list args;
    va_start(args, c);
    int index;
    for (index = 0; index < c; index++) {
        result->values[index] = va_arg(args, Object);
    }
    va_end(args);
    return result;
}

Type_Array new_Type_Array_withAll(uns_int c, Object element)
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = new_Type_Array_raw(c);
    while (0 < c) {
        c--;
        result->values[c] = element;
    }
    return result;
}


void pre_init_Type_Array() 
{
    // cannot use new_Class_name here since Symbol_Dict is not available yet
    Type_Array_Class = new_Class((Object)Type_Object_Class, create_layout(0, ARRAY));
    REFER_TO(Type_Array);
    empty_Type_Array         = NEW_t(Type_Array);
    HEADER(empty_Type_Array) = (Object)Type_Array_Class;
}

/* ========================================================================= */

NATIVE0(Type_Array_size)
    Type_SmallInt result = new_Type_SmallInt(((Type_Array)self)->size);
    RETURN_FROM_NATIVE(result);
}

Object raw_Type_Array_instAt(Type_Array o, Object tag, int index)
{
    ASSERT_TAG_SIZE(tag, index);
    return o->values[index];
}

void raw_Type_Array_instAt_put(Type_Array o, Object tag,
                               int index, Object value)
{
    ASSERT_TAG_SIZE(tag, index);
    o->values[index] = value;
}

NATIVE1(Type_Array_instVarAt_)
    Object w_index  = NATIVE_ARG(0);
    int index       = unwrap_int(w_index) - 1;
    Object tag      = GETTAG(self);
    ASSERT_TAG_LAYOUT(tag, Array);
    ASSERT_TAG_SIZE(tag, index);
    RETURN_FROM_NATIVE(((Type_Array)self)->values[index]);
}

NATIVE2(Type_Array_instVarAt_put_)
    Object w_index = NATIVE_ARG(0);
    int index      = unwrap_int(w_index) - 1;
    Object tag   = GETTAG(self);
    ASSERT_TAG_LAYOUT(tag, Array);
    ASSERT_TAG_SIZE(tag, index);
    ((Type_Array)self)->values[index] = NATIVE_ARG(1);
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void post_init_Type_Array()
{
    Type_Array_Class->name    = new_Type_Symbol_cached(L"Array"); 
    Type_Array_Class->methods = new_Type_Dictionary();
    empty_Type_Array->size    = 0;
    
    store_native_method(Type_Array_Class, SMB_instVarAt_, NM_Type_Array_instVarAt_);
    store_native_method(Type_Array_Class, SMB_instVarAt_put_, NM_Type_Array_instVarAt_put_);
    store_native_method(Type_Array_Class, SMB_size,    NM_Type_Array_size);
}
