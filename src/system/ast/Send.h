#ifndef SEND_H
#define SEND_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Send_t {
    uns_int     size;
    AST_Info    info;
    Collection_Array  cache;
    Object      message;
    Object      receiver;
    Object      arguments[];
};

CREATE_INITIALIZERS(AST_Send)

extern AST_Send new_AST_Send_raw(Object receiver, Object msg, uns_int argc);
extern AST_Send new_AST_Send(Object receiver, Object msg, uns_int argc, ...);

/* ========================================================================= */
extern Collection_Array AST_Send_args(AST_Send send);

extern void AST_Send_eval(AST_Send self);
extern void AST_Send_tail_eval(AST_Send self);
extern void eval_store(uns_int idx);
extern void CNT_store_argument();

/* ========================================================================= */

#endif // SEND_H
