#ifndef CONTINUE_H
#define CONTINUE_H

#include <pinocchio.h>

/* ========================================================================== */

struct AST_Continue_t {
    Object         *EXP;
    cont           *CNT;
    Object          target;
};

CREATE_INITIALIZERS(Continue)
extern AST_Continue new_Continue(Object target);

/* ========================================================================= */

#endif // CONTINUE_H
