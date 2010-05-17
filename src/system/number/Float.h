#ifndef NUMBER_FLOAT_H
#define NUMBER_FLOAT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Number_Float_t {
    float value;
};

CREATE_INITIALIZERS(Number_Float);
extern Number_Float new_Number_Float(float value);

/* ========================================================================= */

extern float unwrap_float(Object integer);

/* ========================================================================= */

#endif // NUMBER_FLOAT_H
