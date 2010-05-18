#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodClosure.h>

/* ========================================================================= */

DECLARE_CLASS(Runtime_MethodClosure);

/* ========================================================================= */

void pre_init_Runtime_MethodClosure()
{
    Runtime_MethodClosure_Class = 
        new_Class_named(Type_Object_Class,
                        L"MethodClosure",
                        CREATE_OBJECT_TAG(RUNTIME_METHODCLOSURE));
}

/* ========================================================================= */

Runtime_MethodClosure new_Runtime_MethodClosure(AST_Method code, Type_Class host) 
{
    NEW_OBJECT(Runtime_MethodClosure); 
    result->code        = code;
    result->info        = empty_AST_Info;
    result->selector    = (Object)Nil;
    result->host        = host;
    return result;
}

/* ========================================================================= */


void Runtime_MethodClosure_invoke(Runtime_MethodClosure closure, Object self,
                                  uns_int argc)
{
    // LOG_AST_INFO("Closure Invoke: ", closure->info);
     
    AST_Method method = closure->code;
    Type_Class class = closure->host;

    if (HEADER(method) == AST_NativeMethod_Class) {
        return AST_NativeMethod_invoke(closure, self, class, argc);
    } else if (HEADER(method) == AST_ReflectionMethod_Class) {
        return AST_ReflectionMethod_invoke(closure, self, class, argc);
    } else if (HEADER(method) == AST_Method_Class) {
        return AST_Method_invoke(closure, method, self, argc);
    } else {
        inspect(closure->code);
        assert1(NULL, "Unknown type of method");
    }
}


NATIVE1(Runtime_MethodClosure_valueWithArguments_)
    Collection_Array args = (Collection_Array)pop_EXP();
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
    Collection_Dictionary natives = add_plugin(L"AST.MethodClosure");
    store_native(natives, SMB_valueWithArguments_, NM_Runtime_MethodClosure_valueWithArguments_);
}
