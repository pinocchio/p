#ifndef KERNEL_COLLECTION_ARRAY_H
#define KERNEL_COLLECTION_ARRAY_H

#include <pinocchio.h>

/* ======================================================================= */

extern struct Class Array_class;

extern void init_layout();
/* ======================================================================= */

extern tArray new_Array_with(uns_int size, ...);
extern tArray new_Array(uns_int size);

/* ======================================================================= */

#endif // KERNEL_COLLECTION_ARRAY_H
