#ifndef KERNEL_COLLECTION_BUCKET_H
#define KERNEL_COLLECTION_BUCKET_H

#include <pinocchio.h>

/* ======================================================================= */

struct Bucket {
    tSmallInteger        tally;
    tObject              value[];
};

extern struct Class Bucket_class;

/* ======================================================================= */

extern tBucket new_Bucket();
extern tBucket new_Bucket_sized(uns_int size);
extern int Bucket_quick_compare_key(tObject key, tObject other);
extern int Bucket_quick_store(tBucket *bucket, tObject key, tObject value);

/* ======================================================================= */

#endif // KERNEL_COLLECTION_BUCKET_H
