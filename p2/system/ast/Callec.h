#ifndef CALLEC_H
#define CALLEC_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Callec_t {
    Object         target;
    AST_Info       info;
};

CREATE_INITIALIZERS(AST_Callec)

extern AST_Callec new_AST_Callec();

/* ========================================================================= */

extern void AST_Callec_eval(AST_Callec self);

/* ========================================================================= */

#endif // CALLEC_H
