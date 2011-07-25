#ifndef OBJECT_H
#define OBJECT_H

#include <pinocchio.h>

/*  =======================================================================  */

struct Object {
    tObject value[0];
};

struct Header {
    uns_int     base:          8;
    uns_int     variable:      1;
    uns_int     bytes:         1;
    uns_int     mutable:       1;
    uns_int     gcmark:        1;
    uns_int     hash: sizeof(uns_int) * 8 - 12;
};

/*  =======================================================================  */

#endif // OBJECT_H
