
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
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

Type_Array new_Type_Array_With(unsigned int c, ...)
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = new_Raw_Type_Array(c);
    va_list args;
    va_start(args, c);
    while (0 < c) {
        c--;
        result->values[c] = va_arg(args, Object);
    }
    va_end(args);
    return result;
}

Type_Array new_Type_Array_With_All(unsigned int c, Object element)
{
    if (c == 0) { return empty_Type_Array; }
    Type_Array result = new_Raw_Type_Array(c);
    while (0 < c) {
        c--;
        result->values[c] = element;
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

NATIVE1(Type_Array_basicNew_)
    assert_class(self);
    Object w_size = NATIVE_ARG(0);
    int size = unwrap_int(w_size);
    assert0(size >= 0);
    Object result = instantiate_sized((Type_Class)self, (unsigned int)size);
    RETURN_FROM_NATIVE(result);
}

NATIVE0(Type_Array_size)
    Type_SmallInt result = new_Type_SmallInt(((Type_Array)self)->size);
    RETURN_FROM_NATIVE(result);
}

NATIVE1(Type_Array_at_)
    Object w_index = NATIVE_ARG(0);
    int index      = unwrap_int(w_index);
    Type_Class cls = (Type_Class)HEADER(self);
    Type_Array as  = (Type_Array)self;
    assert0(gettag(cls) == ARRAY);
    assert0(as->size > index);
    assert0(0 <= index);
    RETURN_FROM_NATIVE(as->values[getsize(cls) + index]);
}

NATIVE2(Type_Array_at_put_)
    Object w_index = NATIVE_ARG(0);
    int index      = unwrap_int(w_index);
    Type_Class cls = (Type_Class)HEADER(self);
    Type_Array as  = (Type_Array)self;
    assert0(gettag(cls) == ARRAY);
    assert0(as->size > index);
    assert0(0 <= index);
    as->values[index + getsize(cls)] = NATIVE_ARG(1);
    RETURN_FROM_NATIVE(self);
}

NATIVE1(Type_Array_instVarAt_)
    Object w_index = NATIVE_ARG(0);
    int index      = unwrap_int(w_index);
    Type_Class cls = (Type_Class)HEADER(self);
    Type_Tag tag   = gettag(cls);
    assert0(tag == ARRAY);
    assert0(getsize(cls) > index);
    assert0(0 <= index);
    RETURN_FROM_NATIVE(((Type_Array)self)->values[index]);
}

NATIVE2(Type_Array_instVarAt_put_)
    Object w_index = NATIVE_ARG(0);
    int index      = unwrap_int(w_index);
    Type_Class cls = (Type_Class)HEADER(self);
    Type_Tag tag   = gettag(cls);
    assert0(tag == ARRAY);
    assert0(getsize(cls) > index);
    assert0(0 <= index);
    ((Type_Array)self)->values[index] = NATIVE_ARG(1);
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void post_init_Type_Array()
{
    empty_Type_Array->size   = 0;
    Type_Array_Class->methods = new_Type_Dictionary();
    
    store_native_method((Type_Class)HEADER(Type_Array_Class), SMB_basicNew_, NM_Type_Array_basicNew_);
    store_native_method(Type_Array_Class, SMB_at_,     NM_Type_Array_at_);
    store_native_method(Type_Array_Class, SMB_at_put_, NM_Type_Array_at_put_);
    store_native_method(Type_Array_Class, SMB_instVarAt_, NM_Type_Array_instVarAt_);
    store_native_method(Type_Array_Class, SMB_instVarAt_put_, NM_Type_Array_instVarAt_put_);
    store_native_method(Type_Array_Class, SMB_size,    NM_Type_Array_size);
}
