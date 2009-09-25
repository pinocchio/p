#ifndef SUPER_H
#define SUPER_H

#include <pinocchio.h>

/* ========================================================================== */

struct AST_Super_t {
    InlineCache     cache;
    Object          message; 
    Type_Array arguments;
};

CREATE_INITIALIZERS(Super)
extern AST_Super new_Super(Object message, Type_Array arguments);

/* ========================================================================== */

extern void AST_Super_eval(AST_Super self);

/* ========================================================================== */
#endif // SUPER_H
