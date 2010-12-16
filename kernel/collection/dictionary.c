#include <pinocchio.h>

/* ======================================================================= */
Class Dictionary_class;
Class BucketArray_class;
/* ======================================================================= */

Dictionary new_Dictionary()
{
    NEW_OBJECT(Dictionary);
    result->size      = new_SmallInteger(0);
    result->ratio     = new_SmallInteger(500);
    result->maxLinear = new_SmallInteger(20);
    // result->data      = new_Array_withAll(1, (Optr)new_Bucket(20 << 1));
    result->linear    = true;
    return result;
}

/* ======================================================================= */

static long Dictionary_hash(Dictionary dictionary, Object key)
{
    return 0;
}

Object Dictionary_quick_lookup(Dictionary dictionary, Object key)
{
    long hash        = Dictionary_hash(dictionary, key);
    Bucket * bucketp = &dictionary->buckets->bucket[hash];
    Bucket bucket    = *bucketp;
    if (bucket == (Bucket)nil) {
        return NULL;
    }
    long i;
    uns_int tally = bucket->tally->value;
    for (i = 0; i < tally; i=i+2) {
        if (key == bucket->value[i]) {
            return bucket->value[i+1];
        }
    }
    for (i = 0; i < tally; i=i+2) {
        switch (Bucket_quick_compare_key(key, bucket->value[i]))
        {
            case -1: assert1(NULL, "Invalid key for quickstore!\n");
            case 1:
                return bucket->value[i+1];
        }
    }
    return NULL;
}

static void Dictionary_quick_check_grow(Dictionary dictionary)
{
}

void Dictionary_quick_store(Dictionary dictionary, Object key, Object value)
{
    assert0(dictionary != (Dictionary)nil);
    long hash = Dictionary_hash(dictionary, key);
    Bucket * bucketp = &dictionary->buckets->bucket[hash];
    if (*bucketp == (Bucket)nil) {
        *bucketp         = new_Bucket();
        Bucket bucket    = *bucketp;
        bucket->value[0] = key;
        bucket->value[1] = value;
        bucket->tally    = new_SmallInteger(2);
        return Dictionary_quick_check_grow(dictionary);
    }
    if (Bucket_quick_store(bucketp, key, value)) {
        Dictionary_quick_check_grow(dictionary);
    }
}
