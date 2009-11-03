
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodClosure.h>

/* ========================================================================= */

Type_Class Runtime_MethodClosure_Class;

/* ========================================================================= */

void pre_init_Runtime_MethodClosure()
{
    Runtime_MethodClosure_Class = 
        new_Named_Class((Object)Type_Object_Class,
                        L"Runtime_MethodClosure",
                        create_object_tag(RUNTIME_METHODCLOSURE));
}

/* ========================================================================= */

Runtime_MethodClosure new_Runtime_MethodClosure(AST_Method code) 
{
    NEW_OBJECT(Runtime_MethodClosure); 
    result->code        = code;
    result->info        = empty_AST_Info;
    result->selector    = (Object)Nil;
    result->class       = (Type_Class)Nil;
    return result;
}

/* ========================================================================= */

void Runtime_MethodClosure_invoke(Runtime_MethodClosure closure, Object self,
                            Object class, uns_int argc)
{
    LOG_AST_INFO("Closure Invoke: ", closure->info);
     
    Type_Array body = closure->code->body;

    if (body->size == 0) { 
        RETURN_FROM_NATIVE(self);
        return;
    }
    
    set_env((Object)new_Runtime_MethodContext(closure, self, class));
    activation_from_native(argc);

    start_eval(body);
}

/* ========================================================================= */

void post_init_Runtime_MethodClosure()
{

}
