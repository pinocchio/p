
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
    push_restore_env();
    
    Runtime_MethodContext env =
        new_Runtime_MethodContext(closure, self, class, NULL, args);

    env->home_context = env;
    
    Env = (Object)env;
    if (closure->code->body->size->value == 0) { 
        push_EXP(self);
        return; 
    }
    
    if (1 < closure->code->body->size->value) {
        push_CNT(AST_Block_continue);
    }
    
    push_EXP(closure->code->body->values[0]);
    push_CNT(send_Eval);
}


NATIVE(Runtime_Closure_apply_)
    push_restore_env();
    Runtime_Closure closure = (Runtime_Closure)self;
    ASSERT_ARG_SIZE(closure->code->paramCount->value);
    
    Runtime_BlockContext env = new_Runtime_BlockContext(closure, args);
    env->home_context = closure->context->home_context;
    
    Env = (Object)env;
    
    if (closure->code->body->size->value == 0) { 
        push_EXP(Nil);
        return; 
    }
    
    if (1 < closure->code->body->size->value) {
        push_CNT(AST_Block_continue);
    }
    
    push_EXP(closure->code->body->values[0]);
    push_CNT(send_Eval);
}


/* ========================================================================= */

void post_init_Runtime_Closure()
{
    store_native_method(Runtime_Closure_Class, (Object)SMB_apply_, NM_Runtime_Closure_apply_);
    store_native_method(Runtime_Closure_Class, (Object)SMB_apply, NM_Runtime_Closure_apply_);
}
