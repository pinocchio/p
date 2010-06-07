#ifndef ORGANIZATION_CLASSREFERENCE_H
#define ORGANIZATION_CLASSREFERENCE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Organization_ClassReference_t {
    Object referenceName;
    Object package;
    Object class;
};

extern Organization_ClassReference new_Organization_ClassReference(Class class);
extern Organization_ClassReference new_Organization_ClassReference_empty();


/* ========================================================================= */

extern void Organization_ClassReference_eval();

/* ========================================================================= */

#endif // ORGANIZATION_CLASSREFERENCE_H
