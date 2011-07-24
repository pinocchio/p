#ifndef KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H
#define KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H

#include <pinocchio.h>

/* ======================================================================= */

struct Dictionary {
    tSmallInteger        size;
    tSmallInteger        maxLinear;
    tSmallInteger        ratio;
    tBucketArray         buckets;
    tObject              linear;
};

struct Bucket {
    tSmallInteger        tally;
    tObject              value[];
};

extern struct Class Bucket;
extern struct Class Dictionary;
extern struct Class BucketArray;
extern struct Class IdentityDictionary;

/* ======================================================================= */

extern tObject IdentityDictionary_lookup(tIdentityDictionary dictionary, tObject key);

/* ======================================================================= */

#endif // KERNEL_COLLECTIONS_IDENTITYDICTIONARY_H
