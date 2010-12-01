#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <system/ast/Super.h>

/* ========================================================================= */

#define Super_args(super) super->arguments

Super new_Super(Variable returnAddress, Symbol message, uns_int argc, ...)
{
    NEW_ARRAY_OBJECT(Super, Optr[argc]);
    result->returnAddress = returnAddress;
    result->message = message;
    result->cache   = new_InlineCache();
    result->size    = argc;

    va_list args;
    va_start(args, argc);
    long idx;
    for (idx = 0; idx < argc; idx++) {
        Super_args(result)[idx] = va_arg(args, Optr);
    }
    va_end(args);

    return result;
}

/* ========================================================================= */

void post_init_Super()
{
}
