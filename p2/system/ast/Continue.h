#ifndef CONTINUE_H
#define CONTINUE_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Continue_t {
    uns_int     exp_offset;
    uns_int     cnt_offset;
    Object      Env;
    Object      target;
    AST_Info    info;
};

CREATE_INITIALIZERS(AST_Continue)
extern AST_Continue new_AST_Continue();

/* ========================================================================= */

#endif // CONTINUE_H
