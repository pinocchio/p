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

extern Type_Array new_Raw_Type_Array(uns_int c);
extern Type_Array new_Type_Array(uns_int c, Object v[]);
extern Type_Array new_Type_Array_With(uns_int c, ...);
extern Type_Array new_Type_Array_With_All(uns_int c, Object element);
extern Object raw_Type_Array_at(Type_Array array, Object tag, uns_int index);
extern void raw_Type_Array_at_put(Type_Array array, Object tag,
                                  uns_int index, Object value);

/* ========================================================================= */

#endif // ARRAY_H
