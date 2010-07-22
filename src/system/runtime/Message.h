#ifndef RUNTIME_MESSAGE_H
#define RUNTIME_MESSAGE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Message_t {
    uns_int size;
    Symbol 	selector;
    Optr    arguments[];
};

extern Message new_Message(Optr selector, uns_int size);

/* ========================================================================= */

#endif // RUNTIME_MESSAGE_H
