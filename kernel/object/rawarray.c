#include <pinocchio.h>
#include <stdarg.h>

/* ======================================================================= */
Class RawArray_class;
/* ======================================================================= */

RawArray new_RawArray(uns_int size, ...)
{
    NEW_ARRAYED(RawArray, void**, size);
    result->size = size;
    va_list args;
    va_start(args, size);
    uns_int i;
    for (i = 0; i < size; i++) {
        result->data[i] = va_arg(args, void**);
    }
    va_end(args);
    return result;
}
