#ifndef KERNEL_BEHAVIOR_BLOCKCLOSURE_H
#define KERNEL_BEHAVIOR_BLOCKCLOSURE_H

#include <pinocchio.h>

/* ======================================================================= */

struct BlockClosure {
    Header              header;
    Context             outer;
    Block               code;
};

extern BlockClosure new_BlockClosure(Context outer, Block block);

/* ======================================================================= */

/* ======================================================================= */

#endif // KERNEL_BEHAVIOR_BLOCKCLOSURE_H
