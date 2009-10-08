
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Self.h>

/* ========================================================================= */

Type_Class AST_Self_Class;
Object Self;

/* ========================================================================= */

void pre_init_AST_Self()
{
    AST_Self_Class = new_Named_Class((Object)Type_Object_Class, L"AST_Self");
    Self       = (Object) NEW_t(AST_Self);
    HEADER(Self) = (Object) AST_Self_Class;
}

/* ========================================================================= */

void AST_Self_eval()
{
    LOGFUN;
    Object env = (Object)current_env();
    assert0(IS_CONTEXT(env));
    // replace the current element (an AST_Self) with the Object's self
    poke_EXP(1, ((Runtime_BlockContext)env)->home_context->self);
}

CNT(AST_Self_eval)
    // Push to allow poke in AST_Self_eval
    push_EXP(Nil);
    AST_Self_eval();
}

/* ========================================================================= */

void post_init_AST_Self()
{
}

