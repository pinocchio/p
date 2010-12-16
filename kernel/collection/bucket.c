#include <pinocchio.h>

/* ======================================================================= */
Class Bucket_class;
/* ======================================================================= */

Bucket new_Bucket()
{
    uns_int size = 4<<1;
    NEW_ARRAYED(Bucket, Object[size]);
    result->size  = size;
    result->tally = 0;
    while (size--) {
        result->value[size] = nil;
    }
    return result;
}

int Bucket_quick_compare_key(Object key, Object other)
{
    return 0;
}

int Bucket_quick_store(Bucket *bucket, Object key, Object value)
{
    return 0;
}
