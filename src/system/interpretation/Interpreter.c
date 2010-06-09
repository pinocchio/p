#include <pinocchio.h>
#include <system/interpretation/Interpreter.h>
#include <stdio.h>
#include <wchar.h>
#include <debug.h>

void return_from_send()
{
    Optr result = pop_EXP();
    poke_EXP(0, result);
}

void restore_env()
{
	BlockContext current = current_env();
    set_env((Optr)current->parent_frame);
	free_context(current);
}

CNT(restore_return)
    restore_env();
    return_from_send();
}

#define EVAL_IF(name) \
    if (class == name##_Class) { \
        return name##_eval((name)exp); \
    }

void send_eval_rest(Optr exp, Class class)
{
    EVAL_IF(Assign)
    EVAL_IF(Constant)
    EVAL_IF(Variable)
    EVAL_IF(Self)
    EVAL_IF(Block)
    EVAL_IF(Slot)
    EVAL_IF(UIntSlot)
    EVAL_IF(ClassReference)
    
    Class_direct_dispatch(exp, class, (Optr)SMB_accept_, 1, nil);
}

CNT(send_Eval)
    Optr exp    = peek_EXP(0);
    Class class = HEADER(exp);

    EVAL_IF(Send)
    EVAL_IF(Super)

    send_eval_rest(exp, class);
}

#define TAIL_EVAL_IF(name) \
    if (class == name##_Class) { \
        return name##_tail_eval((name)exp); \
    }

void CNT_tail_send_Eval()
{
    Optr exp = peek_EXP(0);
    Class class = HEADER(exp);

    poke_CNT(restore_return);

    EVAL_IF(Send)
    EVAL_IF(Super)

    send_eval_rest(exp, class);
}
