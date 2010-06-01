#ifndef REFLECTIONMETHOD_H
#define REFLECTIONMETHOD_H

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct AST_ReflectionMethod_t {
    uns_int          size;
    AST_Info         info;
    Collection_Array params;
    Collection_Array locals;
    Object           package;
    Collection_Array annotations;
    native           cache;
    Object           body[];
};

extern AST_ReflectionMethod new_AST_ReflectionMethod_with(Collection_Array params,
                                      Collection_Array locals,
                                      Collection_Array annotations,
                                      uns_int statementCount, ...);

/* ========================================================================= */

extern void AST_ReflectionMethod_invoke(Runtime_MethodClosure closure,
                                        AST_ReflectionMethod method, Object self,
                                        uns_int argc);

/* ========================================================================= */

#endif // REFLECTIONMETHOD_H
