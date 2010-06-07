#ifndef SYMBOL_H
#define SYMBOL_H

#include <pinocchio.h>

/* ========================================================================= */

extern Collection_Dictionary Symbol_Table;

struct Symbol_t { 
    Number_SmallInt hash;
    uns_int       size;
    wchar_t       value[];
};

CREATE_INITIALIZERS(Symbol)
extern Symbol new_Symbol_cached(const wchar_t* name);
extern Symbol new_Symbol(const wchar_t* name);
extern void init_SymbolTable();

/* ========================================================================= */

extern void initialize_Symbol();
extern Number_SmallInt wchar_hash(const wchar_t * string, int size);
extern Number_SmallInt Symbol_hash(Symbol symbol_string);

/* ========================================================================= */

#include <system/type/SymbolDefinition.hi>

/* ========================================================================= */

#endif // SYMBOL_H
