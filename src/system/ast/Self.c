#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Self.h>

/* ========================================================================= */

Object Self;

/* ========================================================================= */

void pre_init_AST_Self()
{
}

/* ========================================================================= */

void AST_Self_eval()
{
    // LOGFUN;
    Runtime_BlockContext env = current_env();
    assert0(IS_CONTEXT(env));
    // replace the current element (an AST_Self) with the Object's self
    poke_EXP(0, env->home_context->self);
}

CNT(AST_Self_eval)
    Runtime_BlockContext env = current_env();
    assert0(IS_CONTEXT(env));
    // replace the current element (an AST_Self) with the Object's self
    push_EXP(env->home_context->self);
}

/* ========================================================================= */

void post_init_AST_Self()
{
    Self           = (Object) NEW_t(AST_Self);
    HEADER(Self)   = AST_Self_Class;
    AST_Self_Class->cvars[0] = Self;
}
