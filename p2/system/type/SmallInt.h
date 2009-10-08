#ifndef TYPE_SMALLINT_H
#define TYPE_SMALLINT_H

#include <pinocchio.h>

/* ========================================================================= */

#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 127

/* ========================================================================= */

struct Type_SmallInt_t {
    int value;
};

CREATE_INITIALIZERS(Type_SmallInt)
extern Type_SmallInt new_Type_SmallInt(int value);

/* ========================================================================= */

#endif // TYPE_SMALLINT_H
