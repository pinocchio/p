
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockClosure.h>

/* ========================================================================= */

Type_Class Runtime_BlockClosure_Class;

/* ========================================================================= */

Runtime_BlockClosure new_Runtime_BlockClosure(AST_Block code, Runtime_BlockContext context) {
    NEW_OBJECT(Runtime_BlockClosure);
    result->code    = code;
    result->context = context;
    result->info    = empty_AST_Info;
    assert0(empty_AST_Info != NULL);
    assert0(result->info != NULL);
    return result;
}

void pre_init_Runtime_BlockClosure()
{
    Runtime_BlockClosure_Class = new_Named_Class((Object)Type_Object_Class,
                                            L"Runtime_BlockClosure",
                                            create_object_tag(RUNTIME_BLOCKCLOSURE));
}

/* ========================================================================= */

Type_Array activation_from_native(uns_int argc, Runtime_BlockClosure closure)
{
    AST_Block block = closure->code;
    uns_int paramc = block->params->size;
    uns_int localc = block->locals->size;

    assert1(argc == paramc, "Catch-all arguments not supported yet!");
    Type_Array args = new_Raw_Type_Array(argc + localc);
    while (argc > 0) {
        argc--;
        args->values[argc] = pop_EXP();
    }
    zap_EXP(); // remove self

    argc = paramc;
    // Set locals to nil.
    while (argc < paramc + localc) {
        args->values[argc] = Nil;
    }

    return args;
}

static CNT(restore_env)
    set_env((Object)current_env()->parent);
}

static void CNT_AST_Block_continue()
{
    Runtime_BlockContext env = current_env();
    Type_Array body = env->closure->code->body;
    poke_EXP(0, body->values[env->pc]);
    
    env->pc++;
    if (body->size <= env->pc) {
        poke_CNT(restore_env); 
    } 
    push_CNT(send_Eval);
}

void start_eval(Type_Array body)
{
    if (1 < body->size) {
        push_CNT(AST_Block_continue);
    } else {
        push_CNT(restore_env);
    }
    
    poke_EXP(0, body->values[0]);
    push_CNT(send_Eval);
}

void Runtime_BlockClosure_apply(Runtime_BlockClosure closure, uns_int argc)
{
    #ifdef DEBUG
    LOG("Closure Apply\n");
    #endif // DEBUG

    Type_Array body = closure->code->body;

    if (body->size == 0) { 
        RETURN_FROM_NATIVE(Nil);
        return; 
    }
    
    // TODO check if we call closure from source location. if so just pop
    // env-frame.
    Type_Array args = activation_from_native(argc, closure);

    set_env((Object)new_Runtime_BlockContext(closure, args));

    start_eval(body);
}

NATIVE(Runtime_BlockClosure_apply_)
    Runtime_BlockClosure closure = (Runtime_BlockClosure)self;
    Runtime_BlockClosure_apply(closure, argc);
}

/* ========================================================================= */

void post_init_Runtime_BlockClosure()
{
    store_native_method(Runtime_BlockClosure_Class, SMB_apply_, NM_Runtime_BlockClosure_apply_);
    store_native_method(Runtime_BlockClosure_Class, SMB_apply,  NM_Runtime_BlockClosure_apply_);
}
