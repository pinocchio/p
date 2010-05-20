#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Self.h>

/* ========================================================================= */

Object Self;
DECLARE_CLASS(AST_Self);

/* ========================================================================= */

void pre_init_AST_Self()
{
    // Manually create the class layout to support the #instance singleton
    AST_Self_Class = new_Bootstrapping_Class_sized(CLASS_SIZE + 1);
    INIT_CLASS(AST_Self);
    
    Self           = (Object) NEW_t(AST_Self);
    HEADER(Self)   = AST_Self_Class;
}

/* ========================================================================= */

void AST_Self_eval()
{
    // LOGFUN;
    Object env = (Object)current_env();
    assert0(IS_CONTEXT(env));
    // replace the current element (an AST_Self) with the Object's self
    poke_EXP(0, ((Runtime_BlockContext)env)->home_context->self);
}

CNT(AST_Self_eval)
    Object env = (Object)current_env();
    assert0(IS_CONTEXT(env));
    // replace the current element (an AST_Self) with the Object's self
    push_EXP(((Runtime_BlockContext)env)->home_context->self);
}

/* ========================================================================= */

void post_init_AST_Self()
{
    AST_Self_Class->cvars[0] = Self;
}

