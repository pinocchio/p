
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <pinocchio.h>

/* ========================================================================= */

DECLARE_CLASS(Symbol);
Dictionary Symbol_Table;

/* ========================================================================= */

Symbol raw_Symbol(const wchar_t* input)
{
    uns_int size   = wcslen(input);
    Symbol result  = NEW_ARRAYED(struct Symbol_t, wchar_t[size + 1]);
    HEADER(result) = Symbol_Class;
    wcsncpy(result->value, input, size + 1);
    result->hash   = wchar_hash(input, size);
    result->size   = size;
    return result;
}

Symbol new_Symbol(const wchar_t* input)
{
    Symbol result = raw_Symbol(input);
    Optr cachedSymbol = Dictionary_quick_lookup(Symbol_Table, (Optr)result);
    if (cachedSymbol != NULL) {
        return (Symbol)cachedSymbol;
    }
    Dictionary_quick_store(Symbol_Table, (Optr)result, (Optr)result);
    return result;
}

/* ========================================================================= */

SmallInt Symbol_hash(Symbol symbol)
{
    return symbol->hash;
}

NATIVE1(Symbol_at_)
    Optr w_arg0 = NATIVE_ARG(0);
    ASSERT_INSTANCE_OF(w_arg0, SmallInt_Class);
    long index  = unwrap_int(w_arg0) - 1;
    assert(0 <= index, printf("Index below 0: %li", index));
    assert(index < ((String)self)->size,
        printf("%li is out of Bounds[%lu]\n", index, ((String)self)->size));
    // printf("at: %i '%lc'\n", index, ((Symbol)self)->value[index]);
    RETURN_FROM_NATIVE(new_Character(((Symbol) self)->value[index]));
}

NATIVE1(Symbol_basicAt_)
    Optr w_arg0 = NATIVE_ARG(0);
    ASSERT_INSTANCE_OF(w_arg0, SmallInt_Class);
    long index  = unwrap_int(w_arg0) - 1;
    assert(0 <= index, printf("Index below 0: %li", index));
    assert(index < ((String)self)->size,
        printf("%li is out of Bounds[%lu]\n", index, ((String)self)->size));
    // printf("at: %i '%lc'\n", index, ((Symbol)self)->value[index]);
    RETURN_FROM_NATIVE(wrap_int(((Symbol) self)->value[index]));
}

NATIVE0(Symbol_asString)
    RETURN_FROM_NATIVE(new_String(((Symbol)self)->value));
}

SmallInt wchar_hash(const wchar_t * string, long size)
{
    // http://www.cse.yorku.ca/~oz/hash.html
    uns_int hash = 5381;
    while (size--) {
        hash += (hash << 5) + *string++;
    }
    if ((long)hash < 0) {
        hash >>= 1;
    }
    return new_SmallInt(hash);
}

NATIVE1(Symbol__equal)
    Optr w_arg = NATIVE_ARG(0);
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
    RETURN_FROM_NATIVE((Optr)new_SmallInt(((Symbol)self)->size));
}

/* ========================================================================= */


void post_init_Symbol()
{
    PLUGIN natives = add_plugin(L"String.Symbol");
    store_native(natives, L"at:",       NM_Symbol_at_);
    store_native(natives, L"basicAt:",       NM_Symbol_basicAt_);
    store_native(natives, L"asString",  NM_Symbol_asString);
    store_native(natives, L"=",			NM_Symbol__equal);
    store_native(natives, L"size",      NM_Symbol_size);
    store_native(natives, L"hash",      NM_Symbol_hash);
}
