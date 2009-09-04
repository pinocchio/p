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
Object Symbol_objectAt_;
Object Symbol_objectAt_put_;
Object Symbol_objectAt_putIfAbsent_;
Object Symbol_size;

Object Nil;

/* ======================================================================== */

Type_Class * MetaClass_Class;
Type_Class * Class_Class;
Type_Class * Object_Class;

Type_Class * Array_Class;
Type_Class * Assign_Class;
Type_Class * Boolean_Class;
Type_Class * Character_Class;
Type_Class * Constant_Class;
Type_Class * Dictionary_Class;
Type_Class * Env_Class;
Type_Class * False_Class;
Type_Class * File_Class;
Type_Class * Method_Class;
Type_Class * Native_Method_Class;
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
Object * _EXP_;
cont   * _CNT_;

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

/*void Symbol_size()
{
    // TODO implement
}*/

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
    Symbol_objectAt_ = (Object)new_Symbol(L"objectAt:");
    Symbol_objectAt_put_ = (Object)new_Symbol(L"objectAt:put:");
    Symbol_objectAt_putIfAbsent_ = (Object)new_Symbol(L"objectAt:putIfAbsent:");
    Symbol_size     = (Object)new_Symbol(L"size");
}

void post_initialize_Symbol()
{
   // TODO install methods 
}

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

#include <pinocchio_helper.c>

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
    /*if (class == Continue_Class) {
        //return AST_Continue_eval((AST_Continue *)exp);
    }*/
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

Object EvalSendConst(Object self, Object symbol, Type_Array * args) 
{
    return Eval((Object)new_Send((Object)self, symbol, args));
}


Object EvalSend(Object self, Object symbol, Type_Array * args) 
{
    AST_Constant * self_const = new_Constant(self);
    int i;
    for (i=0; i<args->size; i++) {
        args->values[i] = (Object)new_Constant(args->values[i]);
    }
    return EvalSendConst((Object)self_const, symbol, args);
}

/* ========================================================================== */

#include <pinocchioTest.c>

/* ========================================================================== */

int main()
{
    Nil            = (Object) NEW(Type_Nil);
    
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
    
    run_tests();

    return EXIT_SUCCESS;
}
