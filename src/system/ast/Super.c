#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <system/ast/Super.h>

/* ========================================================================= */

#define Super_args(super) super->arguments

Super new_Super(Symbol message, uns_int argc, ...)
{
    NEW_ARRAY_OBJECT(Super, Optr[argc]);
    result->message = message;
    result->cache   = new_InlineCache();
    SET_SIZE(result, argc);

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

OPCODE(super_send) 
    t_return();
    Optr class    = pop_EXP();
    uns_int argc  = (uns_int)pop_EXP();
    Optr receiver = PEEK_EXP(argc + 1); // SUPER object on top
    
    Class_dispatch(receiver, (Class)class, argc);
}

OPCODE(push_env_class)
    // TODO directly inline it
    Optr env = (Optr)current_env();
    PUSH_EXP(((BlockContext)env)->home_context->closure->host);
    pc += 1;
}

OPCODE(class_super)
    Optr class = PEEK_EXP(0);
    assert_class(class);
    POKE_EXP(0, ((Class)class)->super);
    pc += 1;
}

NNATIVE(Super_eval, 3,
    t_push_env_class,
    t_class_super,
    t_super_send);

void post_init_Super()
{
    INIT_NATIVE(Super_eval);
}

void Super_eval_threaded()
{
    push_code(T_Super_eval);
}
