#ifndef SUPER_H
#define SUPER_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Super_t {
    uns_int         size;
    AST_Info        info;   
    Array      cache;
    Object          message; 
    Object          unused;
    Object          arguments[];
};

extern AST_Super new_AST_Super(Object message, uns_int argc, ...);

/* ========================================================================= */

extern void AST_Super_eval(AST_Super self);
extern void AST_Super_tail_eval(AST_Super self);

/* ========================================================================= */

#endif // SUPER_H
