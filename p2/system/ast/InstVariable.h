#ifndef AST_INSTVARIABLE_H
#define AST_INSTVARIABLE_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_INSTVARIABLE_SIZE 3
#define AST_INSTVARIABLE_VARS L"index", L"name", L"package"

/* ========================================================================= */

struct AST_InstVariable_t {
    Type_SmallInt   index;
    Object          name;
    Object          package;
};

CREATE_INITIALIZERS(AST_InstVariable)
extern AST_InstVariable new_AST_InstVariable(uns_int index, const wchar_t * name);

/* ========================================================================= */

extern void AST_InstVariable_eval(AST_InstVariable var);
extern void AST_InstVariable_assign(AST_InstVariable var, Object value);

/* ========================================================================= */

#endif // AST_INSTVARIABLE_H
