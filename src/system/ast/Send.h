#ifndef SEND_H
#define SEND_H

#include <pinocchio.h>

/* ========================================================================= */

struct Send_t {
    uns_int size;
    Info    info;
    Array   cache;
    Symbol  message;
    Optr    receiver;
    Optr    arguments[];
};

extern Send new_Send_raw(Optr receiver, Symbol msg, uns_int argc);
extern Send new_Send(Optr receiver, Symbol msg, uns_int argc, ...);

/* ========================================================================= */
extern Array Send_args(Send send);

extern void Send_eval(Send self);
extern void Send_tail_eval(Send self);
extern void eval_store(uns_int idx);
extern void CNT_store_argument();

/* ========================================================================= */

#endif // SEND_H
