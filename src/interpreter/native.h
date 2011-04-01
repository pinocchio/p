#ifndef INTERPRETER_NATIVE_H
#define INTERPRETER_NATIVE_H

#include <pinocchio.h>

/* ======================================================================= */

Class NativeName_class;

struct NativeName {
	Header header;
	Symbol module;
	Symbol name;
};

/* ======================================================================= */

#define NATIVE(module, name)\
    void NM_##module##_##name(Thread thread) {

#define END_NATIVE\
    }

#define INSTALL_NATIVE(module, name)\
    install_native( new_NativeName( L""#module, L""#name ), NM_##module##_##name )

#define ARGUMENT(index) thread->context->local[index]
#define NATIVE_RETURN(result) thread->context->local[1] = (Object)result

/* ======================================================================= */

extern NativeName new_NativeName(const wchar_t*, const wchar_t*);

extern native lookup_native(NativeName name);
extern void install_native(NativeName,native);

extern void init_natives();

/* ======================================================================= */

#endif // INTERPRETER_NATIVE_H
