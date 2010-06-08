#ifndef RUNTIME_MESSAGE_H
#define RUNTIME_MESSAGE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_Message_t {
    uns_int     size;
    Symbol selector;
    Optr      arguments[];
};

extern Runtime_Message new_Runtime_Message(Optr selector, uns_int size);

/* ========================================================================= */

#endif // RUNTIME_MESSAGE_H
