#ifndef AST_BLOCK_H
#define AST_BLOCK_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_BLOCK_SIZE 4

/* ========================================================================= */

struct AST_Block_t {
    Type_Array  params;
    Type_Array  locals;
    Type_Array  body;
    AST_Info    info;
};

CREATE_INITIALIZERS(AST_Block)
extern AST_Block new_AST_Block(unsigned int paramCount,
                               unsigned int localCount,
                               Type_Array body);

/* ========================================================================= */

#define BLOCK_PARAM(block, param)\
    ((AST_Variable)((AST_Block)block)->params->values[param])
#define BLOCK_LOCAL(block, local)\
    ((AST_Variable)((AST_Block)block)->locals->values[local])

/* ========================================================================= */

extern void CNT_AST_Block_continue();
extern void AST_Block_eval(AST_Block self);

/* ========================================================================= */

#endif // AST_BLOCK_H
