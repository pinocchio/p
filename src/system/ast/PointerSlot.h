#ifndef AST_POINTERSLOT_H
#define AST_POINTERSLOT_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_POINTERSLOT_SIZE 3
#define AST_POINTERSLOT_VARS L"index", L"name", L"package"

/* ========================================================================= */

struct AST_PointerSlot_t {
    Type_SmallInt   index;
    Object          name;
    Object          package;
};

CREATE_INITIALIZERS(AST_PointerSlot);
extern AST_PointerSlot new_AST_PointerSlot(uns_int index, const wchar_t * name);

/* ========================================================================= */

/* ========================================================================= */

#endif // AST_POINTERSLOT_H
