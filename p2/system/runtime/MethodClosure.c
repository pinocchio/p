
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
                        create_type(RUNTIME_METHODCLOSURE_SIZE, OBJECT));
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

void post_init_Runtime_MethodClosure()
{

}
