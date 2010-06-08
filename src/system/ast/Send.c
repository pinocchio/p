#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Send.h>

/* ========================================================================= */

#define Send_args(send) send->arguments

Send new_Send_raw(Optr receiver, Optr msg, uns_int argc) {
    NEW_ARRAY_OBJECT(Send, Optr[argc]);
    result->receiver = receiver;
    result->message  = msg;
    result->info     = empty_AST_Info;
    result->cache    = new_Runtime_InlineCache();

    result->size     = argc;
    return result;
}

Send new_Send(Optr receiver, Optr msg, uns_int argc, ...)
{
    Send result = new_Send_raw(receiver, msg, argc);
    va_list args;
    va_start(args, argc);
    int idx;
    for (idx = 0; idx < argc; idx++) {
        Send_args(result)[idx] = va_arg(args, Optr);
    }
    va_end(args);
    return result;
}

/* ========================================================================= */

static CNT(Send_send)
    uns_int argc    = (uns_int)pop_EXP();
    Optr receiver = peek_EXP(argc);
    Class_dispatch(receiver, HEADER(receiver), argc);
}

void CNT_store_argument()
{
    Optr arg    = peek_EXP(0);
    uns_int idx   = (uns_int)peek_EXP(1);
    Send send = (Send)peek_EXP(idx + 2);
    poke_EXP(1, arg);
    if (idx < send->size) {
        poke_EXP(0, idx+1);
        push_EXP(Send_args(send)[idx]);
        push_CNT(send_Eval);
    } else {
        poke_EXP(0, idx);
        zap_CNT();
    }
}

void Send_eval(Send self)
{
    // LOGFUN;

    push_CNT(Send_send);

    push_EXP(0);
    push_EXP(self->receiver);

    push_CNT(store_argument);
    push_CNT(send_Eval);
}
