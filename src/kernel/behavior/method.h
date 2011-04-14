#ifndef KERNEL_BEHAVIOR_METHOD_H
#define KERNEL_BEHAVIOR_METHOD_H

#include <pinocchio.h>

/* ======================================================================= */

struct Method {
    Header              header;
    RawArray            code;
    Array               body;
    Object              package;
    Array               annotations;
};

extern Method new_Method(Array annotations,
                         RawArray code,
                         Array body);

/* ======================================================================= */

extern Class Method_class;

/* ======================================================================= */

#endif // KERNEL_BEHAVIOR_METHOD_H
