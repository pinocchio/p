#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Method.h>

/* ========================================================================= */

Method new_Method_with(Array params,
                       Array locals,
                       Array annotations,
					   Array threaded,
                       uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(Method, Optr[statementCount]);
    result->params = params;
    result->locals = locals;
    result->annotations = annotations;
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, GET_SIZE(result->params));
    result->info    = empty_Info;
    SET_SIZE(result, statementCount);
    result->package = nil;
    result->code    = threaded;
    COPY_ARGS(statementCount, result->body);

    return result;
}

/* ========================================================================= */
