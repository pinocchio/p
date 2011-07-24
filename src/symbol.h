#ifndef SYMBOL_H
#define SYMBOL_H

#include <pinocchio.h>

/* ======================================================================= */


extern struct Class Symbol;
extern struct Class SymbolTable;
extern struct Dictionary symboltable;

/* ======================================================================= */

extern tSymbol new_Symbol(const char* input);

/* ======================================================================= */

#endif // SYMBOL_H
