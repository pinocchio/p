
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
#define THREADED(name) long t_##name(long pc) {
//    fwprintf(stderr, L"Executing: "#name"\n");
/* ========================================================================= */

#define PUSH(name, value) THREADED(push_##name) \
    push_EXP(value);\
    return pc + 1;\
}

PUSH(nil, nil)
PUSH(0, new_SmallInt(0))
PUSH(1, new_SmallInt(1))
PUSH(2, new_SmallInt(2))
PUSH(true, true)
PUSH(false, false)

THREADED(pop)
    pop_EXP();
    return pc + 1;
}

#define PUSHN(count) THREADED(push##count) \
    long i;\
    claim_EXP(count);\
    for (i=1; i<=count; i++) {\
        poke_EXP(count-i, threaded_code()->values[pc + i]);\
    }\
    return pc + 1 + count;\
}
PUSHN(1)
PUSHN(2)
PUSHN(3)
PUSHN(4)
PUSHN(5)

THREADED(pushn)
    long i;
    uns_int count = (uns_int)unwrap_int(threaded_code()->values[pc + 1]);
    claim_EXP(count);
    for (i=1; i<=count; ++i) {
        poke_EXP(i, threaded_code()->values[pc + 1 + i]);
    }
    return pc + count + 1;
}

#define PUSH_EVAL(name, type) THREADED(push_##name) \
    type name = (type)threaded_code()->values[pc + 1];\
	claim_EXP(1);\
    type##_eval(name);\
    return pc + 2;\
}

PUSH_EVAL(variable, Variable)
PUSH_EVAL(class_reference, ClassReference)

THREADED(push_self)
    claim_EXP(1);
    Self_eval();
    return pc + 1;
}

THREADED(push_slot) 
    Slot slot = (Slot)threaded_code()->values[pc + 1];
	claim_EXP(1);
    if (HEADER(slot) == Slot_Class) {
        Slot_eval(slot);
    } else if (HEADER(slot) == UIntSlot_Class) {
        UIntSlot_eval((UIntSlot)slot);
    } else {
        assert1(NULL, "Unknown type of slot");
    }
    return pc + 2;
}

THREADED(push_closure)
	Block block  = (Block)threaded_code()->values[pc + 1];
    claim_EXP(1);
    Block_eval(block);
    return pc + 2;
}



/* ========================================================================= */
THREADED(return)
    restore_env();
    zapn_CNT(3);
    return -1;
}

long return_value(long pc, Optr value)
{
    push_EXP(value);
    return t_return(pc);
}

#define RETURN(name, value) THREADED(return_##name) \
    return return_value(pc, value); \
}

RETURN(true,    true)
RETURN(false,   false)
RETURN(nil,     nil)
RETURN(0,       (Optr)new_SmallInt(0))
RETURN(1,       (Optr)new_SmallInt(1))
RETURN(2,       (Optr)new_SmallInt(2))

THREADED(return_next)
    t_push_1(pc);
    return t_return(pc);
}

THREADED(return_self)
    claim_EXP(1);
    Self_eval();
	return t_return(pc);
}

/* ========================================================================= */
#define SEND(n) THREADED(send##n) \
    inc_pc(pc);\
    Optr self = peek_EXP(n);\
    Class_dispatch(self, HEADER(self), n);\
    return -1;\
}

SEND(0)
SEND(1)
SEND(2)
SEND(3)
SEND(4)
SEND(5)

THREADED(sendn)
    set_pc(pc+2);
    uns_int n = (uns_int)threaded_code()->values[pc + 1];
    Optr self = peek_EXP(n);    
    Class_dispatch(self, HEADER(self), n);
    return -1;
}

/* ========================================================================= */
#define SUPER(n) THREADED(super##n) \
    inc_pc(pc);\
    Super super = (Super)peek_EXP(n);\
    push_EXP(n);\
    Super_eval_threaded(super);\
    return -1;\
}

SUPER(0)
SUPER(1)
SUPER(2)
SUPER(3)
SUPER(4)
SUPER(5)

THREADED(supern)
    set_pc(pc+2);
    uns_int n = (uns_int)threaded_code()->values[pc + 1];
    Super super = (Super)peek_EXP(n);    
    push_EXP(n);
    Super_eval_threaded(super);
    return -1;
}



/* ========================================================================= */

THREADED(assign)
	do_assign();
    return pc + 1;
}

/* ========================================================================= */


void post_init_Threaded()
{
	Dictionary dict = new_Dictionary();
	Compiler_Threaded_ThreadedCompiler_Class->cvars[0] = (Optr)dict;
}


void CNT_eval_threaded()
{
    long pc     = (long)peekn_CNT(1);
	Array code = (Array)peekn_CNT(2);
    while (pc != -1) {
        pc = ((threaded)code->values[pc])(pc);
    }
}

void Method_invoke(MethodClosure closure,
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
    
    set_env((Optr)new_MethodContext(closure, self));
    activation_from_native(argc);

	push_CNT_raw(method->code);
	push_CNT_raw(0);
	push_CNT(eval_threaded);
    zap_EXP();
    CNT_eval_threaded();
}


