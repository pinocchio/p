#ifndef KERNEL_BEHAVIOR_METHOD_H
#define KERNEL_BEHAVIOR_METHOD_H

#include <pinocchio.h>

/* ======================================================================= */

struct Method {
    Header              header;
    Object              package;
    Array               annotations;
    RawArray            code;
    Array               body;
};

extern Method new_Method(Array annotations,
                         RawArray code,
                         Array body);

/* ======================================================================= */

#endif // KERNEL_BEHAVIOR_METHOD_H
