#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Method.h>

/* ========================================================================= */

Type_Class AST_Method_Class;

/* ========================================================================= */

void pre_init_AST_Method()
{
    AST_Method_Class = new_Class_named(Type_Object_Class,
                                       L"Method",
                                       CREATE_ARRAY_TAG(AST_METHOD));
}

/* ========================================================================= */

AST_Method new_AST_Method(uns_int paramCount,
                          uns_int localCount,
                          uns_int statementCount)
{
    NEW_ARRAY_OBJECT(AST_Method, Object[statementCount]);
    result->params = new_Type_Array_raw(paramCount);
    result->locals = new_Type_Array_raw(localCount);
    init_raw_variable_array(result->params, 0, paramCount, 0);
    init_raw_variable_array(result->locals, 0, localCount, paramCount);
    result->info   = empty_AST_Info;
    result->size   = statementCount;
    return result;
}

AST_Method new_AST_Method_withAll(uns_int paramCount,
                                  uns_int localCount,
                                  uns_int statementCount, ...)
{
    AST_Method result = new_AST_Method(paramCount, localCount, statementCount);
    COPY_ARGS(statementCount, result->body);
    return result;
}

AST_Method new_AST_Method_with(Type_Array params,
                               Type_Array locals,
                               Type_Array annotations,
                               uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(AST_Method, Object[statementCount]);
    result->params = params;
    result->locals = locals;
    result->annotations = annotations;
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, result->params->size);
    result->info   = empty_AST_Info;
    result->size   = statementCount;
    COPY_ARGS(statementCount, result->body);

    return result;
}

/* ========================================================================= */

void post_init_AST_Method()
{
}
