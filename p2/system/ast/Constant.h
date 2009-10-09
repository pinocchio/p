#ifndef CONSTANT_H
#define CONSTANT_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Constant_t {
    Object          constant;
    AST_Info        info;
};

CREATE_INITIALIZERS(AST_Constant)

extern AST_Constant new_AST_Constant(Object constant);

/* ========================================================================= */

extern void AST_Constant_eval(AST_Constant self);

#endif // CONSTANT_H
