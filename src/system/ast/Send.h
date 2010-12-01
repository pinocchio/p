#ifndef SEND_H
#define SEND_H

#include <pinocchio.h>

/* ========================================================================= */

struct Send_t {
    uns_int  size;
    Array    cache;
    Symbol   message;
    Variable returnAddress;
    Optr     receiver;
    Optr     arguments[];
};

extern Send new_Send_raw(Variable returnAddress, Optr receiver, Symbol msg, uns_int argc);
extern Send new_Send(Variable returnAddress, Optr receiver, Symbol msg, uns_int argc, ...);

/* ========================================================================= */
extern Array Send_args(Send send);
/* ========================================================================= */

#endif // SEND_H
