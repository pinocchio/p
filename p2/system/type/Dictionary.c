
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

Object Bucket_lookup(Type_Array bucket, Object key)
{
    int i;
    for (i = 0; i < bucket->size; i=i+2) {
        if (bucket->values[i] == key) {
            return bucket->values[i+1];
        }
    }
    return NULL;
}

void Bucket_grow(Type_Array * bucketp)
{
    Type_Array old_bucket = *bucketp;
    Type_Array new_bucket = new_Type_Array_withAll(old_bucket->size << 1, Nil);
    int i;
    for(i=0; i<old_bucket->size; i++) {
        new_bucket->values[i] = old_bucket->values[i];
    }
    *bucketp = new_bucket;
}

int Bucket_store_(Type_Array * bucketp, Object key, Object value)
{
    /* just store at the first empty location */
    int i;
    Type_Array bucket = *bucketp;
    for (i = 0; i < bucket->size; i=i+2) {
        if (bucket->values[i] == Nil || bucket->values[i] == key) {
            int result = bucket->values[i] == Nil;
            bucket->values[i]   = key;
            bucket->values[i+1] = value;
            return result;
        }
    }
    Bucket_grow(bucketp);
    bucket = *bucketp;
    bucket->values[i]   = key;
    bucket->values[i+1] = value;
    return 1;
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
        assert1(NULL, "Dictionary only supports SmallInt and Symbol as key\n");
    }
    hash &= self->layout->size - 1;
    return hash;
}

/* ========================================================================= */

void Type_Dictionary_grow(Type_Dictionary self)
{
    Type_Array old = self->layout;
    self->layout = new_Type_Array_withAll(old->size << 1, (Object)Nil);
    self->size = 0;
    
    int todo = old->size;
    printf("Growing to: %"F_I"u\n", old->size);
    while (todo--) {
        if (old->values[todo] != (Object)Nil) {
            Type_Array bucket = (Type_Array)old->values[todo];
            uns_int i;
            for (i = 0; i < bucket->size; i+=2) {
                Object key = bucket->values[i];
                if (key == (Object)Nil) {
                    break;
                }
                Type_Dictionary_store_(self, key, bucket->values[i+1]);
            }
        }
    }
}

Object Type_Dictionary_lookup(Type_Dictionary self, Object key)
{
    int hash = get_hash(self, key);
    Type_Array bucket = (Type_Array) self->layout->values[hash];
    if (bucket == (Type_Array)Nil) {
        return NULL;
    }
    return Bucket_lookup(bucket, key);
}

void Type_Dictionary_store_(Type_Dictionary self, Object key, Object value)
{
    int hash = get_hash(self, key);
    Type_Array * bucketp = (Type_Array *)&self->layout->values[hash];
    if (*bucketp == (Type_Array)Nil) { 
        *bucketp = new_bucket();
    } else {
        if (TAG_IS_TYPE(GETTAG(key), Words)) {
            LOG("Collision: %ls, %i\n", ((Type_Symbol)key)->value, hash);
        } else {
            LOG("Collision: %i!\n", ((Type_SmallInt)key)->value, hash);
        }
    }

    if (Bucket_store_(bucketp, key, value)) {
        self->size += 1;
        float amount = self->size;
        float size = self->layout->size;
        if (amount / size > self->ratio) {
            LOG("%f > %f\n", amount / size, self->ratio); 
            Type_Dictionary_grow(self);
            LOG("End grow\n");
        }
    }
}

/* ========================================================================= */

NATIVE1(Type_Dictionary_at_)
    Object w_index = NATIVE_ARG(0);
    Object result = Type_Dictionary_lookup((Type_Dictionary)self, w_index);
    if(!result) {
        result = Nil;
    }
    RETURN_FROM_NATIVE(result);
}

NATIVE2(Type_Dictionary_at_put_)
    Object w_index = NATIVE_ARG(0);
    Object new = NATIVE_ARG(1);
    Type_Dictionary_store_((Type_Dictionary)self, w_index, new);
    RETURN_FROM_NATIVE(new);
}

// TODO create at ifAbsent put
/* ========================================================================= */

void post_init_Type_Dictionary()
{
    store_native_method(Type_Dictionary_Class, SMB_at_,     NM_Type_Dictionary_at_);
    store_native_method(Type_Dictionary_Class, SMB_at_put_, NM_Type_Dictionary_at_put_);
}

