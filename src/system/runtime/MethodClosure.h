#ifndef RUNTIME_METHODCLOSURE_H
#define RUNTIME_METHODCLOSURE_H

#include <pinocchio.h>

/* ========================================================================= */

#define RUNTIME_METHODCLOSURE_SIZE 4
#define RUNTIME_METHODCLOSURE_VARS L"code", L"class", L"info", L"selector"

/* ========================================================================= */

struct Runtime_MethodClosure_t {
    AST_Info            info;
    AST_Method          code;
    Type_Class          class;
    Object              selector;
};

CREATE_INITIALIZERS(Runtime_MethodClosure)
extern Runtime_MethodClosure new_Runtime_MethodClosure(AST_Method code);

/* ========================================================================= */

extern void Runtime_MethodClosure_invoke(Runtime_MethodClosure closure, Object self,
                                         Type_Class class, uns_int argc);

/* ========================================================================= */

#endif // RUNTIME_METHODCLOSURE_H
