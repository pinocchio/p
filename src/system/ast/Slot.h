#ifndef AST_INSTVARIABLE_H
#define AST_INSTVARIABLE_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_INSTVARIABLE_SIZE 3
#define AST_INSTVARIABLE_VARS L"index", L"name", L"package"

/* ========================================================================= */

struct AST_Slot_t {
    Type_SmallInt   index;
    Object          name;
    Object          package;
};

CREATE_INITIALIZERS(AST_Slot)
extern AST_Slot new_AST_Slot(uns_int index, const wchar_t * name);

/* ========================================================================= */

extern void AST_Slot_eval(AST_Slot var);
extern void AST_Slot_assign(AST_Slot var, Object value);

/* ========================================================================= */

#endif // AST_INSTVARIABLE_H
