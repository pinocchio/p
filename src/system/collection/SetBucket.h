#ifndef COLLECTION_SETBUCKET_H
#define COLLECTION_SETBUCKET_H

#include <pinocchio.h>

/* ========================================================================= */

#define COLLECTION_SETBUCKET_SIZE 1
#define COLLECTION_SETBUCKET_VARS L"tally"

struct Collection_SetBucket_t {
    uns_int 		size;
    Type_SmallInt 	tally;
    Object  	    values[];
};

CREATE_INITIALIZERS(Collection_SetBucket);
extern Collection_SetBucket new_Collection_SetBucket();

/* ========================================================================= */

/* ========================================================================= */

#endif // COLLECTION_SETBUCKET_H
