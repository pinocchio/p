
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <system/type/Symbol.h>

/* ========================================================================= */

Type_Class Type_Symbol_Class;
Type_Dictionary Symbol_Table;

#include <system/type/SymbolDefinition.ci>

/* ========================================================================= */

Type_Symbol new_Type_Symbol_cached(const wchar_t* input)
{
    Type_Symbol result  = new_Type_Symbol(input);
    Object cachedSymbol = Type_Dictionary_lookup(Symbol_Table, (Object)result);
    if (cachedSymbol != NULL) {
        return (Type_Symbol)cachedSymbol;
    }
    Type_Dictionary_store_(Symbol_Table, (Object)result, (Object)result);
    return result;
}

Type_Symbol new_Type_Symbol(const wchar_t* input)
{
    uns_int size        = wcslen(input) + 1;
    Type_SmallInt hash  = wchar_hash(input, size);
    Type_Symbol result  = NEW_ARRAYED(struct Type_Symbol_t, wchar_t[size]);
    HEADER(result)      = (Object)Type_Symbol_Class;
    result->hash        = hash;
    wcsncpy(result->value, input, size);
    result->size        = size - 1;
    return result;
}

void pre_init_Type_Symbol()
{
    Type_Symbol_Class = new_Class_named((Object)Type_Object_Class,
                                        L"Symbol",
                                        create_type(0, WORDS));
}
/*
 * Initialize Symbols before installing methods.
 */
void initialize_Symbol()
{
    Symbol_Table = new_Type_Dictionary();
    #include <system/type/SymbolInitialization.ci> 
}

/* ========================================================================= */

NATIVE1(Type_Symbol_at_)
    Object w_arg0 = NATIVE_ARG(0);
    ASSERT_INSTANCE_OF(w_arg0, Type_SmallInt_Class);
    Type_SmallInt index = (Type_SmallInt)w_arg0;
    LOG("%s %i\n", __FUNCTION__, index->value);
    RETURN_FROM_NATIVE(new_Type_Character(((Type_Symbol) self)->value[index->value]));
}

NATIVE0(Type_Symbol_asString)
    RETURN_FROM_NATIVE(new_Type_String(((Type_Symbol)self)->value));
}

NATIVE0(Type_Symbol_asSymbol)
    RETURN_FROM_NATIVE(self);
}

Type_Array Type_Symbol_asArray(Type_Symbol symbol)
{
    Type_Symbol self_symbol = (Type_Symbol)symbol;
    Type_Array array        = new_Type_Array_raw(self_symbol->size);
    LOG("%ls\n", symbol->value); 
    int i;
    for (i=0; i<self_symbol->size; i++) {
        array->values[i] = (Object)new_Type_Character(self_symbol->value[i]);
    }
    return array;
}

NATIVE0(Type_Symbol_asArray)
    RETURN_FROM_NATIVE(Type_Symbol_asArray((Type_Symbol)self));
}

Type_SmallInt wchar_hash(const wchar_t * string, int size)
{
    // http://www.cse.yorku.ca/~oz/hash.html
    int hash = 5381;
    while (size--) {
        hash += (hash << 5) + *string++;
    }
    return new_Type_SmallInt(hash);
}

Type_SmallInt Type_Symbol_hash(Type_Symbol symbol)
{
    return wchar_hash(symbol->value, symbol->size);
}

NATIVE0(Type_Symbol_hash)
    RETURN_FROM_NATIVE(Type_Symbol_hash((Type_Symbol)self));
}


NATIVE0(Type_Symbol_size)
    RETURN_FROM_NATIVE((Object)new_Type_SmallInt(((Type_Symbol)self)->size));
}

/* ========================================================================= */


void post_init_Type_Symbol()
{
    install_symbol_methods(Type_Symbol_Class);
}

void install_symbol_methods(Type_Class class)
{
    store_native_method(class, SMB_at_,       NM_Type_Symbol_at_);
    store_native_method(class, SMB_asString,  NM_Type_Symbol_asString);
    store_native_method(class, SMB_asSymbol,  NM_Type_Symbol_asSymbol);
    store_native_method(class, SMB_size,      NM_Type_Symbol_size);
    store_native_method(class, SMB_asArray,   NM_Type_Symbol_asArray);
}
