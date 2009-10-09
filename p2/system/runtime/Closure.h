#ifndef RUNTIME_CLOSURE_H
#define RUNTIME_CLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

struct Runtime_Closure_t {
    AST_Block code;
    Runtime_BlockContext context;
};

CREATE_INITIALIZERS(Runtime_Closure)
extern Runtime_Closure new_Runtime_Closure(AST_Block code,
                                           Runtime_BlockContext context);

/* ========================================================================= */

extern void Runtime_Closure_invoke(Runtime_Closure closure, Object self,
                                   Object class, Type_Array args);


/* ========================================================================= */

#define METHOD(name, paramCount, numStatements)\
Object name() {\
    Type_Array statements = new_Type_Array_With(numStatements, Nil);\
    AST_Block body = new_AST_Block(paramCount, statements);\
    Runtime_Closure method = new_Runtime_Closure(body,\
            (Runtime_BlockContext)Nil);\
    unsigned int _st_count = 0;

#define ADD_STATEMENT(value)\
    statements->values[_st_count++] = (Object)(value);
    

/* ========================================================================= */

#endif // RUNTIME_CLOSURE_H
