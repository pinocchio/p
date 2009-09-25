
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Self.h>

/* =========================================================================*/

Type_Class Self_Class;
Object Self;

/* =========================================================================*/

extern void pre_initialize_Self()
{
    Self_Class = new_Named_Class((Object)Object_Class, L"Self");
    Self       = (Object) NEW_t(AST_Self);
    HEADER(Self) = (Object) Self_Class;
}

/* =========================================================================*/

extern void AST_Self_eval()
{
    LOGFUN;
    Object env = (Object)current_env();
    if (HEADER(env) != (Object)Env_Class) {
        assert(NULL);
    }
    poke_EXP(1, ((Runtime_Env)env)->self);
}

extern void CNT_AST_Self_eval()
{
    LOGFUN;
    zap_CNT();
    // Push to allow poke in Self_eval
    push_EXP(Nil);
    AST_Self_eval();
}

/* =========================================================================*/

extern void post_initialize_Self()
{
}

