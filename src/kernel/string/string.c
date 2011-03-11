#include <pinocchio.h>

/* ======================================================================= */
Class String_class;
String empty_string;
/* ======================================================================= */

String raw_String(uns_int size)
{
    NEW_ARRAYED(String, wchar_t, size + 1);
    result->size = size;
    result->hash = (SmallInteger)nil;
    return result;
}
