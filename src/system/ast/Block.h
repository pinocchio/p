#ifndef AST_BLOCK_H
#define AST_BLOCK_H

#include <pinocchio.h>

/* ========================================================================= */

struct Block_t {
    uns_int     size;
    AST_Info    info;
    Array  params;
    Array  locals;
    Optr      body[];
};

extern Block new_Block(uns_int paramCount,
                               uns_int localCount,
                               uns_int depth,
                               uns_int statementCount,
                               ...);

extern Block new_Block_with(Array params,
                                    Array locals,
                                    uns_int statementCount,
                                    ...);

/* ========================================================================= */

#define BLOCK_PARAM(block, param)\
    ((Variable)((Block)block)->params->values[param])
#define BLOCK_LOCAL(block, local)\
    ((Variable)((Block)block)->locals->values[local])

/* ========================================================================= */

extern void init_raw_variable_array(Array array, uns_int scope_id,
                                    uns_int size, uns_int local_id);
extern void init_variable_array(Array array, uns_int local_id);

/* ========================================================================= */

extern void Block_eval(Block self);

/* ========================================================================= */

#endif // AST_BLOCK_H
