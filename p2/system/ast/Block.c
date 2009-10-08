
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <system/ast/Block.h>

/* ======================================================================== */

Type_Class AST_Block_Class;

/* ======================================================================== */

AST_Block new_AST_Block(unsigned int paramCount, Type_Array body)
{
    NEW_OBJECT(AST_Block);
    result->body = body;
    result->paramCount = new_Type_SmallInt(paramCount);
    return result;
}

void pre_init_AST_Block()
{
    AST_Block_Class = new_Named_Class((Object)Type_Object_Class, L"AST_Block");
}

/* ======================================================================== */

void CNT_AST_Block_continue()
{
    Runtime_BlockContext env = (Runtime_BlockContext)current_env();
    poke_EXP(1, env->closure->code->body->values[env->pc]);
    
    env->pc++;
    if (env->closure->code->body->size->value <= env->pc) {
        zap_CNT();
    } 
    push_CNT(send_Eval);
}

/* ======================================================================== */

void post_init_AST_Block()
{
}
