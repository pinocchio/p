
#include <system/interpretation/Threaded.h>
#include <debug.h>

/* ========================================================================= */

Symbol SMB_hash;
Symbol SMB_asString;

/* ========================================================================= */

threaded* pc;

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

void pop_code()
{
    pc = PEEK_CNT();
    ZAP_CNT();
}

Optr next_value()
{
    return (Optr)*(++pc);
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
    threaded ** p = tget(_CNT_) - 1;
    tset(_CNT_, p);
    *p = e;
}

void push_closure(threaded* pc)
{
	Block block  = (Block)get_code(pc);
    PUSH_EXP(new_Closure_from_Block(block));
}

/* ========================================================================= */
IdentityDictionary functions;

NATIVE1(Interpretation_Threaded_compileNatively_)
    Array array = (Array)NATIVE_ARG(0);
    int i;
    for (i=0; i<array->size; i++) {
        Optr object = array->values[i];
        if (HEADER(object) == Kernel_Compiler_Threading_FunctionPointer_Class) {
            Optr fp = IdentityDictionary_lookup(functions, ((Object)object)->ivals[0]);
            if (fp == nil || fp == NULL) {
                inspect(stderr, object);
            }
            assert1(fp != nil,  "Invalid opcode: cannot be nil") 
            assert1(fp != NULL, "Invalid opcode: cannot be NULL")
            array->values[i] = fp;
        }
    }
    RETURN_FROM_NATIVE(array)
}
/* ========================================================================= */

#ifdef THREADED
     #define T_FUNC(name) t_##name = &&label_##name;
#else //THREADED
    #define T_FUNC(name)\
        IdentityDictionary_store(functions,\
        (Optr)new_Symbol(L""#name),\
        (Optr)&t_##name);
#endif //THREADED

void post_init_Threaded()
{
 
    SMB_hash = new_Symbol(L"hash");
    SMB_asString = new_Symbol(L"asString");

    PLUGIN natives = add_plugin(L"Interpretation.Threaded");
    store_native(natives, L"compileNatively:", 
                 NM_Interpretation_Threaded_compileNatively_);

    functions = new_IdentityDictionary();
#ifdef THREADED 
    // initialize the goto pointers
    threaded(NULL);
}


void threaded(void *label) {

    if (label != NULL) {
        goto &&label;
    }
    initialize:
#endif
    T_FUNC(return_constant)
    T_FUNC(return_reference)
    T_FUNC(return_self)
    T_FUNC(return_slot)
    T_FUNC(return_variable)

    T_FUNC(nonlocalreturn_constant)
    T_FUNC(nonlocalreturn_reference)
    T_FUNC(nonlocalreturn_self)
    T_FUNC(nonlocalreturn_slot)
    T_FUNC(nonlocalreturn_variable)

    T_FUNC(send0)
    T_FUNC(send1)
    T_FUNC(send2)
    T_FUNC(send3)
    T_FUNC(send4)
    T_FUNC(send5)
    T_FUNC(send6)
    T_FUNC(sendn)

    T_FUNC(super0)
    T_FUNC(super1)
    T_FUNC(super2)
    T_FUNC(super3)
    T_FUNC(super4)
    T_FUNC(super5)
    T_FUNC(super6)
    T_FUNC(supern)

    T_FUNC(copy_variable_variable)
    T_FUNC(copy_constant_variable)
    T_FUNC(copy_variable_slot)
    T_FUNC(copy_slot_variable)
    T_FUNC(copy_self_variable)

    T_FUNC(capture)
END_OPCODE

/* ========================================================================= */

static Optr fetch(Optr key)
{
    Class class = HEADER(key);
    if (class == Variable_Class) {
        return Variable_lookup((Variable)key);
    } else if (class == Self_Class) {
        return current_self();
    } else if (class == Slot_Class) {
        return Slot_lookup((Slot)key);
    } else if (class == Constant_Class) {
        return ((Constant)key)->constant;
    }
    assert1(NULL, "Invalid type of argument");
    return NULL;
}

OPCODE(sendn)
    Send send = (Send)next_value();
    uns_int size = send->size;
    MethodContext context = allocate_context(size);
    uns_int i;
    context->self = fetch(send->receiver);
    for (i = 0; i < size; i++) {
        context->locals[i] = fetch(send->arguments[i]);
    }
    set_env(context);
    lookup_invoke(HEADER(context->self), send->message);
END_OPCODE

#define SEND(n) OPCODE(send##n)\
    t_sendn();\
END_OPCODE

SEND(0)
SEND(1)
SEND(2)
SEND(3)
SEND(4)
SEND(5)
SEND(6)

OPCODE(supern)
    Super super = (Super)next_value();
    PUSH_EXP(super);
    PUSH_EXP(super->size);
END_OPCODE

#define SUPER(n) OPCODE(super##n)\
    Super super = (Super)next_value();\
    PUSH_EXP(super);\
    PUSH_EXP(super->size);\
END_OPCODE

SUPER(0)
SUPER(1)
SUPER(2)
SUPER(3)
SUPER(4)
SUPER(5)
SUPER(6)

OPCODE(copy_variable_variable)
    Variable input = (Variable)next_value();
    Variable output = (Variable)next_value();
    Variable_assign(output, Variable_lookup(input));
END_OPCODE

OPCODE(copy_constant_variable)
    Optr value = next_value();
    Variable output = (Variable)next_value();
    Variable_assign(output, value);
END_OPCODE

OPCODE(copy_variable_slot)
    Variable input = (Variable)next_value();
    Slot output = (Slot)next_value();
    Slot_assign(output, Variable_lookup(input));
END_OPCODE

OPCODE(copy_slot_variable)
    Slot input = (Slot)next_value();
    Variable output = (Variable)next_value();
    Variable_assign(output, Slot_lookup(input));
END_OPCODE

OPCODE(copy_self_variable)
    Variable output = (Variable)next_value();
    Variable_assign(output, current_self());
END_OPCODE

void return_value(Optr value)
{
    // NYI
    assert0(NULL);
}

OPCODE(return_slot)
    Slot input = (Slot)next_value();
    return_value(Slot_lookup(input));
END_OPCODE

OPCODE(return_variable)
    Variable input = (Variable)next_value();
    return_value(Variable_lookup(input));
END_OPCODE

OPCODE(return_constant)
    return_value(next_value());
END_OPCODE

OPCODE(return_self)
    return_value(current_self());
END_OPCODE

OPCODE(return_reference)
    ClassReference input = (ClassReference)next_value();
    return_value(ClassReference_eval(input));
END_OPCODE

void nonlocalreturn_value(Optr value)
{
    // NYI
    assert0(NULL);
}

OPCODE(nonlocalreturn_slot)
    Slot input = (Slot)next_value();
    nonlocalreturn_value(Slot_lookup(input));
END_OPCODE

OPCODE(nonlocalreturn_variable)
    Variable input = (Variable)next_value();
    nonlocalreturn_value(Variable_lookup(input));
END_OPCODE

OPCODE(nonlocalreturn_constant)
    nonlocalreturn_value(next_value());
END_OPCODE

OPCODE(nonlocalreturn_self)
    nonlocalreturn_value(current_self());
END_OPCODE

OPCODE(nonlocalreturn_reference)
    ClassReference input = (ClassReference)next_value();
    nonlocalreturn_value(ClassReference_eval(input));
END_OPCODE

OPCODE(capture)
    Block block = (Block)next_value();
    BlockClosure closure = new_BlockClosure(block, current_env());
    Variable_assign(block->returnAddress, (Optr)closure);
END_OPCODE

/* ========================================================================= */

OPCODE(string_concat)
    String self   = (String)PEEK_EXP(1);
    String string = (String)PEEK_EXP(0);
    ZAP_EXP();
    POKE_EXP(0, String_concat_(self, (String)string));
    pop_code();
END_OPCODE

OPCODE(string_concat_asString)
    Optr obj = pop_EXP();
    Optr tag = GETTAG(obj);
    if (TAG_IS_LAYOUT(tag, Words)) {
        String self = (String)PEEK_EXP(0);
        POKE_EXP(0, String_concat_(self, (String)obj));
        pop_code();
    } else {
        pc = pc + 1;
        send_message(obj, SMB_asString, 0);
    }
END_OPCODE

/* ========================================================================= */

/* ========================================================================= */
#ifdef THREADED
} // end the thread function
#endif //THREADED
/* ========================================================================= */
