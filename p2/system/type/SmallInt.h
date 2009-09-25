#ifndef SMALLINT_H
#define SMALLINT_H

#include <pinocchio.h>

/* ========================================================================== */

#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 127

/* ======================================================================== */

struct Type_SmallInt_t {
    int value;
};

CREATE_INITIALIZERS(SmallInt)
extern Type_SmallInt new_SmallInt(int value);

/* ======================================================================== */

#endif // SMALLINT_H
