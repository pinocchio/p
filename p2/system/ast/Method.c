
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Method.h>

/* ========================================================================= */

Type_Class AST_Method_Class;

/* ========================================================================= */

void pre_init_AST_Method()
{
    AST_Method_Class = new_Named_Class((Object)Type_Object_Class,
                                       L"AST_Method",
                                       create_object_tag(AST_METHOD));
}

/* ========================================================================= */

AST_Method new_AST_Method(uns_int paramCount,
                          uns_int localCount,
                          Type_Array body)
{
    NEW_OBJECT(AST_Method);
    result->body       = body;
    result->params     = new_Raw_Type_Array(paramCount);
    result->locals     = new_Raw_Type_Array(localCount);
    init_raw_variable_array(result->params, (Object)result, paramCount, 0);
    init_raw_variable_array(result->locals, (Object)result, localCount, paramCount);
    result->info       = empty_AST_Info;
    return result;
}

/* ========================================================================= */

void post_init_AST_Method()
{

}
