
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <system/ast/Super.h>

/* ======================================================================== */

Type_Class AST_Super_Class;

/* ======================================================================== */

AST_Super new_AST_Super(Object message, Type_Array arguments)
{
    NEW_OBJECT(AST_Super);
    result->message    = message;
    result->arguments  = arguments;
    return result;
}

void pre_init_AST_Super()
{
    AST_Super_Class = new_Named_Class((Object)Type_Object_Class, L"AST_Super");
}

/* =========================================================================*/

CNT(AST_Super_send) 
    Object class = pop_EXP();
    Object receiver = pop_EXP();
    Type_Array args = (Type_Array)pop_EXP();
    
    AST_Super super   = (AST_Super)peek_EXP(1);
    // insert the receiver at the old ast_super position
    poke_EXP(1, receiver);
    
    Type_Class_dispatch(&super->cache, receiver, class,
                   super->message, args);
}

CNT(push_env_class)
    Object env = (Object)current_env();
    if (HEADER(env) != (Object)Runtime_BlockContext_Class) {
        assert0(NULL);
    }
    push_EXP(((Runtime_BlockContext)env)->block->class);
}

void AST_Super_eval(AST_Super super)
{
    LOGFUN;
    Type_Array args = new_Raw_Type_Array(super->arguments->size->value);
    // execute the method
    push_CNT(AST_Super_send);
    push_CNT(Class_super);
    push_CNT(push_env_class);
    push_CNT(AST_Self_eval);
    push_EXP(args);
    // evaluate the arguments
    int i;
    for (i = 0; i < super->arguments->size->value; i++) {
        push_CNT(store_argument);
        push_EXP(args);
        push_EXP(new_Type_SmallInt(i));
        push_CNT(send_Eval);
        push_EXP(super->arguments->values[i]);
    }
}

/* =========================================================================*/

void post_init_AST_Super()
{
}
