#ifndef COLLECTION_DICTBUCKET_H
#define COLLECTION_DICTBUCKET_H

#include <pinocchio.h>

/* ========================================================================= */

#define COLLECTION_DICTBUCKET_SIZE 1
#define COLLECTION_DICTBUCKET_VARS L"tally"

struct Collection_DictBucket_t {
    Type_SmallInt tally;
};

CREATE_INITIALIZERS(Collection_DictBucket);
extern Collection_DictBucket new_Collection_DictBucket();

/* ========================================================================= */

/* ========================================================================= */

#endif // COLLECTION_DICTBUCKET_H
