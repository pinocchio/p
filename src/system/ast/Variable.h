#ifndef VARIABLE_H
#define VARIABLE_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Variable_t {
    AST_Info    info;
    Object      local_id;
    Object      scope_id;
    Object      name;
};

CREATE_INITIALIZERS(AST_Variable)

extern AST_Variable new_AST_Variable_named(const wchar_t* name, uns_int scope_id);
extern AST_Variable new_AST_Variable(uns_int scope_id, uns_int local_id);

/* ========================================================================= */

extern void AST_Variable_eval(AST_Variable self);
extern void AST_Variable_assign(AST_Variable self, Object value);

/* ========================================================================= */

#endif // VARIABLE_H
