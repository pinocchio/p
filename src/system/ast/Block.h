#ifndef AST_BLOCK_H
#define AST_BLOCK_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_BLOCK_SIZE 3
#define AST_BLOCK_VARS L"info", L"params", L"locals"

/* ========================================================================= */

struct AST_Block_t {
    uns_int     size;
    AST_Info    info;
    Type_Array  params;
    Type_Array  locals;
    Object      body[];
};

CREATE_INITIALIZERS(AST_Block)
extern AST_Block new_AST_Block(uns_int paramCount,
                               uns_int localCount,
                               uns_int depth,
                               uns_int statementCount,
                               ...);

extern AST_Block new_AST_Block_with(Type_Array params,
                                    Type_Array locals,
                                    uns_int statementCount,
                                    ...);

/* ========================================================================= */

#define BLOCK_PARAM(block, param)\
    ((AST_Variable)((AST_Block)block)->params->values[param])
#define BLOCK_LOCAL(block, local)\
    ((AST_Variable)((AST_Block)block)->locals->values[local])

/* ========================================================================= */

extern void init_raw_variable_array(Type_Array array, uns_int scope_id,
                                    uns_int size, uns_int local_id);
extern void init_variable_array(Type_Array array, uns_int local_id);

/* ========================================================================= */

extern void AST_Block_eval(AST_Block self);

/* ========================================================================= */

#endif // AST_BLOCK_H
