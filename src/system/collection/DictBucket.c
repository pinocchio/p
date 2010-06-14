#include <stdlib.h>
#include <stdio.h>
#include <system/collection/DictBucket.h>

/* ========================================================================= */

DECLARE_CLASS(DictBucket);

/* ========================================================================= */

DictBucket new_DictBucket_raw(uns_int size)
{
    NEW_ARRAY_OBJECT(DictBucket, Optr[size]);
    result->size  = size;
    result->tally = 0;
    return result;
}

DictBucket new_DictBucket(uns_int size)
{
    DictBucket result = new_DictBucket_raw(size);
    long i;
    for (i = 0; i < size; i++) {
        result->values[i] = nil;
    }
    return result;
}

/* ========================================================================= */

DictBucket new_bucket()
{
    return new_DictBucket(DICTIONARY_BUCKET_SIZE * 2);
}

void Bucket_grow(DictBucket * bucketp)
{
    DictBucket old_bucket = *bucketp;
    DictBucket new_bucket = new_DictBucket_raw(old_bucket->size << 1);
    long i;
    for(i = 0; i < old_bucket->size; i++) {
        new_bucket->values[i] = old_bucket->values[i];
    }
    new_bucket->tally = old_bucket->tally;
    for(; i < new_bucket->size; i++) {
        new_bucket->values[i] = (Optr)nil;
    }
    *bucketp = new_bucket;
}

long Bucket_quick_compare_key(Optr inkey, Optr dictkey)
{
    if (HEADER(inkey) == SmallInt_Class) {
        if (HEADER(dictkey) == SmallInt_Class) {
            return ((SmallInt)inkey)->value ==
                   ((SmallInt)dictkey)->value;
        }
        return 0;
    }

    if (HEADER(inkey) == Symbol_Class ||
        HEADER(inkey) == String_Class) {
        if (HEADER(dictkey) == Symbol_Class ||
            HEADER(dictkey) == String_Class) {
            return Words_compare((Symbol)inkey, (Symbol)dictkey);
        }
        return 0;
    }
    return -1;
}

long Bucket_quick_store(DictBucket * bucketp, Optr key, 
					   Optr value)
{
    long i;
    DictBucket bucket = *bucketp;
    uns_int tally                = bucket->tally;
    for (i = 0; i < tally; i = i+2) {
        switch (Bucket_quick_compare_key(key, bucket->values[i]))
        {
            case -1: assert1(NULL, "Invalid key for quickstore!\n");
            case 1:
                bucket->values[i+1] = value;
                return 0;
        }
    }
    if (tally == bucket->size) {
        Bucket_grow(bucketp);
        bucket = *bucketp;
    }
    bucket->values[tally]   = key;
    bucket->values[tally+1] = value;
    bucket->tally           = tally+2;
    
    return 1;
}

/* ========================================================================= */

static void Bucket_compare_key(Optr inkey, Optr dictkey)
{
    long result = Bucket_quick_compare_key(inkey, dictkey);

    if (result == -1) {
        return Class_direct_dispatch(inkey, HEADER(inkey),
                                          (Optr)SMB__equal, 1, dictkey);
    }
    PUSH_EXP(get_bool(result));
}

static void bucket_do_store(DictBucket bucket, uns_int idx, 
							uns_int addition)
{
    Optr value            = PEEK_EXP(3);
    bucket->values[idx+1] = value;
    bucket->tally         = idx+2;
    ZAPN_EXP(3);
    POKE_EXP(0, (Optr)addition);
    ZAP_CNT();
}

static void bucket_store_new(DictBucket bucket, uns_int idx, 
						     Optr key)
{
    bucket->values[idx] = key;
    bucket_do_store(bucket, idx, 1); 
}

static void CNT_Bucket_store()
{
    Optr boolean         = pop_EXP();
    DictBucket * bucketp = (DictBucket *)PEEK_EXP(0);
    DictBucket bucket    = *bucketp;
    uns_int idx          = (uns_int)PEEK_EXP(1);

    if (boolean == (Optr)true) {
        return bucket_do_store(bucket, idx, 0);
    }

    Optr key = PEEK_EXP(2);
    idx       += 2;

    if (idx >= bucket->size) {
        Bucket_grow(bucketp);
        return bucket_store_new(*bucketp, idx, key);
    }

    uns_int tally = bucket->tally;
    if (idx >= tally) {
        return bucket_store_new(bucket, idx, key); 
    }

    POKE_EXP(1, (Optr)idx);
    Bucket_compare_key(key, bucket->values[idx]);
}

void Bucket_store_(DictBucket * bucketp, Optr key, Optr value)
{
    /* just store at the first empty location */
    DictBucket bucket = *bucketp;

    uns_int tally = bucket->tally;
    if (tally == 0) {
        bucket->values[0] = key;
        bucket->values[1] = value;
        bucket->tally     = 2;
        PUSH_EXP((Optr)1);
        return;
    }

    CLAIM_EXP(4);
    POKE_EXP(3, value);
    POKE_EXP(2, key);
    POKE_EXP(1, 0);
    POKE_EXP(0, bucketp);
    PUSH_CNT(Bucket_store);

    Bucket_compare_key(key, bucket->values[0]);
}


/* ========================================================================= */

void post_init_DictBucket()
{
    change_slot_type(DictBucket_Class, UIntSlot_Class, 1, 0);
}
