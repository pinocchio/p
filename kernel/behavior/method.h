#ifndef KERNEL_OBJECT_BEHAVIOR_METHOD_H
#define KERNEL_OBJECT_BEHAVIOR_METHOD_H

#include <pinocchio.h>

/* ======================================================================= */

struct Method {
    Header              header;
    uns_int             size;
	Array				params;
	Array				locals;
	Object				package;
	Array				annotations;
	Array				code;
    Object              body[];
};

extern Method new_Method(Array params,
						 Array locals,
                         Array annotations,
						 Array code,
						 uns_int statement_count, ...);

/* ======================================================================= */

// extern void Method_invoke(Thread thread);

/* ======================================================================= */

#endif // KERNEL_OBJECT_BEHAVIOR_METHOD_H
