#ifndef KERNEL_COLLECTION_BUCKET_H
#define KERNEL_COLLECTION_BUCKET_H

#include <pinocchio.h>

/* ======================================================================= */

struct Bucket {
    Header              header;
    uns_int             size;
    SmallInteger        tally;
    Object              value[];
};

extern Class Bucket_class;

/* ======================================================================= */

extern Bucket new_Bucket();
extern Bucket new_Bucket_sized(uns_int size);
extern int Bucket_quick_compare_key(Object key, Object other);
extern int Bucket_quick_store(Bucket *bucket, Object key, Object value);

/* ======================================================================= */

#endif // KERNEL_COLLECTION_DICTIONARY_H
