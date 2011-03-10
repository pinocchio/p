#ifndef KERNEL_OBJECT_OBJECT_H
#define KERNEL_OBJECT_OBJECT_H

#include <pinocchio.h>

/* ======================================================================= */

struct Object {
    Header header;
    Object field[];
};

extern Class Object_class;
extern Class True_class;
extern Class False_class;
extern Class UndefinedObject_class;
extern Object true;
extern Object false;
extern Object nil;

/* ======================================================================= */

#endif // KERNEL_OBJECT_OBJECT_H
