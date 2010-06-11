#ifndef SUPER_H
#define SUPER_H

#include <pinocchio.h>

/* ========================================================================= */

struct Super_t {
    uns_int size;
    Info    info;   
    Array   cache;
    Symbol  message; 
    Optr    unused;
    Optr    arguments[];
};

extern Super new_Super(Symbol message, uns_int argc, ...);

/* ========================================================================= */

#endif // SUPER_H
