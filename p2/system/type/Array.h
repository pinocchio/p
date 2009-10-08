#ifndef ARRAY_H
#define ARRAY_H

#include <pinocchio.h>

/* ========================================================================= */

struct Type_Array_t {
    Type_SmallInt size;
    Object          values[];
};

extern Type_Array Empty_Type_Array;

CREATE_INITIALIZERS(Type_Array)

extern Type_Array new_Raw_Type_Array(int c);
extern Type_Array new_Type_Array(int c, Object v[]);
extern Type_Array new_Type_Array_With(int c, Object init);

/* ======================================================================== */

#endif // ARRAY_H
