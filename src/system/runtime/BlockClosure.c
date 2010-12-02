#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockClosure.h>

/* ========================================================================= */
static Symbol SMB_sendNext_to_class_;
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

static BlockContext activate_block(BlockClosure closure)
{
	BlockContext context = current_env();
    Block block          = closure->code;
    uns_int paramc       = block->params->size;
    uns_int localc       = block->locals->size;
    uns_int size         = paramc + localc;

    CLAIM_EXP(localc);

    // Set locals to nil.
    for (; paramc < size; paramc++) {
        context->locals[paramc] = nil;
    }
    
    HEADER(context)       = BlockContext_Class;
	context->size         = size;
	context->stacked      = true;

    BlockContext outer_scope = closure->context;

    context->closure      = closure;
    context->scope_id     = outer_scope->scope_id + 1;
    context->outer_scope  = outer_scope;
    context->home_context = outer_scope->home_context;

    return context;
}

static void BlockClosure_apply()
{
    // FIXME convert to new style of applying
    BlockClosure closure = (BlockClosure)((MethodContext)current_env())->self;
    Block block = closure->code;
    assert1(
        current_env()->size == block->params->size,
        "Argument count mismatch");

    if (block->size == 0) { 
        set_return_value(nil);
        return;
    }

    activate_block(closure);
    current_env()->pc = pc;
    pc = (threaded*)&block->threaded->values[0];
}

void apply(Optr closure)
{
    if (HEADER(closure) != BlockClosure_Class) {
        assert1(NULL, "TODO: MOP for apply NYI");
    }
    BlockClosure_apply();
}


BlockClosure new_Closure_from_Block(Block block) 
{
	return new_BlockClosure(block, capture_current_env());
}
/* ========================================================================= */

NATIVE(BlockClosure_apply_)
    BlockClosure_apply();
}

NATIVE0(BlockClosure_numArgs) 
    RETURN_FROM_NATIVE(new_SmallInt(((BlockClosure)self)->code->params->size));
}

NATIVE1(BlockClosure_valueWithArguments_)

    Array args = (Array)NATIVE_ARG(0);
    ASSERT_TAG_LAYOUT(GETTAG(args), Array);

    CLAIM_EXP(args->size - 1);
    uns_int idx;
    for (idx = 0; idx < args->size; idx++) {
        current_env()->locals[idx] = args->values[idx];
    }
    
    BlockClosure_apply();
}

/* ========================================================================= */

void post_init_BlockClosure()
{
    SMB_sendNext_to_class_ = new_Symbol(L"sendNext:to:class:");
    PLUGIN natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, L"blockclosureValue:message:", NM_BlockClosure_apply_);
    store_native(natives, L"blockclosureValueWithArguments:message:",
                          NM_BlockClosure_valueWithArguments_);

    natives = add_plugin(L"Runtime.BlockClosure");
    store_native(natives, L"numArgs",  NM_BlockClosure_numArgs);
}
