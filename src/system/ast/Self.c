#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Self.h>

/* ========================================================================= */

Optr self;

/* ========================================================================= */

void pre_init_Self()
{
}

/* ========================================================================= */

void Self_eval()
{
    // LOGFUN;
    BlockContext env = current_env();
    assert0(IS_CONTEXT(env));
    // replace the current element (an self) with the Optr's self
    poke_EXP(0, env->home_context->self);
}

CNT(Self_eval)
    BlockContext env = current_env();
    assert0(IS_CONTEXT(env));
    // replace the current element (an self) with the Optr's self
    push_EXP(env->home_context->self);
}

/* ========================================================================= */

void post_init_Self()
{
    self           = (Optr) NEW_t(Self);
    HEADER(self)   = Self_Class;
    Self_Class->cvars[0] = self;
}
