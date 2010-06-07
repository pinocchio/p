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
extern Symbol new_Symbol_cached(const wchar_t* name);
extern Symbol new_Symbol(const wchar_t* name);
extern void init_SymbolTable();

/* ========================================================================= */

extern void initialize_Symbol();
extern SmallInt wchar_hash(const wchar_t * string, int size);
extern SmallInt Symbol_hash(Symbol symbol_string);

/* ========================================================================= */

#include <system/type/SymbolDefinition.hi>

/* ========================================================================= */

#endif // SYMBOL_H
