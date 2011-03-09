#ifndef KERNEL_BEHAVIOR_BLOCK_H
#define KERNEL_BEHAVIOR_BLOCK_H

#include <pinocchio.h>

/* ======================================================================= */

struct Block {
    Header              header;
    Array               params;
    Array               locals;
    RawArray            code;
    Array               body;
};

extern Block new_Block(Array params,
                       Array locals,
                       RawArray code,
                       Array body);

/* ======================================================================= */


/* ======================================================================= */

#endif // KERNEL_BEHAVIOR_BLOCK_H
