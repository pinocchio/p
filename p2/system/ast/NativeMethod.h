#ifndef NATIVEMETHOD_H
#define NATIVEMETHOD_H

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct AST_Native_Method_t {
    AST_Info        info;
    native          code;
};

CREATE_INITIALIZERS(AST_Native_Method)

extern AST_Native_Method new_AST_Native_Method(native code);

/* ========================================================================= */

#define NATIVE(name)\
void NM_##name(Object self, Object class, uns_int argc) {
#define NATIVE0(name)  NATIVE(name) ASSERT_ARG_SIZE(0);
#define NATIVE1(name)  NATIVE(name) ASSERT_ARG_SIZE(1);
#define NATIVE2(name)  NATIVE(name) ASSERT_ARG_SIZE(2);
#define NATIVE3(name)  NATIVE(name) ASSERT_ARG_SIZE(3);

#define RETURN_FROM_NATIVE(exp)\
    poke_EXP(argc + 2, exp);\
    zapn_EXP(argc + 1);

#define NATIVE_ARG(idx) peek_EXP(argc - idx);

/* ========================================================================= */

extern void AST_Native_Method_invoke(AST_Native_Method method, Object self,
                                     Object class, uns_int argc);

extern void AST_Native_Method_eval(Object self, Object class, Type_Array args);

extern void AST_Native_Method_eval_(Object self, Object class, Type_Array args);

/* ========================================================================= */

#endif // NATIVEMETHOD_H
