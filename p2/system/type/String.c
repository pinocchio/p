
#include <wchar.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Symbol.h>
#include <system/type/String.h>

/* =========================================================================*/

Type_Class String_Class;

/* =========================================================================*/

Type_String new_String(const wchar_t * str)
{
    Type_String string = (Type_String) new_Symbol(str);
    HEADER(string)       = (Object)String_Class;
    return string;
}

void pre_initialize_String()
{
    // TODO fix inheritence bug here
    String_Class = new_Named_Class((Object)Object_Class, L"String");
}

/* =========================================================================*/


Type_String String_concat_(Type_String str1, Type_String str2)
{
    int len = str1->size->value + str2->size->value;
    wchar_t* concated = (wchar_t*)PALLOC(sizeof(wchar_t) * len);
    int i, j;
    for (i=0; i<str1->size->value; i++) {
        concated[i] = str1->value[i];
    }
    for (j=0; j<str2->size->value; j++) {
        concated[i+j] = str2->value[j];
    } 
    return new_String(concated);
}

void CNT_String_concat_()
{
    zap_CNT();
    Object string = pop_EXP();
    Object self = pop_EXP();
    push_EXP(String_concat_((Type_String)self, (Type_String)string));
}

NATIVE1(NM_String_concat_)
    push_CNT(CNT_String_concat_);
    push_CNT(CNT_send_Eval);
    // TODO create a expanded send  
    push_EXP(new_Send((Object)new_Constant(args->values[0]), SMB_asString, Empty_Array));
}

NATIVE0(NM_String_asString)
    push_EXP(self);
}

NATIVE0(NM_String_asSymbol)
    push_EXP(new_Symbol(((Type_String)self)->value));
}

/* =========================================================================*/

void post_initialize_String()
{
    install_symbol_methods(String_Class);
    store_native_method(String_Class, SMB_concat_, NM_String_concat_);
    store_native_method(String_Class, SMB_asString, NM_String_asString);
    store_native_method(String_Class, SMB_asSymbol, NM_String_asSymbol);
}

