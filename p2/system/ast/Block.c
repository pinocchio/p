
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Env.h>
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
    Runtime_Env env = (Runtime_Env)current_env();
    poke_EXP(1, env->method->body->values[env->pc]);
    
    env->pc++;
    if (env->method->body->size->value <= env->pc) {
        zap_CNT();
    } 
    push_CNT(send_Eval);
}

void AST_Block_invoke(AST_Block block, Object self,
                      Object class, Type_Array args)
{
    push_restore_env();
    
    Runtime_Env env = new_Runtime_Env((Object)block->environment, 
                                      (Object)block, args);
    
    env->self   = self;
    env->class  = class;
    env->block  = block;
    env->pc     = 1;
    
    Env = (Object)env;
    
    if (block->body->size->value == 0 ) { 
        push_EXP(self);
        return; 
    }
    
    if (1 < block->body->size->value) {
        push_CNT(AST_Block_continue);
    }
    
    push_EXP(block->body->values[0]);
    push_CNT(send_Eval);
}

/* ======================================================================== */

void post_init_AST_Block()
{
}
