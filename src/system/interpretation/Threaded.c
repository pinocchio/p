
#include <system/interpretation/Threaded.h>

/* ========================================================================= */

Array threaded_code()
{
    return (Array)peekn_CNT(2);
}


/* ========================================================================= */
void set_pc(long pc)
{
    poken_CNT_raw(1, (uns_int)pc);
}

/* ========================================================================= */
void inc_pc(long pc)
{
    set_pc(pc + 1);
}

/* ========================================================================= */
void branch(long pc, long condition)
{
    set_pc(pc + 1 + condition);
}

void t_branch_gt_int(long pc)
{
    long left  = unwrap_int(pop_EXP());
    long right = unwrap_int(pop_EXP());
    branch(pc, left > right);
}

void t_branch_bool(long pc)
{
    branch(pc, pop_EXP() == (Optr)true_Const);
}

/* ========================================================================= */
void jump(long pc, long offset)
{
    set_pc(pc + offset);
}

void t_jump_1(long pc)
{
    jump(pc, 2);
}

/* ========================================================================= */
#define PUSH(name, value) void t_push_##name(long pc) {\
    inc_pc(pc);\
    push_EXP(value);\
}

PUSH(nil, nil_Const)
PUSH(0, new_SmallInt(0))
PUSH(1, new_SmallInt(1))
PUSH(true, true_Const)
PUSH(false, false_Const)


void t_push_self(long pc)
{
    inc_pc(pc);
    claim_EXP(1);
    Self_eval();
}

void t_push_next(long pc)
{
    Optr v = threaded_code()->values[pc + 1];
    set_pc(pc + 2);
    push_EXP(v);
}

void t_push_variable(long pc)
{
    Variable variable = (Variable)threaded_code()->values[pc + 1];
    set_pc(pc + 2);
	claim_EXP(1);
    Variable_eval(variable);
}

void t_push_closure(long pc)
{
	Block block  = (Block)threaded_code()->values[pc + 1];
	Runtime_BlockClosure closure = new_Runtime_BlockClosure(block, current_env());
	inc_pc(pc);
	push_EXP(closure);
}

/* ========================================================================= */
void t_return(long pc)
{
    zapn_CNT(3);
}

void t_return_value(long pc, Optr value)
{
    push_EXP(value);
    t_return(pc);
}

#define RETURN(name, value) void t_return_##name(long pc) { \
    push_EXP(value);\
    t_return(pc); \
}

RETURN(true,    true_Const)
RETURN(false,   false_Const)
RETURN(nil,     nil_Const)
RETURN(0,       new_SmallInt(0))
RETURN(1,       new_SmallInt(1))

void t_return_next(long pc)
{   
    t_push_next(pc);
    t_return(pc);
}

void t_return_self(long pc)
{
    inc_pc(pc);
    claim_EXP(1);
    Self_eval();
	t_return();
}

/* ========================================================================= */
void t_minus_int(long pc)
{
    inc_pc(pc);
    long right = unwrap_int(pop_EXP());
    long left  = unwrap_int(peek_EXP(0));
    poke_EXP(0, new_SmallInt(left - right));
}

void t_times_int(long pc)
{
    inc_pc(pc);
    long right = unwrap_int(pop_EXP());
    long left  = unwrap_int(peek_EXP(0));
    poke_EXP(0, new_SmallInt(left * right));
}

void t_plus_int(long pc)
{
    inc_pc(pc);
    long right = unwrap_int(pop_EXP());
    long left  = unwrap_int(peek_EXP(0));
    poke_EXP(0, new_SmallInt(left - right));
}

/* ========================================================================= */
#define SEND(n) void t_send_##n(long pc) {\
    inc_pc(pc);\
    Optr self = peek_EXP(n);\
    Class_dispatch(self, HEADER(self),n);\
}

SEND(0)
SEND(1)
SEND(2)
SEND(3)
SEND(4)
SEND(5)

void t_send_n(long pc)
{
    set_pc(pc+2);
    uns_int n = (uns_int)threaded_code()->values[pc + 1];
    Optr self = peek_EXP(n);    
    Class_dispatch(self, HEADER(self), n);
}


/* ========================================================================= */

void CNT_eval_threaded()
{
    long pc     = (long)peekn_CNT(1);
	Array code = (Array)peekn_CNT(2);
    ((threaded)code->values[pc])(pc);
}

void ThreadedMethod_invoke(Runtime_MethodClosure closure,
                               ThreadedMethod method,
                               Optr self, uns_int argc)
{
    if (method->code == (Array)nil) {
        return Method_invoke(closure, (Method)method, self, argc);
    }

    assert(argc == method->params->size,
        printf("Argument count mismatch. Expected: %"F_I"u given: %"F_I"u\n",
                    method->params->size, argc););
    
    if (method->size == 0) { 
        RETURN_FROM_NATIVE(self);
        return;
    }
    
    set_env((Optr)new_Runtime_MethodContext(closure, self));
    activation_from_native(argc);

	push_CNT_raw(method->code);
	push_CNT_raw(0);
	push_CNT(eval_threaded);
    zap_EXP();
    CNT_eval_threaded();
}


