#ifndef VARIABLE_H
#define VARIABLE_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Variable_t {
    uns_int     index;
    Object      key;
    Object      name;
    AST_Info    info;
};

CREATE_INITIALIZERS(AST_Variable)

extern AST_Variable new_AST_Variable_named(const wchar_t* name);
extern AST_Variable new_AST_Variable(Object key, uns_int index);

/* ========================================================================= */

extern void AST_Variable_eval(AST_Variable self);
extern void AST_Variable_assign(AST_Variable self, Object value);

/* ========================================================================= */

#endif // VARIABLE_H
