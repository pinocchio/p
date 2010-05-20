#ifndef AST_METHOD_H
#define AST_METHOD_H

#include <pinocchio.h>

/* ========================================================================= */

struct AST_Method_t {
    uns_int     size;
    AST_Info    info;
    Collection_Array  params;
    Collection_Array  locals;
    Object      package;
    Collection_Array  annotations;
    Object      unused;
    Object      body[];
};

CREATE_INITIALIZERS(AST_Method)
extern AST_Method new_AST_Method(uns_int paramCount,
                                 uns_int localCount,
                                 uns_int statementCount);
extern AST_Method new_AST_Method_withAll(uns_int paramCount,
                                         uns_int localCount,
                                         uns_int statementCount, ...);
extern AST_Method new_AST_Method_with(Collection_Array params,
                                      Collection_Array locals,
                                      Collection_Array annotations,
                                      uns_int statementCount, ...);

/* ========================================================================= */

extern void AST_Method_invoke(Runtime_MethodClosure closure, AST_Method method,
                              Object self, uns_int argc);

/* ========================================================================= */

#endif // AST_METHOD_H
