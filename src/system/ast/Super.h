#ifndef SUPER_H
#define SUPER_H

#include <pinocchio.h>

/* ========================================================================= */

struct Super_t {
    uns_int         size;
    AST_Info        info;   
    Array      cache;
    Optr          message; 
    Optr          unused;
    Optr          arguments[];
};

extern Super new_Super(Optr message, uns_int argc, ...);

/* ========================================================================= */

extern void Super_eval(Super self);
extern void Super_tail_eval(Super self);

/* ========================================================================= */

#endif // SUPER_H
