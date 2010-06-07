#ifndef AST_THREADED_METHOD
#define AST_THREADED_METHOD

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct AST_ThreadedMethod_t {
    uns_int          size;
    AST_Info         info;
    Array params;
    Array locals;
    Object           package;
    Array annotations;
    Array code;
    Object           body[];
};

extern AST_ThreadedMethod new_AST_ThreadedMethod_with(Array params,
                                      Array locals,
                                      Array annotations,
                                      uns_int statementCount, ...);

extern void AST_ThreadedMethod_invoke(Runtime_MethodClosure closure,
                                      AST_ThreadedMethod method,
                                      Object self, uns_int argc);

/* ========================================================================= */

extern void CNT_eval_threaded();

typedef void(*threaded)(int pc);

extern void test_threaded();

/* ========================================================================= */

#endif // AST_THREADED_METHOD
