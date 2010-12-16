#include <pinocchio.h>

/* ======================================================================= */
static Dictionary Symboltable;
Class Symbol_class;
/* ======================================================================= */

static Symbol raw_Symbol(const wchar_t* input)
{
    uns_int size = wcslen(input);
    NEW_ARRAYED(Symbol, wchar_t[size + 1]);
    wcsncpy(result->character, input, size + 1);
    result->hash = wchar_hash(input, size);
    result->size = size;
    return result;
}

Symbol new_Symbol(const wchar_t* input)
{
    Symbol symbol = raw_Symbol(input);
    Symbol cached = (Symbol)Dictionary_quick_lookup(Symboltable, (Object)symbol);
    if (cached != NULL) {
        return cached;
    }
    Dictionary_quick_store(Symboltable, (Object)symbol, (Object)symbol);
    return symbol;
}
