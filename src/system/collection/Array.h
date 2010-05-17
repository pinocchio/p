#ifndef ARRAY_H
#define ARRAY_H

#include <pinocchio.h>

/* ========================================================================= */

struct Collection_Array_t {
    uns_int size;
    Object  values[];
};

extern Collection_Array empty_Collection_Array;

CREATE_INITIALIZERS(Collection_Array)

extern Collection_Array new_Collection_Array_raw(uns_int c);
extern Collection_Array new_Collection_Array(uns_int c, Object v[]);
extern Collection_Array new_Collection_Array_with(uns_int c, ...);
extern Collection_Array new_Collection_Array_withAll(uns_int c, Object element);
extern Object raw_Collection_Array_at(Collection_Array array, Object tag, int index);
extern void raw_Collection_Array_at_put(Collection_Array array, Object tag,
                                  int index, Object value);
extern Object raw_Collection_Array_instAt(Collection_Array array, Object tag, int index);
extern void raw_Collection_Array_instAt_put(Collection_Array array, Object tag,
                                      int index, Object value);
/* ========================================================================= */

#endif // ARRAY_H
