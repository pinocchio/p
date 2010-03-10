#ifndef TYPE_FLOAT_H
#define TYPE_FLOAT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Type_Float_t {
    float value;
};

CREATE_INITIALIZERS(Type_Float);
extern Type_Float new_Type_Float(float value);

/* ========================================================================= */

extern float unwrap_float(Object integer);

/* ========================================================================= */

#endif // TYPE_FLOAT_H
