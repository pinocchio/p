#ifndef REFLECTIONMETHOD_H
#define REFLECTIONMETHOD_H

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct ReflectionMethod_t {
    uns_int          size;
    AST_Info         info;
    Array params;
    Array locals;
    Object           package;
    Array annotations;
    native           cache;
    Object           body[];
};

extern ReflectionMethod new_ReflectionMethod_with(Array params,
                                      Array locals,
                                      Array annotations,
                                      uns_int statementCount, ...);

/* ========================================================================= */

extern void ReflectionMethod_invoke(Runtime_MethodClosure closure,
                                        ReflectionMethod method, Object self,
                                        uns_int argc);

/* ========================================================================= */

#endif // REFLECTIONMETHOD_H
