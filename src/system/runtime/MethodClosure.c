
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodClosure.h>

/* ========================================================================= */

Type_Class Runtime_MethodClosure_Class;

/* ========================================================================= */

void pre_init_Runtime_MethodClosure()
{
    Runtime_MethodClosure_Class = 
        new_Class_named((Object)Type_Object_Class,
                        L"Runtime_MethodClosure",
                        CREATE_OBJECT_TAG(RUNTIME_METHODCLOSURE));
}

/* ========================================================================= */

Runtime_MethodClosure new_Runtime_MethodClosure(AST_Method code) 
{
    NEW_OBJECT(Runtime_MethodClosure); 
    result->code        = code;
    result->info        = empty_AST_Info;
    result->selector    = (Object)Nil;
    result->class       = (Type_Class)Nil;
    return result;
}

/* ========================================================================= */

static void CNT_AST_Method_continue()
{
    Runtime_MethodContext env = (Runtime_MethodContext)current_env();
    AST_Method code = env->closure->code;
    printf("method continue at: %lu\n", env->pc);
    poke_EXP(0, code->body[env->pc]);
    
    env->pc++;

    if (code->size <= env->pc) {
        poke_CNT(restore_env); 
    } 
    push_CNT(send_Eval);
}

static void start_eval(AST_Method method)
{
    if (1 < method->size) {
        push_CNT(AST_Method_continue);
    } else {
        push_CNT(restore_env);
    }
    
    poke_EXP(0, method->body[0]);
    push_CNT(send_Eval);
}

void Runtime_MethodClosure_invoke(Runtime_MethodClosure closure, Object self,
                            Object class, uns_int argc)
{
    LOG_AST_INFO("Closure Invoke: ", closure->info);
     
    AST_Method method = closure->code;

    if (method->size == 0) { 
        RETURN_FROM_NATIVE(self);
        return;
    }
    
    set_env((Object)new_Runtime_MethodContext(closure, self, class));
    activation_from_native(argc);

    start_eval(method);
}

/* ========================================================================= */

void post_init_Runtime_MethodClosure()
{

}
