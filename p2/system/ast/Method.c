
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Method.h>

/* ========================================================================= */

Type_Class AST_Method_Class;

/* ========================================================================= */

void pre_init_AST_Method()
{
    AST_Method_Class = new_Class_named((Object)Type_Object_Class,
                                       L"AST_Method",
                                       CREATE_OBJECT_TAG(AST_METHOD));
}

/* ========================================================================= */

AST_Method new_AST_Method(uns_int paramCount,
                          uns_int localCount,
                          Type_Array body)
{
    NEW_OBJECT(AST_Method);
    result->body       = body;
    result->params     = new_Type_Array_raw(paramCount);
    result->locals     = new_Type_Array_raw(localCount);
    init_raw_variable_array(result->params, (Object)result, paramCount, 0);
    init_raw_variable_array(result->locals, (Object)result, localCount, paramCount);
    result->info       = empty_AST_Info;
    return result;
}

AST_Method new_AST_Method_With(Type_Array params,
                          Type_Array locals,
                          Type_Array body)
{

    NEW_OBJECT(AST_Method);
    result->body       = body;
    result->params     = params;
    result->locals     = locals;
    init_variable_array(result->params, (Object)result, 0);
    init_variable_array(result->locals, (Object)result, result->params->size);
    result->info       = empty_AST_Info;
    return result;
}

/* ========================================================================= */

void post_init_AST_Method()
{

}
