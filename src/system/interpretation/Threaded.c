
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
    branch(pc, pop_EXP() == true);
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

PUSH(nil, nil)
PUSH(0, new_SmallInt(0))
PUSH(1, new_SmallInt(1))
PUSH(2, new_SmallInt(2))
PUSH(true, true)
PUSH(false, false)

#define PUSHN(count)void t_push##count(long pc) {\
    long i;\
    set_pc(pc + count + 1);\
    claim_EXP(count);\
    for (i=1; i<=count; ++i) {\
        poke_EXP(i, threaded_code()->values[pc + i]);\
    }\
}
PUSHN(1)
PUSHN(2)
PUSHN(3)
PUSHN(4)
PUSHN(5)

void t_pushn(long pc)
{
    long i;
    uns_int count = (uns_int)unwrap_int(threaded_code()->values[pc + 1]);
    set_pc(pc + count + 1);
    claim_EXP(count);
    for (i=1; i<=count; ++i) {
        poke_EXP(i, threaded_code()->values[pc + 1 + i]);
    }
}

#define PUSH_EVAL(name, type) void t_push_##name(long pc) {\
    type name = (type)threaded_code()->values[pc + 1];\
    set_pc(pc + 2);\
	claim_EXP(1);\
    type##_eval(name);\
}
PUSH_EVAL(variable, Variable)
PUSH_EVAL(class_reference, ClassReference)
PUSH_EVAL(slot, Slot)

void t_push_self(long pc)
{
    inc_pc(pc);
    claim_EXP(1);
    Self_eval();
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
    t_return_value(pc, value); \
}

RETURN(true,    true)
RETURN(false,   false)
RETURN(nil,     nil)
RETURN(0,       (Optr)new_SmallInt(0))
RETURN(1,       (Optr)new_SmallInt(1))
RETURN(2,       (Optr)new_SmallInt(2))

void t_return_next(long pc)
{   
    t_push1(pc);
    t_return(pc);
}

void t_return_self(long pc)
{
    inc_pc(pc);
    claim_EXP(1);
    Self_eval();
	t_return(pc);
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
#define SEND(n) void t_send##n(long pc) {\
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

void t_sendn(long pc)
{
    set_pc(pc+2);
    uns_int n = (uns_int)threaded_code()->values[pc + 1];
    Optr self = peek_EXP(n);    
    Class_dispatch(self, HEADER(self), n);
}

/* ========================================================================= */
#define SUPER(n) void t_super##n(long pc) {\
    inc_pc(pc);\
    Super super = (Super)peek_EXP(n);\
    Super_eval(super);\
}

SUPER(0)
SUPER(1)
SUPER(2)
SUPER(3)
SUPER(4)
SUPER(5)

void t_supern(long pc)
{
    set_pc(pc+2);
    uns_int n = (uns_int)threaded_code()->values[pc + 1];
    Super super = (Super)peek_EXP(n);    
    Super_eval(super);
}

/* ========================================================================= */

void t_assign(long pc)
{
    inc_pc(pc);
	CNT_Assign_assign();
}

/* ========================================================================= */

void post_init_Threaded()
{
	Dictionary dict = new_Dictionary();
	Compiler_ThreadedCompiler_Class->cvars[0] = (Optr)dict;
}


void CNT_eval_threaded()
{
    long pc     = (long)peekn_CNT(1);
	Array code = (Array)peekn_CNT(2);
    ((threaded)code->values[pc])(pc);
}

void Method_invoke(Runtime_MethodClosure closure,
                   Method method,
                   Optr self, uns_int argc)
{
    if (method->code == (Array)nil) {
        return StandardMethod_invoke(closure, (Method)method, self, argc);
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


