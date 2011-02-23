#ifndef KERNEL_BEHAVIOR_METHOD_H
#define KERNEL_BEHAVIOR_METHOD_H

#include <pinocchio.h>

/* ======================================================================= */

struct Method {
    Header              header;
    Array               params;
    Array               locals;
    Object              package;
    Array               annotations;
    RawArray            code;
    Array               body;
};

extern Method new_Method(Array params,
                         Array locals,
                         Array annotations,
                         RawArray code,
                         Array body);

/* ======================================================================= */

// extern void Method_invoke(Thread thread);

/* ======================================================================= */

#endif // KERNEL_BEHAVIOR_METHOD_H
