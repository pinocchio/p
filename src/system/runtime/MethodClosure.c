#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodClosure.h>

/* ========================================================================= */

MethodClosure new_MethodClosure(Method code, Class host) 
{
    NEW_OBJECT(MethodClosure); 
    result->code        = code;
    result->selector    = (Optr)nil;
    result->host        = host;
    return result;
}

/* ========================================================================= */

NATIVE1(MethodClosure_valueWithArguments_)
    Array args = (Array)pop_EXP();
    ASSERT_TAG_LAYOUT(GETTAG(args), Array);
    
    long pos = args->size;
    while(pos > 0) {
        pos--;
        PUSH_EXP(args->values[pos]);
    }
    
    BlockClosure closure = (BlockClosure)self;
    apply(closure, args->size);
}

/* ========================================================================= */

void post_init_MethodClosure()
{
    // TODO move the whole class to AST
    PLUGIN natives = add_plugin(L"AST.MethodClosure");
    store_native(natives, L"valueWithArguments:", NM_MethodClosure_valueWithArguments_);
}
