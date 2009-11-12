#ifndef SEND_H
#define SEND_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_SEND_SIZE 5
#define AST_SEND_VARS L"cache", L"message", L"arguments", L"info", L"receiver"

struct AST_Send_t {
    InlineCache     cache;
    Object          message;
    Type_Array      arguments;
    AST_Info        info;
    Object          receiver;
};

CREATE_INITIALIZERS(AST_Send)

extern AST_Send new_AST_Send(Object receiver, Object msg, Type_Array arguments);

/* ========================================================================= */

extern void AST_Send_eval(AST_Send self);
extern void eval_store(uns_int idx);
extern void CNT_store_argument();

/* ========================================================================= */

#endif // SEND_H
