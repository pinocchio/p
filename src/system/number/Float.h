#ifndef NUMBER_FLOAT_H
#define NUMBER_FLOAT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Float_t {
    float value;
};

CREATE_INITIALIZERS(Float);
extern Float new_Float(float value);

/* ========================================================================= */
extern Float Float_plus_Float(float left, float right);
/* ========================================================================= */

extern Float wrap_float(float value);
extern float unwrap_float(Optr integer);

/* ========================================================================= */

#endif // NUMBER_FLOAT_H
