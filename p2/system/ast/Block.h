
#ifndef BLOCK_H
#define BLOCK_H

#include <pinocchio.h>

/* ========================================================================== */

struct AST_Block_t {
    Runtime_Env scope;
    
};

CREATE_INITIALIZERS(Block)

extern AST_Block new_AST_Block();

/* ========================================================================== */



/* ========================================================================== */

#endif // BLOCK_H