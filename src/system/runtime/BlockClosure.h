#ifndef RUNTIME_CLOSURE_H
#define RUNTIME_CLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

struct BlockClosure_t {
    Block        code;
    BlockContext context;
};

extern void post_init_BlockClosure();
extern BlockClosure new_BlockClosure(Block code,
                                           BlockContext context);

/* ========================================================================= */

extern void BlockClosure_apply(BlockClosure closure, uns_int argc);
extern void apply(Optr closure, uns_int argc);

/* ========================================================================= */

extern BlockClosure new_Closure_from_Block(Block block);

/* ========================================================================= */

#endif // RUNTIME_CLOSURE_H
