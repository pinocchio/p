#ifndef ORGANIZATION_CLASSREFERENCE_H
#define ORGANIZATION_CLASSREFERENCE_H

#include <pinocchio.h>

/* ========================================================================= */

#define ORGANIZATION_CLASSREFERENCE_SIZE 2
#define ORGANIZATION_CLASSREFERENCE_VARS L"class", L"package"

struct Organization_ClassReference_t {
    Object class;
    Object package;
};

CREATE_INITIALIZERS(Organization_ClassReference)
extern Organization_ClassReference new_Organization_ClassReference();

/* ========================================================================= */

extern void Organization_ClassReference_eval();

/* ========================================================================= */

#endif // ORGANIZATION_CLASSREFERENCE_H
