#ifndef ASSIGN_H
#define ASSIGN_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_ASSIGN_SIZE 3
#define AST_ASSIGN_VARS L"variable", L"expression", L"info"

struct AST_Assign_t {
    AST_Info        info;
    Object          variable;
    Object          expression;
};


CREATE_INITIALIZERS(AST_Assign)

extern AST_Assign new_AST_Assign(Object variable, Object expression);

/* ========================================================================= */

extern void CNT_AST_Assign_assign();
extern void AST_Assign_eval(AST_Assign self);

#endif // ASSIGN_H
