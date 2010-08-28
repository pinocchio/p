#ifndef NUMBER_FLOAT_H
#define NUMBER_FLOAT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Float_t {
    double value;
};

CREATE_INITIALIZERS(Float);
extern Float new_Float(double value);

/* ========================================================================= */
extern Float Float_plus_Float(double left, double right);
extern Float Float_times_Float(double left, double right);
extern Float Float_divide_Float(double left, double right);
extern Float Float_minus_Float(double left, double right);
extern Boolean Float_lt_Float(double left, double right);
extern Boolean Float_gt_Float(double left, double right);
extern Boolean Float_notEqual_Float(double left, double right);
/* ========================================================================= */

extern Float wrap_float(double value);
extern double unwrap_float(Optr integer);

/* ========================================================================= */

#endif // NUMBER_FLOAT_H
