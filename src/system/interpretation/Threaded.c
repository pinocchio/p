
#include <system/interpretation/Threaded.h>
#include <debug.h>

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

THREADED(send_ifTrue_) 
    Optr bool = peek_EXP(0);
    if (bool == (Optr) true) {
        zap_EXP();
        set_pc(pc + 3);
        Block block = (Block)threaded_code()->values[pc + 2];
        push_CNT_raw(block->threaded);
        push_CNT_raw(0);
        push_CNT(eval_threaded);
        CNT_eval_threaded();
        return -1;
    } else if (bool == (Optr) false) {
        poke_EXP(0, nil);
        return pc + 3;
    } else {
        Send send = (Send)threaded_code()->values[pc + 1];
        poke_EXP(0, send);
        push_EXP(bool);
        t_push_closure(pc + 1);
        return t_send1(pc + 2);
    }
}

THREADED(send_ifTrue_ifFalse_) 
    Optr bool = peek_EXP(0);
    if (bool == (Optr) true) {
        zap_EXP();
        set_pc(pc + 4);
        Block block = (Block)threaded_code()->values[pc + 2];
        push_CNT_raw(block->threaded);
        push_CNT_raw(0);
        push_CNT(eval_threaded);
        CNT_eval_threaded();
        return -1;
    } else if (bool == (Optr) false) {
        zap_EXP();
        set_pc(pc + 4);
        Block block = (Block)threaded_code()->values[pc + 3];
        push_CNT_raw(block->threaded);
        push_CNT_raw(0);
        push_CNT(eval_threaded);
        CNT_eval_threaded();
        return -1;
    } else {
        Send send = (Send)threaded_code()->values[pc + 1];
        poke_EXP(0, send);
        push_EXP(bool);
        t_push_closure(pc + 1);
        t_push_closure(pc + 2);
        return t_send2(pc + 3);
    }
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

Dictionary functions;

NATIVE1(Interpretation_Threaded_compileNatively_)
    Array array = (Array)NATIVE_ARG(0);
    int i;
    for (i=0; i<array->size; i++) {
        Optr object = array->values[i];
        if (HEADER(object) == Compiler_Threaded_FunctionPointer_Class) {
            Optr fp = Dictionary_quick_lookup(functions, ((Object)object)->ivals[0]);
            assert0(fp != nil);
            assert0(fp != NULL);
            array->values[i] = fp;
        }
    }
    RETURN_FROM_NATIVE(array)
}

#define T_FUNC(name) Dictionary_quick_store(functions, (Optr)new_Symbol(L""#name), (Optr)&t_##name);

void post_init_Threaded()
{
    
    Dictionary natives = add_plugin(L"Interpretation.Threaded");
    store_native(natives, new_Symbol_cached(L"compileNatively:"), 
                 NM_Interpretation_Threaded_compileNatively_);

    functions = new_Dictionary();
    T_FUNC(supern)
    T_FUNC(push_nil)
    T_FUNC(push_0)
    T_FUNC(push_1)
    T_FUNC(push_2)
    T_FUNC(push_true)
    T_FUNC(push_false)
    T_FUNC(push_self)
    
    T_FUNC(push1)
    T_FUNC(push2)
    T_FUNC(push3)
    T_FUNC(push4)
    T_FUNC(push5)
    T_FUNC(pushn)

    T_FUNC(push_variable)
    T_FUNC(push_closure)
    T_FUNC(push_class_reference)
    T_FUNC(push_slot)

    T_FUNC(pop)

    T_FUNC(return)
    T_FUNC(return_true)
    T_FUNC(return_false)
    T_FUNC(return_nil)
    T_FUNC(return_self) 
    T_FUNC(return_0)
    T_FUNC(return_1)
    T_FUNC(return_2)
    T_FUNC(return_next)   


    T_FUNC(send0)
    T_FUNC(send1)
    T_FUNC(send2)
    T_FUNC(send3)
    T_FUNC(send4)
    T_FUNC(send5)
    T_FUNC(sendn)
    T_FUNC(send_ifTrue_)
    T_FUNC(send_ifTrue_ifFalse_)

    T_FUNC(super0)
    T_FUNC(super1)
    T_FUNC(super2)
    T_FUNC(super3)
    T_FUNC(super4)
    T_FUNC(super5)
    T_FUNC(supern)

    T_FUNC(assign)
}

/* ========================================================================= */

void CNT_eval_threaded()
{
    long pc    = (long)peekn_CNT(1);
    Array code = (Array)peekn_CNT(2);
    while (pc != -1) {
        threaded p = (threaded)code->values[pc];
        pc         = p(pc);
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

    push_CNT(restore_env);
	push_CNT_raw(method->code);
	push_CNT_raw(0);
	push_CNT(eval_threaded);
    zap_EXP();
    CNT_eval_threaded();
}


