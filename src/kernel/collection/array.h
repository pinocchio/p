#ifndef KERNEL_COLLECTION_ARRAY_H
#define KERNEL_COLLECTION_ARRAY_H

#include <pinocchio.h>

/* ======================================================================= */

struct Array {
    Header              header;
    uns_int             size;
    Object              value[];
};

extern Class Array_class;
extern Array empty_array;

extern void init_layout();
/* ======================================================================= */

extern Array new_Array_with(uns_int size, ...);
extern Array new_Array(uns_int size);

/* ======================================================================= */

#endif // KERNEL_COLLECTION_ARRAY_H
