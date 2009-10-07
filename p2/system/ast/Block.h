#ifndef AST_BLOCK_H
#define AST_BLOCK_H

#include <pinocchio.h>

/* ======================================================================== */

struct AST_Block_t {
    Runtime_Env env;
};

CREATE_INITIALIZERS(AST_Block)
extern AST_Block new_AST_Block();

/* ======================================================================== */

/* ======================================================================== */

#endif // AST_BLOCK_H
