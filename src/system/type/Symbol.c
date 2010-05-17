
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <system/type/Symbol.h>

/* ========================================================================= */

DECLARE_CLASS(Type_Symbol);
Collection_Dictionary Symbol_Table;

#include <system/type/SymbolDefinition.ci>

/* ========================================================================= */

Type_Symbol new_Type_Symbol_cached(const wchar_t* input)
{
    Type_Symbol result  = new_Type_String(input);
    Object cachedSymbol = Collection_Dictionary_quick_lookup(Symbol_Table, (Object)result);
    if (cachedSymbol != NULL) {
        return (Type_Symbol)cachedSymbol;
    }
    HEADER(result) = Type_Symbol_Class;
    Collection_Dictionary_quick_store(Symbol_Table, (Object)result, (Object)result);
    return result;
}

Type_Symbol new_Type_Symbol(const wchar_t* input)
{
    uns_int size        = wcslen(input) + 1;
    Type_Symbol result  = NEW_ARRAYED(struct Type_Symbol_t, wchar_t[size]);
    HEADER(result)      = Type_Symbol_Class;
    result->hash        = wchar_hash(input, size);
    wcsncpy(result->value, input, size);
    result->size        = size - 1;
    return result;
}

/*
 * Initialize Symbols before installing methods.
 */
void initialize_Symbol()
{
    Symbol_Table = new_Collection_Dictionary();
    #include <system/type/SymbolInitialization.ci> 
}

void pre_init_Type_Symbol()
{
    Type_Symbol_Class = new_Class(Type_Object_Class, create_layout(0, WORDS));
    initialize_Symbol();
}
/* ========================================================================= */

NATIVE1(Type_Symbol_at_)
    Object w_arg0 = NATIVE_ARG(0);
    ASSERT_INSTANCE_OF(w_arg0, Number_SmallInt_Class);
    int index     = unwrap_int(w_arg0) - 1;
    assert(0 <= index, printf("Index below 0: %i", index));
    assert(index < ((Type_String)self)->size,
        printf("%i is out of Bounds[%"F_I"u]\n", index, ((Type_String)self)->size));
    // printf("at: %i '%lc'\n", index, ((Type_Symbol)self)->value[index]);
    RETURN_FROM_NATIVE(new_Type_Character(((Type_Symbol) self)->value[index]));
}

NATIVE0(Type_Symbol_asString)
    RETURN_FROM_NATIVE(new_Type_String(((Type_Symbol)self)->value));
}

Collection_Array Type_Symbol_asArray(Type_Symbol symbol)
{
    Type_Symbol self_symbol = (Type_Symbol)symbol;
    Collection_Array array        = new_Collection_Array_raw(self_symbol->size);
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

Number_SmallInt wchar_hash(const wchar_t * string, int size)
{
    // http://www.cse.yorku.ca/~oz/hash.html
    int hash = 5381;
    while (size--) {
        hash += (hash << 5) + *string++;
    }
    return new_Number_SmallInt(hash);
}

Number_SmallInt Type_Symbol_hash(Type_Symbol symbol)
{
    return symbol->hash;
}

NATIVE1(Type_Symbol__equal)
    // TODO think about this! Are Symbols = Strings?
    Object w_arg = NATIVE_ARG(0);
    if (w_arg == self) {
        RETURN_FROM_NATIVE(True);
        return;
    }
    if (!OBJECT_OF_LAYOUT(w_arg, Words)) {
        RETURN_FROM_NATIVE(False);
        return;
    }
    RETURN_FROM_NATIVE(
        get_bool(
            Words_compare(
                (Type_Symbol)self,
                (Type_Symbol)w_arg)));
}

NATIVE0(Type_Symbol_hash)
    RETURN_FROM_NATIVE(((Type_Symbol)self)->hash);
}


NATIVE0(Type_Symbol_size)
    RETURN_FROM_NATIVE((Object)new_Number_SmallInt(((Type_Symbol)self)->size));
}

/* ========================================================================= */


void post_init_Type_Symbol()
{
    REFER_TO(Type_Symbol);
    install_symbol_methods(Type_Symbol_Class);
    Type_Symbol_Class->name = new_Type_Symbol_cached(L"Symbol");
}

void install_symbol_methods(Type_Class class)
{
    Collection_Dictionary natives = add_plugin(L"Type.Symbol");
    store_native(natives, SMB_at_,       NM_Type_Symbol_at_);
    store_native(natives, SMB_asString,  NM_Type_Symbol_asString);
    store_native(natives, SMB__equal,    NM_Type_Symbol__equal);
    store_native(natives, SMB_size,      NM_Type_Symbol_size);
    store_native(natives, SMB_asArray,   NM_Type_Symbol_asArray);
    store_native(natives, SMB_hash,      NM_Type_Symbol_hash);
}
