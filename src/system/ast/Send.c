#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Send.h>

/* ========================================================================= */

#define Send_args(send) send->arguments

Send new_Send_raw(Optr receiver, Symbol msg, uns_int argc) {
    NEW_ARRAY_OBJECT(Send, Optr[argc]);
    result->receiver = receiver;
    result->message  = msg;
    result->cache    = new_InlineCache();

    result->size     = argc;
    return result;
}

Send new_Send(Optr receiver, Symbol msg, uns_int argc, ...)
{
    Send result = new_Send_raw(receiver, msg, argc);
    va_list args;
    va_start(args, argc);
    long idx;
    for (idx = 0; idx < argc; idx++) {
        Send_args(result)[idx] = va_arg(args, Optr);
    }
    va_end(args);
    return result;
}

/* ========================================================================= */
