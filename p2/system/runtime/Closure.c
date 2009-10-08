
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Closure.h>

/* ======================================================================== */

Type_Class Runtime_Closure_Class;

/* ======================================================================== */

void pre_init_Runtime_Closure()
{
    Runtime_Closure_Class = new_Named_Class((Object)Type_Object_Class, L"Runtime_Closure");
}

/* ======================================================================== */


void Runtime_Closure_invoke(Runtime_Closure closure, Object self,
                            Object class, Type_Array args)
{
    push_restore_env();
    
    Runtime_MethodContext env =
        new_Runtime_MethodContext(closure, self, class, args);

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


/* ======================================================================== */

void post_init_Runtime_Closure()
{

}
