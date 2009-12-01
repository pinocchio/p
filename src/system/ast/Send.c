#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Send.h>

/* ========================================================================= */

Type_Class AST_Send_Class;

/* ========================================================================= */

#define AST_Send_args(send) send->arguments

AST_Send new_AST_Send_raw(Object receiver, Object msg, uns_int argc) {
    NEW_ARRAY_OBJECT(AST_Send, Object[argc]);
    result->receiver            = receiver;
    result->message             = msg;
    result->info                = empty_AST_Info;
    result->cache               = new_Runtime_InlineCache();

    result->size                = argc;
    return result;
}

AST_Send new_AST_Send(Object receiver, Object msg, uns_int argc, ...)
{
    AST_Send result = new_AST_Send_raw(receiver, msg, argc);
    va_list args;
    va_start(args, argc);
    int idx;
    for (idx = 0; idx < argc; idx++) {
        AST_Send_args(result)[idx] = va_arg(args, Object);
    }
    va_end(args);

    return result;
}

void pre_init_AST_Send()
{
    AST_Send_Class = new_Class_named((Object)Type_Object_Class,
                                     L"AST_Send",
                                     CREATE_ARRAY_TAG(AST_SEND));
}

/* ========================================================================= */

static CNT(AST_Send_send)
    uns_int argc = (uns_int)pop_EXP();
    Object receiver = peek_EXP(argc);
    Type_Class_dispatch(receiver, HEADER(receiver), argc);
}

void CNT_store_argument()
{
    Object arg = peek_EXP(0);
    uns_int idx = (uns_int)peek_EXP(1);
    AST_Send send = (AST_Send)peek_EXP(idx + 2);
    poke_EXP(1, arg);
    if (idx < send->size) {
        poke_EXP(0, idx+1);
        push_EXP(AST_Send_args(send)[idx]);
        push_CNT(send_Eval);
    } else {
        poke_EXP(0, idx);
        zap_CNT();
    }
}

void AST_Send_eval(AST_Send self)
{
    LOGFUN;

    push_CNT(AST_Send_send);

    push_EXP(0);
    push_EXP(self->receiver);

    push_CNT(store_argument);
    push_CNT(send_Eval);
}

/* ========================================================================= */

void post_init_AST_Send(){}

