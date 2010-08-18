#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <system/ast/Block.h>

/* ========================================================================= */

void init_raw_variable_array(Array array, uns_int scope_id,
                             uns_int size, uns_int local_id)
{
    uns_int i;
    for (i = 0; i < size; i++) {
        array->values[i] = (Optr)new_Variable(scope_id, local_id);
        local_id++;
    }
}

Block new_Block(uns_int paramCount,
                uns_int localCount,
                uns_int depth,
                uns_int statementCount,
                ...)
{
    NEW_ARRAY_OBJECT(Block, Optr[statementCount]);
    result->params      = new_Array_raw(paramCount);
    result->locals      = new_Array_raw(localCount);
    init_raw_variable_array(result->params, depth, paramCount, 0);
    init_raw_variable_array(result->locals, depth, localCount, paramCount);
    result->size        = statementCount;
    COPY_ARGS(statementCount, result->body);
    return result;
}

void init_variable_array(Array array, uns_int local_id)
{
    uns_int i;
    for (i = 0; i < array->size; i++) {
        ((Variable)array->values[i])->local_id =
            (Optr)new_SmallInt(local_id);
        local_id++;
    }
}

Block new_Block_with(Array params, Array locals, Array threaded,
                     uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(Block, Optr[statementCount]);
    result->params  = params;
    result->locals  = locals;
    init_variable_array(result->params, 0);
    init_variable_array(result->locals, result->params->size);
    result->size    = statementCount;
    result->threaded = threaded;
    COPY_ARGS(statementCount, result->body);
    return result;
}

/* ========================================================================= */

