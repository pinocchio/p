#ifndef KERNEL_OBJECT_STRUCTURE_SLOT_SLOT_H
#define KERNEL_OBJECT_STRUCTURE_SLOT_SLOT_H

#include <pinocchio.h>

/* ======================================================================= */

struct Slot {
    Header              header;
    int                 index;
    Symbol              name;
};

extern Class Slot_class;

/* ======================================================================= */


/* ======================================================================= */

#endif // KERNEL_OBJECT_STRUCTURE_SLOT_SLOT_H
