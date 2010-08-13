#ifndef SYMBOL_H
#define SYMBOL_H

#include <pinocchio.h>

/* ========================================================================= */

extern Dictionary Symbol_Table;

struct Symbol_t {
	SmallInt hash;
	uns_int size;
	wchar_t value[];
};

CREATE_INITIALIZERS(Symbol)
extern Symbol new_Symbol(const wchar_t* name);
extern Symbol raw_Symbol(const wchar_t* name);

/* ========================================================================= */

extern SmallInt wchar_hash(const wchar_t * string, long size);
extern SmallInt Symbol_hash(Symbol symbol_string);

/* ========================================================================= */

#endif // SYMBOL_H
