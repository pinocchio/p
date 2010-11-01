#ifndef AST_METHOD_H
#define AST_METHOD_H

#include <pinocchio.h>

/* ========================================================================= */

struct Method_t {
    ARRAY_SIZE_TYPE;
    Array   params;
    Array   locals;
    Optr    package;
    Array   annotations;
    Info    info;
    Array   code;
    Optr    body[];
};

extern Method new_Method_with(Array params,
                              Array locals,
                              Array annotations,
							  Array threaded,
                              uns_int statementCount, ...);

/* ========================================================================= */

extern void Method_invoke(MethodClosure closure, Method method,
                          Optr self, uns_int argc);

/* ========================================================================= */

#endif // AST_METHOD_H
