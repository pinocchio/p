#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <setjmp.h>
#include <wchar.h>
#include <ast.h>

Object Symbol_eval;
Object Symbol_eval_;
Object Symbol_lookup_;
Object Symbol_apply_;
Object Symbol_at_in_;

Object Null;
Type_Array * Empty_Array;

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
    // TODO allocate the stack with the giben size
    _EXP_ = (Object *)&Double_Stack[0];
    _CNT_ = (cont *)&Double_Stack[STACK_SIZE - 1];
}

void init_Thread()
{
    init_Stack(STACK_SIZE);
}

Object current_env() { return Env; }

//#define Send(self, msg, argc, argv)\
//    ((cdp)*HEADER((Object)self))((Object)self, msg, argc, argv);

/* ======================================================================== */

Object Array_Class;
Object Assign_Class;
Object Class_Class;
Object Constant_Class;
Object Dictionary_Class;
Object Env_Class;
Object False_Class;
Object Method_Class;
Object Native_Method_Class;
Object Send_Class;
Object SmallInt_Class;
Object String_Class;
Object True_Class;
Object Variable_Class;

/* ======================================================================== */

Type_SmallInt *
new_SmallInt(int value)
{
    Type_SmallInt * result = NEW(Type_SmallInt);
    HEADER(result)         = SmallInt_Class;
    result->value          = value;
    return result;
}


void SmallInt_plus(Object self, Object class, Type_Array * args) {
    if (HEADER(args->values[0]) != SmallInt_Class) { assert(NULL); }
    Type_SmallInt * number = ((Type_SmallInt *) self);
    number->value += ((Type_SmallInt *) args->values[0])->value;
}


void SmallInt_minus(Object self, Object class, Type_Array * args) {
    if (HEADER(args->values[0]) != SmallInt_Class) { assert(NULL); }
    Type_SmallInt * number = ((Type_SmallInt *) self);
    number->value -= ((Type_SmallInt *) args->values[0])->value;
}

/* ======================================================================== */


wchar_t* wcsdup(const wchar_t* input) {
   int len         = wcslen(input) + 1;
   wchar_t* output = (wchar_t*)PALLOC(sizeof(wchar_t) * len);
   int i           = 0;
   for (; i < len; i++) {
       output[i] = input[i];
   }
   return output;
}

Type_String *
new_String(const wchar_t* str)
{
    Type_String *string = NEW(Type_String);
    HEADER(string)      = String_Class;
    string->hash        = NULL;
    string->value       = wcsdup(str);
    string->size        = new_SmallInt(wcslen(str));
    return string;
}


/* ======================================================================== */


Type_Array *
new_Raw_Array(int c)
{
    if (c == 0) { return Empty_Array; }
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
    HEADER(result)      = Array_Class;
    return result;
}

Type_Array *
new_Array(int c, Object v[])
{
    if (c == 0) { return Empty_Array; }
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
    HEADER(result)      = Array_Class;
    result->size        = c;
    while (0 < c) {
        c--;
        result->values[c] = v[c];
    }
    return result;
}

Type_Array *
new_Array_With(int c, Object init)
{
    if (c == 0) { return Empty_Array; }
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
    HEADER(result)      = Array_Class;
    result->size        = c;
    while (0 < c) {
        c--;
        result->values[c] = init;
    }
    return result;
}

/* ======================================================================== */

AST_Constant *
new_Constant(Object constant)
{
    AST_Constant * result = NEW(AST_Constant);
    HEADER(result)        = Constant_Class;
    result->constant      = constant;
    return result;
}


void AST_Constant_eval(AST_Constant * self)
{
    poke_EXP(1, self->constant);
}

/* ======================================================================== */

AST_Variable *
new_Variable(const wchar_t* name)
{
    AST_Variable * result = NEW(AST_Variable);
    HEADER(result)        = Variable_Class;
    /* TODO add name */
    return result;
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
/* ======================================================================== */

AST_Assign *
new_Assign(Object variable, Object expression)
{
    AST_Assign * result = NEW(AST_Assign);
    HEADER(result)      = Assign_Class;
    result->variable    = variable;
    result->expression  = expression;
    return result;
}

void AST_Assign_eval(AST_Assign * self)
{
    push_CNT(AST_Assign_assign);
    poke_EXP(1, self->variable);
    push_CNT(send_Eval);
    push_EXP(self->expression);
}

void AST_Assign_assign()
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

/* ======================================================================== */

AST_Send *
new_Send(Object receiver, Object msg, Type_Array * arguments)
{
    AST_Send * result = NEW(AST_Send);
    HEADER(result)    = Send_Class;
    result->receiver  = receiver;
    result->message   = msg;
    result->arguments = arguments;
    return result;
}

void AST_Send_send()
{
    zap_CNT();
    Object receiver = pop_EXP();
    // XXX Breaks encapsulation, need type check here
    Type_Array * args = (Type_Array *)pop_EXP();

    // XXX Breaks encapsulation, need type check here
    // ignore the original args on the stack
    AST_Send * self = (AST_Send *)peek_EXP(1);
    // insert the receiver at the old ast_send position
    poke_EXP(1, receiver);

    Class_dispatch(self, receiver, HEADER(receiver),
                   self->message, args);
}

void send_Eval()
{
    zap_CNT();
    Object exp = peek_EXP(1);

    Object class = HEADER(exp);
    // TODO get rid of this switch and do a "double dispatch"
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

    assert(NULL);
}

void AST_Send_eval(AST_Send * self)
{
    Type_Array * args = new_Raw_Array(self->arguments->size);
    // execute the method
    push_CNT(AST_Send_send);
    push_EXP(args);
    // evaluate the receiver
    push_CNT(send_Eval);
    push_EXP(self->receiver);
    // evaluate the arguments
    int i;
    for (i = 0; i < self->arguments->size; i++) {
        push_CNT(store_argument);
        push_EXP(args);
        push_EXP(new_SmallInt(i));
        push_CNT(send_Eval);
        push_EXP(self->arguments->values[i]);
    }
}

/* ======================================================================== */

AST_Method *
new_Method(unsigned int paramc, Type_Array * body)
{
    AST_Method * result = NEW(AST_Method);
    HEADER(result)      = Method_Class;
    result->paramc      = paramc;
    result->body        = body;
    return result;
}

void AST_Method_continue()
{
    Runtime_Env * env = (Runtime_Env *)current_env();
    push_EXP(env->method->body->values[env->pc]);

    env->pc++;
    if (env->pc < env->method->body->size) {
        push_CNT(AST_Method_continue);
    }

    push_CNT(send_Eval);
}

void AST_Method_invoke(AST_Method * method, Object self,
                       Object class, Type_Array * args)
{
    push_restore_env();

    Runtime_Env * env = new_Env(method->environment, (Object)method, args);

    env->self   = self;
    env->class  = class;
    env->method = method;
    env->pc     = 1;

    Env = (Object)env;

    if (1 < method->body->size) {
        push_CNT(AST_Method_continue);
    }

    push_EXP(method->body->values[0]);
    push_CNT(send_Eval);
}

void AST_Method_apply(AST_Method * self, int argc, Object argv[])
{
    assert(self->paramc == argc);

    push_restore_env();

    Env = (Object)new_Env_Sized(self->environment, (Object)self, argc);
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

/* ======================================================================== */

Object
new_Native_Method(native code)
{
    AST_Native_Method * result = NEW(AST_Native_Method);
    HEADER(result)             = Native_Method_Class;
    result->code               = code;
    return (Object)result;
}

void AST_Native_Method_invoke(AST_Native_Method * method, Object self,
                              Object class, Type_Array * args)
{
    method->code(self, class, args);
}

/* ======================================================================== */

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

/* ======================================================================== */

Type_Dictionary *
new_Dictionary()
{
    Type_Dictionary * result = NEW(Type_Dictionary);
    HEADER(result)           = Dictionary_Class;
    result->layout           = new_Array_With(2, Null);
    return result;
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

Object Type_Dictionary_store_at_(Type_Dictionary * self, Object key, Object value, int index)
{
    /* just store at the first empty location */
    self->layout->values[index*2] = key;
    self->layout->values[(index*2) +1] = value;
    return value;
}

Object Type_Dictionary_store_(Type_Dictionary * self, Object key, Object value)
{
    /* just store at the first empty location */
    int i;
    for (i = 0; i < self->layout->size; i=i+2) {
        if (!self->layout->values[i]) {
            Type_Dictionary_store_at_(self, key, value, i/2);
            return value;
        }
    }
    return NULL;
}

/* ======================================================================== */
    
Object new_Class(Object superclass)
{
    Type_Class * result = NEW(Type_Class);
    result->methods     = new_Dictionary();
    HEADER(result)      = Class_Class;
    return (Object)result;
}

Object new_Named_Class(Object superclass, const wchar_t* name)
{
    Type_Class * result = (Type_Class *) new_Class(superclass);
    result->name = (Object) new_String(name);
    return (Object)result;
}

void store_method_at(Type_Class * class, Object symbol, Object method, int index)
{
    // XXX breaks encapsulation need type check here
    Type_Dictionary * dict = class->methods;
    Type_Dictionary_store_at_(dict, symbol, method, index);
}

void store_method(Type_Class * class, Object symbol, Object method)
{
    // XXX breaks encapsulation need type check here
    Type_Dictionary * dict = class->methods;
    Type_Dictionary_store_(dict, symbol, method);
}

void Class_dispatch(AST_Send * sender, Object self, Object class,
                         Object msg, Type_Array * args)
{
    if (class == sender->type) {
        return Method_invoke(sender->method, self, class, args);
    }

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
            sender->type = class;
            sender->method = method;
            return Method_invoke(method, self, class, args);
        }
    }

    // TODO send DNU;
    assert(NULL);

}

/* ======================================================================== */

void push_restore_env()
{
    push_CNT(restore_env);
    poke_EXP(1, current_env());
}


void store_argument()
{
    zap_CNT();

    Object value = pop_EXP();
    // XXX Breaks encapsulation, need type check here
    Object index = pop_EXP();
    // XXX Breaks encapsulation, need type check here
    Type_Array * args = (Type_Array *)pop_EXP();

    unsigned int idx = ((Type_SmallInt *)index)->value;
    args->values[idx] = value;
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
    Array_Class         = new_Named_Class(Null, L"Array");
    Assign_Class        = new_Named_Class(Null, L"Assign");
    Constant_Class      = new_Named_Class(Null, L"Constant");
    Dictionary_Class    = new_Named_Class(Null, L"Dictionary");
    Method_Class        = new_Named_Class(Null, L"Method");
    Native_Method_Class = new_Named_Class(Null, L"NativeMethod");
    Send_Class          = new_Named_Class(Null, L"Send");
    SmallInt_Class      = new_Named_Class(Null, L"SmallInt");
    String_Class        = new_Named_Class(Null, L"String");
    Variable_Class      = new_Named_Class(Null, L"Variable");

    Empty_Array         = NEW(Type_Array);
    Empty_Array->size   = 0;
    HEADER(Empty_Array) = Array_Class;

    init_Thread();

    Env = (Object)new_Env_Sized(Null, Null, 0);

    Object i = (Object)new_SmallInt(10); 

    AST_Variable * var = new_Variable(L"test");
    var->index         = 0;
    var->key           = (Object)new_SmallInt(10);

    Env = (Object)new_Env_Sized(current_env(), var->key, 1);
    Env = (Object)new_Env_Sized(current_env(), Null, 0);

    Object nmself           = new_Native_Method(SmallInt_plus);
    Object Symbol_plus_     = (Object)new_SmallInt(100);
    //Type_Dictionary * dict  = ((Type_Class *)SmallInt_Class)->methods;
    //dict->layout->values[0] = Symbol_plus_;
    //dict->layout->values[1] = nmself;
    
    store_method_at((Type_Class *)SmallInt_Class, Symbol_plus_, nmself, 0);

    Type_SmallInt * constant = new_SmallInt(0);
    Object test     = (Object)new_Constant((Object)constant);
    Object add      = (Object)new_Constant((Object)new_SmallInt(1));
    
    //AST_Send * send = new_Send(test, Symbol_plus_, new_Raw_Array(0));
    AST_Send * send = new_Send(test, Symbol_plus_, new_Array_With(1, add));

    //AST_Assign * assign = new_Assign((Object)var, test);

    int idx;
    int count = 10000000;
    count = 1000;
    for (idx = 0; idx < count; idx++) {   
    //    Eval((Object)assign);
        Eval((Object)send);
    }
    assert(constant->value == count);

}
