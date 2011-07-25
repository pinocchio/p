#include <pinocchio.h>
#include <string.h>

/* ======================================================================= */

tMethod lookup(tObject receiver, tSymbol message)
{
    tClass c                    = CLASS_OF(receiver);
    tIdentityDictionary methods = c->methods;
    if (CLASS_OF(methods) != &IdentityDictionary) {
        return NULL;
    }
    return (tMethod)IdentityDictionary_lookup(methods, (tObject)message);
}

/* ======================================================================= */

tObject basicNew(tBehavior b) {
    long _h = b->instanceHeader >> 1;
    tHeader h = *(tHeader*)&_h;
    tObject result;
    if (h.variable) {
        result = (tObject)GC_MALLOC(sizeof(void**) * (h.base + 3)) + 3;
        result[-3] = (tObject)0;
    } else {
        result = (tObject)GC_MALLOC(sizeof(void**) * (h.base + 2)) + 2;
    }
    result[-2] = (tObject)b;
    result[-1] = (tObject)_h;
    return result;
}

tObject basicNew_(tBehavior b, long tagged_size) {
    if (!(tagged_size & 1)) {
        PINOCCHIO_FAIL("Invalid size type given, expects SmallInteger");
    }
    long size = tagged_size >> 1;
    long _h   = b->instanceHeader >> 1;
    tHeader h = *(tHeader*)&_h;
    tObject result;
    if (h.variable) {
        result = (tObject)GC_MALLOC(sizeof(void**) * (size + h.base + 3)) + 3;
        result[-3] = (tObject)size;
    } else {
        PINOCCHIO_FAIL("Trying to instantiate non-variable-sized class");
    }
    result[-2] = (tObject)b;
    result[-1] = (tObject)_h;
    return result;
}
