
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
    Runtime_Closure_Class = new_Named_Class((Object)Type_Object_Class,
                                            L"Runtime_Closure",
                                            create_type(3, OBJECT));
}

/* ========================================================================= */

static Type_Array pop_args_from_stack(uns_int argc)
{
    Type_Array args = new_Raw_Type_Array(argc);
    while (argc > 0) {
        argc--;
        args->values[argc] = pop_EXP();
    }
    zap_EXP(); // remove self
    return args;
}

static void start_eval(Type_Array body)
{
    if (1 < body->size) {
        push_CNT(AST_Block_continue);
    }
    
    push_EXP(body->values[0]);
    push_CNT(send_Eval);
}

void Runtime_Closure_invoke(Runtime_Closure closure, Object self,
                            Object class, uns_int argc)
{
    LOG_AST_INFO("Closure Invoke: ", closure->info);
     
    Type_Array body = closure->code->body;

    if (body->size == 0) { 
        RETURN_FROM_NATIVE(self);
        return;
    }
    
    Type_Array args = pop_args_from_stack(argc);

    // MAKE SURE TO DO THIS AFTER GETTING THE ARGS!
    push_restore_env(); // pokes EXP

    Runtime_MethodContext env =
        new_Runtime_MethodContext(closure, self, class, NULL, args);

    env->home_context = env;
    Env = (Object)env;

    start_eval(body);
}

void Runtime_Closure_apply(Runtime_Closure closure, uns_int argc)
{
    #ifdef DEBUG
    LOG("Closure Apply\n");
    #endif // DEBUG

    ASSERT_ARG_SIZE(closure->code->paramCount->value);

    Type_Array body = closure->code->body;

    if (body->size == 0) { 
        RETURN_FROM_NATIVE(Nil);
        return; 
    }
    
    Type_Array args = pop_args_from_stack(argc);

    // MAKE SURE TO DO THIS AFTER GETTING THE ARGS!
    // TODO check if we call closure from source location. if so just pop
    // env-frame.
    push_restore_env();  // pokes EXP

    Runtime_BlockContext env = new_Runtime_BlockContext(closure, args);
    Env = (Object)env;

    start_eval(body);
}

NATIVE(Runtime_Closure_apply_)
    Runtime_Closure closure = (Runtime_Closure)self;
    Runtime_Closure_apply(closure, argc);
}

/* ========================================================================= */

void post_init_Runtime_Closure()
{
    store_native_method(Runtime_Closure_Class, SMB_apply_, NM_Runtime_Closure_apply_);
    store_native_method(Runtime_Closure_Class, SMB_apply,  NM_Runtime_Closure_apply_);
}
