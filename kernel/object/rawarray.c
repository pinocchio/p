#include <pinocchio.h>
#include <stdarg.h>

/* ======================================================================= */
Class RawArray_class;
/* ======================================================================= */

RawArray new_RawArray(uns_int size, ...)
{
    NEW_ARRAYED(RawArray, void**, size);
    result->size = size;
    return result;
}
