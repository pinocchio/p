#ifndef NATIVEMETHOD_H
#define NATIVEMETHOD_H

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct NativeMethod_t {
    uns_int size;
    Info    info;
	Array   params;
    Array   locals;
    Optr    package;
    Array   annotations;
    native  code;
    Optr    body[];
};

extern NativeMethod new_NativeMethod_with(Array params,
										  Array locals,
										  Array annotations,
									      Array threaded,
										  uns_int statementCount, ...);

/* ========================================================================= */

#define NATIVE(name)\
static void NM_##name(Optr self, Class class, uns_int argc) {
#define NATIVE0(name)  NATIVE(name) ASSERT_ARG_SIZE(0);
#define NATIVE1(name)  NATIVE(name) ASSERT_ARG_SIZE(1);
#define NATIVE2(name)  NATIVE(name) ASSERT_ARG_SIZE(2);
#define NATIVE3(name)  NATIVE(name) ASSERT_ARG_SIZE(3);
#define NATIVE4(name)  NATIVE(name) ASSERT_ARG_SIZE(4);

#define RETURN_FROM_NATIVE(exp)\
    zapn_EXP(argc + 1);\
    poke_EXP(0, exp);

#define NATIVE_ARG(idx) peek_EXP(argc - idx - 1)

#define SELF ((Object) self)
/* ========================================================================= */

extern void NativeMethod_invoke(Runtime_MethodClosure closure,
                                    NativeMethod method,
                                    Optr self, uns_int argc);
extern native lookup_native(Optr primitive_name, Optr module_name);

/* ========================================================================= */

#endif // NATIVEMETHOD_H
