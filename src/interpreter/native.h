#ifndef INTERPRETER_NATIVE_H
#define INTERPRETER_NATIVE_H

#include <pinocchio.h>

/* ======================================================================= */

struct NativeName {
	Header header;
	Symbol module;
	Symbol name;
};

typedef void (*native)(Thread thread);

/* ======================================================================= */

extern native lookup_native(NativeName name);

/* ======================================================================= */

#endif // INTERPRETER_NATIVE_H
