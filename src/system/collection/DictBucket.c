#include <stdlib.h>
#include <stdio.h>
#include <system/collection/DictBucket.h>

/* ========================================================================= */

DECLARE_CLASS(Collection_DictBucket);

/* ========================================================================= */

Collection_DictBucket new_Collection_DictBucket_raw(uns_int size)
{
    NEW_ARRAY_OBJECT(Collection_DictBucket, Object[size]);
    result->size  = size;
    result->tally = new_Number_SmallInt(0);
    return result;
}

Collection_DictBucket new_Collection_DictBucket(uns_int size)
{
    Collection_DictBucket result = new_Collection_DictBucket_raw(size);
    int i;
    for (i = 0; i < size; i++) {
        result->values[i] = Nil;
    }
    return result;
}

void pre_init_Collection_DictBucket()
{
    Collection_DictBucket_Class =
        new_Class_named(Type_Object_Class,
                        L"Collection_DictBucket",
                        CREATE_ARRAY_TAG(COLLECTION_DICTBUCKET));
    REFER_TO(Collection_DictBucket);
}

/* ========================================================================= */

Collection_DictBucket new_bucket()
{
    return new_Collection_DictBucket(DICTIONARY_BUCKET_SIZE * 2);
}

static void Bucket_grow(Collection_DictBucket * bucketp)
{
    Collection_DictBucket old_bucket = *bucketp;
    Collection_DictBucket new_bucket = new_Collection_DictBucket_raw(old_bucket->size << 1);
    int i;
    for(i = 0; i < old_bucket->size; i++) {
        new_bucket->values[i] = old_bucket->values[i];
    }
    new_bucket->tally = old_bucket->tally;
    for(; i < new_bucket->size; i++) {
        new_bucket->values[i] = (Object)Nil;
    }
    *bucketp = new_bucket;
}

int Bucket_quick_compare_key(Object inkey, Object dictkey)
{
    if (HEADER(inkey) == Number_SmallInt_Class) {
        if (HEADER(dictkey) == Number_SmallInt_Class) {
            return ((Number_SmallInt)inkey)->value ==
                   ((Number_SmallInt)dictkey)->value;
        }
        return 0;
    }

    if (HEADER(inkey) == Type_Symbol_Class ||
        HEADER(inkey) == Type_String_Class) {
        if (HEADER(dictkey) == Type_Symbol_Class ||
            HEADER(dictkey) == Type_String_Class) {
            return Words_compare((Type_Symbol)inkey, (Type_Symbol)dictkey);
        }
        return 0;
    }
    return -1;
}

int Bucket_quick_store(Collection_DictBucket * bucketp, Object key, 
					   Object value)
{
    int i;
    Collection_DictBucket bucket = *bucketp;
    uns_int tally                = unwrap_int((Object)bucket->tally);
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
    bucket->tally           = new_Number_SmallInt(tally+2);
    
    return 1;
}

/* ========================================================================= */

static void Bucket_compare_key(Object inkey, Object dictkey)
{
    int result = Bucket_quick_compare_key(inkey, dictkey);

    if (result == -1) {
        return Type_Class_direct_dispatch(inkey, HEADER(inkey),
                                          (Object)SMB__equal, 1, dictkey);
    }
    push_EXP(get_bool(result));
}

void CNT_bucket_lookup()
{
    Object boolean               = peek_EXP(0);
    Collection_DictBucket bucket = (Collection_DictBucket)peek_EXP(1);
    uns_int idx                  = (uns_int)peek_EXP(2);
    
    if (boolean == (Object)True) {
        zapn_EXP(4);
        poke_EXP(0, bucket->values[idx + 1]);
        zap_CNT();
        return;
    }    

    idx += 2;

    uns_int tally = unwrap_int((Object)bucket->tally);
    if (idx >= tally) {
        zapn_EXP(4);
        poke_EXP(0, NULL);
        zap_CNT();
        return;
    }

    zap_EXP();

    Object key = peek_EXP(2);
    poke_EXP(1, idx);
    Bucket_compare_key(key, bucket->values[idx]);
}

static void bucket_do_store(Collection_DictBucket bucket, uns_int idx, 
							uns_int addition)
{
    Object value          = peek_EXP(3);
    bucket->values[idx+1] = value;
    bucket->tally         = new_Number_SmallInt(idx+2);
    zapn_EXP(3);
    poke_EXP(0, (Object)addition);
    zap_CNT();
}

static void bucket_store_new(Collection_DictBucket bucket, uns_int idx, 
						     Object key)
{
    bucket->values[idx] = key;
    bucket_do_store(bucket, idx, 1); 
}

static void CNT_Bucket_store()
{
    Object boolean       = pop_EXP();
    Collection_DictBucket * bucketp = (Collection_DictBucket *)peek_EXP(0);
    Collection_DictBucket bucket    = *bucketp;
    uns_int idx          = (uns_int)peek_EXP(1);

    if (boolean == (Object)True) {
        return bucket_do_store(bucket, idx, 0);
    }

    Object key = peek_EXP(2);
    idx       += 2;

    if (idx >= bucket->size) {
        Bucket_grow(bucketp);
        return bucket_store_new(*bucketp, idx, key);
    }

    uns_int tally = unwrap_int((Object)bucket->tally);
    if (idx >= tally) {
        return bucket_store_new(bucket, idx, key); 
    }

    poke_EXP(1, (Object)idx);
    Bucket_compare_key(key, bucket->values[idx]);
}

void Bucket_store_(Collection_DictBucket * bucketp, Object key, Object value)
{
    /* just store at the first empty location */
    Collection_DictBucket bucket = *bucketp;

    uns_int tally = unwrap_int((Object)bucket->tally);
    if (tally == 0) {
        bucket->values[0] = key;
        bucket->values[1] = value;
        bucket->tally     = new_Number_SmallInt(2);
        push_EXP((Object)1);
        return;
    }

    claim_EXP(4);
    poke_EXP(3, value);
    poke_EXP(2, key);
    poke_EXP(1, 0);
    poke_EXP(0, bucketp);
    push_CNT(Bucket_store);

    Bucket_compare_key(key, bucket->values[0]);
}

void Bucket_lookup(Collection_DictBucket bucket, Object key)
{
    uns_int tally = unwrap_int((Object)bucket->tally);
    if (tally == 0) {
        poke_EXP(0, NULL);
        return;
    }

    claim_EXP(3);
    poke_EXP(2, key);
    poke_EXP(1, 0);
    poke_EXP(0, bucket);
    push_CNT(bucket_lookup);
    Bucket_compare_key(key, bucket->values[0]);
}

static void CNT_bucket_rehash_end()
{
    uns_int idx                  = (uns_int)peek_EXP(0);
    Collection_DictBucket bucket = (Collection_DictBucket)peek_EXP(1);
    Object key                   = bucket->values[idx];
    idx += 2;

    uns_int tally = unwrap_int((Object)bucket->tally);
    if (idx >= tally) {
        zap_CNT();
        zapn_EXP(2);
        return;
    }
    
    key = bucket->values[idx];
    poke_CNT(bucket_rehash);
    poke_EXP(0, idx);
    push_hash(key);
}

void CNT_bucket_rehash()
{
    Object w_hash        = pop_EXP();
    Collection_Dictionary dict = (Collection_Dictionary)peek_EXP(2);
    int hash             = unwrap_hash(dict, w_hash);

    uns_int idx          = (uns_int)peek_EXP(0);
    Collection_DictBucket bucket    = (Collection_DictBucket)peek_EXP(1);
    Object key           = bucket->values[idx];

    poke_CNT(bucket_rehash_end);
    Collection_Dictionary_direct_store(dict, hash, key, bucket->values[idx + 1]);
}

/* ========================================================================= */

// NATIVES GO HERE

/* ========================================================================= */

void post_init_Collection_DictBucket()
{

}
