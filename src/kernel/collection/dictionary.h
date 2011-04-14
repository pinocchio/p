#ifndef KERNEL_COLLECTION_DICTIONARY_H
#define KERNEL_COLLECTION_DICTIONARY_H

#include <pinocchio.h>

/* ======================================================================= */

struct Dictionary {
    Header              header;
    SmallInteger        size;
    SmallInteger        maxLinear;
    SmallInteger        ratio;
    BucketArray         buckets;
    Object              linear;
};
extern Class Dictionary_class;

struct BucketArray {
    VariableHeader      header;
    Bucket              bucket[];
};

extern Class BucketArray_class;

/* ======================================================================= */

extern Object Dictionary_quick_lookup(Dictionary dictionary, Object key);
extern void Dictionary_quick_store(Dictionary dictionary, Object key, Object value);
extern BucketArray new_BucketArray(uns_int size);
extern BucketArray new_BucketArray_sized(uns_int size);

/* ======================================================================= */

#endif // KERNEL_COLLECTION_DICTIONARY_H
