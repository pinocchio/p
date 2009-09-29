
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Send.h>

/* ======================================================================== */

Type_Class Send_Type_Class;

/* ======================================================================== */

AST_Send new_Send(Object receiver, Object msg, Type_Array arguments)
{
    AST_Send result = NEW_t(AST_Send);
    HEADER(result)    = (Object)Send_Type_Class;
    result->receiver  = receiver;
    result->message   = msg;
    result->arguments = arguments;
    return result;
}

void pre_init_Send()
{
    Send_Type_Class          = new_Named_Type_Class((Object)Type_Object_Type_Class, L"Send");
}

/* =========================================================================*/

void CNT_AST_Send_send()
{
    zap_CNT();
    Object receiver = pop_EXP();
    Type_Array args = (Type_Array)pop_EXP();
    
    AST_Send self   = (AST_Send)peek_EXP(1);
    // insert the receiver at the old ast_send position
    poke_EXP(1, receiver);
    
    Type_Class_dispatch(&self->cache, receiver, HEADER(receiver),
                    self->message, args);
}

void CNT_store_argument()
{
    zap_CNT();
    
    Object value = pop_EXP();
    Object index = pop_EXP();
    Type_Array args = (Type_Array)pop_EXP();
    
    unsigned int idx = ((Type_SmallInt)index)->value;
    args->values[idx] = value;
}

void AST_Send_eval(AST_Send self)
{
    LOGFUN;
    Type_Array args = new_Raw_Type_Array(self->arguments->size->value);
    // execute the method
    push_CNT(CNT_AST_Send_send);
    push_EXP(args);
    // evaluate the receiver
    push_CNT(CNT_send_Eval);
    push_EXP(self->receiver);
    // evaluate the arguments
    int i;
    for (i = 0; i < self->arguments->size->value; i++) {
        push_CNT(CNT_store_argument);
        push_EXP(args);
        push_EXP(new_Type_SmallInt(i));
        push_CNT(CNT_send_Eval);
        push_EXP(self->arguments->values[i]);
    }
}

/* =========================================================================*/

void post_init_Send(){}

