#ifndef AST_BLOCK_H
#define AST_BLOCK_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_BLOCK_SIZE 5

/* ========================================================================= */

struct AST_Block_t {
    Type_SmallInt           paramCount;
    Type_SmallInt           localCount;
    Runtime_BlockContext    environment;
    Type_Array              body;
    AST_Info                info;
};

CREATE_INITIALIZERS(AST_Block)
extern AST_Block new_AST_Block(unsigned int paramCount,
                               unsigned int localCount,
                               Type_Array body);

/* ========================================================================= */

extern void CNT_AST_Block_continue();
extern void AST_Block_eval(AST_Block self);

/* ========================================================================= */

#endif // AST_BLOCK_H
