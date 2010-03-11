#ifndef COLLECTION_SET_H
#define COLLECTION_SET_H

#include <pinocchio.h>

/* ========================================================================= */

#define COLLECTION_SET_SIZE 3
#define COLLECTION_SET_VARS L"size", L"maxLinear", L"data", L"ratio"

struct Collection_Set_t {
    Type_SmallInt size;
    Type_SmallInt maxLinear;
    Type_Array    data;
    Type_Float    ratio;
};

CREATE_INITIALIZERS(Collection_Set);
extern Collection_Set new_Collection_Set();

/* ========================================================================= */

#define SET_SIZE 1 << 3
#define SET_BUCKET_SIZE 2

/* ========================================================================= */

#endif // COLLECTION_SET_H
