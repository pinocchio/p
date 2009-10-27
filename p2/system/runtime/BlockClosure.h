#ifndef RUNTIME_CLOSURE_H
#define RUNTIME_CLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_BlockClosure_t {
    AST_Block            code;
    Runtime_BlockContext context;
    AST_Info             info;
};

CREATE_INITIALIZERS(Runtime_BlockClosure)
extern Runtime_BlockClosure new_Runtime_BlockClosure(AST_Block code,
                                           Runtime_BlockContext context);

/* ========================================================================= */

extern void Runtime_BlockClosure_apply(Runtime_BlockClosure closure, uns_int argc);

/* ========================================================================= */

#define METHOD(fName, paramCount, localCount, numStatements)\
Runtime_MethodClosure fName() {\
    Type_Array statements     = new_Type_Array_With(numStatements, Nil);\
    AST_Method body           = new_AST_Method(paramCount, localCount, statements);\
    Runtime_MethodClosure method = new_Runtime_MethodClosure(body);\
    method->info             = new_raw_AST_Info();\
    method->info->sourceFile = new_Type_String_from_charp(__FILE__);\
    method->info->name       = new_Type_String_from_charp(__FUNCTION__);\
    method->info->line       = new_Type_SmallInt(__LINE__);\
    unsigned int _st_count   = 0;

#define ADD_STATEMENT(value)\
    statements->values[_st_count++] = (Object)(value);

/* ========================================================================= */

void start_eval(Type_Array body);
Type_Array activation_from_native(uns_int argc, Runtime_BlockClosure closure);

/* ========================================================================= */

#endif // RUNTIME_CLOSURE_H
