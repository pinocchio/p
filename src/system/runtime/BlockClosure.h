#ifndef RUNTIME_CLOSURE_H
#define RUNTIME_CLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

struct BlockClosure_t {
    Block            code;
    BlockContext context;
};

extern void post_init_BlockClosure();
extern BlockClosure new_BlockClosure(Block code,
                                           BlockContext context);

/* ========================================================================= */

extern threaded* BlockClosure_apply(BlockClosure closure, uns_int argc);
extern threaded* apply(Optr closure, uns_int argc);

/* ========================================================================= */

#define METHOD(fName, paramCount, localCount, numStatements)\
MethodClosure fName() {\
    Method body          = new_Method(paramCount, localCount, numStatements);\
    MethodClosure method = new_MethodClosure(body, (Class)nil);\
    method->info             = new_raw_Info();\
    method->info->sourceFile = new_String_from_charp(__FILE__);\
    method->info->name       = new_String_from_charp(__FUNCTION__);\
    method->info->line       = new_SmallInt(__LINE__);\
    uns_int _st_count   = 0;

#define ADD_STATEMENT(value)\
    body->body[_st_count++] = (Optr)(value);

/* ========================================================================= */

extern BlockClosure new_Closure_from_Block(Block block);
/* ========================================================================= */

#endif // RUNTIME_CLOSURE_H
