#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <setjmp.h>
#include <wchar.h>
#include <pinocchio.h>

/* ======================================================================== */

Object Symbol_apply_;
Object Symbol_at_in_;
Object Symbol_equals_;
Object Symbol_eval;
Object Symbol_eval_;
Object Symbol_lookup_;
Object Symbol_plus_;
Object Symbol_minus_;

Object Null;

/* ======================================================================== */

Type_Class * Array_Class;
Type_Class * Assign_Class;
Type_Class * Boolean_Class;
Type_Class * Character_Class;
Type_Class * Class_Class;
Type_Class * Constant_Class;
Type_Class * Dictionary_Class;
Type_Class * Env_Class;
Type_Class * False_Class;
Type_Class * File_Class;
Type_Class * Method_Class;
Type_Class * Native_Method_Class;
Type_Class * Object_Class;
Type_Class * Send_Class;
Type_Class * SmallInt_Class;
Type_Class * String_Class;
Type_Class * Symbol_Class;
Type_Class * True_Class;
Type_Class * Variable_Class;
Type_Class * Self_Class;
Type_Class * Super_Class;
Type_Class * Continue_Class;
Type_Class * Callec_Class;

/* ======================================================================== */

Object Env;

Object Self;

Type_Boolean * True;
AST_Constant * True_Const;

Type_Boolean * False;
AST_Constant * False_Const;

/* ======================================================================== */

Object Double_Stack[STACK_SIZE];
Object  * _EXP_;
cont    * _CNT_;

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

void initialize_Thread()
{
    init_Stack(STACK_SIZE);
}

Object current_env() { return Env; }

/* ========================================================================== */

Type_SmallInt ** SmallInt_cache;

Type_SmallInt *
new_SmallInt(int value)
{
    if (INT_CACHE_LOWER <= value && value < INT_CACHE_UPPER) {
        return SmallInt_cache[value];
    }
    Type_SmallInt * result = NEW(Type_SmallInt);
    HEADER(result)         = (Object) SmallInt_Class;
    result->value          = value;
    return result;
}


void SmallInt_plus(Object self, Object class, Type_Array * args) 
{
    assert(HEADER(self) == (Object)SmallInt_Class);
    assert(args->size == 1);
    Type_SmallInt * arg = (Type_SmallInt *)args->values[0];
    assert(HEADER(arg) == (Object)SmallInt_Class);
    Type_SmallInt * number = ((Type_SmallInt *) self);
    poke_EXP(1, new_SmallInt(arg->value + number->value));
}

void SmallInt_minus(Object self, Object class, Type_Array * args) 
{
    assert(HEADER(self) == (Object)SmallInt_Class);
    assert(args->size == 1);
    Type_SmallInt * arg = (Type_SmallInt *)args->values[0];
    assert(HEADER(arg) == (Object)SmallInt_Class);
    Type_SmallInt * number = ((Type_SmallInt *) self);
    poke_EXP(1, new_SmallInt(arg->value - number->value));
}

void SmallInt_equals(Object self, Object class, Type_Array * args) 
{
    assert(HEADER(self) == (Object)SmallInt_Class);
    assert(args->size == 1);
    assert(HEADER(args->values[0]) == (Object)SmallInt_Class);
    Type_SmallInt * number = ((Type_SmallInt *) self);
    if (number->value == ((Type_SmallInt *) args->values[0])->value) {
        push_EXP(True_Const);        
    } else {
        push_EXP(False_Const);
    }
}

void pre_initialize_Type_SmallInt() 
{
    SmallInt_Class = new_Class((Object)Object_Class);

    SmallInt_cache = (Type_SmallInt **)PALLOC(sizeof(Type_SmallInt*[INT_CACHE_UPPER-INT_CACHE_LOWER]));
    SmallInt_cache -= INT_CACHE_LOWER;

    int i;
    for (i = INT_CACHE_LOWER; i < INT_CACHE_UPPER; i++) {
        Type_SmallInt * o = NEW(Type_SmallInt);
        o->value = i;
        HEADER(o) = (Object)SmallInt_Class;
        SmallInt_cache[i] = o;
    }
}

void post_initialize_Type_SmallInt()
{
    SmallInt_Class->name = new_String(L"SmallInt");
    store_native_method((Type_Class *)SmallInt_Class, Symbol_plus_, SmallInt_plus);
    store_native_method((Type_Class *)SmallInt_Class, Symbol_minus_, SmallInt_minus);
    store_native_method((Type_Class *)SmallInt_Class, Symbol_equals_, SmallInt_equals);
    
    assert(Type_Dictionary_lookup(SmallInt_Class->methods, Symbol_plus_));
    assert(Type_Dictionary_lookup(SmallInt_Class->methods, Symbol_minus_));
    assert(Type_Dictionary_lookup(SmallInt_Class->methods, Symbol_equals_));
}

/* ========================================================================== */

Type_Character * new_Character(wchar_t value)
{
    Type_Character * result = NEW(Type_Character);
    HEADER(result)          = (Object)Character_Class;
    result->value           = value;
    // TODO add character table here for caching
    return result;
}


void Character_toString()
{
    // TODO implement
}

void Character_toSymbol()
{
    // TODO implement
}

void Character_toSmallInt()
{
    // TODO implement
}


void pre_initialize_Character()
{
    Character_Class = new_Named_Class((Object)Object_Class, L"Character");
}

void post_initialize_Character()
{
   // TODO install methods 
}

/* ========================================================================== */

wchar_t* wcsdup(const wchar_t* input)
{
   int len         = wcslen(input) + 1;
   wchar_t* output = (wchar_t*)PALLOC(sizeof(wchar_t) * len);
   int i           = 0;
   for (; i < len; i++) {
       output[i] = input[i];
   }
   return output;
}

Type_Symbol *
new_Symbol(const wchar_t* name)
{
    Type_Symbol * symbol = NEW(Type_Symbol);
    HEADER(symbol)       = (Object)Symbol_Class;
    symbol->hash         = NULL;
    symbol->value        = wcsdup(name);
    symbol->size         = new_SmallInt(wcslen(name));
    return symbol;
}


void Symbol_charAt_() 
{
    // TODO implement
}

void Symbol_toString()
{
    // TODO implement
}

void Symbol_toCharacterArray()
{
    // TODO implement
}

void Symbol_concat()
{
    // TODO implement
}

void Symbol_sub()
{
    // TODO implement
}

void Symbol_indexOf()
{
    // TODO implement
}

void Symbol_lastIndexOf()
{
    // TODO implement
}

void pre_initialize_Symbol()
{
    Symbol_Class        = new_Named_Class((Object)Object_Class, L"Symbol");
}

void initialize_Symbol()
{
    Symbol_apply_   = (Object)new_Symbol(L"apply:");
    Symbol_at_in_   = (Object)new_Symbol(L"at:in:");
    Symbol_equals_  = (Object)new_Symbol(L"equals:");
    Symbol_eval     = (Object)new_Symbol(L"eval");
    Symbol_eval_    = (Object)new_Symbol(L"eval:");
    Symbol_lookup_  = (Object)new_Symbol(L"lookup:");
    Symbol_minus_   = (Object)new_Symbol(L"minus:");
    Symbol_plus_    = (Object)new_Symbol(L"plus:");
}

void post_initialize_Symbol()
{
   // TODO install methods 
}

/* ========================================================================== */

Type_String *
new_String(const wchar_t * str)
{
    Type_String * string = (Type_String *) new_Symbol(str);
    HEADER(string)       = (Object)String_Class;
    return string;
}

void String_sub() 
{
    // TODO implement
}

void String_concat()
{
    // TODO implement
}

void String_toSymbol()
{
    // TODO implement
}

void pre_initialize_String()
{
    String_Class = new_Named_Class((Object)Symbol_Class, L"String");
}

void post_initialize_String()
{
   // TODO install methods 
}

/* ========================================================================== */

void Boolean_toString()
{
    // TODO implement
}

void Boolean_toSmallInt()
{
    // TODO implement
}

void pre_initialize_True()
{
    True_Class = new_Named_Class((Object)Boolean_Class, L"True");

    True = NEW(Type_Boolean);
    HEADER(True) = (Object)True_Class;
    True->value = 1;

    True_Const = new_Constant((Object) True);
}

AST_Constant * get_bool_const(bool value)
{
    return value ? True_Const : False_Const;
}

Type_Boolean * get_bool(bool value)
{
    return value ? True : False;
}

void pre_initialize_False() {
    False_Class = new_Named_Class((Object)Boolean_Class, L"False");
    
    False = NEW(Type_Boolean);
    HEADER(False) = (Object)False_Class;
    False->value = 0;

    False_Const = new_Constant((Object) False);
}

void pre_initialize_Type_Boolean()
{
    Boolean_Class = new_Named_Class((Object)Object_Class, L"Boolean");     
    pre_initialize_True();
    pre_initialize_False();
}

void post_initialize_Type_Boolean()
{
   // TODO install methods 
}

/* ========================================================================== */

Type_Array * Empty_Array;

Type_Array *
new_Raw_Array(int c)
{
    if (c == 0) { return Empty_Array; }
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
    HEADER(result)      = (Object)Array_Class;
    result->size = c;
    return result;
}

Type_Array *
new_Array(int c, Object v[])
{
    if (c == 0) { return Empty_Array; }
    Type_Array * result = NEW_ARRAYED(Type_Array, Object[c]);
    HEADER(result)      = (Object)Array_Class;
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
    HEADER(result)      = (Object)Array_Class;
    result->size        = c;
    while (0 < c) {
        c--;
        result->values[c] = init;
    }
    return result;
}

void pre_initialize_Array() 
{
    Array_Class         = new_Named_Class((Object)Object_Class, L"Array");
    
    Empty_Array         = NEW(Type_Array);
    Empty_Array->size   = 0;
    HEADER(Empty_Array) = (Object)Array_Class;
}

void post_initialize_Array()
{
   // TODO install methods 
}

/* ========================================================================== */


File_Class * new_file()
{
    // TODO implement
    return NULL;
}

File_Class * new_File_FromPath(wchar_t* path)
{
    // TODO implement
    return NULL;
}


void pre_initialize_File()
{
    File_Class = new_Named_Class((Object)Object_Class, L"File");
}

void post_initialize_File()
{
   // TODO install methods 
}

/* ========================================================================== */

void AST_Self_eval()
{
    Object env = current_env();
    if (HEADER(env) != (Object)Env_Class) {
        assert(NULL);
    }
    poke_EXP(1, ((Runtime_Env *)env)->self);
}

void ast_self_eval()
{
    zap_CNT();
    // Push to allow poke in Self_eval
    push_EXP(Null);
    AST_Self_eval();
}

void pre_initialize_Self()
{
    Self_Class = new_Named_Class((Object)Object_Class, L"Self");
    Self       = (Object) NEW(AST_Self);
    HEADER(Self) = (Object) Self_Class;
}

void post_initialize_Self()
{
}

/* ========================================================================== */

AST_Super *
new_Super(Object message, Type_Array * arguments)
{
    AST_Super * result = NEW(AST_Super);
    HEADER(result)     = (Object)Super_Class;
    result->message    = message;
    result->arguments  = arguments;
    return result;
}

void ast_super_send() 
{
    zap_CNT();
    Object class = pop_EXP();
    Object receiver = pop_EXP();
    Type_Array * args = (Type_Array *)pop_EXP();
    
    AST_Super * super   = (AST_Super *)peek_EXP(1);
    // insert the receiver at the old ast_super position
    poke_EXP(1, receiver);
    
    Class_dispatch(&super->cache, receiver, class,
                   super->message, args);
}

void push_env_class()
{
    zap_CNT();
    Object env = current_env();
    if (HEADER(env) != (Object)Env_Class) {
        assert(NULL);
    }
    push_EXP(((Runtime_Env *)env)->class);
}

void AST_Super_eval(AST_Super * super)
{
    Type_Array * args = new_Raw_Array(super->arguments->size);
    // execute the method
    push_CNT(ast_super_send);
    push_CNT(type_class_super);
    push_CNT(push_env_class);
    push_CNT(ast_self_eval);
    push_EXP(args);
    // evaluate the arguments
    int i;
    for (i = 0; i < super->arguments->size; i++) {
        push_CNT(store_argument);
        push_EXP(args);
        push_EXP(new_SmallInt(i));
        push_CNT(send_Eval);
        push_EXP(super->arguments->values[i]);
    }
}

void pre_initialize_Super()
{
    Super_Class = new_Named_Class((Object)Object_Class, L"Super");
}

void post_initialize_Super()
{
}

/* ========================================================================== */

AST_Constant *
new_Constant(Object constant)
{
    AST_Constant * result = NEW(AST_Constant);
    HEADER(result)        = (Object)Constant_Class;
    result->constant      = constant;
    return result;
}


void AST_Constant_eval(AST_Constant * self)
{
    poke_EXP(1, self->constant);
}

void pre_initialize_Constant()
{
    Constant_Class = new_Named_Class((Object)Object_Class, L"Constant");
}

void post_initialize_Constant(){}

/* ========================================================================== */

AST_Variable *
new_Variable(const wchar_t* name)
{
    AST_Variable * result = NEW(AST_Variable);
    HEADER(result)        = (Object)Variable_Class;
    /* TODO add name */
    return result;
}

void AST_Variable_eval(AST_Variable * self)
{
    Object env = current_env();

    if (HEADER(env) == (Object)Env_Class) {
        return Runtime_Env_lookup(
                (Runtime_Env *)env, self->index, self->key);
    } else {
        // TODO
        assert(NULL);
        // Object args[2] = { (Object)new_SmallInt(self->index), self->key };
        // return Send(env, Symbol_at_in_, 2, args);
    }
}

void AST_Variable_assign(AST_Variable * self, Object value)
{
    Object env = current_env();

    if (HEADER(env) == (Object)Env_Class) {
        return Runtime_Env_assign(
            (Runtime_Env *)env, self->index, self->key, value);
    }
    // TODO
    assert(NULL);
}

void pre_initialize_Variable()
{
    Variable_Class      = new_Named_Class((Object)Object_Class, L"Variable");
}

void post_initialize_Variable(){}

/* ========================================================================== */

AST_Assign *
new_Assign(Object variable, Object expression)
{
    AST_Assign * result = NEW(AST_Assign);
    HEADER(result)      = (Object)Assign_Class;
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

    if (HEADER(var) == (Object)Variable_Class) {
        return AST_Variable_assign((AST_Variable *)var, value);
    }
    
    // TODO send assign: to self->variable.
    assert(NULL);
}

void pre_initialize_Assign()
{
    Assign_Class        = new_Named_Class((Object)Object_Class, L"Assign");
}

void post_initialize_Assign()
{
}

/* ========================================================================== */

AST_Send *
new_Send(Object receiver, Object msg, Type_Array * arguments)
{
    AST_Send * result = NEW(AST_Send);
    HEADER(result)    = (Object)Send_Class;
    result->receiver  = receiver;
    result->message   = msg;
    result->arguments = arguments;
    return result;
}

void AST_Send_send()
{
    zap_CNT();
    Object receiver   = pop_EXP();
    Type_Array * args = (Type_Array *)pop_EXP();

    AST_Send * self   = (AST_Send *)peek_EXP(1);
    // insert the receiver at the old ast_send position
    poke_EXP(1, receiver);

    Class_dispatch(&self->cache, receiver, HEADER(receiver),
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

void pre_initialize_Send()
{
    Send_Class          = new_Named_Class((Object)Object_Class, L"Send");
}

void post_initialize_Send(){}

/* ========================================================================== */

AST_Method *
new_Method(unsigned int paramc, Type_Array * body)
{
    AST_Method * result = NEW(AST_Method);
    HEADER(result)      = (Object)Method_Class;
    result->paramc      = paramc;
    result->body        = body;
    return result;
}

void AST_Method_continue()
{
    Runtime_Env * env = (Runtime_Env *)current_env();
    poke_EXP(1, env->method->body->values[env->pc]);

    env->pc++;
    if (env->method->body->size <= env->pc) {
        zap_CNT();
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
    
    if (method->body->size == 0 ) { 
        push_EXP(self);
        return; 
    }
    
    if (1 < method->body->size) {
        push_CNT(AST_Method_continue);
    }
    
    push_EXP(method->body->values[0]);
    push_CNT(send_Eval);
}

void AST_Method_eval(Object self, Object class, Type_Array * args)
{
    AST_Method_invoke((AST_Method *) self, self, class, args);
}

void AST_Method_eval_(Object self, Object class, Type_Array * args)
{
    AST_Method_invoke((AST_Method *) self, self, class, args);
}

void Method_invoke(Object method, Object self,
                   Object class, Type_Array * args)
{
    Type_Class * type = (Type_Class *)HEADER(method);
    if (type == Method_Class) {
        return AST_Method_invoke((AST_Method *)method, self, class, args);
    }
    if (type == Native_Method_Class) {
        return AST_Native_Method_invoke((AST_Native_Method *)method, self,
                                        class, args);
    }
    // Only AST_Method supported for now
    if (!type) {
        printf("Expected Method NULL given");
    } else {
        printf("Expected Method got %ls\n", ((Type_Class *)type)->name->value);
    }
    assert(NULL);
}


void pre_initialize_Method()
{
    Method_Class        = new_Named_Class((Object)Object_Class, L"Method");
}

void post_initialize_Method()
{
    store_native_method((Type_Class *)Method_Class, Symbol_eval, AST_Method_eval);
    // TODO for now accecpt any number of arguments
    store_native_method((Type_Class *)Method_Class, Symbol_eval_, AST_Method_eval_);
}

/* ========================================================================== */

AST_Native_Method *
new_Native_Method(native code)
{
    AST_Native_Method * result = NEW(AST_Native_Method);
    HEADER(result)             = (Object)Native_Method_Class;
    result->code               = code;
    return result;
}

void AST_Native_Method_invoke(AST_Native_Method * method, Object self,
                              Object class, Type_Array * args)
{
    method->code(self, class, args);
}

void AST_Native_Method_eval(Object self, Object class, Type_Array * args)
{
   AST_Native_Method_invoke((AST_Native_Method *)self, self, class, args);
}

void AST_Native_Method_eval_(Object self, Object class, Type_Array * args)
{
    // TODO for now accecpt any number of arguments
    AST_Native_Method_invoke((AST_Native_Method *)self, self, class, args);
}


void pre_initialize_Native_Method()
{
    Native_Method_Class = new_Named_Class((Object)Object_Class, L"NativeMethod");
}

void post_initialize_Native_Method()
{
    store_native_method((Type_Class *)Native_Method_Class, Symbol_eval, AST_Native_Method_eval);
    // TODO for now accecpt any number of arguments
    store_native_method((Type_Class *)Native_Method_Class, Symbol_eval_, AST_Native_Method_eval_);
};

/* ========================================================================== */

Runtime_Env *
new_Env(Object parent, Object key, Type_Array * values)
{
    Runtime_Env * result    = NEW(Runtime_Env);
    HEADER(result)          = (Object)Env_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = values;
    return result;
}

Runtime_Env *
new_Env_Sized(Object parent, Object key, int size)
{
    Runtime_Env * result    = NEW(Runtime_Env);
    HEADER(result)          = (Object)Env_Class;
    result->parent          = parent;
    result->key             = key;
    result->values          = new_Array_With(size, Null);
    return result;
}

void Runtime_Env_lookup(Runtime_Env * self, unsigned int index, Object key)
{
    while (self->key != key || self->parent == Null) {
        if (HEADER(self->parent) == (Object)Env_Class) {
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
    if (index >= self->values->size) {
        printf("Lookup failed, index \"%i\" out of range [0:%i]", index, self->values->size);
        assert(index < self->values->size);
    }

    push_EXP(self->values->values[index]);
}

void Runtime_Env_assign(Runtime_Env * self, unsigned int index,
                        Object key, Object value)
{
    while (self->key != key || self->parent == Null) {
        if (HEADER(self->parent) == (Object)Env_Class) {
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
    if (index >= self->values->size) {
        printf("Lookup failed, index \"%i\" out of range [0:%i]", index, self->values->size);
        assert(index < self->values->size);
    }

    self->values->values[index] = value;
}

void push_restore_env()
{
    push_CNT(restore_env);
    poke_EXP(1, current_env());
}


void pre_initialize_Env()
{
    Env_Class = new_Named_Class((Object)Object_Class, L"Env");
}

void post_initialize_Env()
{
    Env = (Object)new_Env_Sized(Null, Null, 0);
}

/* ========================================================================== */

Type_Dictionary *
new_Dictionary()
{
    Type_Dictionary * result = NEW(Type_Dictionary);
    HEADER(result)           = (Object)Dictionary_Class;
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

void Type_Dictionary_grow(Type_Dictionary *self)
{
    Type_Array * old_layout = self->layout;
    self->layout = new_Array_With(old_layout->size*2, Null);
    int i;
    for(i=0; i<old_layout->size; i++) {
        self->layout->values[i] = old_layout->values[i];
    }
}

Object Type_Dictionary_store_(Type_Dictionary * self, Object key, Object value)
{
    /* just store at the first empty location */
    int i;
    for (i = 0; i < self->layout->size; i=i+2) {
        if (self->layout->values[i] == Null || self->layout->values[i] == key) {
            self->layout->values[i]   = key;
            self->layout->values[i+1] = value;
            return value;
        }
    }
    Type_Dictionary_grow(self);
    self->layout->values[i]   = key;
    self->layout->values[i+1] = value;

    return NULL;
}

void pre_initialize_Dictionary()
{
    Dictionary_Class    = new_Named_Class((Object)Object_Class, L"Dictionary");
}

void post_initialize_Dictionary(){}

/* ========================================================================== */
    
Type_Class* new_Class(Object superclass)
{
    Type_Class * result = NEW(Type_Class);
    result->methods     = new_Dictionary();
    HEADER(result)      = (Object) Class_Class;
    result->super       = superclass;
    return result;
}

Type_Class* new_Named_Class(Object superclass, const wchar_t* name)
{
    Type_Class * result = (Type_Class *) new_Class(superclass);
    result->name = new_String(name);
    return result;
}

void type_class_super()
{
    zap_CNT();
    Object class = peek_EXP(1);
    if (HEADER(class) == (Object)Class_Class) {
        poke_EXP(1, ((Type_Class *)class)->super);
        return;
    }
    
    // TODO queue "super" send.
    assert(NULL);
}

void store_method(Type_Class * class, Object symbol, Object method)
{
    Type_Dictionary * dict = class->methods;
    Type_Dictionary_store_(dict, symbol, method);
}

void store_native_method(Type_Class * class, Object symbol, native code)
{
    AST_Native_Method * native_method = new_Native_Method(code);
    store_method(class, symbol, (Object)native_method);
}

void Class_dispatch(InlineCache * cache, Object self, Object class,
                         Object msg, Type_Array * args)
{
    //printf("%ls>>%ls\n", ((Type_Class*)class)->name->value, ((Type_Symbol*)msg)->value);
    //printf("%i\n", ((Type_SmallInt*)self)->value);
    //printf("%i\n", ((Type_SmallInt*)peek_EXP(1))->value);
    
    /* Monomorphic inline cache */
    if (class == cache->type) {
        LOG("Cached dispatch \"%ls\" on \"%ls\"\n",  
            ((Type_Symbol*)msg)->value,
            ((Type_Class*)HEADER(self))->name->value);
        return Method_invoke(cache->method, self, class, args);
    }
    assert(HEADER(class) == (Object)Class_Class);
    LOG("Dispatching on \"%ls\"\n",  ((Type_Class*)class)->name->value);
    //LOG("Dispatching \"%ls\" on \"%ls\"\n",  
    //        ((Type_Symbol*)msg)->value,
    //        ((Type_Class*)HEADER(self))->name->value);
    
    Object method = NULL;    
    while (class != Null) {
        Type_Dictionary * mdict = ((Type_Class *) class)->methods;
        method = Type_Dictionary_lookup(mdict, msg);
        if (!method) {
            class = ((Type_Class *) class)->super;
        } else {
            cache->type   = class;
            cache->method = method;
            return Method_invoke(method, self, class, args);
        }
    }
    
    // TODO send DNU;
    printf("\"%ls\" does not understand \"%ls\"\n", 
            ((Type_Class*)HEADER(self))->name->value,
            ((Type_Symbol*)msg)->value);
    assert(NULL);
}

void Object_equals(Object self, Object class, Type_Array * args)
{
    push_EXP(get_bool_const(self == args->values[0]));
}

wchar_t * Object_classname(Object self) 
{
    return ((Type_String *)((Type_Class *)HEADER(self))->name)->value;
}

void pre_initialize_Object() 
{
    // explicitely use new_Class not new_Named_Class! to avoid early use
    // of symbols.
    Class_Class         = new_Class(Null);
    HEADER(Class_Class) = (Object)Class_Class;
    
    Object_Class        = new_Class(Null);
}

void post_initialize_Object()
{
    // put the names here, now after the Symbols_Class is initialized
    Class_Class->name  = new_String(L"Class");
    Object_Class->name = new_String(L"Object");
    store_native_method((Type_Class *)Object_Class, Symbol_equals_, Object_equals);
    assert(Type_Dictionary_lookup(Object_Class->methods, Symbol_equals_));
    assert(HEADER((AST_Native_Method*)Type_Dictionary_lookup(Object_Class->methods, Symbol_equals_)) == (Object)Native_Method_Class);
}

/* ========================================================================== */

AST_Continue * new_Continue(Object target)
{
    AST_Continue * result = NEW(AST_Continue);
    HEADER(result)        = (Object)Continue_Class;
    result->target        = target;
    return result;
}


void AST_Continue_eval(AST_Continue * self)
{
    // clear the stack

    // insert the continuation
}

void pre_initialize_Continue()
{
    Continue_Class = new_Named_Class((Object)Object_Class, L"Continue");}

void post_initialize_Continue()
{

}

/* ========================================================================== */

AST_Callec * new_Callec()
{
    AST_Callec * result = NEW(AST_Callec);
    HEADER(result)      = (Object)Callec_Class;
    result->cont        = new_Continue((Object)result);
    return result;
}

void AST_Callec_eval(AST_Callec * self)
{
    push_EXP(self->send);
    push_CNT(send_Eval);
}

void pre_initialize_Callec()
{
    Callec_Class = new_Named_Class((Object)Object_Class, L"Callec");
}

void post_initialize_Callec()
{
}

/* ========================================================================== */

void send_Eval()
{
    zap_CNT();
    Object exp = peek_EXP(1);

    Type_Class * class = (Type_Class *)HEADER(exp);
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
    if (class == Self_Class) {
        return AST_Self_eval();
    }
    if (class == Super_Class) {
        return AST_Super_eval((AST_Super *)exp);
    }
    if (class == Continue_Class) {
        return AST_Continue_eval((AST_Continue *)exp);
    }
    if (class == Callec_Class) {
        return AST_Callec_eval((AST_Callec *)exp);
    }
    
    printf("\"%ls\" has no native eval function. Maybe you wanted wrap it in a Constant?\n", 
           ((Type_Class*)class)->name->value);
    assert(NULL);
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

/* ========================================================================== */

void test_variable_lookup()
{
    // TODO complete test
    AST_Variable * var = new_Variable(L"test");
    var->index         = 0;
    var->key           = (Object)new_SmallInt(10);
    
    Env = (Object)new_Env_Sized(current_env(), var->key, 1);
    Env = (Object)new_Env_Sized(current_env(), Null, 0);
}

void test_boolean_equals()
{
    Object test     = (Object)new_Constant((Object)new_SmallInt(0));
    Object add      = (Object)new_Constant((Object)new_SmallInt(1));
    
    Object result = Eval((Object)new_Send(test,  Symbol_equals_, new_Array_With(1, add)));
    assert(!((Type_Boolean*)((AST_Constant*) result)->constant)->value);
    
    result = Eval((Object)new_Send(test,  Symbol_equals_, new_Array_With(1, test)));
    assert(((Type_Boolean*)((AST_Constant*) result)->constant)->value);
    
    result = Eval((Object)new_Send((Object)True_Const,  Symbol_equals_, new_Array_With(1, (Object)True_Const)));
    assert(((Type_Boolean*)((AST_Constant*) result)->constant)->value);
    
    result = Eval((Object)new_Send((Object)True_Const,  Symbol_equals_, new_Array_With(1, (Object)False_Const)));
    assert(!((Type_Boolean*)((AST_Constant*) result)->constant)->value);
    
    result = Eval((Object)new_Send((Object)False_Const, Symbol_equals_, new_Array_With(1, (Object)True_Const)));
    assert(!((Type_Boolean*)((AST_Constant*) result)->constant)->value);
    
    result = Eval((Object)new_Send((Object)False_Const, Symbol_equals_, new_Array_With(1, (Object)False_Const)));
    assert(((Type_Boolean*)((AST_Constant*) result)->constant)->value);
}

void test_method_evaluation()
{
    Type_Array * body       = new_Raw_Array(0);
    AST_Method * method     = new_Method(1, body);
    Object method_const     = (Object)new_Constant((Object)method);
    Type_SmallInt * integer = new_SmallInt(120);
    Object integer_const    = (Object)new_Constant((Object)integer);
    Type_SmallInt * integer7 = new_SmallInt(7);
    Object integer7_const    = (Object)new_Constant((Object)integer7);
    
    Object result = Eval((Object)new_Send(method_const, Symbol_eval, new_Raw_Array(0)));
    assert(result == (Object)method);

    // with one body element ---------------------------------------------------
    method->body = new_Array_With(1, integer_const);
    result       = Eval((Object)new_Send(method_const, Symbol_eval, new_Raw_Array(0)));
    //printf("%ls\n", Object_classname(result));
    assert(result == (Object)integer);
    
    // with one argument -------------------------------------------------------
    AST_Variable * var      = new_Variable(L"myVar");
    method->body            = new_Array_With(3, integer7_const);
    method->body->values[2] = (Object)var;
    
    var->key = (Object)method;
    var->index = 0;
    
    result       = Eval((Object)new_Send(method_const, Symbol_eval_, 
                                         new_Array_With(1, (Object)integer_const)));
    //printf("%ls\n", Object_classname(result));
    assert(result == (Object)integer);
}

int test_native_method_evaluation_testmethod_called = 0;
void test_native_method_evaluation_testmethod(Object self, Object class, Type_Array * args) {
    test_native_method_evaluation_testmethod_called++;
}

void test_native_method_evaluation()
{
    AST_Native_Method * method = new_Native_Method(test_native_method_evaluation_testmethod);
    Object method_const        = (Object)new_Constant((Object)method);
    
    Object result = Eval((Object)new_Send(method_const, Symbol_eval, new_Raw_Array(0)));
    printf("%ls\n", Object_classname(result));
    assert(result == (Object)method);
    assert(test_native_method_evaluation_testmethod_called == 1);
}

void test_method_invocation()
{
    Type_Array * body = new_Raw_Array(0);
    AST_Method * method = new_Method(0, body);
    Type_Symbol * test = new_Symbol(L"test");
    Type_SmallInt * integer = new_SmallInt(120);
    AST_Constant * integer_const = new_Constant((Object)integer);
    store_method(SmallInt_Class, (Object)test, (Object)method);
    Object result = Eval((Object)new_Send((Object)integer_const, (Object)test, new_Raw_Array(0)));
    assert(result == (Object)integer);
    
    // with 1 body element
    Type_SmallInt * integer5 = new_SmallInt(5);
    AST_Constant * integer5_const = new_Constant((Object)integer5);
    body = new_Array_With(1, (Object)integer5_const);
    method = new_Method(0, body);
    store_method(SmallInt_Class, (Object)test, (Object)method);
    result = Eval((Object)new_Send((Object)integer_const, (Object)test, new_Raw_Array(0)));
    assert(result == (Object)integer5);
    
    // with 2 body element
    Type_SmallInt * integer6 = new_SmallInt(6);
    AST_Constant * integer6_const = new_Constant((Object)integer6);
    body = new_Array_With(2, (Object)integer5_const);
    body->values[1] = (Object)integer6_const;
    method = new_Method(0, body);
    store_method(SmallInt_Class, (Object)test, (Object)method);
    result = Eval((Object)new_Send((Object)integer_const, (Object)test, new_Raw_Array(0)));
    assert(result == (Object)integer6);
    
    // with 3 body element
    Type_SmallInt * integer7 = new_SmallInt(7);
    AST_Constant * integer7_const = new_Constant((Object)integer7);
    body = new_Array_With(3, (Object)integer5_const);
    body->values[1] = (Object)integer6_const;
    body->values[2] = (Object)integer7_const;
    method = new_Method(0, body);
    store_method(SmallInt_Class, (Object)test, (Object)method);
    result = Eval((Object)new_Send((Object)integer_const, (Object)test, new_Raw_Array(0)));
    assert(result == (Object)integer7);
}

void test_method_invocation_with_arguments()
{
    AST_Variable * var  = new_Variable(L"myVar");
    Type_Array * body   = new_Array_With(1, (Object)var);
    AST_Method * method = new_Method(0, body);
    var->key = (Object)method;
    var->index = 0;
    
    Type_Symbol * test           = new_Symbol(L"test");
    Type_SmallInt * integer      = new_SmallInt(120);
    AST_Constant * integer_const = new_Constant((Object)integer);
    store_method(SmallInt_Class, (Object)test, (Object)method);
    Type_Array * args = new_Array_With(1, (Object)integer_const);
    Object result     = Eval((Object)new_Send((Object)integer_const, (Object)test, args));
    assert(result == (Object)integer);
    
}

void test_self()
{
    Type_SmallInt * integer       = new_SmallInt(70);
    Type_SmallInt * integer7      = new_SmallInt(7);
    AST_Constant * integer_const  = new_Constant((Object)integer);
    AST_Constant * integer7_const = new_Constant((Object)integer7);
    Type_Array * body   = new_Array_With(3, (Object)integer7_const);
    body->values[2]     = Self;
    AST_Method * method = new_Method(0, body);
    Type_Symbol * test  = new_Symbol(L"test");
    store_method(SmallInt_Class, (Object)test, (Object)method);
    Object result = Eval((Object)new_Send((Object)integer_const, (Object)test, new_Raw_Array(0)));
    assert(result == (Object)integer);
}

void test_super()
{
    Type_SmallInt * integer       = new_SmallInt(70);
    Type_SmallInt * integer7      = new_SmallInt(7);
    AST_Constant * integer_const  = new_Constant((Object)integer);
    AST_Constant * integer7_const = new_Constant((Object)integer7);
    
    Type_Symbol * test  = new_Symbol(L"test");
    Type_Array * body   = new_Array_With(3, (Object)integer7_const);
    body->values[2]     = (Object)new_Super((Object)test, new_Raw_Array(0));
    AST_Method * method = new_Method(0, body);
    store_method(True_Class, (Object)test, (Object)method);
    
    body             = new_Array_With(3, (Object)integer7_const);
    body->values[2]  = (Object)integer_const;
    method = new_Method(0, body);
    store_method(Boolean_Class, (Object)test, (Object)method);
    
    Object result = Eval((Object)new_Send((Object)True_Const, (Object)test, new_Raw_Array(0)));
    assert(result == (Object)integer);
}


void test_ast_continue()
{
    Type_SmallInt * integer1      = new_SmallInt(1);
    Type_SmallInt * integer7      = new_SmallInt(7);
    AST_Constant * integer1_const = new_Constant((Object)integer1);
    AST_Constant * integer7_const = new_Constant((Object)integer7);
    
    AST_Callec * callec = new_Callec();
    callec->send = (Object)integer7_const;
    Object result = Eval((Object)callec);
    //printf("%ls\n", Object_classname(result));
    assert(result == (Object)integer7);
    
    
    Type_Array * body   = new_Array_With(2, (Object)integer7_const);
    AST_Method * send   = new_Method(1, body);
    AST_Constant* send_const = new_Constant((Object)send);
    callec->send        = (Object)new_Send((Object)send_const, 
                                           (Object)Symbol_eval_, 
                                           new_Array_With(1, (Object)new_Constant((Object)callec->cont)));
    
    //(assert (= 1
    //     (callec (lambda (cont)
    //                 7
    //                 7))))
    //
    result = Eval((Object)callec);
    // XXX Fail
    //printf("%ls\n", Object_classname(result));
    assert(result == (Object)integer7);
    
    //(assert (= 1
    //     (callec (lambda (cont)
    //                 (cont 1)
    //                 7))))
    //
    body->values[2]    = (Object)new_Send((Object)callec->cont, Symbol_eval, 
                                          new_Array_With(1, (Object)integer1_const));

    result = Eval((Object)callec);
    printf("%ls\n", Object_classname(result));
    assert(result == (Object)integer1);
}

void test_thread_stress()
{
    Object test     = (Object)new_Constant((Object)new_SmallInt(0));
    Object add      = (Object)new_Constant((Object)new_SmallInt(1));
    
    // AST_Send * send = new_Send(test, Symbol_plus_, new_Raw_Array(0));
    AST_Send * send = new_Send(test, Symbol_plus_, new_Array_With(1, add));
    
    int idx;
    int count = 10000000;
    for (idx = 0; idx < count; idx++) {   
        //    Eval((Object)assign);
        Eval((Object)send);
    }
}

/* ========================================================================== */

int main()
{
    Null            = (Object) NEW(Type_Null);
    
    pre_initialize_Object();
    pre_initialize_Type_SmallInt();
    pre_initialize_Symbol();
    
    pre_initialize_Array();
    pre_initialize_Assign();
    pre_initialize_Callec();
    pre_initialize_Character();
    pre_initialize_Constant();
    pre_initialize_Continue();
    pre_initialize_Dictionary();
    pre_initialize_File();
    pre_initialize_Method();
    pre_initialize_Native_Method();
    pre_initialize_Self();
    pre_initialize_Send();
    pre_initialize_String();
    pre_initialize_Super();
    pre_initialize_Type_Boolean();
    pre_initialize_Variable();

    initialize_Symbol();
    initialize_Thread();
    
    post_initialize_Object();
    
    post_initialize_Array();
    post_initialize_Assign();
    post_initialize_Callec();
    post_initialize_Character();
    post_initialize_Constant();
    post_initialize_Continue();
    post_initialize_Dictionary();
    post_initialize_Env();
    post_initialize_File();
    post_initialize_Method();
    post_initialize_Native_Method();
    post_initialize_Self();
    post_initialize_Send();
    post_initialize_String();
    post_initialize_Super();
    post_initialize_Symbol();
    post_initialize_Type_Boolean();
    post_initialize_Type_SmallInt();
    post_initialize_Variable();
    
    

    test_variable_lookup();
    test_boolean_equals();
    
    test_method_evaluation();
    test_native_method_evaluation();
    
    test_method_invocation();
    test_method_invocation_with_arguments();
    
    test_self();
    test_super();
    
    test_ast_continue();
    
    //test_thread_stress();

    return EXIT_SUCCESS;
}
