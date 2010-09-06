#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <pinocchio.h>

/* ========================================================================= */

DECLARE_CLASS(Array);
Array empty_Array;

/* ========================================================================= */

Array new_Array_raw(uns_int c)
{
    if (c == 0) { return empty_Array; }
    Array result   = NEW_ARRAYED(struct Array_t, Optr[c]);
    HEADER(result) = Array_Class;
    result->size   = c;
    return result;
}

Array new_Array(uns_int c, Optr v[])
{
    if (c == 0) { return empty_Array; }
    Array result = new_Array_raw(c);
    while (0 < c) {
        c--;
        result->values[c] = v[c];
    }
    return result;
}

Array new_Array_with(uns_int c, ...)
{
    if (c == 0) { return empty_Array; }
    Array result = new_Array_raw(c);
    va_list args;
    va_start(args, c);
    long index;
    for (index = 0; index < c; index++) {
        result->values[index] = va_arg(args, Optr);
    }
    va_end(args);
    return result;
}

Array new_Array_withAll(uns_int c, Optr element)
{
    if (c == 0) { return empty_Array; }
    Array result = new_Array_raw(c);
    while (0 < c) {
        c--;
        result->values[c] = element;
    }
    return result;
}

/* ========================================================================= */

NATIVE1(Array_instVarAt_)
    Optr w_index = NATIVE_ARG(0);
    long index   = unwrap_int(w_index) - 1;
    Optr tag     = GETTAG(self);
    ASSERT_TAG_LAYOUT(tag, Array);
    ASSERT_TAG_SIZE(tag, index);
    RETURN_FROM_NATIVE(((Array)self)->values[index]);
}

NATIVE2(Array_instVarAt_put_)
    Optr w_index = NATIVE_ARG(0);
    Optr w_arg   = NATIVE_ARG(1);
    long index   = unwrap_int(w_index) - 1;
    Optr tag     = GETTAG(self);
    ASSERT_TAG_LAYOUT(tag, Array);
    ASSERT_TAG_SIZE(tag, index);
    ((Array)self)->values[index] = w_arg;
    RETURN_FROM_NATIVE(w_arg);
}

/* ========================================================================= */

void post_init_Array()
{
    PLUGIN natives = add_plugin(L"Collection.Array");

    store_native(natives, L"instVarAt:",     NM_Array_instVarAt_);
    store_native(natives, L"instVarAt:put:", NM_Array_instVarAt_put_);
}
