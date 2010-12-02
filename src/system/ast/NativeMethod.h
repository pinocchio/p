#ifndef NATIVEMETHOD_H
#define NATIVEMETHOD_H

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct NativeMethod_t {
    uns_int size;
	Array   params;
    Array   locals;
    Optr    package;
    Array   annotations;
    Info    info;
    Array   code;
	native  native;
    Optr    body[];
};

extern NativeMethod new_NativeMethod_with(Array params,
										  Array locals,
										  Array annotations,
									      Array threaded,
										  uns_int statementCount, ...);

/* ========================================================================= */

#define NATIVE(name)\
static void NM_##name(Class class) {\
    Optr self = ((MethodContext)current_env())->self;

#define NATIVE0(name)  NATIVE(name) ASSERT_ARG_SIZE(0);
#define NATIVE1(name)  NATIVE(name) ASSERT_ARG_SIZE(1);
#define NATIVE2(name)  NATIVE(name) ASSERT_ARG_SIZE(2);
#define NATIVE3(name)  NATIVE(name) ASSERT_ARG_SIZE(3);
#define NATIVE4(name)  NATIVE(name) ASSERT_ARG_SIZE(4);

#define RETURN_FROM_NATIVE(exp)\
    set_return_value((Optr)(exp));\
    SET_CONTEXT(current_env()->return_context);

#define NATIVE_ARG(idx) current_env()->locals[idx]
#define ZAP_NATIVE_FRAME() SET_CONTEXT(current_env()->return_context)

#define SELF ((Object)((MethodContext)current_env())->self)
/* ========================================================================= */

extern void NativeMethod_invoke(MethodClosure closure, NativeMethod method);
extern native lookup_native(Optr primitive_name, Optr module_name);
extern void post_init_NativeMethod();
/* ========================================================================= */

#endif // NATIVEMETHOD_H
