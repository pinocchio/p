#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <system/ast/Super.h>

/* ========================================================================= */

#define Super_args(super) super->arguments

Super new_Super(Object message, uns_int argc, ...)
{
    NEW_ARRAY_OBJECT(Super, Object[argc]);
    result->message = message;
    result->info    = empty_AST_Info;
    result->cache   = new_Runtime_InlineCache();
    result->size    = argc;

    va_list args;
    va_start(args, argc);
    int idx;
    for (idx = 0; idx < argc; idx++) {
        Super_args(result)[idx] = va_arg(args, Object);
    }
    va_end(args);

    return result;
}

/* ========================================================================= */

CNT(Super_send) 
    Object class    = pop_EXP();
    uns_int argc    = (uns_int)pop_EXP();
    Object receiver = peek_EXP(argc);
    
    Class_dispatch(receiver, (Class)class, argc);
}

CNT(push_env_class)
    // TODO directly inline it
    Object env = (Object)current_env();
    assert0(IS_CONTEXT(env));
    push_EXP(((Runtime_BlockContext)env)->home_context->closure->host);
}

void Super_eval(Super super)
{
    // LOGFUN;

    // execute the method
    push_CNT(Super_send);
    push_CNT(Class_super);
    push_CNT(push_env_class);

    push_EXP(0);

    push_CNT(store_argument);
    push_CNT(Self_eval);
}
