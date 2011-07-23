#include <pinocchio.h>
#include <math.h>

/* ======================================================================= */

static uns_int bucket_index(tIdentityDictionary dictionary, tObject key)
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
    uns_int bucket_idx = bucket_index(dictionary, key);
    tBucket bucket     = dictionary->buckets[bucket_idx];

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
