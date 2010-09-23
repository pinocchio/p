
#include <system/interpretation/Threaded.h>
#include <debug.h>

/* ========================================================================= */

Symbol SMB_hash;
Symbol SMB_asString;

/* ========================================================================= */

threaded* pc;

static void restore_env()
{
	BlockContext current  = current_env();
    set_env((Optr)current->parent_frame);
    // current->parent_frame = (BlockContext)nil;
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
    threaded ** p = tget(_CNT_) - 1;
    tset(_CNT_, p);
    *p = e;
}

void push_closure(threaded* pc)
{
	Block block  = (Block)get_code(pc);
    PUSH_EXP(new_Closure_from_Block(block));
}

void block_return_value(Optr value)
{
    set_env(PEEK_EXP(0));
    POKE_EXP(0, value);
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

/* ========================================================================= */
IdentityDictionary functions;

NATIVE1(Interpretation_Threaded_compileNatively_)
    Array array = (Array)NATIVE_ARG(0);
    int i;
    for (i=0; i<array->size; i++) {
        Optr object = array->values[i];
        if (HEADER(object) == Kernel_Threading_FunctionPointer_Class) {
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
    T_FUNC(jump_back)
    T_FUNC(jump_back2)
    T_FUNC(jump_back3)
    
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
    T_FUNC(zap1)
    T_FUNC(zap2)
    T_FUNC(zap3)
    T_FUNC(zap4)

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
    T_FUNC(send_to_by_do_)
    T_FUNC(continue_to_do_)
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
END_OPCODE

/* ========================================================================= */
OPCODE(jump_back)
    pc -= 1;
END_OPCODE

#define JUMP_BACKN(n) OPCODE(jump_back##n) \
    pc -= n;\
END_OPCODE

JUMP_BACKN(2)
JUMP_BACKN(3)
JUMP_BACKN(4)
JUMP_BACKN(5)

OPCODE(jump_backn)
    pc -= (long)get_code(pc + 1);
END_OPCODE

/* ========================================================================= */

#define PUSH(name, value) OPCODE(push_##name) \
    PUSH_EXP(value);\
    pc = pc + 1;\
END_OPCODE

PUSH(nil, nil)
PUSH(0, new_SmallInt(0))
PUSH(1, new_SmallInt(1))
PUSH(2, new_SmallInt(2))
PUSH(true, true)
PUSH(false, false)

#define ZAPN(num) OPCODE(zap##num) \
    ZAPN_EXP(num);\
    pc += 1;\
END_OPCODE

ZAPN(1)
ZAPN(2)
ZAPN(3)
ZAPN(4)
ZAPN(5)

OPCODE(zap)
    t_zap1();
END_OPCODE

OPCODE(restart)
    pc = 0;
END_OPCODE

#define CHECK(num) OPCODE(check##num)\
    Optr bool = pop_EXP();\
    if (bool == true) {\
        pc += 1;\
    } else if (bool == false) {\
        pc += 1 + num;\
    } else {\
        assert1(NULL, "Non-boolean type receiver for truth");\
    }\
END_OPCODE

CHECK(1)
CHECK(2)
CHECK(3)
CHECK(4)
CHECK(5)

#define PEEK(num) OPCODE(peek##num) \
    Optr o = PEEK_EXP(num);\
    PUSH_EXP(o);\
    pc += 1;\
END_OPCODE

PEEK(0)
PEEK(1)
PEEK(2)
PEEK(3)
PEEK(4)
PEEK(5)

OPCODE(dup)
    t_peek0();
END_OPCODE

#define PUSHN(count) OPCODE(push##count) \
    long i;\
    CLAIM_EXP(count);\
    for (i=1; i<=count; i++) {\
        POKE_EXP(count-i, get_code(pc + i));\
    }\
    pc += 1 + count;\
END_OPCODE
PUSHN(1)
PUSHN(2)
PUSHN(3)
PUSHN(4)
PUSHN(5)

OPCODE(pushn)
    long i;
    uns_int count = (uns_int)unwrap_int(get_code(pc + 1));
    CLAIM_EXP(count);
    for (i=1; i<=count; ++i) {
        POKE_EXP(i, get_code(pc + 1 + i));
    }
    pc += count + 1;
END_OPCODE

OPCODE(push_context) 
	PUSH_EXP(capture_current_env());
    pc += 1;
END_OPCODE

#define PUSH_EVAL(name, type) OPCODE(push_##name) \
    type name = (type)get_code(pc + 1);\
	CLAIM_EXP(1);\
    type##_eval(name);\
    pc += 2;\
END_OPCODE

PUSH_EVAL(variable, Variable)
PUSH_EVAL(class_reference, ClassReference)

OPCODE(push_self)
    PUSH_EXP(current_env()->home_context->self);
    pc += 1;
END_OPCODE

OPCODE(push_slot) 
    Slot slot = (Slot)get_code(pc + 1);
	CLAIM_EXP(1);
    if (HEADER(slot) == Slot_Class) {
        Slot_eval(slot);
    } else if (HEADER(slot) == UintSlot_Class) {
        UintSlot_eval((UintSlot)slot);
    } else {
        assert1(NULL, "Unknown type of slot");
    }
    pc += 2;
END_OPCODE

OPCODE(push_closure)
    push_closure(pc + 1);
    pc += 2;
END_OPCODE

/* ========================================================================= */

OPCODE(return)
    pc = PEEK_CNT();
    ZAP_CNT();
END_OPCODE

OPCODE(block_return)
    set_env(PEEK_EXP(1));
	Optr result = pop_EXP();
    POKE_EXP(0, result);
    t_return();
END_OPCODE


#define RETURN(name, value) OPCODE(block_return_##name) \
    block_return_value(value); \
END_OPCODE

RETURN(true,    true)
RETURN(false,   false)
RETURN(nil,     nil)
RETURN(0,       (Optr)new_SmallInt(0))
RETURN(1,       (Optr)new_SmallInt(1))
RETURN(2,       (Optr)new_SmallInt(2))

OPCODE(block_return_next)
    t_push_1();
    t_block_return();
END_OPCODE

OPCODE(block_return_self)
    CLAIM_EXP(1);
    Self_eval();
    t_block_return();
END_OPCODE

/* ========================================================================= */

OPCODE(method_return)
    uns_int size = current_env()->size;
    restore_env();
    Optr result = PEEK_EXP(0);
    ZAPN_EXP(CONTEXT_SIZE + size + 1);
    POKE_EXP(0, result);
    t_return();
END_OPCODE

#define METHOD_RETURN(name, value) OPCODE(method_return_##name) \
    return method_return_value(value); \
END_OPCODE

METHOD_RETURN(true,    true)
METHOD_RETURN(false,   false)
METHOD_RETURN(nil,     nil)
METHOD_RETURN(0,       (Optr)new_SmallInt(0))
METHOD_RETURN(1,       (Optr)new_SmallInt(1))
METHOD_RETURN(2,       (Optr)new_SmallInt(2))

OPCODE(method_return_next)
    t_push_1();
    t_method_return();
END_OPCODE

OPCODE(method_return_self)
    CLAIM_EXP(1);
    Self_eval();
	t_method_return();
END_OPCODE

/* ========================================================================= */

#define SEND(n) OPCODE(send##n) \
    Optr self = PEEK_EXP(n);\
    pc += 2;\
    Class_normal_dispatch(self, (Send)get_code(pc - 1), n);\
END_OPCODE

SEND(0)
SEND(1)
SEND(2)
SEND(3)
SEND(4)
SEND(5)

OPCODE(sendn)
    Send send = (Send)get_code(pc + 1);
    pc += 2;
	uns_int n = send->size;
    Optr self = PEEK_EXP(n);    
    Class_normal_dispatch(self, send, n);
END_OPCODE

/* ========================================================================= */

OPCODE(send_to_do_)
    Optr from = PEEK_EXP(2);
    if (HEADER(from) == SmallInt_Class) {
        Optr to = PEEK_EXP(1);
        if (HEADER(to) == SmallInt_Class) {
            // keep the current receiver (from) on the stack
            POKE_EXP(2, unwrap_int(from));
            POKE_EXP(1, unwrap_int(to));
            CLAIM_EXP(2);
            POKE_EXP(1, 1); // increment
            pc += 1;
            RETURN_OPCODE;
        }
    }
    Send send = (Send)get_code(pc + 2);
    pc += 3;
    Class_normal_dispatch(from, send, 2);
END_OPCODE

OPCODE(send_to_by_do_)
    Optr from = PEEK_EXP(3);
    if (HEADER(from) == SmallInt_Class) {
        Optr to = PEEK_EXP(2);
        if (HEADER(to) == SmallInt_Class) {
            // keep the current receiver (from) on the stack
            POKE_EXP(3, unwrap_int(from));
            POKE_EXP(2, unwrap_int(to));
            Optr closure = PEEK_EXP(0);
            Optr increment = PEEK_EXP(1);
            POKE_EXP(1, closure);
            POKE_EXP(0, unwrap_int(increment)); // increment
            CLAIM_EXP(1);
            pc += 1;
            RETURN_OPCODE;
        }
    }
    Send send = (Send)get_code(pc + 2);
    pc += 3;
    Class_normal_dispatch(from, send, 3);
END_OPCODE

OPCODE(continue_to_do_)
    long index      = (long)PEEK_EXP(4);
    long max        = (long)PEEK_EXP(3);
    long increment  = (long)PEEK_EXP(1);
    if ((increment > 0 && index > max) ||
        (increment <= 0 && index < max)) {
        ZAPN_EXP(4); // max, closure, increment, <closure(void)/result>
        POKE_EXP(0, nil);
        pc += 2;
        RETURN_OPCODE;
    }
    // update the index
    POKE_EXP(4, index + increment);
    BlockClosure closure = (BlockClosure)PEEK_EXP(2);
    // arg to the do: block
    PUSH_EXP(wrap_int(index));
    apply((Optr)closure, 1);
END_OPCODE

OPCODE(send_ifTrue_) 
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
END_OPCODE

OPCODE(send_ifFalse_) 
    Optr bool = PEEK_EXP(0);
    if (bool == true) {
        POKE_EXP(0, nil);
        pc += 3;
        RETURN_OPCODE;
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
END_OPCODE

OPCODE(send_ifTrue_ifFalse_) 
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
END_OPCODE

OPCODE(send_ifFalse_ifTrue_) 
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
END_OPCODE

/* ========================================================================= */

#define SUPER(n) OPCODE(super##n) \
	PUSH_EXP(get_code(pc + 1));\
    pc += 2;\
    PUSH_EXP(n);\
    Super_eval_threaded();\
END_OPCODE

SUPER(0)
SUPER(1)
SUPER(2)
SUPER(3)
SUPER(4)
SUPER(5)

OPCODE(supern)
	Super super = (Super)get_code(pc + 1);
    pc += 2;
	PUSH_EXP(super);
	PUSH_EXP(super->size);
    Super_eval_threaded();
END_OPCODE

/* ========================================================================= */

OPCODE(assign)
    pc += 1;
	do_assign();
END_OPCODE

/* ========================================================================= */

OPCODE(class_cache_invoke)
    t_return();
    Optr method  = PEEK_EXP(0);
    uns_int argc = (uns_int)PEEK_EXP(4);
    Class class  = (Class)PEEK_EXP(5);
    Optr self    = PEEK_EXP(3);
    if (method == NULL) {
        Optr msg  = PEEK_EXP(2);
        ZAPN_EXP(7);
        return does_not_understand(self, class, msg, argc);
    }
    Send send   = (Send)PEEK_EXP(6);
    Array cache = send->cache;
    InlineCache_store(cache, (Optr)class, method);
    ZAPN_EXP(7);
    return invoke(method, self, argc);
END_OPCODE

OPCODE(class_invoke)
    t_return();
    Optr method  = PEEK_EXP(0);
    uns_int argc = (uns_int)PEEK_EXP(4);
    Optr self    = PEEK_EXP(3);
    if (method == NULL) {
        Class class = (Class)PEEK_EXP(5);
        Optr msg    = PEEK_EXP(2);
        ZAPN_EXP(6);
        return does_not_understand(self, class, msg, argc);
    }
    ZAPN_EXP(6);
    return invoke(method, self, argc);
END_OPCODE

OPCODE(class_lookup)
    Optr method = PEEK_EXP(0);
    if (method != NULL) {
        pc += 1;
        return;
    }
    
    ZAP_EXP();
    Class class = (Class)PEEK_EXP(0);
    Optr msg    = PEEK_EXP(1);
    Class next  = class->super;
    POKE_EXP(0, next);
    Class_lookup(next, msg);
END_OPCODE

/* ========================================================================= */

OPCODE(string_concat)
    String self   = (String)PEEK_EXP(1);
    String string = (String)PEEK_EXP(0);
    ZAP_EXP();
    POKE_EXP(0, String_concat_(self, (String)string));
    t_return();
END_OPCODE

OPCODE(string_concat_asString)
    Optr obj = pop_EXP();
    Optr tag = GETTAG(obj);
    if (TAG_IS_LAYOUT(tag, Words)) {
        String self = (String)PEEK_EXP(0);
        POKE_EXP(0, String_concat_(self, (String)obj));
        t_return();
    } else {
        pc = pc + 1;
        Class_direct_dispatch(obj, HEADER(obj), (Optr)SMB_asString, 0);
    }
END_OPCODE

/* ========================================================================= */

OPCODE(bucket_rehash)
    Dictionary dict   = (Dictionary)PEEK_EXP(3);
    uns_int idx       = (uns_int)PEEK_EXP(1);
    DictBucket bucket = (DictBucket)PEEK_EXP(2);
    int test          = 0;
    while(!test) {
        Optr w_hash = pop_EXP();
        long hash   = unwrap_hash(dict, w_hash);
        DictBucket * bucketp = get_bucketp(dict, hash);
        if (*bucketp != bucket) {
            Optr key   = bucket->values[idx];
            Optr value = bucket->values[idx+1];
            remove_from_bucket(idx, bucket);
            add_to_bucket(bucketp, key, value);
        } else {
            idx += 2;
            POKE_EXP(0, idx);
        }
        if (idx >= bucket->tally) {
            pc -= 1;
            return;
        }
        test = tpush_hash(bucket->values[idx]);
    }
END_OPCODE

OPCODE(dict_grow)
    uns_int idx     = (uns_int)PEEK_EXP(3);
    Array old       = (Array)PEEK_EXP(4);

    if (idx == old->size) {
        ZAPN_EXP(5);
        t_return();
        return;
    }

    DictBucket bucket = (DictBucket)old->values[idx];
    POKE_EXP(3, idx + 1);

    if ((Optr)bucket == nil || bucket->tally == 0) {
        return;
    }

    POKE_EXP(1, bucket);
    POKE_EXP(0, 0);

    pc += 1;

    if (tpush_hash(bucket->values[0])) { return; }

    t_bucket_rehash();
END_OPCODE

OPCODE(push_hash)
    pc += 1;
    SmallInt hash;
    Optr key = PEEK_EXP(0);
    Optr tag = GETTAG(key);
    if (TAG_IS_LAYOUT(tag, Words)) {
        hash = String_hash((String)key);
    } else if (TAG_IS_LAYOUT(tag, Int)) { 
        hash = (SmallInt)key;
    } else {
        Class_direct_dispatch(key, HEADER(key), (Optr)SMB_hash, 0);
        return;
    }
    PUSH_EXP(hash);
END_OPCODE

OPCODE(dictionary_lookup)
    Optr w_hash     = PEEK_EXP(0);
    Optr key        = PEEK_EXP(1);
    Dictionary self = (Dictionary)PEEK_EXP(2);
    long hash       = unwrap_hash(self, w_hash);

    DictBucket bucket = *get_bucketp(self, hash);

    if (bucket == (DictBucket)nil || bucket->tally == 0) {
        ZAPN_EXP(3);
        pc += 3;
        return;
    }

    POKE_EXP(0, bucket);
    PUSH_EXP(0);
    pc += 1;
    Bucket_compare_key(key, bucket->values[0]);
END_OPCODE

OPCODE(bucket_lookup)
    uns_int idx       = (uns_int)PEEK_EXP(1);
    DictBucket bucket = (DictBucket)PEEK_EXP(2);
    Optr key = PEEK_EXP(3);
    
    int test = 0;
    while (!test) {
        Optr boolean = PEEK_EXP(0);
        if (boolean == (Optr)true) {
            ZAPN_EXP(4);
            Optr result = bucket->values[idx + 1];
            POKE_EXP(0, result);
            pc += 1;
            return;
        }    

        idx += 2;

        uns_int tally = bucket->tally;
        if (idx >= tally) {
            ZAPN_EXP(5);
            pc += 2;
            return;
        }

        // zap boolean
        ZAP_EXP();

        POKE_EXP(0, idx);
        test = Bucket_compare_key(key, bucket->values[idx]);
    }
END_OPCODE

OPCODE(return_null)
    PUSH_EXP(NULL);
    t_return();
END_OPCODE

OPCODE(return_nil)
    PUSH_EXP(nil);
    t_return();
END_OPCODE

OPCODE(dictionary_ifAbsent_)
    t_return();
    Optr block = PEEK_EXP(0);
    apply(block, 0);
END_OPCODE

OPCODE(pop_return)
    Optr result = pop_EXP();
    POKE_EXP(0, result);
    t_return();
END_OPCODE

OPCODE(poke_true_return)
    POKE_EXP(0, true);
    t_return();
END_OPCODE

OPCODE(push_false_return)
    PUSH_EXP(false);
    t_return();
END_OPCODE

OPCODE(dictionary_store)
    Optr w_hash     = PEEK_EXP(0);
    Dictionary self = (Dictionary)PEEK_EXP(4);
    long hash       = unwrap_hash(self, w_hash);
    Optr key        = PEEK_EXP(3);
    Optr value      = PEEK_EXP(2);

    DictBucket * bucketp = get_bucketp(self, hash);
    
    if (*bucketp == (DictBucket)nil || (*bucketp)->tally == 0) { 
        add_to_bucket(bucketp, key, value);
        ZAPN_EXP(3);
        POKE_EXP(0, value);
        pc += 2;
        return;
    }

    pc += 1;
    POKE_EXP(0, 0);
    POKE_EXP(1, bucketp);
    Bucket_compare_key(key, (*bucketp)->values[0]);
END_OPCODE

OPCODE(bucket_store)
    uns_int idx          = (uns_int)PEEK_EXP(1);
    DictBucket * bucketp = (DictBucket*)PEEK_EXP(2);
    Optr key             = PEEK_EXP(4);
    DictBucket bucket    = *bucketp;
    int test             = 0;

    while (!test) {
        Optr bool = PEEK_EXP(0);
        if (bool == true) {
            Optr value = PEEK_EXP(3);
            ZAPN_EXP(5);
            POKE_EXP(0, value);
            bucket->values[idx + 1] = value;
            t_return();
            return;
        }
        
        idx += 2;

        if (idx >= bucket->tally) {
            Optr value = PEEK_EXP(3);
            add_to_bucket(bucketp, key, value);
            ZAPN_EXP(4);
            POKE_EXP(0, value);
            pc += 1;
            return;
        }
        ZAP_EXP();
        POKE_EXP(0, idx);
        test = Bucket_compare_key(key, bucket->values[idx]);
    }
END_OPCODE

OPCODE(dictionary_check_grow)
    Optr value      = PEEK_EXP(0);
    Dictionary self = (Dictionary)PEEK_EXP(1);
    POKE_EXP(1, value);
    ZAP_EXP();
    t_return();
    if (Dictionary_grow_check(self)) {
        Dictionary_grow(self);
    }
END_OPCODE

/* ========================================================================= */
#ifdef THREADED
} // end the thread function
#endif //THREADED
/* ========================================================================= */
