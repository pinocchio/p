#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockClosure.h>

/* ========================================================================= */

BlockClosure new_BlockClosure(Block code, BlockContext context) {
    NEW_OBJECT(BlockClosure);
    assert1(HEADER(context) == BlockContext_Class ||
            HEADER(context) == MethodContext_Class,
            "Wrong type of context!");
    result->code      = code;
    result->context   = context;
    return result;
}

/* ========================================================================= */

static BlockContext activate_block(BlockClosure closure, long argc)
{
	//TODO merge with BlockContext
    Block block          = closure->code;
    uns_int paramc       = block->params->size;
    uns_int localc       = block->locals->size;
    uns_int size         = paramc + localc;

    BlockContext context = (BlockContext)&PEEK_EXP(argc - 1);

    CLAIM_EXP(CONTEXT_SIZE);

    uns_int i;
    for (i = 0; i < argc + 1; i++) {
        POKE_EXP(i, PEEK_EXP(i + CONTEXT_SIZE));
    }

    CLAIM_EXP(localc);

    // Set locals to nil.
    for (; paramc < size; paramc++) {
        context->locals[paramc] = nil;
    }
    
    HEADER(context)       = BlockContext_Class;
	context->size         = size;
	context->stacked      = true;
    context->parent_frame = current_env();
    set_env((Optr)context);

    BlockContext outer_scope = closure->context;

    context->scope_id     = outer_scope->scope_id + 1;
    context->outer_scope  = outer_scope;
    context->home_context = outer_scope->home_context;

    return context;
}

void BlockClosure_apply(BlockClosure closure, uns_int argc)
{
    Block block = closure->code;
    assert1(argc == block->params->size, "Argument count mismatch");

    if (block->size == 0) { 
        RETURN_FROM_NATIVE(nil);
        return;
    }

    if (block->locals->size == 0 && argc == 0) {
        BlockContext env = current_env();
        POKE_EXP(0, env);
        set_env((Optr)closure->context);
    } else {
        activate_block(closure, argc);
    }
    push_code(block->threaded);
}

void apply(Optr closure, uns_int argc)
{
    // TODO in the alternative case, send "value:*" message.
    // LOG("cls: %ls\n", HEADER(closure)->name->value);
    assert0(HEADER(closure) == BlockClosure_Class);
    BlockClosure_apply((BlockClosure)closure, argc);
}


BlockClosure new_Closure_from_Block(Block block) 
{
	return new_BlockClosure(block, capture_current_env());
}
/* ========================================================================= */

NATIVE(BlockClosure_apply_)
    BlockClosure closure = (BlockClosure)self;
    BlockClosure_apply(closure, argc);
}

NATIVE0(BlockClosure_numArgs) 
    RETURN_FROM_NATIVE(new_SmallInt(((BlockClosure)self)->code->params->size));
}

NATIVE1(BlockClosure_valueWithArguments_)
    Array args = (Array)pop_EXP();
    ASSERT_TAG_LAYOUT(GETTAG(args), Array);

    long pos = 0;
    while(pos < args->size) {
        PUSH_EXP(args->values[pos]);
        pos++;
    }
    
    BlockClosure closure = (BlockClosure)self;
    BlockClosure_apply(closure, args->size);
}

/* ========================================================================= */

void post_init_BlockClosure()
{
    PLUGIN natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, L"blockclosureValue:message:", NM_BlockClosure_apply_);
    store_native(natives, L"blockclosureValueWithArguments:message:",
                          NM_BlockClosure_valueWithArguments_);

    natives = add_plugin(L"Runtime.BlockClosure");
    store_native(natives, L"numArgs",  NM_BlockClosure_numArgs);
}
