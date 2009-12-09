#ifndef ARRAY_H
#define ARRAY_H

#include <pinocchio.h>

/* ========================================================================= */

struct Type_Array_t {
    uns_int size;
    Object  values[];
};

extern Type_Array empty_Type_Array;

CREATE_INITIALIZERS(Type_Array)

extern Type_Array new_Type_Array_raw(uns_int c);
extern Type_Array new_Type_Array(uns_int c, Object v[]);
extern Type_Array new_Type_Array_with(uns_int c, ...);
extern Type_Array new_Type_Array_withAll(uns_int c, Object element);
extern Object raw_Type_Array_at(Type_Array array, Object tag, int index);
extern void raw_Type_Array_at_put(Type_Array array, Object tag,
                                  int index, Object value);
extern Object raw_Type_Array_instAt(Type_Array array, Object tag, int index);
extern void raw_Type_Array_instAt_put(Type_Array array, Object tag,
                                      int index, Object value);
/* ========================================================================= */

#endif // ARRAY_H
