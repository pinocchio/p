#ifndef SEND_H
#define SEND_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Send_t {
    InlineCache     cache;
    Object          receiver;
    Object          message;
    Type_Array      arguments;
    AST_Info        info;
};

CREATE_INITIALIZERS(AST_Send)

extern AST_Send new_AST_Send(Object receiver, Object msg, Type_Array arguments);

/* ========================================================================= */

extern void AST_Send_send();
extern void CNT_store_argument();
extern void AST_Send_eval(AST_Send self);

/* ========================================================================= */

#endif // SEND_H
