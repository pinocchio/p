
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
    result->layout  = new_Type_Array_With_All(DICTIONARY_SIZE, Nil);
    return result;
}

void pre_init_Type_Dictionary()
{
    Type_Dictionary_Class    = new_Named_Class((Object)Type_Object_Class,
                                               L"Type_Dictionary",
                                               create_object_tag(TYPE_DICTIONARY));
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
    Type_Array new_bucket = new_Type_Array_With_All(old_bucket->size << 1, Nil);
    int i;
    for(i=0; i<old_bucket->size; i++) {
        new_bucket->values[i] = old_bucket->values[i];
    }
    *bucketp = new_bucket;
}

Object Bucket_store_(Type_Array * bucketp, Object key, Object value)
{
    /* just store at the first empty location */
    int i;
    Type_Array bucket = *bucketp;
    for (i = 0; i < bucket->size; i=i+2) {
        if (bucket->values[i] == Nil || bucket->values[i] == key) {
            bucket->values[i]   = key;
            bucket->values[i+1] = value;
            return value;
        }
    }
    Bucket_grow(bucketp);
    bucket = *bucketp;
    bucket->values[i]   = key;
    bucket->values[i+1] = value;
    
    return NULL;
}

Type_Array new_bucket()
{
    return new_Type_Array_With_All(DICTIONARY_BUCKET_SIZE * 2, Nil);
}

/* ========================================================================= */

Object Type_Dictionary_lookup(Type_Dictionary self, Object key)
{
    // Dictionary only allows Strings as key
    assertTagType(gettag(key), Words);
    uns_int hash = Type_Symbol_hash((Type_Symbol)key);
    hash &= self->layout->size - 1;
    Type_Array bucket = (Type_Array) self->layout->values[hash];
    if (bucket == (Type_Array)Nil) {
        return NULL;
    }
    return Bucket_lookup(bucket, key);
}

Object Type_Dictionary_store_(Type_Dictionary self, Object key, Object value)
{
    // Dictionary only allows Strings as key
    assertTagType(gettag(key), Words);
    uns_int hash = Type_Symbol_hash((Type_Symbol)key);
    hash &= self->layout->size - 1;
    Type_Array * bucketp = (Type_Array *)&self->layout->values[hash];
    if (*bucketp == (Type_Array)Nil) { 
        *bucketp = new_bucket();
    }
    return Bucket_store_(bucketp, key, value);
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

/* ========================================================================= */

void post_init_Type_Dictionary()
{
    store_native_method(Type_Dictionary_Class, SMB_at_, NM_Type_Dictionary_at_);
    store_native_method(Type_Dictionary_Class, SMB_at_put_, NM_Type_Dictionary_at_put_);
}

