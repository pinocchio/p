#ifndef AST_UNSINTINSTVARIABLE_H
#define AST_UNSINTINSTVARIABLE_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_UNSINTINSTVARIABLE_SIZE 3
#define AST_UNSINTINSTVARIABLE_VARS L"index", L"name", L"package"

/* ========================================================================= */

struct AST_UnsintInstVariable_t {
    Type_SmallInt   index;
    Object          name;
    Object          package;
};

CREATE_INITIALIZERS(AST_UnsintInstVariable)
extern AST_UnsintInstVariable new_AST_UnsintInstVariable(uns_int index, const wchar_t * name);

/* ========================================================================= */

extern void AST_UnsintInstVariable_eval(AST_UnsintInstVariable var);
extern void AST_UnsintInstVariable_assign(AST_UnsintInstVariable var, Object value);

/* ========================================================================= */

#endif // AST_UNSINTINSTVARIABLE_H
