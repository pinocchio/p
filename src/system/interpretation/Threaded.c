
#include <system/interpretation/Threaded.h>
#include <debug.h>

/* ========================================================================= */

threaded* pc;

static void restore_env()
{
	BlockContext current  = current_env();
    set_env((Optr)current->parent_frame);
    current->parent_frame = (BlockContext)nil;
}

/* ========================================================================= */

Optr get_code(threaded* idx)
{
    return (Optr)*idx;
}

void push_code(Array code)
{
    PUSH_CNT(pc);
    pc = (threaded*)&code->values[0];
}

/* ========================================================================= */

Optr pop_EXP()
{
    Optr * p = tget(_EXP_);
    tset(_EXP_, p - 1);
    return *p;
}

void _push_EXP(Optr e)
{
    Optr * p = tget(_EXP_) + 1;
    tset(_EXP_, p);
    *p = e;
}

void _push_CNT(threaded* e)
{
    threaded ** p = (threaded**)tget(_CNT_) - 1;
    tset(_CNT_, p);
    *p = e;
}

/* ========================================================================= */

THREADED(jump_back)
    pc -= 1;
}

#define JUMP_BACKN(n) THREADED(jump_back##n) \
    pc -= n;\
}

JUMP_BACKN(2)
JUMP_BACKN(3)
JUMP_BACKN(4)
JUMP_BACKN(5)

THREADED(jump_backn)
    pc -= (long)get_code(pc + 1);
}

/* ========================================================================= */

#define PUSH(name, value) THREADED(push_##name) \
    PUSH_EXP(value);\
    pc = pc + 1;\
}

PUSH(nil, nil)
PUSH(0, new_SmallInt(0))
PUSH(1, new_SmallInt(1))
PUSH(2, new_SmallInt(2))
PUSH(true, true)
PUSH(false, false)

#define ZAPN(num) THREADED(zap##num) \
    ZAPN_EXP(num);\
    pc += 1;\
}

ZAPN(1)
ZAPN(2)
ZAPN(3)
ZAPN(4)
ZAPN(5)

THREADED(zap)
    t_zap1();
}

THREADED(restart)
    pc = 0;
}

#define CHECK(num) THREADED(check##num)\
    Optr bool = pop_EXP();\
    if (bool == true) {\
        pc += 1;\
    } else if (bool == false) {\
        pc += 1 + num;\
    } else {\
        assert1(NULL, "Non-boolean type receiver for truth");\
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
    pc += 1;\
}

PEEK(0)
PEEK(1)
PEEK(2)
PEEK(3)
PEEK(4)
PEEK(5)

THREADED(dup)
    t_peek0();
}

#define PUSHN(count) THREADED(push##count) \
    long i;\
    CLAIM_EXP(count);\
    for (i=1; i<=count; i++) {\
        POKE_EXP(count-i, get_code(pc + i));\
    }\
    pc += 1 + count;\
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
    pc += count + 1;
}

THREADED(push_context) 
	PUSH_EXP(capture_current_env());
    pc += 1;
}

#define PUSH_EVAL(name, type) THREADED(push_##name) \
    type name = (type)get_code(pc + 1);\
	CLAIM_EXP(1);\
    type##_eval(name);\
    pc += 2;\
}

PUSH_EVAL(variable, Variable)
PUSH_EVAL(class_reference, ClassReference)

THREADED(push_self)
    PUSH_EXP(current_env()->home_context->self);
    pc += 1;
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
    pc += 2;
}

void push_closure(threaded* pc)
{
	Block block  = (Block)get_code(pc);
    PUSH_EXP(new_Closure_from_Block(block));
}

THREADED(push_closure)
    push_closure(pc + 1);
    pc += 2;
}



/* ========================================================================= */

THREADED(return)
    pc = PEEK_CNT();
    ZAP_CNT();
}

THREADED(block_return)
    set_env(PEEK_EXP(1));
	Optr result = pop_EXP();
    POKE_EXP(0, result);
    t_return();
}

void block_return_value(Optr value)
{
    set_env(PEEK_EXP(0));
    POKE_EXP(0, value);
    t_return();
}

#define RETURN(name, value) THREADED(block_return_##name) \
    block_return_value(value); \
}

RETURN(true,    true)
RETURN(false,   false)
RETURN(nil,     nil)
RETURN(0,       (Optr)new_SmallInt(0))
RETURN(1,       (Optr)new_SmallInt(1))
RETURN(2,       (Optr)new_SmallInt(2))

THREADED(block_return_next)
    t_push_1();
    t_block_return();
}

THREADED(block_return_self)
    CLAIM_EXP(1);
    Self_eval();
	t_block_return();
}



/* ========================================================================= */
THREADED(method_return)
    uns_int size = current_env()->size;
    restore_env();
    Optr result = PEEK_EXP(0);
    ZAPN_EXP(CONTEXT_SIZE + size + 1);
    POKE_EXP(0, result);
    t_return();
}

void method_return_value(Optr value)
{
    uns_int size = current_env()->size;
    restore_env();
    ZAPN_EXP(CONTEXT_SIZE + size);
    POKE_EXP(0, value);
    t_return();
}

#define METHOD_RETURN(name, value) THREADED(method_return_##name) \
    return method_return_value(value); \
}

METHOD_RETURN(true,    true)
METHOD_RETURN(false,   false)
METHOD_RETURN(nil,     nil)
METHOD_RETURN(0,       (Optr)new_SmallInt(0))
METHOD_RETURN(1,       (Optr)new_SmallInt(1))
METHOD_RETURN(2,       (Optr)new_SmallInt(2))

THREADED(method_return_next)
    t_push_1();
    t_method_return();
}

THREADED(method_return_self)
    CLAIM_EXP(1);
    Self_eval();
	t_method_return();
}

/* ========================================================================= */
#define SEND(n) THREADED(send##n) \
    Optr self = PEEK_EXP(n);\
    pc += 2;\
    Class_normal_dispatch(self, (Send)get_code(pc - 1), n);\
}

SEND(0)
SEND(1)
SEND(2)
SEND(3)
SEND(4)
SEND(5)

THREADED(sendn)
    Send send = (Send)get_code(pc + 1);
    pc += 2;
	uns_int n = send->size;
    Optr self = PEEK_EXP(n);    
    Class_normal_dispatch(self, send, n);
}

/* ========================================================================= */
THREADED(send_to_do_)
    pc += 1;
    Optr from = PEEK_EXP(1);
    Optr to   = PEEK_EXP(0);
    if (HEADER(from) == SmallInt_Class && HEADER(to) == SmallInt_Class) {
        POKE_EXP(1, unwrap_int(from));
        POKE_EXP(0, unwrap_int(to));
        push_closure(pc);
        return;
    }
    Send send = (Send)get_code(pc + 4);
    push_closure(pc + 2);
    Class_normal_dispatch(from, send, 0);
}

THREADED(continue_to_do_)
    long index = (long)PEEK_EXP(2);
    long max   = (long)PEEK_EXP(1);
    if (index > max) {
        ZAPN_EXP(2);
        pc += 4;
        return;
    }
    // update the index
    POKE_EXP(2, index + 1);
    BlockClosure closure = (BlockClosure)PEEK_EXP(0);
    // the self
    // TODO only create the block closure once
    PUSH_EXP(closure);
    // arg to the do: block
    PUSH_EXP(wrap_int(index));
    pc += 1;
    apply((Optr)closure, 1);
}

THREADED(send_ifTrue_) 
    Optr bool = PEEK_EXP(0);
    if (bool == true) {
        Block block = (Block)get_code(pc + 2);
        pc += 3;
        POKE_EXP(0, current_env());
        push_code(block->threaded);
    } else if (bool == false) {
        POKE_EXP(0, nil);
        pc += 3;
    } else {
        Send send = (Send)get_code(pc + 1);
        push_closure(pc + 2);
    	Class_normal_dispatch(bool, send, 1);
    }
}

THREADED(send_ifFalse_) 
    Optr bool = PEEK_EXP(0);
    if (bool == true) {
        POKE_EXP(0, nil);
        pc += 3;
        return;
    } else if (bool == false) {
        Block block = (Block)get_code(pc + 2);
        pc += 3;
        POKE_EXP(0, current_env());
        push_code(block->threaded);
    } else {
        Send send = (Send)get_code(pc + 1);
        push_closure(pc + 2);
    	Class_normal_dispatch(bool, send, 1);
    }
}

THREADED(send_ifTrue_ifFalse_) 
    Optr bool = PEEK_EXP(0);
    if (bool == true) {
        Block block = (Block)get_code(pc + 2);
        pc += 4;
        POKE_EXP(0, current_env());
        push_code(block->threaded);
    } else if (bool == false) {
        Block block = (Block)get_code(pc + 3);
        pc += 4;
        POKE_EXP(0, current_env());
        push_code(block->threaded);
    } else {
        Send send = (Send)get_code(pc + 1);
        push_closure(pc + 2);
        push_closure(pc + 3);
    	Class_normal_dispatch(bool, send, 2);
    }
}

THREADED(send_ifFalse_ifTrue_) 
    Optr bool = PEEK_EXP(0);
    if (bool == false) {
        Block block = (Block)get_code(pc + 2);
        pc += 4;
        POKE_EXP(0, current_env());
        push_code(block->threaded);
    } else if (bool == true) {
        Block block = (Block)get_code(pc + 3);
        pc += 4;
        POKE_EXP(0, current_env());
        push_code(block->threaded);
    } else {
        Send send = (Send)get_code(pc + 1);
        push_closure(pc + 2);
        push_closure(pc + 3);
    	Class_normal_dispatch(bool, send, 2);
    }
}
/* ========================================================================= */

#define SUPER(n) THREADED(super##n) \
	PUSH_EXP(get_code(pc + 1));\
    pc += 2;\
    PUSH_EXP(n);\
    Super_eval_threaded();\
}

SUPER(0)
SUPER(1)
SUPER(2)
SUPER(3)
SUPER(4)
SUPER(5)

THREADED(supern)
	Super super = (Super)get_code(pc + 1);
    pc += 2;
	PUSH_EXP(super);
	PUSH_EXP(super->size);
    Super_eval_threaded();
}

/* ========================================================================= */

THREADED(assign)
    pc += 1;
	do_assign();
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
    store_native(natives, L"compileNatively:", 
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
	
	T_FUNC(push_context)

    T_FUNC(push_variable)
    T_FUNC(push_closure)
    T_FUNC(push_class_reference)
    T_FUNC(push_slot)

    T_FUNC(zap)

    T_FUNC(return)
    
    T_FUNC(block_return)
    T_FUNC(block_return_true)
    T_FUNC(block_return_false)
    T_FUNC(block_return_nil)
    T_FUNC(block_return_self) 
    T_FUNC(block_return_0)
    T_FUNC(block_return_1)
    T_FUNC(block_return_2)
    T_FUNC(block_return_next)   

    T_FUNC(method_return)
    T_FUNC(method_return_true)
    T_FUNC(method_return_false)
    T_FUNC(method_return_nil)
    T_FUNC(method_return_self) 
    T_FUNC(method_return_0)
    T_FUNC(method_return_1)
    T_FUNC(method_return_2)
    T_FUNC(method_return_next)   

    T_FUNC(send0)
    T_FUNC(send1)
    T_FUNC(send2)
    T_FUNC(send3)
    T_FUNC(send4)
    T_FUNC(send5)
    T_FUNC(sendn)

    T_FUNC(send_to_do_)
    T_FUNC(send_ifTrue_)
    T_FUNC(send_ifFalse_)
    T_FUNC(send_ifTrue_ifFalse_)
    T_FUNC(send_ifFalse_ifTrue_)

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
