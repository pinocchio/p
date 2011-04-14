#ifndef KERNEL_INTERPRETER_JUMPTARGET_H
#define KERNEL_INTERPRETER_JUMPTARGET_H

#include <pinocchio.h>

/* ======================================================================= */

struct JumpTarget {
    Header              header;
    jmp_buf             target;
    Object *            return_pointer;
};

extern Class JumpTarget_class;

/* ======================================================================= */

extern JumpTarget new_JumpTarget(Object args[]);

/* ======================================================================= */

#endif // KERNEL_INTERPRETER_JUMPTARGET_H
