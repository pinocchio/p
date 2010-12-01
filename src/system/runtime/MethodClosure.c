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

void post_init_MethodClosure()
{
    // TODO move the whole class to AST
    // PLUGIN natives = add_plugin(L"AST.MethodClosure");
    // store_native(natives, L"valueWithArguments:", NM_MethodClosure_valueWithArguments_);
}
