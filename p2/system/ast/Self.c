
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Self.h>

/* =========================================================================*/

Type_Class AST_Self_Class;
Object Self;

/* =========================================================================*/

void pre_init_AST_Self()
{
    AST_Self_Class = new_Named_Class((Object)Type_Object_Class, L"AST_Self");
    Self       = (Object) NEW_t(AST_Self);
    HEADER(Self) = (Object) AST_Self_Class;
}

/* =========================================================================*/

void AST_Self_eval()
{
    LOGFUN;
    Object env = (Object)current_env();
    if (HEADER(env) != (Object)Runtime_Env_Class) {
        assert0(NULL);
    }
    poke_EXP(1, ((Runtime_Env)env)->self);
}

CNT(AST_Self_eval)
    // Push to allow poke in AST_Self_eval
    push_EXP(Nil);
    AST_Self_eval();
}

/* =========================================================================*/

void post_init_AST_Self()
{
}

