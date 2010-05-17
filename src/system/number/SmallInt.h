#ifndef NUMBER_SMALLINT_H
#define NUMBER_SMALLINT_H

#include <pinocchio.h>

/* ========================================================================= */

#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 127

/* ========================================================================= */

struct Number_SmallInt_t {
    int value;
};

CREATE_INITIALIZERS(Number_SmallInt)
extern Number_SmallInt new_Number_SmallInt(int value);

/* ========================================================================= */

extern Object wrap_int(int value);
extern int unwrap_int(Object integer);

/* ========================================================================= */

#endif // NUMBER_SMALLINT_H
