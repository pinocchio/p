#ifndef CONSTANT_H
#define CONSTANT_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_CONSTANT_SIZE 2
#define AST_CONSTANT_VARS L"constant", L"info"

struct AST_Constant_t {
    AST_Info        info;
    Object          constant;
};

CREATE_INITIALIZERS(AST_Constant)

extern AST_Constant new_AST_Constant(Object constant);

/* ========================================================================= */

extern void AST_Constant_eval(AST_Constant self);

#endif // CONSTANT_H
