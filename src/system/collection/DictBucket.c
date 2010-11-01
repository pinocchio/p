#include <stdlib.h>
#include <stdio.h>
#include <system/collection/DictBucket.h>

/* ========================================================================= */

DECLARE_CLASS(DictBucket);

/* ========================================================================= */

DictBucket new_DictBucket_raw(uns_int size)
{
    NEW_ARRAY_OBJECT(DictBucket, Optr[size]);
    SET_SIZE(result, size);
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
    uns_int size = GET_SIZE(old_bucket);
    DictBucket new_bucket = new_DictBucket_raw(size << 1);
    long i;
    for(i = 0; i < size; i++) {
        new_bucket->values[i] = old_bucket->values[i];
    }
    new_bucket->tally = old_bucket->tally;
    for(; i < GET_SIZE(new_bucket); i++) {
        new_bucket->values[i] = nil;
    }
    *bucketp = new_bucket;
}

long Bucket_quick_compare_key(Optr inkey, Optr dictkey)
{
    if (inkey == dictkey) {
        return 1;
    }

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
    uns_int tally     = bucket->tally;

    for (i = 0; i < tally; i = i+2) {
        if (key == bucket->values[i]) {
            bucket->values[i+1] = value;
            return 0;
        }
    }    

    for (i = 0; i < tally; i = i+2) {
        switch (Bucket_quick_compare_key(key, bucket->values[i]))
        {
            case -1: assert1(NULL, "Invalid key for quickstore!\n");
            case 1:
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

/* ========================================================================= */

void post_init_DictBucket()
{
    change_slot_type(DictBucket_Class, UintSlot_Class, 1, 0);
}

void late_init_DictBucket()
{
#ifdef DICT_NONATIVE
	// remove all the additional natives from the DICT class
	Eval_Send0((Optr)DictBucket_Class, new_Symbol(L"removeNatives"));
#endif
}
