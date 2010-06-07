#ifndef COLLECTION_DICTBUCKET_H
#define COLLECTION_DICTBUCKET_H

#include <pinocchio.h>

/* ========================================================================= */

struct DictBucket_t {
    uns_int size;
    uns_int tally;
    Object  values[];
};

CREATE_INITIALIZERS(DictBucket);
extern DictBucket new_DictBucket_raw(uns_int size);
extern DictBucket new_DictBucket(uns_int size);

/* ========================================================================= */

extern DictBucket new_bucket();
extern void Bucket_lookup(DictBucket bucket, Object key);
extern void Bucket_store_(DictBucket * bucketp, Object key, Object value);
extern int Bucket_quick_store(DictBucket * bucketp, Object key,
                              Object value);
extern void CNT_bucket_rehash();
extern int Bucket_quick_compare_key(Object inkey, Object dictkey);

/* ========================================================================= */

#endif // COLLECTION_DICTBUCKET_H
