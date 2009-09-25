#ifndef VARIABLE_H
#define VARIABLE_H

#include <pinocchio.h>

/* ========================================================================== */

struct AST_Variable_t {
    unsigned int    index;
    Object          key;
    Object          name;
};

CREATE_INITIALIZERS(Variable)

extern AST_Variable new_Variable(const wchar_t* name);

/* ========================================================================= */

extern void AST_Variable_eval(AST_Variable self);
extern void AST_Variable_assign(AST_Variable self, Object value);

/* ========================================================================= */

#endif // VARIABLE_H
