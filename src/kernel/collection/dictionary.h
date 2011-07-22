#ifndef KERNEL_COLLECTION_DICTIONARY_H
#define KERNEL_COLLECTION_DICTIONARY_H

#include <pinocchio.h>

/* ======================================================================= */

struct Dictionary {
    tSmallInteger        size;
    tSmallInteger        maxLinear;
    tSmallInteger        ratio;
    tBucketArray         buckets;
    tObject              linear;
};
extern struct Class Dictionary_class;
extern struct Class BucketArray_class;

/* ======================================================================= */

#endif // KERNEL_COLLECTION_DICTIONARY_H
