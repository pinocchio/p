#include <pinocchio.h>
#include <system/interpretation/Interpreter.h>
#include <stdio.h>
#include <wchar.h>
#include <debug.h>

void return_from_send()
{
    Object result = peek_EXP(0);
    zap_EXP();
    poke_EXP(0, result);
}

void restore_env()
{
	Runtime_BlockContext current = current_env();
    set_env((Object)current->parent_frame);
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

void send_eval_rest(Object exp, Type_Class class)
{
    EVAL_IF(AST_Assign)
    EVAL_IF(AST_Constant)
    EVAL_IF(AST_Variable)
    EVAL_IF(AST_Self)
    EVAL_IF(AST_Block)
    EVAL_IF(Slot_Slot)
    EVAL_IF(Slot_UIntSlot)
    EVAL_IF(Organization_ClassReference)
    
    /* TODO fallback by actually sending the eval message */
    inspect(exp);
    assert(NULL,
		   wprintf(L"\"%ls\" has no native eval function. Maybe you wanted wrap it in a AST_Constant?\n", 
				  ((Type_Class)class)->name->value));
}

CNT(send_Eval)
    Object exp = peek_EXP(0);
    Type_Class class = HEADER(exp);

    EVAL_IF(AST_Send)
    EVAL_IF(AST_Super)

    send_eval_rest(exp, class);

}

#define TAIL_EVAL_IF(name) \
    if (class == name##_Class) { \
        return name##_tail_eval((name)exp); \
    }

void CNT_tail_send_Eval()
{
    Object exp = peek_EXP(0);
    Type_Class class = HEADER(exp);

    poke_CNT(restore_return);

    EVAL_IF(AST_Send)
    EVAL_IF(AST_Super)

    send_eval_rest(exp, class);
}
