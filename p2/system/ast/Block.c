#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Block.h>

/* ========================================================================= */

Type_Class AST_Block_Class;

/* ========================================================================= */

void init_variable_array(Type_Array array, Object key, int size, int idx)
{
    uns_int i;
    
    for (i = 0; i < size; i++) {
        array->values[i] = (Object)new_AST_Variable(key, idx);
        idx++;
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
    init_variable_array(result->params, (Object)result, paramCount, 0);
    init_variable_array(result->locals, (Object)result, localCount, paramCount);
    result->info       = empty_AST_Info;
    return result;
}

void pre_init_AST_Block()
{
    AST_Block_Class = new_Named_Class((Object)Type_Object_Class,
                                      L"AST_Block",
                                      create_type(AST_BLOCK_SIZE, OBJECT));
}

/* ========================================================================= */

void CNT_AST_Block_continue()
{
    Runtime_BlockContext env = current_env();
    Type_Array body = env->closure->code->body;
    poke_EXP(0, body->values[env->pc]);
    
    env->pc++;
    if (body->size <= env->pc) {
        zap_CNT();
    } 
    push_CNT(send_Eval);
}

void AST_Block_eval(AST_Block self)
{
    poke_EXP(0, new_Runtime_Block_Closure(self, current_env()));
}

/* ========================================================================= */

void post_init_AST_Block()
{
}
