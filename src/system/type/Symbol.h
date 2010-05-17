#ifndef SYMBOL_H
#define SYMBOL_H

#include <pinocchio.h>

/* ========================================================================= */

extern Collection_Dictionary Symbol_Table;

struct Type_Symbol_t { 
    Number_SmallInt hash;
    uns_int       size;
    wchar_t       value[];
};

CREATE_INITIALIZERS(Type_Symbol)
extern Type_Symbol new_Type_Symbol_cached(const wchar_t* name);
extern Type_Symbol new_Type_Symbol(const wchar_t* name);
extern void install_symbol_methods(Type_Class class);

/* ========================================================================= */

extern void initialize_Symbol();
extern Number_SmallInt wchar_hash(const wchar_t * string, int size);
extern Number_SmallInt Type_Symbol_hash(Type_Symbol symbol_string);

/* ========================================================================= */

#include <system/type/SymbolDefinition.hi>

/* ========================================================================= */

#endif // SYMBOL_H
