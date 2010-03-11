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

/* ========================================================================= */

#endif // COLLECTION_DICTBUCKET_H
