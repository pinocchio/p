#ifndef AST_METHOD_H
#define AST_METHOD_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Method_t {
    uns_int     size;
    AST_Info    info;
    Array  params;
    Array  locals;
    Object      package;
    Array  annotations;
    Object      unused;
    Object      body[];
};

extern AST_Method new_AST_Method(uns_int paramCount,
                                 uns_int localCount,
                                 uns_int statementCount);
extern AST_Method new_AST_Method_withAll(uns_int paramCount,
                                         uns_int localCount,
                                         uns_int statementCount, ...);
extern AST_Method new_AST_Method_with(Array params,
                                      Array locals,
                                      Array annotations,
                                      uns_int statementCount, ...);

/* ========================================================================= */

extern void AST_Method_invoke(Runtime_MethodClosure closure, AST_Method method,
                              Object self, uns_int argc);

/* ========================================================================= */

#endif // AST_METHOD_H
