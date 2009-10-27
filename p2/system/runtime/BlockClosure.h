#ifndef RUNTIME_CLOSURE_H
#define RUNTIME_CLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_Block_Closure_t {
    AST_Block            code;
    Runtime_BlockContext context;
    AST_Info             info;
};

CREATE_INITIALIZERS(Runtime_Block_Closure)
extern Runtime_Block_Closure new_Runtime_Block_Closure(AST_Block code,
                                           Runtime_BlockContext context);

/* ========================================================================= */

extern void Runtime_MethodClosure_invoke(Runtime_MethodClosure closure, Object self,
                                   Object class, uns_int argc);
extern void Runtime_Block_Closure_apply(Runtime_Block_Closure closure, uns_int argc);


/* ========================================================================= */

#define METHOD(fName, paramCount, localCount, numStatements)\
Runtime_Block_Closure fName() {\
    Type_Array statements    = new_Type_Array_With(numStatements, Nil);\
    AST_Block body           = new_AST_Block(paramCount, localCount, statements);\
    Runtime_Block_Closure method   = new_Runtime_Block_Closure(body,\
                                                (Runtime_BlockContext)Nil);\
    method->info             = new_raw_AST_Info();\
    method->info->sourceFile = new_Type_String_from_charp(__FILE__);\
    method->info->name       = new_Type_String_from_charp(__FUNCTION__);\
    method->info->line       = new_Type_SmallInt(__LINE__);\
    unsigned int _st_count   = 0;

#define ADD_STATEMENT(value)\
    statements->values[_st_count++] = (Object)(value);
    

/* ========================================================================= */

#endif // RUNTIME_CLOSURE_H
