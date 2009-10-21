#ifndef RUNTIME_CLOSURE_H
#define RUNTIME_CLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_Closure_t {
    AST_Block            code;
    Runtime_BlockContext context;
    AST_Info             info;
};

CREATE_INITIALIZERS(Runtime_Closure)
extern Runtime_Closure new_Runtime_Closure(AST_Block code,
                                           Runtime_BlockContext context);

/* ========================================================================= */

extern void Runtime_Closure_invoke(Runtime_Closure closure, Object self,
                                   Object class, uns_int argc);
extern void Runtime_Closure_apply(Runtime_Closure closure, uns_int argc);


/* ========================================================================= */

#define METHOD(fName, paramCount, localCount, numStatements)\
Runtime_Closure fName() {\
    Type_Array statements    = new_Type_Array_With(numStatements, Nil);\
    AST_Block body           = new_AST_Block(paramCount, localCount, statements);\
    Runtime_Closure method   = new_Runtime_Closure(body,\
                                                (Runtime_BlockContext)Nil);\
    method->info             = new_raw_AST_Info();\
    method->info->sourceFile = char2Type_String(__FILE__);\
    method->info->name       = char2Type_String(__FUNCTION__);\
    method->info->line       = new_Type_SmallInt(__LINE__);\
    unsigned int _st_count   = 0;

#define ADD_STATEMENT(value)\
    statements->values[_st_count++] = (Object)(value);
    

/* ========================================================================= */

#endif // RUNTIME_CLOSURE_H
