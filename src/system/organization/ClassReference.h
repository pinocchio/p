#ifndef ORGANIZATION_CLASSREFERENCE_H
#define ORGANIZATION_CLASSREFERENCE_H

#include <pinocchio.h>

/* ========================================================================= */

#define ORGANIZATION_CLASSREFERENCE_SIZE 3
#define ORGANIZATION_CLASSREFERENCE_VARS L"referenceName", L"package", L"class"

struct Organization_ClassReference_t {
    Object referenceName;
    Object package;
    Object class;
};

CREATE_INITIALIZERS(Organization_ClassReference)
extern Organization_ClassReference new_Organization_ClassReference(Type_Class class);
extern Organization_ClassReference new_Organization_ClassReference_empty();


/* ========================================================================= */

extern void Organization_ClassReference_eval();

/* ========================================================================= */

#endif // ORGANIZATION_CLASSREFERENCE_H
