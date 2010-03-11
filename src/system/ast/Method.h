#ifndef AST_METHOD_H
#define AST_METHOD_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_METHOD_SIZE 6
#define AST_METHOD_VARS L"info", L"params", L"locals", L"package", L"annotations", L"unused"

/* ========================================================================= */

struct AST_Method_t {
    uns_int     size;
    AST_Info    info;
    Type_Array  params;
    Type_Array  locals;
    Object      package;
    Type_Array  annotations;
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
extern AST_Method new_AST_Method_with(Type_Array params,
                                      Type_Array locals,
                                      Type_Array annotations,
                                      uns_int statementCount, ...);

/* ========================================================================= */

/* ========================================================================= */

#endif // AST_METHOD_H
