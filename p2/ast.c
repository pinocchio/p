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
Object  * _EXP_;
cont    * _CNT_;

Object Env;

jmp_buf Eval_Exit;
jmp_buf Eval_Continue;

/* 
 * Avoid longjmps as much as possible since they impose a large
 * performance penalty!
 */
void continue_eval()
{
    longjmp(Eval_Continue, 1);
}

static void Expand_Stack()
{
    // TODO.
    exit(-1);
}

#define push_EXP(value)         (*(_EXP_++) = ((Object)value));
#define pop_EXP()               (*(--_EXP_))
#define peek_EXP(depth)         (*(_EXP_ - depth))
#define poke_EXP(depth, value)  (*(_EXP_ - depth) = ((Object)value));
#define zap_EXP()               (_EXP_--);

#define push_CNT(value)         (*(_CNT_--) = ((cont)value));
#define pop_CNT()               (*(++_CNT_))
#define peek_CNT(depth)         (*(_CNT_ + depth))
#define poke_CNT(depth, value)  (*(_CNT_ + depth) = ((cont)value));
#define zap_CNT()               (_CNT_++);

void restore_env()
{
    zap_CNT();
    Object result = pop_EXP();
    Env = peek_EXP(1);
    poke_EXP(1, result);
}

void init_Stack(unsigned int size)
{
    _EXP_           = (Object *)&Double_Stack[0];
    _CNT_           = (cont *)&Double_Stack[STACK_SIZE - 1];
}

void init_Thread()
{
    init_Stack(STACK_SIZE);
}

Object current_env() { return Env; }

//#define Send(self, msg, argc, argv)\
//    ((cdp)*HEADER((Object)self))((Object)self, msg, argc, argv);

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
new_Raw_Array(int c)
{
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
    HEADER(result) = Array_Class;
    return result;
}

Type_Array *
new_Array(int c, Object v[])
{
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
    HEADER(result) = Array_Class;
    result->size = c;
    while (0 < c) {
        c--;
        result->values[c] = v[c];
    }
    return result;
}

Type_Array *
new_Array_With(int c, Object init)
{
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
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
    /* TODO add name */
    return result;
}

Object Assign_Class;

AST_Assign *
new_Assign(Object variable, Object expression)
{
    AST_Assign * result = NEW(AST_Assign);
    HEADER(result)      = Assign_Class;
    result->variable    = variable;
    result->expression  = expression;
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
new_Method(unsigned int paramc, Type_Array * body)
{
    AST_Method * result = NEW(AST_Method);
    HEADER(result)      = Method_Class;
    result->paramc      = paramc;
    result->body        = body;
    return result;
}

Object Native_Method_Class;

Object
new_Native_Method(native code)
{
    AST_Native_Method * result = NEW(AST_Native_Method);
    HEADER(result)  = Native_Method_Class;
    result->code    = code;
    return (Object)result;
}

Object Env_Class;

Runtime_Env *
new_Env(Object parent, Object key, Type_Array * values)
{
    Runtime_Env * result    = NEW(Runtime_Env);
    HEADER(result)          = Env_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = values;
    return result;
}

Runtime_Env *
new_Env_Sized(Object parent, Object key, int size)
{
    Runtime_Env * result    = NEW(Runtime_Env);
    HEADER(result)          = Env_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = new_Array_With(size, Null);
    return result;
}

Object Dictionary_Class;

Type_Dictionary *
new_Dictionary()
{
    Type_Dictionary * result = NEW(Type_Dictionary);
    HEADER(result)  = Dictionary_Class;
    result->layout  = new_Array_With(2, Null);
    return result;
}

Object Class_Class;

Object new_Class(Object superclass) {
    Type_Class * result = NEW(Type_Class);
    result->methods     = new_Dictionary();
    HEADER(result)      = Class_Class;
    return (Object)result;
}

void AST_Constant_eval(AST_Constant * self)
{
    poke_EXP(1, self->constant);
}

void send_Eval()
{
    zap_CNT();
    Object exp = peek_EXP(1);

    Object class = HEADER(exp);

    if (class == Constant_Class) {
        return AST_Constant_eval((AST_Constant *)exp);
    }
    if (class == Variable_Class) {
        return AST_Variable_eval((AST_Variable *)exp);
    }
    if (class == Assign_Class) {
        return AST_Assign_eval((AST_Assign *)exp);
    }
    if (class == Send_Class) {
        return AST_Send_eval((AST_Send *)exp);
    }

    // Send(exp, Symbol_eval, 0, _empty_);
}

void AST_Native_Method_invoke(AST_Native_Method * method, Object self,
                              Object class, Type_Array * args)
{
    method->code(self, class, args);
}

Object Type_Dictionary_lookup(Type_Dictionary * self, Object key)
{
    int i;
    for (i = 0; i < self->layout->size; i=i+2) {
        if (self->layout->values[i] == key) {
            return self->layout->values[i+1];
        }
    }
    return NULL;
}

void ast_method_continue()
{
    Runtime_Env * env = (Runtime_Env *)current_env();
    push_EXP(env->method->body->values[env->pc]);

    env->pc++;
    if (env->pc < env->method->body->size) {
        push_CNT(ast_method_continue);
    }

    push_CNT(send_Eval);
}

void push_restore_env()
{
    push_CNT(restore_env);
    poke_EXP(1, current_env());
}

void AST_Method_invoke(AST_Method * method, Object self,
                       Object class, Type_Array * args)
{
    push_restore_env();

    Runtime_Env * env = new_Env(method->environment, (Object)method, args);

    env->self = self;
    env->class = class;
    env->method = method;
    env->pc = 1;

    Env = (Object)env;

    if (1 < method->body->size) {
        push_CNT(ast_method_continue);
    }

    push_EXP(method->body->values[0]);
    push_CNT(send_Eval);
}

void Method_invoke(Object method, Object self,
                   Object class, Type_Array * args)
{
    if (HEADER(method) == Method_Class) {
        return AST_Method_invoke((AST_Method *)method, self, class, args);
    }
    if (HEADER(method) == Native_Method_Class) {
        return AST_Native_Method_invoke((AST_Native_Method *)method, self,
                                        class, args);
    }
    // Only AST_Method supported for now
    assert(NULL);
}

void Class_dispatch(AST_Send * sender, Object self, Object class,
                         Object msg, Type_Array * args)
{
    /*if (class == sender->type) {
        return Method_invoke(sender->method, self, class, args);
    }*/

    Object method = NULL;    

    while (class != Null) {
        if (HEADER(class) != Class_Class) {
            // TODO for now we only allow classes.
            assert(NULL);
        }

        Type_Dictionary * mdict = ((Type_Class *) class)->methods;
        method = Type_Dictionary_lookup(mdict, msg);

        if (!method) {
            class = ((Type_Class *) class)->super;
        } else {
            /*sender->type = class;
            sender->method = method;
            */
            return Method_invoke(method, self, class, args);
        }
    }

    // TODO send DNU;
    assert(NULL);

}

void AST_Send_send()
{
    zap_CNT();

    Object receiver = pop_EXP();
    Type_Array * args = (Type_Array *)pop_EXP();

    AST_Send * self = (AST_Send *)peek_EXP(1);
    poke_EXP(1, receiver);

    Class_dispatch(self, receiver, HEADER(receiver),
                   self->message, args);
}

void store_argument()
{
    zap_CNT();

    Object value = pop_EXP();
    Object index = pop_EXP();
    Type_Array * args = (Type_Array *)pop_EXP();

    unsigned int idx = ((Type_SmallInt *)index)->value;
    args->values[idx] = value;
}

void AST_Send_eval(AST_Send * self)
{
    Type_Array * args = new_Raw_Array(self->argc);

    push_CNT(AST_Send_send);
    push_EXP(args);
    
    push_CNT(send_Eval);
    push_EXP(self->receiver);

    int i;
    for (i = 0; i < self->arguments->size; i++) {
        push_CNT(store_argument);
        push_EXP(args);
        push_EXP(new_SmallInt(i));
        push_CNT(send_Eval);
        push_EXP(self->arguments->values[i]);
    }
}

void Runtime_Env_lookup(Runtime_Env * self, unsigned int index, Object key)
{
    while (self->key != key || self->parent == Null) {
        if (HEADER(self->parent) == Env_Class) {
            self = (Runtime_Env *)self->parent;
        } else {

            /* TODO Schedule at:in: message send. */
            assert(NULL);

            //Object args[2] = { (Object)new_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert(self->key == key);
    assert(index < self->values->size);

    push_EXP(self->values->values[index]);
}

void Runtime_Env_assign(Runtime_Env * self, unsigned int index,
                        Object key, Object value)
{
    while (self->key != key || self->parent == Null) {
        if (HEADER(self->parent) == Env_Class) {
            self = (Runtime_Env *)self->parent;
        } else {
            /* TODO Schedule at:in: message send. */
            assert(NULL);

            // Object args[2] = { (Object)new_SmallInt(index), key };
            return;
        }
    }
    /* TODO jump to error handler. */
    assert(self->key == key);
    assert(index < self->values->size);

    self->values->values[index] = value;
}

void AST_Variable_eval(AST_Variable * self)
{
    Object env = current_env();

    if (HEADER(env) == Env_Class) {
        return Runtime_Env_lookup(
                (Runtime_Env *)env, self->index, self->key);
    } else {
        // TODO
        assert(NULL);
        Object args[2] = { (Object)new_SmallInt(self->index), self->key };
        // return Send(env, Symbol_at_in_, 2, args);
    }
}

void AST_Variable_assign(AST_Variable * self, Object value)
{
    Object env = current_env();

    if (HEADER(env) == Env_Class) {
        return Runtime_Env_assign(
            (Runtime_Env *)env, self->index, self->key, value);
    }
    // TODO
    assert(NULL);
}

void ast_assign_assign()
{
    zap_CNT();
    Object value = pop_EXP();
    Object var   = peek_EXP(1);
    /* result of evaluating expression is result of assignment */
    poke_EXP(1, value);

    if (HEADER(var) == Variable_Class) {
        return AST_Variable_assign((AST_Variable *)var, value);
    }
    // TODO send assign: to self->variable.
    assert(NULL);
}

void AST_Assign_eval(AST_Assign * self)
{
    push_CNT(ast_assign_assign);
    poke_EXP(1, self->variable);
    push_CNT(send_Eval);
    push_EXP(self->expression);
}

void AST_Method_apply(AST_Method * self, int argc, Object argv[])
{
    assert(self->paramc == argc);

    push_restore_env();

    Env = (Object)new_Env_Sized(self->environment, (Object)self, argc);
}

void end_eval()
{
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

void NM_self(Object self, Object class, Type_Array * args)
{
    //printf("In NMSelf\n");
}

int main()
{
    Symbol_eval     = (Object)new_SmallInt(0);
    Symbol_eval_    = (Object)new_SmallInt(1);
    Symbol_lookup_  = (Object)new_SmallInt(3);
    Symbol_apply_   = (Object)new_SmallInt(4);
    Symbol_at_in_   = (Object)new_SmallInt(5);
    Null            = (Object)new_SmallInt(2);

    Class_Class         = new_Class(Null);
    HEADER(Class_Class) = Class_Class;
    SmallInt_Class      = new_Class(Null);
    Array_Class         = new_Class(Null);
    Constant_Class      = new_Class(Null);
    Variable_Class      = new_Class(Null);
    Send_Class          = new_Class(Null);
    Assign_Class        = new_Class(Null);
    Method_Class        = new_Class(Null);
    Native_Method_Class = new_Class(Null);

    init_Thread();

    Env = (Object)new_Env(Null, Null, 0);

    Object i = (Object)new_SmallInt(10); 

    AST_Variable * var = new_Variable(L"test");
    var->index = 0;
    var->key   = (Object)new_SmallInt(10);

    Env = (Object)new_Env_Sized(current_env(), var->key, 1);
    Env = (Object)new_Env_Sized(current_env(), Null, 0);

    Object nmself = new_Native_Method(NM_self);
    Object Symbol_plus_    = (Object)new_SmallInt(100);
    Type_Dictionary * dict = ((Type_Class *)SmallInt_Class)->methods;
    dict->layout->values[0] = Symbol_plus_;
    dict->layout->values[1] = nmself;

    Object constant = (Object)new_SmallInt(10);
    Object test = (Object)new_Constant(constant);

    AST_Send * send = new_Send(test, Symbol_plus_, new_Raw_Array(0));

    //AST_Assign * assign = new_Assign((Object)var, test);

    int idx;
    for (idx = 0; idx < 10000000; idx++) {   
    //    Eval((Object)assign);
        Eval((Object)send);
    }

}
