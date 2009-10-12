
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Closure.h>

/* ========================================================================= */

Type_Class Runtime_Closure_Class;

/* ========================================================================= */


Runtime_Closure new_Runtime_Closure(AST_Block code, Runtime_BlockContext context) {
    NEW_OBJECT(Runtime_Closure);
    result->code    = code;
    result->context = context;
    result->info    = empty_AST_Info;
    assert0(empty_AST_Info != NULL);
    assert0(result->info != NULL);
    return result;
}

void pre_init_Runtime_Closure()
{
    Runtime_Closure_Class = new_Named_Class((Object)Type_Object_Class, L"Runtime_Closure");
}

/* ========================================================================= */


void Runtime_Closure_invoke(Runtime_Closure closure, Object self,
                            Object class, Type_Array args)
{
    LOG_AST_INFO("Closure Invoke: ", closure->info);
     
    if (closure->code->body->size->value == 0) { 
        poke_EXP(1, self);
        return; 
    }
    
    push_restore_env(); // pokes EXP
    
    Runtime_MethodContext env =
        new_Runtime_MethodContext(closure, self, class, NULL, args);

    env->home_context = env;
    
    Env = (Object)env;

    
    if (1 < closure->code->body->size->value) {
        push_CNT(AST_Block_continue);
    }
    
    push_EXP(closure->code->body->values[0]);
    push_CNT(send_Eval);
}


NATIVE(Runtime_Closure_apply_)
    #ifdef DEBUG
    LOG("Closure Apply \n");
    #endif // DEBUG
    
    Runtime_Closure closure = (Runtime_Closure)self;
    if (closure->code->body->size->value == 0) { 
        poke_EXP(1, Nil);
        return; 
    }
    
    push_restore_env();  // pokes EXP
    ASSERT_ARG_SIZE(closure->code->paramCount->value);
    
    Runtime_BlockContext env = new_Runtime_BlockContext(closure, args);
    env->home_context = closure->context->home_context;
    
    Env = (Object)env;
    
    if (1 < closure->code->body->size->value) {
        push_CNT(AST_Block_continue);
    }
    
    push_EXP(closure->code->body->values[0]);
    push_CNT(send_Eval);
}


/* ========================================================================= */

void post_init_Runtime_Closure()
{
    store_native_method(Runtime_Closure_Class, SMB_apply_, NM_Runtime_Closure_apply_);
    store_native_method(Runtime_Closure_Class, SMB_apply, NM_Runtime_Closure_apply_);
}
