#include <pinocchio.h>

/* ======================================================================= */
Class Dictionary_class;
Class BucketArray_class;
/* ======================================================================= */

BucketArray new_BucketArray_sized(uns_int size)
{
    NEW_ARRAYED(BucketArray, Bucket, size);
    while (size--) {
        result->bucket[size] = (Bucket)nil;
    }
    return result;
}

BucketArray new_BucketArray(uns_int size)
{
    NEW_ARRAYED(BucketArray, Bucket, 1);
    result->bucket[0] = new_Bucket_sized(size);
    return result;
}

Dictionary new_Dictionary()
{
    NEW_OBJECT(Dictionary);
    result->size      = new_SmallInteger(0);
    result->ratio     = new_SmallInteger(500);
    result->maxLinear = new_SmallInteger(20);
    result->buckets   = new_BucketArray(20 << 1);
    result->linear    = true;
    return result;
}

/* ======================================================================= */
