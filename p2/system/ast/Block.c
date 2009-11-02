#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Block.h>

/* ========================================================================= */

Type_Class AST_Block_Class;

/* ========================================================================= */

void init_raw_variable_array(Type_Array array, Object key, int size, int index)
{
    uns_int i;
    for (i = 0; i < size; i++) {
        array->values[i] = (Object)new_AST_Variable(key, index);
        index++;
    }
}

void init_variable_array(Type_Array array, Object key, int index)
{
    uns_int i;
    for (i = 0; i < array->size; i++) {
        ((AST_Variable)array->values[i])->key = key;
        ((AST_Variable)array->values[i])->index = index;
        index++;
    }
}

AST_Block new_AST_Block(uns_int paramCount,
                        uns_int localCount,
                        Type_Array body)
{
    NEW_OBJECT(AST_Block);
    result->body       = body;
    result->params     = new_Raw_Type_Array(paramCount);
    result->locals     = new_Raw_Type_Array(localCount);
    init_raw_variable_array(result->params, (Object)result, paramCount, 0);
    init_raw_variable_array(result->locals, (Object)result, localCount, paramCount);
    result->info       = empty_AST_Info;
    return result;
}

AST_Block new_AST_Block_With(Type_Array params, Type_Array locals,
                               Type_Array body)
{
    NEW_OBJECT(AST_Block);
    result->body       = body;
    result->params     = params;
    init_variable_array(result->params, (Object)result, 0);
    result->locals     = locals;
    init_variable_array(result->locals, (Object)result, result->params->size);
    result->info       = empty_AST_Info;
    return result;
}

void pre_init_AST_Block()
{
    AST_Block_Class = new_Named_Class((Object)Type_Object_Class,
                                      L"AST_Block",
                                      create_object_tag(AST_BLOCK));
}

/* ========================================================================= */

void AST_Block_eval(AST_Block self)
{
    poke_EXP(0, new_Runtime_BlockClosure(self, current_env()));
}

/* ========================================================================= */

void post_init_AST_Block()
{
}
