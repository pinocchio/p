#ifndef KERNEL_BEHAVIOR_BLOCK_H
#define KERNEL_BEHAVIOR_BLOCK_H

#include <pinocchio.h>

/* ======================================================================= */

struct Block {
    Header              header;
    RawArray            code;
    Array               body;
};

extern Block new_Block(RawArray code, Array body);

/* ======================================================================= */

extern Class Block_class;

/* ======================================================================= */

#endif // KERNEL_BEHAVIOR_BLOCK_H
