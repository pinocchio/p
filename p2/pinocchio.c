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

void Symbol_size()
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
/* ========================================================================== */

#include <system/type/SmallInt.c>
#include <system/type/Character.c>
#include <system/type/Boolean.c>
#include <system/type/String.c>
#include <system/type/Array.c>
#include <system/type/Dictionary.c>
#include <system/type/Object.c>
#include <system/type/Class.c>

#include <system/io/File.c>

#include <system/ast/Self.c>
#include <system/ast/Super.c>
#include <system/ast/Constant.c>
#include <system/ast/Variable.c>
#include <system/ast/Assign.c>
#include <system/ast/Send.c>
#include <system/ast/Method.c>
#include <system/ast/NativeMethod.c>
#include <system/ast/Continue.c>
#include <system/ast/Callec.c>

#include <system/runtime/Env.c>


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
