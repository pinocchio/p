#ifndef CONSTANT_H
#define CONSTANT_H

#include <pinocchio.h>

/* ========================================================================= */

struct Constant_t {
    AST_Info        info;
    Optr          constant;
};

extern Constant new_Constant(Optr constant);

/* ========================================================================= */

extern void Constant_eval(Constant self);

#endif // CONSTANT_H
