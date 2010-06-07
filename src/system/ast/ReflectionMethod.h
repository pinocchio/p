#ifndef REFLECTIONMETHOD_H
#define REFLECTIONMETHOD_H

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct AST_ReflectionMethod_t {
    uns_int          size;
    AST_Info         info;
    Array params;
    Array locals;
    Object           package;
    Array annotations;
    native           cache;
    Object           body[];
};

extern AST_ReflectionMethod new_AST_ReflectionMethod_with(Array params,
                                      Array locals,
                                      Array annotations,
                                      uns_int statementCount, ...);

/* ========================================================================= */

extern void AST_ReflectionMethod_invoke(Runtime_MethodClosure closure,
                                        AST_ReflectionMethod method, Object self,
                                        uns_int argc);

/* ========================================================================= */

#endif // REFLECTIONMETHOD_H
