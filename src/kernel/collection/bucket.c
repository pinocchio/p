#include <pinocchio.h>

/* ======================================================================= */
Class Bucket_class;
/* ======================================================================= */

Bucket new_Bucket_sized(uns_int size)
{
    NEW_ARRAYED(Bucket, Object, size);
    result->tally = ENC_NUM(0);
    while (size--) {
        result->value[size] = nil;
    }
    return result;
}

Bucket new_Bucket()
{
    return new_Bucket_sized(4 << 1);
}
