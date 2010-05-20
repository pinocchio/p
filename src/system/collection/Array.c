#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <pinocchio.h>

/* ========================================================================= */

DECLARE_CLASS(Collection_Array);
Collection_Array empty_Collection_Array;

/* ========================================================================= */

Collection_Array new_Collection_Array_raw(uns_int c)
{
    if (c == 0) { return empty_Collection_Array; }
    Collection_Array result = NEW_ARRAYED(struct Collection_Array_t, Object[c]);
    HEADER(result)    = Collection_Array_Class;
    result->size      = c;
    return result;
}

Collection_Array new_Collection_Array(uns_int c, Object v[])
{
    if (c == 0) { return empty_Collection_Array; }
    Collection_Array result = new_Collection_Array_raw(c);
    while (0 < c) {
        c--;
        result->values[c] = v[c];
    }
    return result;
}

Collection_Array new_Collection_Array_with(uns_int c, ...)
{
    if (c == 0) { return empty_Collection_Array; }
    Collection_Array result = new_Collection_Array_raw(c);
    va_list args;
    va_start(args, c);
    int index;
    for (index = 0; index < c; index++) {
        result->values[index] = va_arg(args, Object);
    }
    va_end(args);
    return result;
}

Collection_Array new_Collection_Array_withAll(uns_int c, Object element)
{
    if (c == 0) { return empty_Collection_Array; }
    Collection_Array result = new_Collection_Array_raw(c);
    while (0 < c) {
        c--;
        result->values[c] = element;
    }
    return result;
}


void pre_init_Collection_Array() 
{
    // cannot use new_Class_name here since Symbol_Dict is not available yet
    Collection_Array_Class = new_Bootstrapping_Class();
    empty_Collection_Array          = NEW_t(Collection_Array);
    empty_Collection_Array->size    = 0;
    HEADER(empty_Collection_Array) = Collection_Array_Class;
}

/* ========================================================================= */

Object raw_Collection_Array_instAt(Collection_Array o, Object tag, int index)
{
    ASSERT_TAG_SIZE(tag, index);
    return o->values[index];
}

void raw_Collection_Array_instAt_put(Collection_Array o, Object tag,
                               int index, Object value)
{
    ASSERT_TAG_SIZE(tag, index);
    o->values[index] = value;
}

NATIVE1(Collection_Array_instVarAt_)
    Object w_index  = NATIVE_ARG(0);
    int index       = unwrap_int(w_index) - 1;
    Object tag      = GETTAG(self);
    ASSERT_TAG_LAYOUT(tag, Array);
    ASSERT_TAG_SIZE(tag, index);
    RETURN_FROM_NATIVE(((Collection_Array)self)->values[index]);
}

NATIVE2(Collection_Array_instVarAt_put_)
    Object w_index = NATIVE_ARG(0);
    Object w_arg   = NATIVE_ARG(1);
    int index      = unwrap_int(w_index) - 1;
    Object tag   = GETTAG(self);
    ASSERT_TAG_LAYOUT(tag, Array);
    ASSERT_TAG_SIZE(tag, index);
    ((Collection_Array)self)->values[index] = w_arg;
    RETURN_FROM_NATIVE(w_arg);
}

/* ========================================================================= */

void post_init_Collection_Array()
{
    Collection_Dictionary natives = add_plugin(L"Collection.Array");
    store_native(natives, SMB_instVarAt_,     NM_Collection_Array_instVarAt_);
    store_native(natives, SMB_instVarAt_put_, NM_Collection_Array_instVarAt_put_);
}
