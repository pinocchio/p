#ifndef AST_METHOD_H
#define AST_METHOD_H

#include <pinocchio.h>

/* ========================================================================= */

struct Method_t {
    uns_int size;
    Info    info;
    Array   params;
    Array   locals;
    Optr    package;
    Array   annotations;
    Array   code;
    Optr    body[];
};

extern Method new_Method(uns_int paramCount,
                                 uns_int localCount,
                                 uns_int statementCount);
extern Method new_Method_withAll(uns_int paramCount,
                                 uns_int localCount,
                                 uns_int statementCount, ...);
extern Method new_Method_with(Array params,
                              Array locals,
                              Array annotations,
							  Array threaded,
                              uns_int statementCount, ...);

/* ========================================================================= */

extern void Method_invoke(MethodClosure closure, Method method, Optr self, uns_int argc);
extern void StandardMethod_invoke(MethodClosure closure, Method method, Optr self, uns_int argc);

/* ========================================================================= */

#endif // AST_METHOD_H
