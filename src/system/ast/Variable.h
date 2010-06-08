#ifndef VARIABLE_H
#define VARIABLE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Variable_t {
    AST_Info    info;
    Optr      local_id;
    Optr      scope_id;
    Optr      name;
};

extern Variable new_Variable_named(const wchar_t* name, uns_int scope_id);
extern Variable new_Variable(uns_int scope_id, uns_int local_id);

/* ========================================================================= */

extern void Variable_eval(Variable self);
extern void Variable_assign(Variable self, Optr value);

/* ========================================================================= */

#endif // VARIABLE_H
