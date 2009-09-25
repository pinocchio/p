#ifndef ASSIGN_H
#define ASSIGN_H

#include <pinocchio.h>

/* ========================================================================== */

struct AST_Assign_t {
    Object          variable;
    Object          expression;
};


CREATE_INITIALIZERS(Assign)

extern AST_Assign new_Assign(Object variable, Object expression);

/* ========================================================================== */

extern void CNT_AST_Assign_assign();
extern void AST_Assign_eval(AST_Assign self);

#endif // ASSIGN_H
