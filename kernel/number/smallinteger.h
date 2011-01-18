#ifndef KERNEL_NUMBER_SMALLINTEGER_H
#define KERNEL_NUMBER_SMALLINTEGER_H

#include <pinocchio.h>

/* ======================================================================= */

struct SmallInteger {
    Header              header;
    long                value;
};

extern Class SmallInteger_class;

/* ======================================================================= */

extern SmallInteger new_SmallInteger(long value);
extern void init_integercache();

/* ======================================================================= */

extern void init_smallint();

/* ======================================================================= */

#endif // KERNEL_NUMBER_SMALLINTEGER_H
