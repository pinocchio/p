#include <pinocchio.h>

/* ======================================================================= */
Class SmallInteger_class;

#define INT_CACHE_UPPER 1024
#define INT_CACHE_LOWER -1

SmallInteger SmallInteger_cache[INT_CACHE_UPPER - INT_CACHE_LOWER];
/* ======================================================================= */

static SmallInteger raw_SmallInteger(long value)
{
    NEW_OBJECT(SmallInteger);
    result->value             = value;
    result->header.format.raw = 1;
    return result;
}

SmallInteger new_SmallInteger(long value)
{
    if (INT_CACHE_LOWER <= value && value < INT_CACHE_UPPER) {
        return SmallInteger_cache[value - INT_CACHE_LOWER];
    }
    return raw_SmallInteger(value);
}

void init_integercache()
{
    long i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        SmallInteger_cache[i - INT_CACHE_LOWER] = raw_SmallInteger(i);
    }
}

/* ======================================================================= */

NATIVE(SmallInteger, plus)
    SmallInteger self   = (SmallInteger)ARGUMENT(0);
    SmallInteger right  = (SmallInteger)ARGUMENT(1);
    SmallInteger result = new_SmallInteger(self->value + right->value);
    NATIVE_RETURN(result);
END_NATIVE

NATIVE(SmallInteger, minus)
    SmallInteger self   = (SmallInteger)ARGUMENT(0);
    SmallInteger right  = (SmallInteger)ARGUMENT(1);
    SmallInteger result = new_SmallInteger(self->value - right->value);
    NATIVE_RETURN(result);
END_NATIVE

NATIVE(SmallInteger, times)
    SmallInteger self   = (SmallInteger)ARGUMENT(0);
    SmallInteger right  = (SmallInteger)ARGUMENT(1);
    SmallInteger result = new_SmallInteger(self->value * right->value);
    NATIVE_RETURN(result);
END_NATIVE

NATIVE(SmallInteger, divide)
    SmallInteger self   = (SmallInteger)ARGUMENT(0);
    SmallInteger right  = (SmallInteger)ARGUMENT(1);
    SmallInteger result = new_SmallInteger(self->value / right->value);
    NATIVE_RETURN(result);
END_NATIVE

NATIVE(SmallInteger, smaller)
    SmallInteger self   = (SmallInteger)ARGUMENT(0);
    SmallInteger right  = (SmallInteger)ARGUMENT(1);
    Object result       = self->value < right->value ? true : false;
    NATIVE_RETURN(result);
END_NATIVE

NATIVE(SmallInteger, greater)
    SmallInteger self   = (SmallInteger)ARGUMENT(0);
    SmallInteger right  = (SmallInteger)ARGUMENT(1);
    Object result       = self->value > right->value ? true : false;
    NATIVE_RETURN(result);
END_NATIVE

/* ======================================================================= */


void install_natives_SmallInteger()
{
    INSTALL_NATIVE(SmallInteger, plus);
    INSTALL_NATIVE(SmallInteger, minus);
    INSTALL_NATIVE(SmallInteger, times);
    INSTALL_NATIVE(SmallInteger, divide);
    INSTALL_NATIVE(SmallInteger, smaller);
    INSTALL_NATIVE(SmallInteger, greater);
}
