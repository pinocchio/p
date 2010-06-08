#ifndef NUMBER_SMALLINT_H
#define NUMBER_SMALLINT_H

#include <pinocchio.h>

/* ========================================================================= */

#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 127

/* ========================================================================= */

struct SmallInt_t {
    long value;
};

CREATE_INITIALIZERS(SmallInt)
extern SmallInt new_SmallInt(long value);
extern void init_numbercache();

/* ========================================================================= */

extern Optr wrap_int(long value);
extern long unwrap_int(Optr integer);

/* ========================================================================= */

#endif // NUMBER_SMALLINT_H
