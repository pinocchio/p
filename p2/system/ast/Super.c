
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
    AST_Super_Class = new_Named_Class((Object)Type_Object_Class,
                                      L"AST_Super",
                                      create_type(4, OBJECT));
}

/* ========================================================================= */

CNT(AST_Super_send) 
    Object class    = pop_EXP();
    Object receiver = pop_EXP();
    
    uns_int argc = (uns_int)pop_EXP();
    Type_Array args = new_Raw_Type_Array(argc);
    while (argc > 0) {
        args->values[--argc] = pop_EXP();
    }
    zap_EXP(); // Location of receiver
    AST_Super super   = (AST_Super)peek_EXP(1);
    
    Type_Class_dispatch(&super->cache, receiver, class,
                        super->message, args);
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
    push_CNT(AST_Self_eval);

    push_EXP(Nil); // Location of receiver

    // evaluate the arguments
    int i;
    for (i = 0; i < super->arguments->size; i++) {
        push_EXP(super->arguments->values[i]);
    }
    
    uns_int size = (uns_int)super->arguments->size + 2; // 2 * size
    // total
    push_EXP((Object)(uns_int)super->arguments->size);
    // todo
    push_EXP((Object)size);
    eval_store(size);
}

/* ========================================================================= */

void post_init_AST_Super()
{
}
