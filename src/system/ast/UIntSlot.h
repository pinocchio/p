#ifndef AST_UNSINTINSTVARIABLE_H
#define AST_UNSINTINSTVARIABLE_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_UNSINTINSTVARIABLE_SIZE 3
#define AST_UNSINTINSTVARIABLE_VARS L"index", L"name", L"package"

/* ========================================================================= */

struct AST_UIntSlot_t {
    Type_SmallInt   index;
    Object          name;
    Object          package;
};

CREATE_INITIALIZERS(AST_UIntSlot)
extern AST_UIntSlot new_AST_UIntSlot(uns_int index, const wchar_t * name);

/* ========================================================================= */

extern void AST_UIntSlot_eval(AST_UIntSlot var);
extern void AST_UIntSlot_assign(AST_UIntSlot var, Object value);

/* ========================================================================= */

#endif // AST_UNSINTINSTVARIABLE_H
