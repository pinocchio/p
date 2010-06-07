#ifndef NUMBER_SMALLINT_H
#define NUMBER_SMALLINT_H

#include <pinocchio.h>

/* ========================================================================= */

#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 127

/* ========================================================================= */

struct SmallInt_t {
    int value;
};

CREATE_INITIALIZERS(SmallInt)
extern SmallInt new_SmallInt(int value);
extern void init_numbercache();

/* ========================================================================= */

extern Object wrap_int(int value);
extern int unwrap_int(Object integer);

/* ========================================================================= */

#endif // NUMBER_SMALLINT_H
