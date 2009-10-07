#ifndef AST_BLOCK_H
#define AST_BLOCK_H

#include <pinocchio.h>

/* ======================================================================== */

struct AST_Block_t {
    Type_SmallInt   paramCount;
    Runtime_Env     environment;
    Type_Array      body;
};

CREATE_INITIALIZERS(AST_Block)
extern AST_Block new_AST_Block(unsigned int paramCount, Type_Array body);

/* ======================================================================== */

/* ======================================================================== */

#endif // AST_BLOCK_H
