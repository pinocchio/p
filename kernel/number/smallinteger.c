#include <pinocchio.h>

/* ======================================================================= */
Class SmallInteger_class;
/* ======================================================================= */

static SmallInteger raw_SmallInteger(long value)
{
    NEW_OBJECT(SmallInteger);
    result->value = value;
    return result;
}

SmallInteger new_SmallInteger(long value)
{
    /*
    if (INT_CACHE_LOWER <= value && value < INT_CACHE_UPPER) {
        return SmallInteger_cache[value];
    }
    */
    return raw_SmallInteger(value);
}
