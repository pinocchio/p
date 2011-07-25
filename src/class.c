#include <pinocchio.h>
#include <string.h>

/* ======================================================================= */

static long bucket_index(tIdentityDictionary dictionary, tObject key)
{
    tBucketArray buckets = dictionary->buckets;
    if (SIZE(buckets) == 1) {
        return 0;
    } else {
        return HASH(key) % SIZE(buckets);
    }
}

tObject IdentityDictionary_lookup(tIdentityDictionary dictionary, tObject key)
{
    long bucket_idx = bucket_index(dictionary, key);
    tBucket bucket  = dictionary->buckets[bucket_idx];

    uns_int i;
    uns_int limit = DEC_INT(bucket->tally);
    tObject * value = bucket->value;
    for (i = 0; i < limit; i = i+2) {
        if (value[i] == key) {
            return value[i+1];
        }
    }
    return NULL;
}

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
        result->value[-3] = (tObject)0;
    } else {
        result = (tObject)GC_MALLOC(sizeof(void**) * (h.base + 2)) + 2;
    }
    result->value[-2] = (tObject)b;
    result->value[-1] = (tObject)_h;
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
        result->value[-3] = (tObject)size;
    } else {
        PINOCCHIO_FAIL("Trying to instantiate non-variable-sized class");
    }
    result->value[-2] = (tObject)b;
    result->value[-1] = (tObject)_h;
    return result;
}
