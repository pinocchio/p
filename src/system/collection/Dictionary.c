#include <stdlib.h>
#include <stdio.h>
#include <system/collection/Dictionary.h>

/* ========================================================================= */

DECLARE_CLASS(Dictionary);

/* ========================================================================= */

Dictionary new_Dictionary()
{
    NEW_OBJECT(Dictionary);
    result->size      = 0;
    result->ratio     = 500;
    result->maxLinear = 20;
    result->data      = new_Array_withAll(DICTIONARY_SIZE, nil);
    return result;
}

/* ========================================================================= */

static long get_hash(Dictionary self, Optr key)
{
    long hash;
    Optr tag = GETTAG(key);
    if (TAG_IS_LAYOUT(tag, Words)) {
        hash = Symbol_hash((Symbol)key)->value;
    } else if (TAG_IS_LAYOUT(tag, Int)) { 
        hash = ((SmallInt)key)->value;
    } else {
        assert1(NULL, "Quick dictionaries only support ints and strings!");
        // make the compiler happy :)
        return 0;
    }
    hash %= self->data->size;
    return hash;
}

void push_hash(Optr key)
{
    SmallInt hash;
    Optr tag = GETTAG(key);
    if (TAG_IS_LAYOUT(tag, Words)) {
        hash = Symbol_hash((Symbol)key);
    } else if (TAG_IS_LAYOUT(tag, Int)) { 
        hash = (SmallInt)key;
    } else {
        return Class_direct_dispatch(key, HEADER(key), (Optr)SMB_hash, 0);
    }
    PUSH_EXP(hash);
}

long unwrap_hash(Dictionary self, Optr w_hash)
{
    return unwrap_int(w_hash) % self->data->size;
}


static DictBucket * get_bucketp(Dictionary dictionary, long hash)
{
    return (DictBucket *)&dictionary->data->values[hash];
}

/* ========================================================================= *
 * Quick dictionary functions. Only for bootstrapping.                       *
 * ========================================================================= */

static long Dictionary_grow_check(Dictionary self)
{
    uns_int amount = self->size + 1;
    self->size     = amount;
    uns_int size   = self->data->size;
    return (100 * amount) / size > self->ratio;
}

static void Dictionary_quick_check_grow(Dictionary self)
{
    if (!Dictionary_grow_check(self)) { return; }

    Array old = self->data;
    self->data     = new_Array_withAll(old->size << 1, (Optr)nil);
    self->size     = 0;
    long i;
    for (i = 0; i < old->size; i++) {
        DictBucket bucket = (DictBucket)old->values[i];
        if (bucket == (DictBucket)nil) { continue; }
        long j;
        uns_int tally = bucket->tally;
        for (j = 0; j < tally; j=j+2) {
            Optr key = bucket->values[j];
            Dictionary_quick_store(self, key, bucket->values[j+1]);
        }
        
    }
}

void Dictionary_quick_store(Dictionary self,
                                 Optr key, Optr value)
{
    assert0(self != (Dictionary)nil);
    long hash = get_hash(self, key);
    DictBucket * bucketp = get_bucketp(self, hash);
    if (*bucketp == (DictBucket)nil) {
        *bucketp                     = new_bucket();
        DictBucket bucket = *bucketp;
        bucket->values[0]            = key;
        bucket->values[1]            = value;
        bucket->tally                = 2;
        return Dictionary_quick_check_grow(self);
    }
    if (Bucket_quick_store(bucketp, key, value)) {
        Dictionary_quick_check_grow(self);
    }
}

Optr Dictionary_quick_lookup(Dictionary self, Optr key)
{
    long hash = get_hash(self, key);
    DictBucket * bucketp = get_bucketp(self, hash);
    DictBucket bucket = *bucketp;
    if (bucket == (DictBucket)nil) {
        return NULL;
    }
    long i;
    uns_int tally = bucket->tally;
    for (i = 0; i < tally; i=i+2) {
        switch (Bucket_quick_compare_key(key, bucket->values[i]))
        {
            case -1: assert1(NULL, "Invalid key for quickstore!\n");
            case 1:
                return bucket->values[i+1];
        }
    }
    return NULL;
}

/* ========================================================================= */

static CNT(lookup_push)
    Optr w_hash              = PEEK_EXP(0);
    Dictionary self = (Dictionary)PEEK_EXP(2);
    long hash                   = unwrap_hash(self, w_hash);
    Optr key                 = PEEK_EXP(1);
    ZAPN_EXP(2);

    DictBucket * bucketp = get_bucketp(self, hash);
    if (*bucketp == (DictBucket)nil) {
        POKE_EXP(0, NULL);
        return;
    }
    Bucket_lookup(*bucketp, key);
}

void Dictionary_lookup_push(Dictionary self, Optr key)
{
    PUSH_CNT(lookup_push);
    CLAIM_EXP(2);
    POKE_EXP(1, self);
    POKE_EXP(0, key);
    push_hash(key);
}

static CNT(dict_grow_end)
    ZAPN_EXP(3);
}

static void CNT_dict_grow()
{
    uns_int idx    = (uns_int)PEEK_EXP(1);
    Array old = (Array)PEEK_EXP(2);
    DictBucket bucket  = (DictBucket)old->values[idx];
    if (idx == 0) {
        POKE_CNT(dict_grow_end);
    } else {
        POKE_EXP(1, idx - 1);
    }
    if (bucket == (DictBucket)nil || bucket->size == 0) {
        return;
    }
    Optr key = bucket->values[0];
    if (key == (Optr)nil) { return; }

    PUSH_CNT(bucket_rehash);
    CLAIM_EXP(2);
    POKE_EXP(1, bucket);
    POKE_EXP(0, 0);

    push_hash(key);
}

static void Dictionary_grow(Dictionary self)
{
    Array old = self->data;
    self->data     = new_Array_withAll(old->size << 1, (Optr)nil);
    self->size     = 0;
    
    PUSH_CNT(dict_grow);
    CLAIM_EXP(3);
    POKE_EXP(2, old);
    POKE_EXP(1, old->size - 1);
    POKE_EXP(0, self);
}

static void Dictionary_check_grow(Dictionary self)
{
    if (Dictionary_grow_check(self)) {
        Dictionary_grow(self);
    }
}

static CNT(Dictionary_check_grow)
    // Check if new element
    Optr test = pop_EXP();
    if (test) {
        Dictionary self = (Dictionary)pop_EXP();
        Dictionary_check_grow(self);
    } else {
        ZAP_EXP();
    }
}

void Dictionary_direct_store(Dictionary self, long hash,
                                  Optr key, Optr value) 
{
    DictBucket * bucketp = get_bucketp(self, hash);
    if (*bucketp == (DictBucket)nil) { 
        *bucketp                     = new_bucket();
        DictBucket bucket = *bucketp;
        bucket->values[0]            = key;
        bucket->values[1]            = value;
        bucket->tally                = 2;
        Dictionary_check_grow(self);
    } else {
        PUSH_EXP((Optr)self);
        PUSH_CNT(Dictionary_check_grow);
        Bucket_store_(bucketp, key, value);
    }
}

/* ========================================================================= */

static CNT(fix_dictionary_result)
    if (PEEK_EXP(0) == NULL) {
        POKE_EXP(0, nil);
    }
}

static CNT(dictionary_check_absent)
    Optr result = pop_EXP();
    if (result == NULL) {
        Optr block = pop_EXP();
        Class_direct_dispatch(block, HEADER(block), (Optr)SMB_value, 0); 
        return;
    }
    POKE_EXP(0, result);
}

NATIVE1(Dictionary_at_)
    Optr w_index = NATIVE_ARG(0);
    ZAPN_EXP(3);
    PUSH_CNT(fix_dictionary_result);
    Dictionary_lookup_push((Dictionary)self, w_index);
}

NATIVE2(Dictionary_at_ifAbsent_)
    Optr w_index = NATIVE_ARG(0);
    Optr w_block = NATIVE_ARG(1);
    ZAPN_EXP(4);
    PUSH_EXP(w_block);
    PUSH_CNT(dictionary_check_absent);
    Dictionary_lookup_push((Dictionary)self, w_index);
}

CNT(Dictionary_at_put_)
    Optr w_hash              = PEEK_EXP(0);
    Dictionary self = (Dictionary)PEEK_EXP(3);
    long hash                   = unwrap_hash(self, w_hash);
    Optr new                 = PEEK_EXP(1);
    Optr w_index             = PEEK_EXP(2);
    ZAPN_EXP(4);
    POKE_EXP(0, new);
    Dictionary_direct_store((Dictionary)self, hash, w_index, new);
}

NATIVE2(Dictionary_at_put_)
    PUSH_CNT(Dictionary_at_put_);
    push_hash(NATIVE_ARG(0));
}

static CNT(native_grow_end)
    Optr self = pop_EXP();
    POKE_EXP(0, self);
}

NATIVE(Dictionary_grow)
    PUSH_CNT(native_grow_end);
    PUSH_EXP(self);
    Dictionary_grow((Dictionary)self);
}

void post_init_Dictionary()
{
    change_slot_type(Dictionary_Class, UIntSlot_Class, 3, 0,1,2);

    Dictionary natives = add_plugin(L"Collection.Dictionary");
    store_native(natives, SMB_at_put_,      NM_Dictionary_at_put_);
    store_native(natives, SMB_at_,          NM_Dictionary_at_);
    store_native(natives, SMB_at_ifAbsent_, NM_Dictionary_at_ifAbsent_);
    store_native(natives, SMB_grow,         NM_Dictionary_grow);
}
