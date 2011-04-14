#ifndef KERNEL_BEHAVIOR_BLOCKCLOSURE_H
#define KERNEL_BEHAVIOR_BLOCKCLOSURE_H

#include <pinocchio.h>

/* ======================================================================= */

struct BlockClosure {
    Header              header;
    JumpTarget          return_target;
    Block               code;
    Object              copies;
};

extern BlockClosure new_BlockClosure(JumpTarget return_target, Block block);

/* ======================================================================= */

/* ======================================================================= */

#endif // KERNEL_BEHAVIOR_BLOCKCLOSURE_H
