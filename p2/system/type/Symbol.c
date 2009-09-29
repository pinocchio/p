
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <system/type/Symbol.h>

/* ========================================================================== */

Type_Class Symbol_Class;
Type_Dictionary SMB_Table;

/* ========================================================================== */

wchar_t* wcsdup(const wchar_t* input)
{
    int len         = wcslen(input) + 1;
    wchar_t* output = (wchar_t*)PALLOC(sizeof(wchar_t) * len);
    int i           = 0;
    for (; i < len; i++) {
        output[i] = input[i];
    }
    return output;
}


Type_Symbol new_Symbol(const wchar_t* name)
{
    Type_Symbol symbol  = NEW_t(Type_Symbol);
    HEADER(symbol)      = (Object)Symbol_Class;
    symbol->hash        = NULL;
    symbol->value       = wcsdup(name);
    symbol->size        = new_SmallInt(wcslen(name));
    return symbol;
}


void pre_initialize_Symbol()
{
    Symbol_Class = new_Named_Class((Object)Object_Class, L"Symbol");
}

void initialize_Symbol()
{
#include <system/type/SymbolDefinition.ci> 
}

/* ========================================================================== */


NATIVE1(NM_Symbol_objectAt_)
    ASSERT_ARG_TYPE(0, SmallInt_Class);
    Type_SmallInt index = (Type_SmallInt)args->values[0];
    push_EXP(new_Character(((Type_Symbol) self)->value[index->value]));
}

NATIVE0(NM_Symbol_asString)
    push_EXP(new_String(((Type_Symbol)self)->value));
}

Type_Array Symbol_asArray(Type_Symbol symbol)
{
    Type_Symbol self_symbol = (Type_Symbol)symbol;
    Type_Array array = new_Raw_Array(self_symbol->size->value);
    int i;
    for (i=0; i<self_symbol->size->value; i++) {
        array->values[i] = (Object)new_Character(self_symbol->value[i]);
    }
    return array;
}

NATIVE0(NM_Symbol_asArray)
    push_EXP(Symbol_asArray((Type_Symbol)self));
}


int Symbol_hash(const wchar_t* symbol_string)
{
    // http://www.cse.yorku.ca/~oz/hash.html
    unsigned int hash = 0;
    int c;
    while ((c = *symbol_string++)) {
        hash = c + (hash << 6) + (hash << 16) - hash;
    }
    return hash;
}

NATIVE0(NM_Symbol_hash)
    push_EXP(new_SmallInt(Symbol_hash(((Type_Symbol)self)->value)));
}


NATIVE0(NM_Symbol_size)
    push_EXP(((Type_Symbol)self)->size);
}

NATIVE1(NM_Symbol_indexOf_)
    // TODO implement
}

NATIVE1(NM_Symbol_lastIndexOf_)
    // TODO implement
}

/* ========================================================================== */

void initialize_Symbol_Table()
{
    SMB_Table = new_Dictionary();
}

void post_initialize_Symbol()
{
    initialize_Symbol_Table();
    install_symbol_methods(Symbol_Class);
#include <system/type/SymbolDefinition.ci>
}

void install_symbol_methods(Type_Class class)
{
    store_native_method(class, SMB_objectAt_, NM_Symbol_objectAt_);
    store_native_method(class, SMB_asString,  NM_Symbol_asString);
    store_native_method(class, SMB_size,      NM_Symbol_size);
    store_native_method(class, SMB_asArray,   NM_Symbol_asArray);
}
