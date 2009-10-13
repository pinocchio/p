
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <system/type/Symbol.h>

/* ========================================================================= */

Type_Class Type_Symbol_Class;
Type_Dictionary SMB_Table;

#include <system/type/SymbolDefinition.ci>

/* ========================================================================= */

Type_Symbol new_Type_Symbol(const wchar_t* input)
{
    int size = wcslen(input) + 1;
    Type_Symbol result = NEW_ARRAYED(struct Type_Symbol_t, wchar_t[size]);
    HEADER(result)      = (Object)Type_Symbol_Class;
    result->hash        = NULL;
    int i = 0;
    for (; i < size; i++) {
        result->value[i] = input[i];
    }
    result->size        = new_Type_SmallInt(size - 1);
    return result;
}


void pre_init_Type_Symbol()
{
    Type_Symbol_Class = new_Named_Class((Object)Type_Object_Class,
                                        L"Symbol",
                                        create_type(0, WORDS));
    initialize_Symbol();
}
/*
 * Initialize Symbols before installing methods.
 */
void initialize_Symbol()
{
#include <system/type/SymbolInitialization.ci> 
}

/* ========================================================================= */


NATIVE1(Type_Symbol_objectAt_)
    ASSERT_ARG_TYPE(0, Type_SmallInt_Class);
    Type_SmallInt index = (Type_SmallInt)args->values[0];
    poke_EXP(1, new_Type_Character(((Type_Symbol) self)->value[index->value]));
}

NATIVE0(Type_Symbol_asString)
    poke_EXP(1, new_Type_String(((Type_Symbol)self)->value));
}

Type_Array Type_Symbol_asArray(Type_Symbol symbol)
{
    Type_Symbol self_symbol = (Type_Symbol)symbol;
    Type_Array array = new_Raw_Type_Array(self_symbol->size->value);
    int i;
    for (i=0; i<self_symbol->size->value; i++) {
        array->values[i] = (Object)new_Type_Character(self_symbol->value[i]);
    }
    return array;
}

NATIVE0(Type_Symbol_asArray)
    poke_EXP(1, Type_Symbol_asArray((Type_Symbol)self));
}


int Type_Symbol_hash(const wchar_t* symbol_string)
{
    // http://www.cse.yorku.ca/~oz/hash.html
    unsigned int hash = 0;
    int c;
    while ((c = *symbol_string++)) {
        hash = c + (hash << 6) + (hash << 16) - hash;
    }
    return hash;
}

NATIVE0(Type_Symbol_hash)
    poke_EXP(1, new_Type_SmallInt(Type_Symbol_hash(((Type_Symbol)self)->value)));
}


NATIVE0(Type_Symbol_size)
    poke_EXP(1, ((Type_Symbol)self)->size);
}

NATIVE1(Type_Symbol_indexOf_)
    // TODO implement
}

NATIVE1(Type_Symbol_lastIndexOf_)
    // TODO implement
}

/* ========================================================================= */

void initialize_Type_Symbol_Table()
{
    SMB_Table = new_Type_Dictionary();
}


void post_init_Type_Symbol()
{
    initialize_Type_Symbol_Table();
    install_symbol_methods(Type_Symbol_Class);
}

void install_symbol_methods(Type_Class class)
{
    store_native_method(class, SMB_objectAt_, NM_Type_Symbol_objectAt_);
    store_native_method(class, SMB_asString,  NM_Type_Symbol_asString);
    store_native_method(class, SMB_size,      NM_Type_Symbol_size);
    store_native_method(class, SMB_asArray,   NM_Type_Symbol_asArray);
}
