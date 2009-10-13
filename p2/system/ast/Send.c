
#include <stdlib.h>
#include <stdio.h>
#include <system/ast/Send.h>

/* ========================================================================= */

Type_Class AST_Send_Class;

/* ========================================================================= */

AST_Send new_AST_Send(Object receiver, Object msg, Type_Array arguments)
{
    NEW_OBJECT(AST_Send);
    result->receiver  = receiver;
    result->message   = msg;
    result->arguments = arguments;
    result->info      = empty_AST_Info;
    return result;
}

void pre_init_AST_Send()
{
    AST_Send_Class = new_Named_Class((Object)Type_Object_Class,
                                     L"AST_Send",
                                     create_type(5, OBJECT));
}

/* ========================================================================= */

CNT(AST_Send_send)
    Object receiver = pop_EXP();
    Type_Array args = (Type_Array)pop_EXP();
    
    AST_Send self   = (AST_Send)peek_EXP(1);
    Type_Class_dispatch(&self->cache, receiver, HEADER(receiver),
                    self->message, args);
}

CNT(store_argument)
    Object value = pop_EXP();
    uns_int idx = (uns_int)pop_EXP();
    Type_Array args = (Type_Array)pop_EXP();
    
    args->values[idx] = value;
}

void AST_Send_eval(AST_Send self)
{
    // LOGFUN;
    
    Type_Array args = new_Raw_Type_Array(self->arguments->size->value);
    // execute the method
    push_CNT(AST_Send_send);
    push_EXP(args);
    // evaluate the receiver
    push_CNT(send_Eval);
    push_EXP(self->receiver);
    // evaluate the arguments
    int i;
    for (i = 0; i < self->arguments->size->value; i++) {
        push_CNT(store_argument);
        push_EXP(args);
        push_EXP((Object)(uns_int)i);
        push_CNT(send_Eval);
        push_EXP(self->arguments->values[i]);
    }
}

/* ========================================================================= */

void post_init_AST_Send(){}

