#ifndef AST_INSTVARIABLE_H
#define AST_INSTVARIABLE_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_INSTVARIABLE_SIZE 3

/* ========================================================================= */

struct AST_InstVariable_t {
    Type_SmallInt   index;
    Object          name;
    Object          package;
};

CREATE_INITIALIZERS(AST_InstVariable)
extern AST_InstVariable new_AST_InstVariable(uns_int index);

/* ========================================================================= */

extern void AST_InstVariable_eval(AST_InstVariable self);

/* ========================================================================= */

#endif // AST_INSTVARIABLE_H
