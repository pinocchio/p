#ifndef SUPER_H
#define SUPER_H

#include <pinocchio.h>

/* ========================================================================= */

struct Super_t {
    uns_int  size;
    Array    cache;
    Symbol   message; 
    Variable returnAddress;
    Optr     arguments[];
};

extern Super new_Super(Variable returnAddress, Symbol message, uns_int argc, ...);
extern void Super_eval_threaded();
extern void post_init_Super();

/* ========================================================================= */

#endif // SUPER_H
