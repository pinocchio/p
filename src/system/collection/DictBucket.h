#ifndef COLLECTION_DICTBUCKET_H
#define COLLECTION_DICTBUCKET_H

#include <pinocchio.h>

/* ========================================================================= */

#define COLLECTION_DICTBUCKET_SIZE 1
#define COLLECTION_DICTBUCKET_VARS L"tally"

struct Collection_DictBucket_t {
    uns_int 		size;
    Type_SmallInt 	tally;
    Object  	    values[];
};

CREATE_INITIALIZERS(Collection_DictBucket);
extern Collection_DictBucket new_Collection_DictBucket_raw(uns_int size);
extern Collection_DictBucket new_Collection_DictBucket(uns_int size);

/* ========================================================================= */

extern Collection_DictBucket new_bucket();
extern void Bucket_lookup(Collection_DictBucket bucket, Object key);
extern void Bucket_store_(Collection_DictBucket * bucketp, Object key, Object value);
extern int Bucket_quick_store(Collection_DictBucket * bucketp, Object key,
                              Object value);
extern void CNT_bucket_rehash();
extern int Bucket_quick_compare_key(Object inkey, Object dictkey);

/* ========================================================================= */

#endif // COLLECTION_DICTBUCKET_H
