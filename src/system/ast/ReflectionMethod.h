#ifndef REFLECTIONMETHOD_H
#define REFLECTIONMETHOD_H

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

#define AST_REFLECTIONMETHOD_SIZE 6
#define AST_REFLECTIONMETHOD_VARS L"info", L"params", L"locals", L"package", L"annotations", L"cache"

struct AST_ReflectionMethod_t {
    uns_int         size;
    AST_Info        info;
    Collection_Array      params;
    Collection_Array      locals;
    Object          package;
    Collection_Array      annotations;
    Object          cache;
    Object          body[];
};

CREATE_INITIALIZERS(AST_ReflectionMethod)

extern AST_ReflectionMethod new_AST_ReflectionMethod_with(Collection_Array params,
                                      Collection_Array locals,
                                      Collection_Array annotations,
                                      uns_int statementCount, ...);

/* ========================================================================= */

extern void AST_ReflectionMethod_invoke(Runtime_MethodClosure closure, Object self,
                                        Type_Class class, uns_int argc);

/* ========================================================================= */

#endif // REFLECTIONMETHOD_H
