
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <system/ast/Super.h>

/* ========================================================================= */

Type_Class AST_Super_Class;

/* ========================================================================= */

AST_Super new_AST_Super(Object message, Type_Array arguments)
{
    NEW_OBJECT(AST_Super);
    result->message    = message;
    result->arguments  = arguments;
    result->info       = empty_AST_Info;
    return result;
}

void pre_init_AST_Super()
{
    AST_Super_Class = new_Class_named((Object)Type_Object_Class,
                                      L"AST_Super",
                                      CREATE_OBJECT_TAG(AST_SUPER));
}

/* ========================================================================= */

CNT(AST_Super_send) 
    Object class    = pop_EXP();

    uns_int argc = (uns_int)pop_EXP();
    Object receiver = peek_EXP(argc);
    
    Type_Class_dispatch(receiver, class, argc);
}

CNT(push_env_class)
    // TODO directly inline it
    Object env = (Object)current_env();
    assert0(IS_CONTEXT(env));
    push_EXP(((Runtime_BlockContext)env)->home_context->class);
}

void AST_Super_eval(AST_Super super)
{
    LOGFUN;

    // execute the method
    push_CNT(AST_Super_send);
    push_CNT(Class_super);
    push_CNT(push_env_class);

    push_EXP(0);

    push_CNT(store_argument);
    push_CNT(AST_Self_eval);
}

/* ========================================================================= */

void post_init_AST_Super()
{
}
