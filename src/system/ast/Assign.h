#ifndef ASSIGN_H
#define ASSIGN_H

#include <pinocchio.h>

/* ========================================================================= */

struct Assign_t {
    AST_Info        info;
    Object          variable;
    Object          expression;
};

extern Assign new_Assign(Object variable, Object expression);

/* ========================================================================= */

extern void CNT_Assign_assign();
extern void Assign_eval(Assign self);

#endif // ASSIGN_H
