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

/* ========================================================================= */

#endif // ARRAY_H
