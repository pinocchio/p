#include <stdlib.h>
#include <stdio.h>
#include <system/collection/IdentityDictionary.h>

/* ========================================================================= */

DECLARE_CLASS(IdentityDictionary);

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
        hash = ((uns_int)key) >> 3;
    }
    hash %= GET_SIZE(self->data);
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
    if (GET_SIZE(old) == 1) {
        self->data = new_Array_withAll(32, nil);
        self->linear = false;
    } else {
        self->data = new_Array_withAll(GET_SIZE(old) << 1, nil);
    }
    uns_int i;
    for (i = 0; i < GET_SIZE(old); i++) {
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


/* ========================================================================= */
// TODO make sure to use IdentityDictBuckets rather than DictBuckets!
// Currently it breaks interpreted code!
/* ========================================================================= */

long IdentityBucket_store(DictBucket * bucketp, Optr key, Optr value)
{
    long i;
    DictBucket bucket = *bucketp;
    uns_int tally     = bucket->tally;
    for (i = 0; i < tally; i = i+2) {
        if (key == bucket->values[i]) {
            bucket->values[i+1] = value;
            return 0;
        }
    }

    if (tally == GET_SIZE(bucket)) {
        Bucket_grow(bucketp);
        bucket = *bucketp;
    }

    bucket->values[tally]   = key;
    bucket->values[tally+1] = value;
    bucket->tally           = tally+2;

    return 1;
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
    if (IdentityBucket_store(bucketp, key, value)) {
        IdentityDictionary_check_grow(self);
    }
}

NATIVE2(IdentityDictionary_at_put_)
    Optr key   = NATIVE_ARG(0);
    Optr value = NATIVE_ARG(1);
    IdentityDictionary_store((IdentityDictionary)self, key, value);
    RETURN_FROM_NATIVE(value);
}

NATIVE2(IdentityDictionary_at_ifAbsent_)
    Optr key   = NATIVE_ARG(0);
    Optr result = IdentityDictionary_lookup((IdentityDictionary)self, key);
    if (result) {
        RETURN_FROM_NATIVE(result);
        return;
    }
    Optr block = NATIVE_ARG(1);
    ZAP_NATIVE_INPUT();
    PUSH_EXP(block);
    apply(block, 0);
}

void post_init_IdentityDictionary()
{
    PLUGIN natives = add_plugin(L"Collection.IdentityDictionary");
    store_native(natives, L"at:put:",      NM_IdentityDictionary_at_put_);
    store_native(natives, L"at:ifAbsent:", NM_IdentityDictionary_at_ifAbsent_);
    //store_native(natives, L"includesKey:", NM_IdentityDictionary_includesKey_);
    //store_native(natives, L"grow",         NM_IdentityDictionary_grow);
}
