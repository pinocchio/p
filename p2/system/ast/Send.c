
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

static CNT(AST_Send_send)
    uns_int argc = (uns_int)pop_EXP();
    Object receiver = peek_EXP(argc + 1); // args + 1 for peek
    printf("Send receiver: %p\n", receiver);
    Type_Class_dispatch(HEADER(receiver), argc);
}

static void CNT_store_argument();

void eval_store(uns_int idx)
{
    if (idx == 2) {
        zap_EXP(); // zap counter
        return;
    }
    push_CNT(store_argument);
    push_CNT(send_Eval);
    Object next = peek_EXP(idx);
    push_EXP(next);
}

static CNT(store_argument)
    Object arg = pop_EXP();
    uns_int idx = (uns_int)peek_EXP(1);
    poke_EXP(idx, arg);
    idx--;
    poke_EXP(1, idx);
    eval_store(idx);
}

void AST_Send_eval(AST_Send self)
{
    LOGFUN;
    
    push_CNT(AST_Send_send);

    // evaluate the receiver
    push_EXP(self->receiver);

    // evaluate the arguments
    int i;
    int argc = self->arguments->size;
    for (i = 0; i < argc; i++) {
        push_EXP(self->arguments->values[i]);
    }
    uns_int size = (uns_int)argc + 3; // 2 * size + receiver
    // total
    push_EXP((Object)(uns_int)argc);
    // todo
    push_EXP((Object)size);
    eval_store(size);
}

/* ========================================================================= */

void post_init_AST_Send(){}

