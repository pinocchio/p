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

// #define DEBUG
#ifndef DEBUG
#define NATIVE(module, name)\
    __attribute__((optimize("-fno-omit-frame-pointer"))) Object NM_##module##_##name( void ** pc, Object self ) {\

#else
#define NATIVE(module, name)\
    __attribute__((optimize("-fno-omit-frame-pointer"))) Object NM_##module##_##name( void ** pc, Object self ) {\
        printf("Calling "#module">>"#name"\n");
#endif

#define END_NATIVE\
    }

#define INSTALL_NATIVE(module, name)\
    install_native( new_NativeName( L""#module, L""#name ), NM_##module##_##name )

#define ARGUMENT(index) base_pointer[2 + index]
#define NATIVE_RETURN(result) return (Object)result

/* ======================================================================= */

extern NativeName new_NativeName(const wchar_t*, const wchar_t*);

extern native lookup_native(NativeName name);
extern void install_native(NativeName,native);

extern void init_natives();

/* ======================================================================= */

#endif // INTERPRETER_NATIVE_H
