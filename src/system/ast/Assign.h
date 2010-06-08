#ifndef ASSIGN_H
#define ASSIGN_H

#include <pinocchio.h>

/* ========================================================================= */

struct Assign_t {
    Info        info;
    Optr          variable;
    Optr          expression;
};

extern Assign new_Assign(Optr variable, Optr expression);

/* ========================================================================= */

extern void CNT_Assign_assign();
extern void Assign_eval(Assign self);

#endif // ASSIGN_H
