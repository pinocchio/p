#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodClosure.h>

/* ========================================================================= */

MethodClosure new_MethodClosure(Method code, Class host) 
{
    NEW_OBJECT(MethodClosure); 
    result->code        = code;
    result->info        = empty_Info;
    result->selector    = (Optr)nil;
    result->host        = host;
    return result;
}

/* ========================================================================= */

static MethodContext activate_method(MethodClosure closure, long argc)
{
	//TODO merge with BlockContext
    Method method        = closure->code;
    uns_int paramc       = method->params->size;
    uns_int localc       = method->locals->size;
    uns_int size         = paramc + localc;

    MethodContext context = (MethodContext)&PEEK_EXP(argc);

    CLAIM_EXP(CONTEXT_SIZE);

    uns_int i;
    for (i = 0; i < argc + 1; i++) {
        POKE_EXP(i, PEEK_EXP(i + CONTEXT_SIZE));
    }

    argc = paramc;
    // Set locals to nil.
    while (argc < size) {
        context->locals[argc] = nil;
        argc++;
    }
    
	context->size         = size;
    context->scope_id     = 0;
	context->stacked      = 1;
    context->home_context = context;
    context->parent_frame = current_env();
    context->closure      = closure;

	context->for_method   = 1;

    //inspect(context);
    set_env(context);

    return context;
}


threaded* Method_invoke(MethodClosure closure,
                        Method method,
                        Optr self, uns_int argc)
{
    assert1(method->code != (Array)nil, "Uncompiled method found!");

    assert(argc == method->params->size,
        printf("Argument count mismatch. Expected: %lu given: %lu\n",
               method->params->size, argc););
    
    if (method->size == 0) {
        RETURN_FROM_NATIVE(self);
        return PEEK_CNT();
    }
    
    activate_method(closure, argc);

    return push_code(method->code);
}

#define INVOKE_IF(name) if(method_class == name##_Class) {\
        return name##_invoke(closure, (name)method, self, argc);\
    }

threaded* MethodClosure_invoke(MethodClosure closure, Optr self, uns_int argc)
{
    Method method      = closure->code;
    Class method_class = HEADER(method);
    
    INVOKE_IF(Method)
    INVOKE_IF(NativeMethod)
    INVOKE_IF(ReflectionMethod)

    assert1(NULL, "Unknown type of method");
    return BREAK;
}


NATIVE1(MethodClosure_valueWithArguments_)
    Array args = (Array)pop_EXP();
    ASSERT_TAG_LAYOUT(GETTAG(args), Array);
    
    long pos = args->size;
    while(pos > 0) {
        pos--;
        PUSH_EXP(args->values[pos]);
    }
    
    BlockClosure closure = (BlockClosure)self;
    BlockClosure_apply(closure, args->size);
}

/* ========================================================================= */

void post_init_MethodClosure()
{
    // TODO move the whole class to AST
    Dictionary natives = add_plugin(L"AST.MethodClosure");
    store_native(natives, SMB_valueWithArguments_, NM_MethodClosure_valueWithArguments_);
}
