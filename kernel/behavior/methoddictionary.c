#include <pinocchio.h>

/* ======================================================================= */
Class MethodDictionary_class;
/* ======================================================================= */

MethodDictionary new_MethodDictionary()
{
    NEW_OBJECT_WITH_CLASS(Dictionary, MethodDictionary_class);
    result->size      = new_SmallInteger(0);
    result->ratio     = new_SmallInteger(500);
    result->maxLinear = new_SmallInteger(20);
    result->buckets   = new_BucketArray(20 << 1);
    result->linear    = true;
    return result;
}

/* ======================================================================= */
