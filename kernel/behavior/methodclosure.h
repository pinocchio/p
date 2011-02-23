#ifndef KERNEL_BEHAVIOR_METHODCLOSURE_H
#define KERNEL_BEHAVIOR_METHODCLOSURE_H

#include <pinocchio.h>

/* ======================================================================= */

struct MethodClosure {
    Header              header;
    Behavior            class;
    Method              method;
};

extern MethodClosure new_MethodClosure(Behavior class, 
                                       Method method);

/* ======================================================================= */

/* ======================================================================= */

#endif // KERNEL_BEHAVIOR_METHODCLOSURE_H
