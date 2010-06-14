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

#define INVOKE_IF(name) if(method_class == name##_Class) {\
        return name##_invoke(closure, (name)method, self, argc);\
    }

void MethodClosure_invoke(MethodClosure closure, Optr self, uns_int argc)
{
    Method method      = closure->code;
    Class method_class = HEADER(method);
    
    INVOKE_IF(NativeMethod)
    INVOKE_IF(ReflectionMethod)
    INVOKE_IF(Method)

    assert1(NULL, "Unknown type of method");
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
