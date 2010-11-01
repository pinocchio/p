#ifndef SEND_H
#define SEND_H

#include <pinocchio.h>

/* ========================================================================= */

struct Send_t {
    ARRAY_SIZE_TYPE;
    Array   cache;
    Symbol  message;
    Optr    receiver;
    Optr    arguments[];
};

extern Send new_Send_raw(Optr receiver, Symbol msg, uns_int argc);
extern Send new_Send(Optr receiver, Symbol msg, uns_int argc, ...);

/* ========================================================================= */
extern Array Send_args(Send send);
/* ========================================================================= */

#endif // SEND_H
