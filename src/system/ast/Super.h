#ifndef SUPER_H
#define SUPER_H

#include <pinocchio.h>

/* ========================================================================= */

struct Super_t {
    uns_int size;
    Array   cache;
    Symbol  message; 
    Optr    unused;
    Optr    arguments[];
};

extern Super new_Super(Symbol message, uns_int argc, ...);
extern void Super_eval_threaded();
extern void post_init_Super();

/* ========================================================================= */

#endif // SUPER_H
