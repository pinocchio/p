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

Optr IdentityDictionary_quick_lookup(IdentityDictionary self, Optr key)
{
    long hash            = get_identity_hash(self, key);
    DictBucket * bucketp = get_bucketp(self, hash);
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
