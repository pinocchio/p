#ifndef CONTINUE_H
#define CONTINUE_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Continue_t {
    Object         *EXP;
    cont           *CNT;
    Object          target;
    AST_Info        info;
};

CREATE_INITIALIZERS(AST_Continue)
extern AST_Continue new_AST_Continue(Object target);

/* ========================================================================= */

#endif // CONTINUE_H
