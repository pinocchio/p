
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


extern Type_Symbol new_Symbol(const wchar_t* name)
{
    Type_Symbol symbol  = NEW_t(Type_Symbol);
    HEADER(symbol)       = (Object)Symbol_Class;
    symbol->hash         = NULL;
    symbol->value        = wcsdup(name);
    symbol->size         = new_SmallInt(wcslen(name));
    return symbol;
}


extern void pre_initialize_Symbol()
{
    Symbol_Class = new_Named_Class((Object)Object_Class, L"Symbol");
}

extern void initialize_Symbol()
{
    // TODO put this method in a separate file
    SMB_apply_          = (Object)new_Symbol(L"apply:");
    SMB_asArray         = (Object)new_Symbol(L"asArray");
    SMB_asSmallInt      = (Object)new_Symbol(L"asSmallInt");
    SMB_asString        = (Object)new_Symbol(L"asString");
    SMB_asSymbol        = (Object)new_Symbol(L"asSymbol");
    SMB_at_in_          = (Object)new_Symbol(L"at:in:");
    SMB_equals_         = (Object)new_Symbol(L"equals:");
    SMB_eval            = (Object)new_Symbol(L"eval");
    SMB_eval_           = (Object)new_Symbol(L"eval:");
    SMB_lookup_         = (Object)new_Symbol(L"lookup:");
    SMB_minus_          = (Object)new_Symbol(L"minus:");
    SMB_objectAt_       = (Object)new_Symbol(L"objectAt:");
    SMB_objectAt_putIfAbsent_ = (Object)new_Symbol(L"objectAt:putIfAbsent:");
    SMB_objectAt_put_   = (Object)new_Symbol(L"objectAt:put:");
    SMB_plus_           = (Object)new_Symbol(L"plus:");
    SMB_size            = (Object)new_Symbol(L"size");
    SMB_divide_         = (Object)new_Symbol(L"divide:");
    SMB_shiftLeft_      = (Object)new_Symbol(L"shiftLeft:");
    SMB_shiftRight_     = (Object)new_Symbol(L"shiftRight:");
    SMB_times_          = (Object)new_Symbol(L"times:");
    SMB_ifFalse_        = (Object)new_Symbol(L"ifFalse:");
    SMB_ifTrue_         = (Object)new_Symbol(L"ifTrue:");
    SMB_not             = (Object)new_Symbol(L"not");
    
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


Type_Symbol Symbol_concat_(Type_Symbol symbol, Type_Symbol string)
{
    int len = symbol->size->value + string->size->value;
    wchar_t* concated = (wchar_t*)PALLOC(sizeof(wchar_t) * len);
    int i, j;
    for (i=0; i<symbol->size->value; i++) {
        concated[i] = symbol->value[i];
    }
    for (j=0; i<string->size->value; j++) {
        concated[i+j] = string->value[i];
    } 
    return new_Symbol(concated);
}

NATIVE1(NM_Symbol_concat_)
    // TODO ooptimization possible
    Type_String string = (Type_String)EvalSend0(args->values[0], SMB_asString);
    ASSERT_TYPE(string, String_Class);
    push_EXP(Symbol_concat_((Type_Symbol)self, (Type_Symbol)string));
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

extern void post_initialize_Symbol()
{
    initialize_Symbol_Table();
    store_native_method(Symbol_Class, SMB_objectAt_, NM_Symbol_objectAt_);
    store_native_method(Symbol_Class, SMB_asString,  NM_Symbol_asString);
    store_native_method(Symbol_Class, SMB_size,      NM_Symbol_size);
    store_native_method(Symbol_Class, SMB_asArray,   NM_Symbol_asArray);
}
