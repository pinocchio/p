
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <system/type/Symbol.h>

/* ========================================================================= */

DECLARE_CLASS(Symbol);
Dictionary Symbol_Table;

#include <system/type/SymbolDefinition.ci>

/* ========================================================================= */

Symbol new_Symbol(const wchar_t* input)
{
    uns_int size        = wcslen(input) + 1;
    Symbol result  = NEW_ARRAYED(struct Symbol_t, wchar_t[size]);
    HEADER(result)      = Symbol_Class;
    result->hash        = wchar_hash(input, size);
    wcsncpy(result->value, input, size);
    result->size        = size - 1;
    return result;
}

Symbol new_Symbol_cached(const wchar_t* input)
{
    Symbol result  = new_Symbol(input);
    Object cachedSymbol = Dictionary_quick_lookup(Symbol_Table, (Object)result);
    if (cachedSymbol != NULL) {
        return (Symbol)cachedSymbol;
    }
    HEADER(result) = Symbol_Class;
    Dictionary_quick_store(Symbol_Table, (Object)result, (Object)result);
    return result;
}

/*
 * Initialize Symbols before installing methods.
 */
void init_SymbolTable()
{
}

void pre_init_Symbol()
{
}
/* ========================================================================= */

NATIVE1(Symbol_at_)
    Object w_arg0 = NATIVE_ARG(0);
    ASSERT_INSTANCE_OF(w_arg0, SmallInt_Class);
    int index     = unwrap_int(w_arg0) - 1;
    assert(0 <= index, printf("Index below 0: %i", index));
    assert(index < ((String)self)->size,
        printf("%i is out of Bounds[%"F_I"u]\n", index, ((String)self)->size));
    // printf("at: %i '%lc'\n", index, ((Symbol)self)->value[index]);
    RETURN_FROM_NATIVE(new_Character(((Symbol) self)->value[index]));
}

NATIVE0(Symbol_asString)
    RETURN_FROM_NATIVE(new_String(((Symbol)self)->value));
}

Array Symbol_asArray(Symbol symbol)
{
    Symbol self_symbol = (Symbol)symbol;
    Array array        = new_Array_raw(self_symbol->size);
    LOG("%ls\n", symbol->value); 
    int i;
    for (i=0; i<self_symbol->size; i++) {
        array->values[i] = (Object)new_Character(self_symbol->value[i]);
    }
    return array;
}

NATIVE0(Symbol_asArray)
    RETURN_FROM_NATIVE(Symbol_asArray((Symbol)self));
}

SmallInt wchar_hash(const wchar_t * string, int size)
{
    // http://www.cse.yorku.ca/~oz/hash.html
    unsigned int hash = 5381;
    while (size--) {
        hash += (hash << 5) + *string++;
    }
    if ((int)hash < 0) {
        hash >>= 1;
    }
    return new_SmallInt(hash);
}

SmallInt Symbol_hash(Symbol symbol)
{
    return symbol->hash;
}

NATIVE1(Symbol__equal)
    // TODO think about this! Are Symbols = Strings?
    Object w_arg = NATIVE_ARG(0);
    if (w_arg == self) {
        RETURN_FROM_NATIVE(true);
        return;
    }
    if (!OBJECT_OF_LAYOUT(w_arg, Words)) {
        RETURN_FROM_NATIVE(false);
        return;
    }
    RETURN_FROM_NATIVE(
        get_bool(
            Words_compare(
                (Symbol)self,
                (Symbol)w_arg)));
}

NATIVE0(Symbol_hash)
    RETURN_FROM_NATIVE(((Symbol)self)->hash);
}


NATIVE0(Symbol_size)
    RETURN_FROM_NATIVE((Object)new_SmallInt(((Symbol)self)->size));
}

/* ========================================================================= */


void post_init_Symbol()
{
    Dictionary natives = add_plugin(L"Type.Symbol");
    store_native(natives, SMB_at_,       NM_Symbol_at_);
    store_native(natives, SMB_asString,  NM_Symbol_asString);
    store_native(natives, SMB__equal,    NM_Symbol__equal);
    store_native(natives, SMB_size,      NM_Symbol_size);
    store_native(natives, SMB_asArray,   NM_Symbol_asArray);
    store_native(natives, SMB_hash,      NM_Symbol_hash);
}
