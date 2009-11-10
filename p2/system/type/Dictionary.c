#include <stdlib.h>
#include <stdio.h>
#include <system/type/Dictionary.h>

/* ========================================================================= */

Type_Class Type_Dictionary_Class;

/* ========================================================================= */

Type_Dictionary new_Type_Dictionary()
{
    NEW_OBJECT(Type_Dictionary);
    result->size    = 0;
    result->ratio   = 0.6;
    result->layout  = new_Type_Array_withAll(DICTIONARY_SIZE, Nil);
    return result;
}

void pre_init_Type_Dictionary()
{
    Type_Dictionary_Class = new_Class_named((Object)Type_Object_Class,
                                            L"Type_Dictionary",
                                            CREATE_OBJECT_TAG(TYPE_DICTIONARY));
}

/* ========================================================================= */

static void Bucket_compare_key(Object key1, Object key2)
{
    if (key1 == key2) {
        push_EXP(True);
    } else {
        push_EXP(False);
        //printf("WARNING: Other types of equality not supported yet\n");
    }
}

void CNT_bucket_lookup()
{
    Object boolean = pop_EXP();
    Type_Array bucket = (Type_Array)peek_EXP(0);
    uns_int idx = (uns_int)peek_EXP(1);
    
    if (boolean == (Object)True) {
        zapn_EXP(2);
        poke_EXP(0, bucket->values[idx + 1]);
        zap_CNT();
        return;
    }    

    if (bucket->values[idx] == (Object)Nil) {
        zapn_EXP(2);
        poke_EXP(0, NULL);
        zap_CNT();
        return;
    }

    idx += 2;

    if (idx >= bucket->size) {
        zapn_EXP(2);
        poke_EXP(0, NULL);
        zap_CNT();
        return;
    }

    Object key = peek_EXP(2);
    poke_EXP(1, idx);
    Bucket_compare_key(key, bucket->values[idx]);
}

void Bucket_grow(Type_Array * bucketp)
{
    Type_Array old_bucket = *bucketp;
    Type_Array new_bucket = new_Type_Array_raw(old_bucket->size << 1);
    int i;
    for(i=0; i < old_bucket->size; i++) {
        new_bucket->values[i] = old_bucket->values[i];
    }
    for(; i < new_bucket->size; i++) {
        new_bucket->values[i] = (Object)Nil;
    }

    *bucketp = new_bucket;
}

static void bucket_do_store(Type_Array bucket, uns_int idx, uns_int addition)
{
    Object value = peek_EXP(3);
    bucket->values[idx+1] = value;
    zapn_EXP(3);
    poke_EXP(0, (Object)addition);
    zap_CNT();
}

static void bucket_store_new(Type_Array bucket, uns_int idx, Object key)
{
    bucket->values[idx] = key;
    bucket_do_store(bucket, idx, 1); 
}

static void CNT_Bucket_store()
{
    Object boolean = pop_EXP();
    Type_Array * bucketp = (Type_Array *)peek_EXP(0);
    Type_Array bucket = *bucketp;
    uns_int idx = (uns_int)peek_EXP(1);

    if (boolean == (Object)True) {
        return bucket_do_store(bucket, idx, 0);
    }

    Object key = peek_EXP(2);
    idx += 2;

    if (idx >= bucket->size) {
        Bucket_grow(bucketp);
        return bucket_store_new(*bucketp, idx, key);
    }

    if (bucket->values[idx] == Nil) {
        return bucket_store_new(bucket, idx, key); 
    }

    poke_EXP(1, (Object)idx);
    Bucket_compare_key(key, bucket->values[idx]);
}

void Bucket_store_(Type_Array * bucketp, Object key, Object value)
{
    /* just store at the first empty location */
    Type_Array bucket = *bucketp;

    if (bucket->values[0] == Nil) {
        bucket->values[0] = key;
        bucket->values[1] = value;
        push_EXP((Object)0);
        return;
    }

    push_EXP(value);
    push_EXP(key);
    push_EXP((Object)0);
    push_EXP((Object)bucketp);
    push_CNT(Bucket_store);

    Bucket_compare_key(key, bucket->values[0]);
}

Type_Array new_bucket()
{
    return new_Type_Array_withAll(DICTIONARY_BUCKET_SIZE * 2, Nil);
}

int get_hash(Type_Dictionary self, Object key)
{
    int hash;
    Object tag = GETTAG(key);
    if (TAG_IS_TYPE(tag, Words)) {
        hash = Type_Symbol_hash((Type_Symbol)key)->value;
    } else if (TAG_IS_TYPE(tag, Int)) { 
        hash = ((Type_SmallInt)key)->value;
    } else {
        printf("Got key: %p\n", key);
        print_Class(key);
        assert1(NULL, "Dictionary only supports SmallInt and Symbol as key\n");
    }
    hash %= self->layout->size;
    return hash;
}

/* ========================================================================= */

static Type_Array * get_bucketp(Type_Dictionary dictionary, int hash)
{
    return (Type_Array *)&dictionary->layout->values[hash];
}

static void Bucket_lookup(Type_Array bucket, Object key)
{
    if (bucket->values[0] == (Object)Nil) {
        push_EXP(NULL);
        return;
    }

    push_EXP(key);
    push_EXP(0);
    push_EXP(bucket);
    push_CNT(bucket_lookup);
    Bucket_compare_key(key, bucket->values[0]);
}

void Type_Dictionary_direct_lookup(Type_Dictionary self, int hash, Object key)
{
    Type_Array * bucketp = get_bucketp(self, hash);
    if (*bucketp == (Type_Array)Nil) {
        push_EXP(NULL);
        return;
    }
    Bucket_lookup(*bucketp, key);
}

void Type_Dictionary_lookup_push(Type_Dictionary self, Object key)
{
    int hash = get_hash(self, key);
    Type_Dictionary_direct_lookup(self, hash, key);
}

static void CNT_bucket_rehash()
{
    uns_int idx = (uns_int)peek_EXP(0);
    Type_Array bucket = (Type_Array)peek_EXP(1);
    if (idx < bucket->size) {
        // TODO do get_hash in tail-position
        Object key           = bucket->values[idx];
        if (key != (Object)Nil) {
            poke_EXP(0, idx + 2);
            Type_Dictionary dict = (Type_Dictionary)peek_EXP(2);
            int hash = get_hash(dict, key);
            return Type_Dictionary_direct_store(dict, hash, key, bucket->values[idx+1]);
        }
    }
    zapn_EXP(2);
    zap_CNT();
}

static CNT(dict_grow_end)
    zapn_EXP(3);
}

static void CNT_dict_grow()
{
    uns_int idx = (uns_int)peek_EXP(1);
    Type_Array old = (Type_Array)peek_EXP(2);
    Object bucket = old->values[idx];
    if (idx == 0) {
        poke_CNT(dict_grow_end);
    } else {
        poke_EXP(1, idx - 1);
    }
    if (bucket != (Object)Nil) {
        push_EXP(bucket);
        push_EXP(0);
        push_CNT(bucket_rehash);
    }
}

static void Type_Dictionary_grow(Type_Dictionary self)
{
    Type_Array old = self->layout;
    self->layout = new_Type_Array_withAll(old->size << 1, (Object)Nil);
    self->size = 0;
    
    push_CNT(dict_grow);
    push_EXP(old);
    push_EXP(old->size - 1);
    push_EXP(self);
}


static void Type_Dictionary_check_grow(Type_Dictionary self)
{
    self->size += 1;
    float amount = self->size;
    float size = self->layout->size;
    if (amount / size > self->ratio) {
        Type_Dictionary_grow(self);
    }
}

static CNT(Type_Dictionary_check_grow)
    // Check if new element
    Object test = pop_EXP();
    if (test) {
        Type_Dictionary self = (Type_Dictionary)pop_EXP();
        Type_Dictionary_check_grow(self);
    } else {
        zap_EXP();
    }
}

void Type_Dictionary_direct_store(Type_Dictionary self, int hash,
                                  Object key, Object value) 
{
    Type_Array * bucketp = get_bucketp(self, hash);
    if (*bucketp == (Type_Array)Nil) { 
        *bucketp = new_bucket();
        Type_Array bucket = *bucketp;
        bucket->values[0] = key;
        bucket->values[1] = value;
        Type_Dictionary_check_grow(self);
    } else {
        push_EXP((Object)self);
        push_CNT(Type_Dictionary_check_grow);
        Bucket_store_(bucketp, key, value);
    }
}

/* ========================================================================= */

CNT(fix_dictionary_result)
    if (peek_EXP(0) == NULL) {
        poke_EXP(0, Nil);
    }
}

NATIVE1(Type_Dictionary_at_)
    Object w_index = NATIVE_ARG(0);
    zapn_EXP(3);
    push_CNT(fix_dictionary_result);
    Type_Dictionary_lookup_push((Type_Dictionary)self, w_index);
}

NATIVE2(Type_Dictionary_at_put_)
    Object w_index = NATIVE_ARG(0);
    Object new = NATIVE_ARG(1);

    // Return before starting direct_store which manipulates the stack!
    RETURN_FROM_NATIVE(new);
    
    int hash = get_hash((Type_Dictionary)self, w_index);
    Type_Dictionary_direct_store((Type_Dictionary)self, hash, w_index, new);
}

// TODO create at ifAbsent put
/* ========================================================================= */

void post_init_Type_Dictionary()
{
    store_native_method(Type_Dictionary_Class, SMB_at_,     NM_Type_Dictionary_at_);
    store_native_method(Type_Dictionary_Class, SMB_at_put_, NM_Type_Dictionary_at_put_);
}
