#ifndef VARIABLE_H
#define VARIABLE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Variable_t {
    AST_Info    info;
    Object      local_id;
    Object      scope_id;
    Object      name;
};

extern Variable new_Variable_named(const wchar_t* name, uns_int scope_id);
extern Variable new_Variable(uns_int scope_id, uns_int local_id);

/* ========================================================================= */

extern void Variable_eval(Variable self);
extern void Variable_assign(Variable self, Object value);

/* ========================================================================= */

#endif // VARIABLE_H
