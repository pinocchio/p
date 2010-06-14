
#include <system/interpretation/Threaded.h>
#include <debug.h>

/* ========================================================================= */

CNT(restore_env)
	BlockContext current = current_env();
    set_env((Optr)current->parent_frame);
	free_context(current);
}

void CNT_restore_return()
{
    CNT_restore_env();
}


/* ========================================================================= */

void set_pc(threaded* pc)
{
    POKEN_CNT_RAW(1, pc);
}

void inc_pc(threaded* pc)
{
    set_pc(pc + 1);
}

Optr get_code(threaded* idx)
{
    return (Optr)*idx;
}

threaded* push_code(Array code)
{
    PUSH_CNT_RAW(&code->values[0]);
    PUSH_CNT(eval_threaded);
    return BREAK;
}

/* ========================================================================= */

#define PUSH(name, value) THREADED(push_##name) \
    PUSH_EXP(value);\
    return pc + 1;\
}

PUSH(nil, nil)
PUSH(0, new_SmallInt(0))
PUSH(1, new_SmallInt(1))
PUSH(2, new_SmallInt(2))
PUSH(true, true)
PUSH(false, false)

#define ZAPN(num) THREADED(zap##num) \
    ZAPN_EXP(num);\
    return pc + 1;\
}

ZAPN(1)
ZAPN(2)
ZAPN(3)
ZAPN(4)
ZAPN(5)

THREADED(zap)
    return t_zap1(pc);
}

THREADED(restart)
    return 0;
}

#define CHECK(num) THREADED(check##num)\
    Optr bool = pop_EXP();\
    if (bool == true) {\
        return pc + 1;\
    } else if (bool == false) {\
        return pc + 1 + num;\
    } else {\
        assert1(NULL, "Non-boolean type receiver for truth");\
        return BREAK;\
    }\
}

CHECK(1)
CHECK(2)
CHECK(3)
CHECK(4)
CHECK(5)

#define PEEK(num) THREADED(peek##num) \
    Optr o = PEEK_EXP(num);\
    PUSH_EXP(o);\
    return pc + 1;\
}

PEEK(0)
PEEK(1)
PEEK(2)
PEEK(3)
PEEK(4)
PEEK(5)

THREADED(dup)
    return t_peek0(pc);
}

#define PUSHN(count) THREADED(push##count) \
    long i;\
    CLAIM_EXP(count);\
    for (i=1; i<=count; i++) {\
        POKE_EXP(count-i, get_code(pc + i));\
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
    uns_int count = (uns_int)unwrap_int(get_code(pc + 1));
    CLAIM_EXP(count);
    for (i=1; i<=count; ++i) {
        POKE_EXP(i, get_code(pc + 1 + i));
    }
    return pc + count + 1;
}

#define PUSH_EVAL(name, type) THREADED(push_##name) \
    type name = (type)get_code(pc + 1);\
	CLAIM_EXP(1);\
    type##_eval(name);\
    return pc + 2;\
}

PUSH_EVAL(variable, Variable)
PUSH_EVAL(class_reference, ClassReference)

THREADED(push_self)
    CLAIM_EXP(1);
    Self_eval();
    return pc + 1;
}

THREADED(push_slot) 
    Slot slot = (Slot)get_code(pc + 1);
	CLAIM_EXP(1);
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
	Block block  = (Block)get_code(pc + 1);
    PUSH_EXP(new_BlockClosure(block, current_env()));
    return pc + 2;
}



/* ========================================================================= */
THREADED(return)
    ZAPN_CNT(2);
    return BREAK;
}

threaded* return_value(threaded* pc, Optr value)
{
    PUSH_EXP(value);
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
    CLAIM_EXP(1);
    Self_eval();
	return t_return(pc);
}

/* ========================================================================= */
#define SEND(n) THREADED(send##n) \
    set_pc(pc + 2);\
    Optr self = PEEK_EXP(n);\
	PUSH_EXP(get_code(pc + 1));\
    Class_dispatch(self, HEADER(self), n);\
    return BREAK;\
}

SEND(0)
SEND(1)
SEND(2)
SEND(3)
SEND(4)
SEND(5)

THREADED(sendn)
    set_pc(pc+2);
    Send send = (Send)get_code(pc + 1);
	uns_int n = send->size;
    Optr self = PEEK_EXP(n);    
	PUSH_EXP(send);
    Class_dispatch(self, HEADER(self), n);
    return BREAK;
}

/* ========================================================================= */
THREADED(send_to_do_) 
    Optr from = PEEK_EXP(1);
    Optr to   = PEEK_EXP(0);
    if (HEADER(from) == SmallInt_Class && HEADER(to) == SmallInt_Class) {
        ZAPN_EXP(2);
        set_pc(pc + 3);
        Block block = (Block)get_code(pc + 2);
        int start   = unwrap_int(from);
        int stop    = unwrap_int(to);
        for (;start<=stop; start++) {
            PUSH_CNT_RAW(block->threaded);
            PUSH_CNT_RAW(2); // pc
            PUSH_CNT(eval_threaded);
            PUSH_EXP(wrap_int(start));
        }
        return BREAK;
    } else {
        Send send = (Send)get_code(pc + 1);
        POKE_EXP(1, send);
        POKE_EXP(0, from);
        PUSH_EXP(to);
        t_push_closure(pc + 1);
        return t_send2(pc + 2);
    }
}

THREADED(send_ifTrue_) 
    Optr bool = PEEK_EXP(0);
    if (bool == true) {
        ZAP_EXP();
        set_pc(pc + 3);
        Block block = (Block)get_code(pc + 2);
        return push_code(block->threaded);
    } else if (bool == false) {
        POKE_EXP(0, nil);
        return pc + 3;
    } else {
        Send send = (Send)get_code(pc + 1);
        t_push_closure(pc + 1);
        PUSH_EXP(send);
    	Class_dispatch(bool, HEADER(bool), 1);
        return BREAK;
    }
}

THREADED(send_ifFalse_) 
    Optr bool = PEEK_EXP(0);
    if (bool == true) {
        POKE_EXP(0, nil);
        return pc + 3;
    } else if (bool == false) {
        ZAP_EXP();
        set_pc(pc + 3);
        Block block = (Block)get_code(pc + 2);
        return push_code(block->threaded);
    } else {
        Send send = (Send)get_code(pc + 1);
        t_push_closure(pc + 1);
        PUSH_EXP(send);
    	Class_dispatch(bool, HEADER(bool), 1);
        return BREAK;
    }
}

THREADED(send_ifTrue_ifFalse_) 
    Optr bool = PEEK_EXP(0);
    if (bool == true) {
        ZAP_EXP();
        set_pc(pc + 4);
        Block block = (Block)get_code(pc + 2);
        return push_code(block->threaded);
    } else if (bool == false) {
        ZAP_EXP();
        set_pc(pc + 4);
        Block block = (Block)get_code(pc + 3);
        return push_code(block->threaded);
    } else {
        Send send = (Send)get_code(pc + 1);
        t_push_closure(pc + 1);
        t_push_closure(pc + 2);
        PUSH_EXP(send);
    	Class_dispatch(bool, HEADER(bool), 2);
        return -1;
    }
}

THREADED(send_hash)
    SmallInt hash;
    Optr self = PEEK_EXP(0);
    Optr tag  = GETTAG(self);
    if (TAG_IS_LAYOUT(tag, Words)) {
        hash = ((Symbol)self)->hash;
    } else if (TAG_IS_LAYOUT(tag, Int)) { 
        hash = (SmallInt)self;
    } else {
        Send send = (Send)get_code(pc + 1);
        set_pc(pc + 2);
        PUSH_EXP(send);
        Class_dispatch(self, HEADER(self), 0);
        return -1;
    }
    POKE_EXP(0, hash);
    return pc + 2;
}


THREADED(send_value)
    inc_pc(pc);
    Optr o = pop_EXP();
    if (HEADER(o) == BlockClosure_Class) {
        BlockClosure_apply((BlockClosure)o, 0);
    } else {
        Send send = (Send)get_code(pc);
        set_pc(pc + 1);
        PUSH_EXP(send);
        Class_dispatch(o, HEADER(o), 0);
    }
    return -1;
}

/* ========================================================================= */
#define SUPER(n) THREADED(super##n) \
    set_pc(pc + 2);\
	PUSH_EXP(get_code(pc + 1));\
    PUSH_EXP(n);\
    Super_eval_threaded();\
    return BREAK;\
}

SUPER(0)
SUPER(1)
SUPER(2)
SUPER(3)
SUPER(4)
SUPER(5)

THREADED(supern)
    set_pc(pc+2);
	Super super = (Super)get_code(pc + 1);
	PUSH_EXP(super);
	PUSH_EXP(super->size);
    Super_eval_threaded();
    return BREAK;
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

    T_FUNC(zap)

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
    T_FUNC(send_hash);
    T_FUNC(send_value);
    T_FUNC(send_to_do_)
    T_FUNC(send_ifTrue_)
    T_FUNC(send_ifFalse_)
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
    threaded* fp = (threaded*)PEEKN_CNT(1);
    while (fp != BREAK) {
        fp = (threaded*)(*fp)((void*)fp);
    }
}

void Method_invoke(MethodClosure closure,
                   Method method,
                   Optr self, uns_int argc)
{
    assert1(method->code != (Array)nil, "Uncompiled method found!");

    assert(argc == method->params->size,
        printf("Argument count mismatch. Expected: %"F_I"u given: %"F_I"u\n",
               method->params->size, argc););
    
    if (method->size == 0) { 
        RETURN_FROM_NATIVE(self);
        return;
    }
    
    set_env((Optr)new_MethodContext(closure, self));
    activation_from_native(argc);

    PUSH_CNT(restore_env);
    push_code(method->code);
    CNT_eval_threaded();
}
