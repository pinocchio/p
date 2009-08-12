#include <ast.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <setjmp.h>

Object Symbol_eval;
Object Symbol_eval_;
Object Symbol_lookup_;
Object Symbol_apply_;
Object Symbol_at_in_;

Object Null;
Object _empty_[0];

Object Double_Stack[STACK_SIZE];
unsigned int _EXP_;
unsigned int _CNT_;

Object Env;
Context_Frame * Stack_Bottom;
Context_Frame * Stack_Pointer;
Context_Frame * Stack_Return;

jmp_buf Eval_Exit;
jmp_buf Eval_Continue;

void continue_eval()
{
    longjmp(Eval_Continue, 1);
}

static void Expand_Stack()
{
    // TODO.
    exit(-1);
}

Context_Frame *
get_Context()
{
    return Stack_Pointer;
}

Context_Frame *
return_Context(Context_Frame * frame)
{
    return (Context_Frame *)(frame - frame->argc - sizeof(Context_Frame));
}

#define push_EXP(value)         Double_Stack[_EXP_++] = ((Object)value);
#define pop_EXP()               Double_Stack[--_EXP_]
#define peek_EXP(depth)         Double_Stack[_EXP_ - depth]
#define poke_EXP(value, depth)  Double_Stack[_EXP_ - depth] = ((Object)value);
#define zap_EXP()               _EXP_--;

#define push_CNT(value)         Double_Stack[_CNT_--] = ((Object)value);
#define pop_CNT()               ((cont)(Double_Stack[++_CNT_]))
#define peek_CNT(depth)         ((cont)(Double_Stack[_CNT_ + depth]))
#define poke_CNT(value, depth)  Double_Stack[_CNT_ + depth] = ((Object)value);
#define zap_CNT()               _CNT_++;

void
return_from(Context_Frame * context, Object value)
{
    _CNT_ = get_Context()->return_cnt;
    _EXP_ = get_Context()->return_exp;
    Stack_Pointer = return_Context(context);
    push_EXP(value);
}

Context_Frame *
claim_Stack(unsigned int size)
{
    if (STACK_SIZE - (Stack_Pointer - Stack_Bottom) < size) {
        Expand_Stack();
    }
    Stack_Pointer += size;
    return Stack_Pointer;
}

Context_Frame *
new_Context_With(unsigned int size, Object fill)
{
    Context_Frame * result = claim_Stack(sizeof(Context_Frame) + size);
    result->argc = size;
    result->return_exp = _EXP_;
    result->return_cnt = _CNT_;

    while (0 < size) {
        size--;
        result->argv[size] = fill;
    }

    return result;
}

void init_Stack(unsigned int size)
{
    _EXP_           = 0;
    _CNT_           = STACK_SIZE - 1;
    Stack_Bottom    = NEW_ARRAYED(Context_Frame *, Object, size);
    Stack_Pointer   = Stack_Bottom;
    Stack_Return    = new_Context_With(0, Null);
}

void init_Thread()
{
    init_Stack(STACK_SIZE);
}

Object
current_env()
{
    return Env;
}

#define Send(self, msg, argc, argv)\
    ((cdp)*HEADER((Object)self))((Object)self, msg, argc, argv);

Object SmallInt_Class;

Object
new_SmallInt(int value)
{
    Type_SmallInt * result = NEW(Type_SmallInt);
    HEADER(result) = SmallInt_Class;
    result->value = value;
    return (Object)result;
}

Object Array_Class;

Type_Array *
new_Array(int c, Object v[])
{
    Type_Array * result = NEW_ARRAYED(Type_Array *, Type_Array, c);
    HEADER(result) = Array_Class;
    result->size = c;
    for (c--; c > 0; c--) {
        result->values[c] = v[c];
    }
    return result;
}

Type_Array *
new_Array_With(int c, Object init)
{
    Type_Array * result = NEW_ARRAYED(Type_Array *, Type_Array, c);
    HEADER(result) = Array_Class;
    result->size = c;
    while (0 < c) {
        c--;
        result->values[c] = init;
    }
    return result;
}

Object Constant_Class;

AST_Constant *
new_Constant(Object constant)
{
    AST_Constant * result = NEW(AST_Constant);
    HEADER(result) = Constant_Class;
    result->constant = constant;
    return result;
}

Object Variable_Class;

AST_Variable *
new_Variable(const wchar_t* name)
{
    AST_Variable * result   = NEW(AST_Variable);
    HEADER(result)          = Variable_Class;
    return result;
}

Object Send_Class;

AST_Send *
new_Send(Object receiver, Object msg, Type_Array * arguments)
{
    AST_Send * result   = NEW(AST_Send);
    HEADER(result)      = Send_Class;
    result->receiver    = receiver;
    result->message     = msg;
    result->arguments   = arguments;
    return result;
}

Object Method_Class;

AST_Method *
new_Method(unsigned int paramc, bool has_rest, Object body)
{
    AST_Method * result = NEW(AST_Method);
    HEADER(result)      = Method_Class;
    result->paramc      = paramc;
    result->has_rest    = has_rest;
    result->body        = body;
    return result;
}

Object Env_Class;

Object
new_Env(Object parent, Object key, unsigned int size)
{
    Runtime_Env * result    = NEW(Runtime_Env);
    HEADER(result)          = Env_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = new_Array_With(size, Null);
    return (Object)result;
}

void
FallbackSend(Object self, Object msg, int argc, Object argv[])
{
    Object cls = HEADER(self);
    Object marg[1] = { msg };
    // TODO!
}

void Type_SmallInt_dispatch(Object self, Object msg, int argc, Object argv[])
{
    if (msg == Symbol_eval || msg == Symbol_eval_) { 
        return return_from(get_Context(), self);
    } 

    return FallbackSend(self, msg, argc, argv);
}

void Type_Array_dispatch(Object self, Object msg, int argc, Object argv[])
{
    if (msg == Symbol_eval || msg == Symbol_eval_) { 
        return return_from(get_Context(), self);
    }

    return FallbackSend(self, msg, argc, argv);
}

void AST_Constant_dispatch(Object self, Object msg, int argc, Object argv[])
{
    if (msg == Symbol_eval || msg == Symbol_eval_) { 
        return return_from(get_Context(), self);
    }

    return FallbackSend(self, msg, argc, argv);
}

void AST_Send_send()
{
    Send(get_Context()->self,
         get_Context()->message,
         get_Context()->argc,
         get_Context()->argv);
}

void send_Eval()
{
    zap_CNT();
    Object exp = pop_EXP();
    Send(exp, Symbol_eval, 0, _empty_);
}

void store_argument()
{
    Object value = pop_EXP();
    Object index = pop_EXP();
    assert(HEADER(index) == SmallInt_Class);
    unsigned int idx = ((Type_SmallInt *)index)->value;
    get_Context()->argv[idx] = value;
}

void AST_Send_eval(AST_Send * self)
{
    Context_Frame * context = new_Context_With(self->arguments->size, Null);
    context->message = self->message;

    push_CNT(AST_Send_send);
    push_CNT(send_Eval);
    push_EXP(self);
    push_EXP(self->receiver);

    int i;
    for (i = 0; i < self->arguments->size; i++) {
        push_CNT(store_argument);
        push_EXP(new_SmallInt(i));
        push_CNT(send_Eval);
        push_EXP(self->arguments->values[i]);
    }
}

void
AST_Send_dispatch(Object receiver, Object msg, int argc, Object argv[])
{

    AST_Send * self = (AST_Send *)receiver;    

    if (msg == Symbol_eval) {
        assert(argc == 0);
        AST_Send_eval(self);
    }

    if (msg == Symbol_eval_) { 
        assert(argc == 1);
        /* TODO restore old env afterwards. */
        Env = argv[0];
        AST_Send_eval(self);
    }

    return FallbackSend(receiver, msg, argc, argv);
}

void
Runtime_Env_lookup(Runtime_Env * self, unsigned int index, Object key)
{
    while (self->key != key || self->parent == Null) {
        if (HEADER(self->parent) == Env_Class) {
            self = (Runtime_Env *)self->parent;
        } else {
            Object args[2] = { (Object)new_SmallInt(index), key };

            /* TODO Schedule at:in: message send. */

            return;
        }
    }
    /* TODO jump to error handler. */
    assert(self->key == key);
    assert(index < self->values->size);

    push_EXP(self->values->values[index]);
}

void
Runtime_Env_store(Runtime_Env * self, unsigned int index,
                  Object key, Object value)
{
    while (self->key != key || self->parent == Null) {
        if (HEADER(self->parent) == Env_Class) {
            self = (Runtime_Env *)self->parent;
        } else {
            Object args[2] = { (Object)new_SmallInt(index), key };

            /* TODO Schedule at:in: message send. */

            return;
        }
    }
    /* TODO jump to error handler. */
    assert(self->key == key);
    assert(index < self->values->size);

    self->values->values[index] = value;
}

void
Runtime_Env_dispatch(Object receiver, Object msg, int argc, Object argv[])
{
    Runtime_Env * self = (Runtime_Env *)receiver;

    if (msg == Symbol_at_in_) {
        assert(argc == 2);
        assert(HEADER(argv[0]) == SmallInt_Class);
        assert(0 < ((Type_SmallInt *)argv[0])->value);
        unsigned int index = ((Type_SmallInt *)argv[0])->value;
        return Runtime_Env_lookup(self, index, argv[1]);
    }
}

void
AST_Variable_dispatch(Object receiver, Object msg, int argc, Object argv[])
{
    AST_Variable * self = (AST_Variable *)receiver;

    if (msg == Symbol_eval) {
        assert(argc == 0);

        Object env = current_env();

        if (HEADER(env) == Env_Class) {
            return Runtime_Env_lookup(
                    (Runtime_Env *)env, self->index, self->key);
        } else {
            Object args[2] = { (Object)new_SmallInt(self->index), self->key };
            return Send(env, Symbol_at_in_, 2, args);
        }
    }
    if (msg == Symbol_eval_) {
        assert(argc == 1);
        Object env = argv[0];

        if (HEADER(env) == Env_Class) {
            return Runtime_Env_lookup(
                    (Runtime_Env *)env, self->index, self->key);
        } else {
            Object args[2] = { (Object)new_SmallInt(self->index), self->key };
            return Send(env, Symbol_at_in_, 2, args);
        }
    }

    return FallbackSend(receiver, msg, argc, argv);
}

void
AST_Method_Apply(AST_Method * self, int argc, Object argv[])
{
    if (self->has_rest) {
        assert(self->paramc <= argc);
    } else {
        assert(self->paramc == argc);
    }
}

void
AST_Method_dispatch(Object receiver, Object msg, int argc, Object argv[])
{
    AST_Method * self = (AST_Method *)receiver;
    if (msg == Symbol_apply_) {
        assert(argc == 1);
        assert(HEADER(argv[0]) == Array_Class);
        Type_Array * args = (Type_Array *)argv[0];
        Object arguments[args->size];
        unsigned int i;
        for (i = 0; i < args->size; i++) {
            arguments[i] = args->values[i];
        }
        return AST_Method_Apply(self, args->size, arguments);
    }

    return FallbackSend(receiver, msg, argc, argv);
}

#define init_class(name, type)\
    name = (Object)NEW(Type_Class);\
    ((Type_Class *)name)->dispatch = &type##_##dispatch;

void
end_eval() {
    longjmp(Eval_Exit, 1);
}

/*
 * setjmp and longjmp have an overhead but they allow us to avoid testing if
 * we are at the end of the stack. It's only expensive for starting new
 * threads, and the boosts performance for longer living threads.
 */
Object
Eval(Object code)
{
    push_EXP(code);
    push_CNT(end_eval);
    push_CNT(send_Eval);

    if (!setjmp(Eval_Exit)) {
        setjmp(Eval_Continue);
        for (;;) {
            peek_CNT(1)();
        }
    }
    zap_CNT();
    Object result = pop_EXP();
    return result;
}

int main()
{
    Symbol_eval     = (Object)new_SmallInt(0);
    Symbol_eval_    = (Object)new_SmallInt(1);
    Symbol_lookup_  = (Object)new_SmallInt(3);
    Symbol_apply_   = (Object)new_SmallInt(4);
    Symbol_at_in_   = (Object)new_SmallInt(5);
    Null            = (Object)new_SmallInt(2);

    init_class(SmallInt_Class,  Type_SmallInt);
    init_class(Array_Class,     Type_Array);
    init_class(Constant_Class,  AST_Constant);
    init_class(Variable_Class,  AST_Variable);
    init_class(Send_Class,      AST_Send);
    init_class(Method_Class,    AST_Method);
    init_Thread();

    Env = new_Env(Null, Null, 0);

    Object i = (Object)new_SmallInt(10); 

    AST_Variable * var = (AST_Variable *)new_Variable(L"test");
    var->index = 0;
    var->key   = (Object)new_SmallInt(10);

    Env = new_Env(current_env(), var->key, 1);
    Env = new_Env(current_env(), Null, 0);

    int idx;
    for (idx = 0; idx < 100000000; idx++) {   
        Eval((Object)var);
    }
}
