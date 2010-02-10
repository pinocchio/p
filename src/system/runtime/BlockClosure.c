
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
    Runtime_BlockClosure_Class = new_Class_named((Object)Type_Object_Class,
                                            L"Runtime_BlockClosure",
                                            CREATE_OBJECT_TAG(RUNTIME_BLOCKCLOSURE));
}

/* ========================================================================= */

Type_Array activation_from_native(uns_int argc)
{
    Runtime_BlockClosure closure = current_env()->closure;
    AST_Block block = closure->code;
    uns_int paramc = block->params->size;
    uns_int localc = block->locals->size;

    assert1(argc == paramc, "Catch-all arguments not supported yet!");

    Type_Array args = context_locals(current_env());

    while (argc > 0) {
        argc--;
        args->values[argc] = pop_EXP();
    }
    zap_EXP(); // remove self

    argc = paramc;
    // Set locals to nil.
    while (argc < paramc + localc) {
        args->values[argc] = Nil;
        argc++;
    }

    return args;
}

CNT(restore_env)
    set_env((Object)current_env()->parent_frame);
}

static void CNT_AST_Block_continue()
{
    Runtime_BlockContext env = current_env();
    AST_Block code = env->closure->code;
    poke_EXP(0, code->body[env->pc]);
    
    env->pc++;
    if (code->size <= env->pc) {
        poke_CNT(restore_env); 
    } 
    push_CNT(send_Eval);
}

static void start_eval(AST_Block block)
{
    if (1 < block->size) {
        push_CNT(AST_Block_continue);
    } else {
        push_CNT(restore_env);
    }
    
    poke_EXP(0, block->body[0]);
    push_CNT(send_Eval);
}

void Runtime_BlockClosure_apply(Runtime_BlockClosure closure, uns_int argc)
{
    #ifdef DEBUG
    // LOG("Closure Apply\n");
    #endif // DEBUG

    AST_Block block = closure->code;

    if (block->size == 0) { 
        RETURN_FROM_NATIVE(Nil);
        return; 
    }
    
    set_env((Object)new_Runtime_BlockContext(closure));
    activation_from_native(argc);

    start_eval(block);
}

NATIVE(Runtime_BlockClosure_apply_)
    Runtime_BlockClosure closure = (Runtime_BlockClosure)self;
    Runtime_BlockClosure_apply(closure, argc);
}

NATIVE(Runtime_BlockClosure_numArgs) 
    RETURN_FROM_NATIVE(new_Type_SmallInt(((Runtime_BlockClosure) self)->code->params->size));
}

/* ========================================================================= */

void post_init_Runtime_BlockClosure()
{
    store_native_method(Runtime_BlockClosure_Class, SMB_value,   NM_Runtime_BlockClosure_apply_);
    store_native_method(Runtime_BlockClosure_Class, SMB_value_,  NM_Runtime_BlockClosure_apply_);
    store_native_method(Runtime_BlockClosure_Class, SMB_apply_,  NM_Runtime_BlockClosure_apply_);
    store_native_method(Runtime_BlockClosure_Class, SMB_apply,   NM_Runtime_BlockClosure_apply_);
    store_native_method(Runtime_BlockClosure_Class, SMB_valueWithArguments_,   NM_Runtime_BlockClosure_apply_);
    store_native_method(Runtime_BlockClosure_Class, SMB_numArgs, NM_Runtime_BlockClosure_numArgs);
}
