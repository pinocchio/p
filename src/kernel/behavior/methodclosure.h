#ifndef KERNEL_BEHAVIOR_METHODCLOSURE_H
#define KERNEL_BEHAVIOR_METHODCLOSURE_H

#include <pinocchio.h>

/* ======================================================================= */

struct MethodClosure {
    Header              header;
    RawArray            code;
    Behavior            class;
    Symbol              selector;
};

extern MethodClosure new_MethodClosure(Behavior class, 
                                       Symbol selector,
                                       RawArray code);

/* ======================================================================= */

extern Class MethodClosure_class;

/* ======================================================================= */

#endif // KERNEL_BEHAVIOR_METHODCLOSURE_H
