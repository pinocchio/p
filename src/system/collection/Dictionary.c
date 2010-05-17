#include <stdlib.h>
#include <stdio.h>
#include <system/collection/Dictionary.h>

/* ========================================================================= */

DECLARE_CLASS(Collection_Dictionary);

/* ========================================================================= */

Collection_Dictionary new_Collection_Dictionary()
{
    NEW_OBJECT(Collection_Dictionary);
    result->size      = new_Number_SmallInt(0);
    result->ratio     = new_Number_SmallInt(500);
    result->maxLinear = new_Number_SmallInt(20);
    result->data      = new_Collection_Array_withAll(DICTIONARY_SIZE, Nil);
    return result;
}

void pre_init_Collection_Dictionary()
{
    Collection_Dictionary_Class = new_Class(Type_Object_Class,
                                      CREATE_OBJECT_TAG(COLLECTION_DICTIONARY));
    REFER_TO(Collection_Dictionary);
}

/* ========================================================================= */

static int get_hash(Collection_Dictionary self, Object key)
{
    int hash;
    Object tag = GETTAG(key);
    if (TAG_IS_LAYOUT(tag, Words)) {
        hash = Type_Symbol_hash((Type_Symbol)key)->value;
    } else if (TAG_IS_LAYOUT(tag, Int)) { 
        hash = ((Number_SmallInt)key)->value;
    } else {
        assert1(NULL, "Quick dictionaries only support ints and strings!");
        // make the compiler happy :)
        return 0;
    }
    hash %= self->data->size;
    return hash;
}

void push_hash(Object key)
{
    Number_SmallInt hash;
    Object tag = GETTAG(key);
    if (TAG_IS_LAYOUT(tag, Words)) {
        hash = Type_Symbol_hash((Type_Symbol)key);
    } else if (TAG_IS_LAYOUT(tag, Int)) { 
        hash = (Number_SmallInt)key;
    } else {
        return Type_Class_direct_dispatch(key, HEADER(key), (Object)SMB_hash, 0);
    }
    push_EXP(hash);
}

int unwrap_hash(Collection_Dictionary self, Object w_hash)
{
    return unwrap_int(w_hash) % self->data->size;
}


static Collection_DictBucket * get_bucketp(Collection_Dictionary dictionary, int hash)
{
    return (Collection_DictBucket *)&dictionary->data->values[hash];
}

/* ========================================================================= *
 * Quick dictionary functions. Only for bootstrapping.                       *
 * ========================================================================= */

static int Collection_Dictionary_grow_check(Collection_Dictionary self)
{
    uns_int amount = unwrap_int((Object)self->size) + 1;
    self->size     = new_Number_SmallInt(amount);
    uns_int size   = self->data->size;
    return (100 * amount) / size > unwrap_int((Object)self->ratio);
}

static void Collection_Dictionary_quick_check_grow(Collection_Dictionary self)
{
    if (!Collection_Dictionary_grow_check(self)) { return; }

    Collection_Array old = self->data;
    self->data     = new_Collection_Array_withAll(old->size << 1, (Object)Nil);
    self->size     = new_Number_SmallInt(0);
    int i;
    for (i = 0; i < old->size; i++) {
        Collection_DictBucket bucket = (Collection_DictBucket)old->values[i];
        if (bucket == (Collection_DictBucket)Nil) { continue; }
        int j;
        uns_int tally = unwrap_int((Object)bucket->tally);
        for (j = 0; j < tally; j=j+2) {
            Object key = bucket->values[j];
            Collection_Dictionary_quick_store(self, key, bucket->values[j+1]);
        }
        
    }
}

void Collection_Dictionary_quick_store(Collection_Dictionary self,
                                 Object key, Object value)
{
    int hash = get_hash(self, key);
    Collection_DictBucket * bucketp = get_bucketp(self, hash);
    if (*bucketp == (Collection_DictBucket)Nil) {
        *bucketp                     = new_bucket();
        Collection_DictBucket bucket = *bucketp;
        bucket->values[0]            = key;
        bucket->values[1]            = value;
        bucket->tally                = new_Number_SmallInt(2);
        return Collection_Dictionary_quick_check_grow(self);
    }
    if (Bucket_quick_store(bucketp, key, value)) {
        Collection_Dictionary_quick_check_grow(self);
    }
}

Object Collection_Dictionary_quick_lookup(Collection_Dictionary self, Object key)
{
    int hash = get_hash(self, key);
    Collection_DictBucket * bucketp = get_bucketp(self, hash);
    Collection_DictBucket bucket = *bucketp;
    if (bucket == (Collection_DictBucket)Nil) {
        return NULL;
    }
    int i;
    uns_int tally = unwrap_int((Object)bucket->tally);
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
    Object w_hash              = peek_EXP(0);
    Collection_Dictionary self = (Collection_Dictionary)peek_EXP(2);
    int hash                   = unwrap_hash(self, w_hash);
    Object key                 = peek_EXP(1);
    zapn_EXP(2);

    Collection_DictBucket * bucketp = get_bucketp(self, hash);
    if (*bucketp == (Collection_DictBucket)Nil) {
        poke_EXP(0, NULL);
        return;
    }
    Bucket_lookup(*bucketp, key);
}

void Collection_Dictionary_lookup_push(Collection_Dictionary self, Object key)
{
    push_CNT(lookup_push);
    claim_EXP(2);
    poke_EXP(1, self);
    poke_EXP(0, key);
    push_hash(key);
}

static CNT(dict_grow_end)
    zapn_EXP(3);
}

static void CNT_dict_grow()
{
    uns_int idx    = (uns_int)peek_EXP(1);
    Collection_Array old = (Collection_Array)peek_EXP(2);
    Collection_DictBucket bucket  = (Collection_DictBucket)old->values[idx];
    if (idx == 0) {
        poke_CNT(dict_grow_end);
    } else {
        poke_EXP(1, idx - 1);
    }
    if (bucket == (Collection_DictBucket)Nil || bucket->size == 0) {
        return;
    }
    Object key = bucket->values[0];
    if (key == (Object)Nil) { return; }

    push_CNT(bucket_rehash);
    claim_EXP(2);
    poke_EXP(1, bucket);
    poke_EXP(0, 0);

    push_hash(key);
}

static void Collection_Dictionary_grow(Collection_Dictionary self)
{
    Collection_Array old = self->data;
    self->data     = new_Collection_Array_withAll(old->size << 1, (Object)Nil);
    self->size     = new_Number_SmallInt(0);
    
    push_CNT(dict_grow);
    claim_EXP(3);
    poke_EXP(2, old);
    poke_EXP(1, old->size - 1);
    poke_EXP(0, self);
}

static void Collection_Dictionary_check_grow(Collection_Dictionary self)
{
    if (Collection_Dictionary_grow_check(self)) {
        Collection_Dictionary_grow(self);
    }
}

static CNT(Collection_Dictionary_check_grow)
    // Check if new element
    Object test = pop_EXP();
    if (test) {
        Collection_Dictionary self = (Collection_Dictionary)pop_EXP();
        Collection_Dictionary_check_grow(self);
    } else {
        zap_EXP();
    }
}

void Collection_Dictionary_direct_store(Collection_Dictionary self, int hash,
                                  Object key, Object value) 
{
    Collection_DictBucket * bucketp = get_bucketp(self, hash);
    if (*bucketp == (Collection_DictBucket)Nil) { 
        *bucketp                     = new_bucket();
        Collection_DictBucket bucket = *bucketp;
        bucket->values[0]            = key;
        bucket->values[1]            = value;
        bucket->tally                = new_Number_SmallInt(2);
        Collection_Dictionary_check_grow(self);
    } else {
        push_EXP((Object)self);
        push_CNT(Collection_Dictionary_check_grow);
        Bucket_store_(bucketp, key, value);
    }
}

/* ========================================================================= */

static CNT(fix_dictionary_result)
    if (peek_EXP(0) == NULL) {
        poke_EXP(0, Nil);
    }
}

static CNT(dictionary_check_absent)
    Object result = pop_EXP();
    if (result == NULL) {
        Object block = pop_EXP();
        Type_Class_direct_dispatch(block, HEADER(block), (Object)SMB_value, 0); 
        return;
    }
    poke_EXP(0, result);
}

NATIVE1(Collection_Dictionary_at_)
    Object w_index = NATIVE_ARG(0);
    zapn_EXP(3);
    push_CNT(fix_dictionary_result);
    Collection_Dictionary_lookup_push((Collection_Dictionary)self, w_index);
}

NATIVE2(Collection_Dictionary_at_ifAbsent_)
    Object w_index = NATIVE_ARG(0);
    Object w_block = NATIVE_ARG(1);
    zapn_EXP(4);
    push_EXP(w_block);
    push_CNT(dictionary_check_absent);
    Collection_Dictionary_lookup_push((Collection_Dictionary)self, w_index);
}

CNT(Collection_Dictionary_at_put_)
    Object w_hash              = peek_EXP(0);
    Collection_Dictionary self = (Collection_Dictionary)peek_EXP(3);
    int hash                   = unwrap_hash(self, w_hash);
    Object new                 = peek_EXP(1);
    Object w_index             = peek_EXP(2);
    zapn_EXP(4);
    poke_EXP(0, new);
    Collection_Dictionary_direct_store((Collection_Dictionary)self, hash, w_index, new);
}

NATIVE2(Collection_Dictionary_at_put_)
    push_CNT(Collection_Dictionary_at_put_);
    push_hash(NATIVE_ARG(0));
}

static CNT(native_grow_end)
    Object self = pop_EXP();
    poke_EXP(0, self);
}

NATIVE(Collection_Dictionary_grow)
    push_CNT(native_grow_end);
    push_EXP(self);
    Collection_Dictionary_grow((Collection_Dictionary)self);
}

void post_init_Collection_Dictionary()
{
    Collection_Dictionary_Class->name = new_Type_Symbol_cached(L"Dictionary");
    HEADER(Collection_Dictionary_Class->methods) = Collection_Dictionary_Class;
    HEADER(HEADER(Collection_Dictionary_Class)->methods) = Collection_Dictionary_Class;

    Collection_Dictionary natives = add_plugin(L"Collection.Dictionary");
    store_native(natives, SMB_at_put_,      NM_Collection_Dictionary_at_put_);
    store_native(natives, SMB_at_,          NM_Collection_Dictionary_at_);
    store_native(natives, SMB_at_ifAbsent_, NM_Collection_Dictionary_at_ifAbsent_);
    store_native(natives, SMB_grow,         NM_Collection_Dictionary_grow);
}
