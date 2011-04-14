#ifndef KERNEL_BEHAVIOR_BLOCKCLOSURE_H
#define KERNEL_BEHAVIOR_BLOCKCLOSURE_H

#include <pinocchio.h>

/* ======================================================================= */

struct BlockClosure {
    VariableHeader      header;
    JumpTarget          return_target;
    Block               code;
    Object              self;
    Object              remotes[];
};

extern BlockClosure new_BlockClosure(Block block,
                                     JumpTarget return_target,
                                     Object self,
                                     uns_int copies,
                                     Object * local);

/* ======================================================================= */

/* ======================================================================= */

#endif // KERNEL_BEHAVIOR_BLOCKCLOSURE_H
