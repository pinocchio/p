#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodClosure.h>

/* ========================================================================= */

Runtime_MethodClosure new_Runtime_MethodClosure(Method code, Class host) 
{
    NEW_OBJECT(Runtime_MethodClosure); 
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

void Runtime_MethodClosure_invoke(Runtime_MethodClosure closure, Optr self,
                                  uns_int argc)
{
    // LOG_AST_INFO("Closure Invoke: ", closure->info);
     
    Method method       = closure->code;
    Class method_class = HEADER(method);
    
    INVOKE_IF(NativeMethod)
    INVOKE_IF(ReflectionMethod)
    INVOKE_IF(Method)
    INVOKE_IF(ThreadedMethod)

    assert1(NULL, "Unknown type of method");
}


NATIVE1(Runtime_MethodClosure_valueWithArguments_)
    Array args = (Array)pop_EXP();
    ASSERT_TAG_LAYOUT(GETTAG(args), Array);
    
    int pos = args->size;
    while(pos > 0) {
        pos--;
        push_EXP(args->values[pos]);
    }
    
    Runtime_BlockClosure closure = (Runtime_BlockClosure)self;
    Runtime_BlockClosure_apply(closure, args->size);
}

/* ========================================================================= */

void post_init_Runtime_MethodClosure()
{
    // TODO move the whole class to AST
    Dictionary natives = add_plugin(L"AST.MethodClosure");
    store_native(natives, SMB_valueWithArguments_, NM_Runtime_MethodClosure_valueWithArguments_);
}
