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

BlockContext activation_from_native(long argc)
{
    BlockClosure closure = current_env()->closure;
    Block block          = closure->code;
    uns_int paramc       = block->params->size;
    uns_int localc       = block->locals->size;

    BlockContext context = current_env();

    while (argc) {
        argc--;
        context->locals[argc] = pop_EXP();
    }
    ZAP_EXP();

    argc = paramc;
    // Set locals to nil.
    while (argc < paramc + localc) {
        context->locals[argc] = nil;
        argc++;
    }

    return context;
}

threaded* BlockClosure_apply(BlockClosure closure, uns_int argc)
{
    Block block = closure->code;
    assert1(argc == block->params->size, "Argument count mismatch");

    if (block->size == 0) { 
        RETURN_FROM_NATIVE(nil);
        return PEEK_CNT(); 
    }

    if (block->locals->size == 0 && argc == 0) {
        BlockContext env = current_env();
        POKE_EXP(0, env);
        set_env((Optr)closure->context);
    } else {
        set_env((Optr)new_BlockContext(closure));
        activation_from_native(argc);
    }
    return push_code(block->threaded);
}

threaded* apply(Optr closure, uns_int argc)
{
    // TODO in the alternative case, send "value:*" message.
    // LOG("cls: %ls\n", HEADER(closure)->name->value);
    assert0(HEADER(closure) == BlockClosure_Class);
    return BlockClosure_apply((BlockClosure)closure, argc);
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
    Dictionary natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, SMB_blockclosureValue_message_, NM_BlockClosure_apply_);
    store_native(natives, SMB_blockclosureValueWithArguments_message_,
                          NM_BlockClosure_valueWithArguments_);
    natives = add_plugin(L"Runtime.BlockClosure");
    store_native(natives, SMB_numArgs, NM_BlockClosure_numArgs);
}
