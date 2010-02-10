#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <system/ast/Block.h>

/* ========================================================================= */

Type_Class AST_Block_Class;

/* ========================================================================= */

void init_raw_variable_array(Type_Array array, uns_int scope_id,
                             uns_int size, uns_int local_id)
{
    uns_int i;
    for (i = 0; i < size; i++) {
        array->values[i] = (Object)new_AST_Variable(scope_id, local_id);
        local_id++;
    }
}

AST_Block new_AST_Block(uns_int paramCount,
                        uns_int localCount,
                        uns_int depth,
                        uns_int statementCount,
                        ...)
{
    NEW_ARRAY_OBJECT(AST_Block, Object[statementCount]);
    result->params      = new_Type_Array_raw(paramCount);
    result->locals      = new_Type_Array_raw(localCount);
    init_raw_variable_array(result->params, depth, paramCount, 0);
    init_raw_variable_array(result->locals, depth, localCount, paramCount);
    result->info        = empty_AST_Info;
    result->size        = statementCount;
    COPY_ARGS(statementCount, result->body);
    return result;
}

void init_variable_array(Type_Array array, uns_int scope_id,
                         uns_int local_id)
{
    uns_int i;
    for (i = 0; i < array->size; i++) {
        ((AST_Variable)array->values[i])->scope_id = scope_id;
        ((AST_Variable)array->values[i])->local_id = local_id;
        local_id++;
    }
}

AST_Block new_AST_Block_with(Type_Array params, Type_Array locals,
                             uns_int depth, uns_int statementCount, ...)
{
    NEW_ARRAY_OBJECT(AST_Block, Object[statementCount]);
    result->params  = params;
    result->locals  = locals;
    init_variable_array(result->params, depth, 0);
    init_variable_array(result->locals, depth, result->params->size);
    result->info    = empty_AST_Info;
    result->size    = statementCount;
    COPY_ARGS(statementCount, result->body);
    return result;
}

void pre_init_AST_Block()
{
    AST_Block_Class = new_Class_named((Object)Type_Object_Class,
                                      L"AST_Block",
                                      CREATE_ARRAY_TAG(AST_BLOCK));
}

/* ========================================================================= */

void AST_Block_eval(AST_Block self)
{
    poke_EXP(0, new_Runtime_BlockClosure(self, current_env()));
}

/* ========================================================================= */

NATIVE(AST_Block_numArgs) 
    RETURN_FROM_NATIVE(new_Type_SmallInt(((AST_Block) self)->params->size));
}

/* ========================================================================= */

void post_init_AST_Block()
{
    store_native_method(AST_Block_Class, SMB_numArgs, NM_AST_Block_numArgs); 
}
