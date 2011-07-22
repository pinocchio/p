#ifndef KERNEL_OBJECT_STRUCTURE_SLOT_SLOT_H
#define KERNEL_OBJECT_STRUCTURE_SLOT_SLOT_H

#include <pinocchio.h>

/* ======================================================================= */

struct Slot {
    tSmallInteger        index;
    tSymbol              name;
};

extern struct Class Slot;

/* ======================================================================= */


/* ======================================================================= */

#endif // KERNEL_OBJECT_STRUCTURE_SLOT_SLOT_H
