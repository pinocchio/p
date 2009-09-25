#ifndef CALLEC_H
#define CALLEC_H

#include <pinocchio.h>

/* ========================================================================== */

struct AST_Callec_t {
    AST_Continue   cont;
    Object         target;
};

CREATE_INITIALIZERS(Callec)

extern AST_Callec new_Callec();

/* ========================================================================== */

extern void AST_Callec_eval(AST_Callec self);

/* ========================================================================== */

#endif // CALLEC_H
