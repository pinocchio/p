#ifndef NUMBER_SMALLINT_H
#define NUMBER_SMALLINT_H

#include <pinocchio.h>
#include <limits.h>

/* ========================================================================= */

#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 1023

#if LONG_MAX < 1u << 15
#define LONG_MAX_DIGITS 5
#elif LONG_MAX < 1u << 31
#define LONG_MAX_DIGITS 10
#elif LONG_MAX < 1u << 63
#define LONG_MAX_DIGITS 19
#elif LONG_MAX < 1u << 127
#define LONG_MAX_DIGITS 39
#else
#error "unsupported LONG_MAX"
#endif

/* ========================================================================= */

struct SmallInt_t {
    long value;
};

CREATE_INITIALIZERS(SmallInt)
extern SmallInt new_SmallInt(long value);
extern void init_numbercache();

/* ========================================================================= */
extern SmallInt SmallInt_plus_SmallInt(long left, long right);
/* ========================================================================= */

extern Optr wrap_int(long value);
extern long unwrap_int(Optr integer);

/* ========================================================================= */

#endif // NUMBER_SMALLINT_H
