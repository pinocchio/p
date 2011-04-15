#ifndef KERNEL_OBJECT_RAWARRAY_H
#define KERNEL_OBJECT_RAWARRAY_H

#include <pinocchio.h>

/* ======================================================================= */

struct RawArray {
    VariableHeader      header;
    void*               data[];
};
extern Class RawArray_class;

/* ======================================================================= */

extern RawArray new_RawArray(uns_int size, ...);
extern RawArray raw_RawArray(uns_int size);

/* ======================================================================= */

#endif // KERNEL_OBJECT_RAWARRAY_H
