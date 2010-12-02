
#include <system/interpretation/Threaded.h>
#include <debug.h>

/* ========================================================================= */

Symbol SMB_hash;
Symbol SMB_asString;

/* ========================================================================= */

threaded* pc;
static Optr rv;

/* ========================================================================= */

Optr next_value()
{
    return (Optr)*(++pc);
}

void set_return_value(Optr value)
{
    rv = value;
}

Optr return_value()
{
    return rv;
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

    T_FUNC(send)
    T_FUNC(super)

    T_FUNC(copy_variable_variable)
    T_FUNC(copy_constant_variable)
    T_FUNC(copy_variable_slot)
    T_FUNC(copy_slot_variable)
    T_FUNC(copy_self_variable)
    T_FUNC(copy_return_variable)

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
    } else if (class == ClassReference_Class) {
        return ((ClassReference)key)->class;
    }
    i(key);
    assert1(NULL, "Invalid type of argument");
    return NULL;
}

OPCODE(send)
    Send send = (Send)next_value();
    uns_int size = send->size;
    MethodContext context = allocate_context(size);
    uns_int i;
    context->self = fetch(send->receiver);
    for (i = 0; i < size; i++) {
        context->locals[i] = fetch(send->arguments[i]);
    }
    context->return_context = current_env();
    SET_CONTEXT(context);
    pc++;
    lookup_invoke(HEADER(context->self), send->message);
END_OPCODE

OPCODE(super)
    Super super = (Super)next_value();
    uns_int size = super->size;
    MethodContext context = allocate_context(size);
    uns_int i;
    context->self = current_self();
    for (i = 0; i < size; i++) {
        context->locals[i] = fetch(super->arguments[i]);
    }
    Class class = current_env()->home_context->closure->host;
    context->return_context = current_env();
    SET_CONTEXT(context);
    pc++;
    lookup_invoke(class->super, super->message);
END_OPCODE

OPCODE(copy_variable_variable)
    Variable input = (Variable)next_value();
    Variable output = (Variable)next_value();
    Variable_assign(output, Variable_lookup(input));
    pc++;
END_OPCODE

OPCODE(copy_constant_variable)
    Optr value = next_value();
    Variable output = (Variable)next_value();
    Variable_assign(output, value);
    pc++;
END_OPCODE

OPCODE(copy_variable_slot)
    Variable input = (Variable)next_value();
    Slot output = (Slot)next_value();
    Slot_assign(output, Variable_lookup(input));
    pc++;
END_OPCODE

OPCODE(copy_slot_variable)
    Slot input = (Slot)next_value();
    Variable output = (Variable)next_value();
    Variable_assign(output, Slot_lookup(input));
    pc++;
END_OPCODE

OPCODE(copy_self_variable)
    Variable output = (Variable)next_value();
    Variable_assign(output, current_self());
    pc++;
END_OPCODE

OPCODE(copy_return_variable)
    Variable output = (Variable)next_value();
    Variable_assign(output, return_value());
    pc++;
END_OPCODE

OPCODE(return_slot)
    Slot input = (Slot)next_value();
    direct_return(Slot_lookup(input));
END_OPCODE

OPCODE(return_variable)
    Variable input = (Variable)next_value();
    direct_return(Variable_lookup(input));
END_OPCODE

OPCODE(return_constant)
    direct_return(next_value());
END_OPCODE

OPCODE(return_self)
    direct_return(current_self());
END_OPCODE

OPCODE(return_reference)
    ClassReference input = (ClassReference)next_value();
    direct_return(ClassReference_eval(input));
END_OPCODE

OPCODE(nonlocalreturn_slot)
    Slot input = (Slot)next_value();
    long_return(Slot_lookup(input));
END_OPCODE

OPCODE(nonlocalreturn_variable)
    Variable input = (Variable)next_value();
    long_return(Variable_lookup(input));
END_OPCODE

OPCODE(nonlocalreturn_constant)
    long_return(next_value());
END_OPCODE

OPCODE(nonlocalreturn_self)
    long_return(current_self());
END_OPCODE

OPCODE(nonlocalreturn_reference)
    ClassReference input = (ClassReference)next_value();
    long_return(ClassReference_eval(input));
END_OPCODE

OPCODE(capture)
    Block block = (Block)next_value();
    BlockClosure closure = new_BlockClosure(block, current_env());
    Variable_assign(block->returnAddress, (Optr)closure);
    pc++;
END_OPCODE

/* ========================================================================= */

OPCODE(string_concat)
    String self   = (String)((MethodContext)current_env())->self;
    String string = (String)current_env()->locals[0];
    direct_return((Optr)String_concat_(self, string));
END_OPCODE

OPCODE(string_concat_asString)
    Optr obj = ((MethodContext)current_env())->self;
    Optr tag = GETTAG(obj);
    if (TAG_IS_LAYOUT(tag, Words)) {
        return t_string_concat();
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
