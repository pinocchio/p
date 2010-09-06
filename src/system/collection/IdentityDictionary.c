#include <stdlib.h>
#include <stdio.h>
#include <system/collection/IdentityDictionary.h>

/* ========================================================================= */

IdentityDictionary new_IdentityDictionary()
{
    NEW_OBJECT(IdentityDictionary);
    result->size      = 0;
    result->ratio     = new_SmallInt(500);
    result->maxLinear = new_SmallInt(20);
    result->data      = new_Array_withAll(1, (Optr)new_DictBucket(20 << 1));
    result->linear    = true;
    return result;
}

/* ========================================================================= */

static long get_identity_hash(IdentityDictionary self, Optr key)
{
    long hash;
    if (HEADER(key) == Symbol_Class) {
        hash = Symbol_hash((Symbol)key)->value;
    } else if (HEADER(key) == SmallInt_Class) { 
        hash = ((SmallInt)key)->value;
    } else {
        assert1(NULL,
            "IdentityDictionary currently only supports SmallInt and Symbol");
        // make the compiler happy :)
        return 0;
    }
    hash %= self->data->size;
    return hash;
}

Optr IdentityDictionary_lookup(IdentityDictionary self, Optr key)
{
    long hash            = get_identity_hash(self, key);
    DictBucket * bucketp = get_bucketp((Dictionary)self, hash);
    DictBucket bucket    = *bucketp;
    if (bucket == (DictBucket)nil) {
        return NULL;
    }
    long i;
    uns_int tally = bucket->tally;
    for (i = 0; i < tally; i=i+2) {
        if (key == bucket->values[i]) {
            return bucket->values[i+1];
        }
    }
    return NULL;
}

static void IdentityDictionary_check_grow(IdentityDictionary self)
{
    if (!Dictionary_grow_check((Dictionary)self)) { return; }

    Array old = self->data;
    if (old->size == 1) {
        self->data = new_Array_withAll(32, nil);
        self->linear = false;
    } else {
        self->data = new_Array_withAll(old->size << 1, nil);
    }
    uns_int i;
    for (i = 0; i < old->size; i++) {
        DictBucket bucket = (DictBucket)old->values[i];
        if (bucket == (DictBucket)nil) { continue; }
        self->data->values[i] = (Optr)bucket;
        uns_int j;
        for (j = 0; j < bucket->tally;) {
            Optr key = bucket->values[j];
            long hash = get_identity_hash(self, key);
            if (hash != i) {
                DictBucket * bucketp = get_bucketp((Dictionary)self, hash);
                add_to_bucket(bucketp, key, bucket->values[j+1]);
                remove_from_bucket(j, bucket);
            } else {
                j = j + 2;
            }
        }
    }
}

void IdentityDictionary_store(IdentityDictionary self,
                              Optr key, Optr value)
{
    assert0(self != (IdentityDictionary)nil);
    long hash = get_identity_hash(self, key);
    DictBucket * bucketp = get_bucketp((Dictionary)self, hash);
    if (*bucketp == (DictBucket)nil) {
        *bucketp          = new_bucket();
        DictBucket bucket = *bucketp;
        bucket->values[0] = key;
        bucket->values[1] = value;
        bucket->tally     = 2;
        return IdentityDictionary_check_grow(self);
    }
    if (Bucket_quick_store(bucketp, key, value)) {
        IdentityDictionary_check_grow(self);
    }
}

