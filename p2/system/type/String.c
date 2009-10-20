
#include <wchar.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <system/type/Symbol.h>
#include <system/type/String.h>

/* ========================================================================= */

Type_Class Type_String_Class;
Type_String empty_Type_String;

/* ========================================================================= */

Type_String new_Type_String(const wchar_t * str)
{
    Type_String string = (Type_String) new_Type_Symbol(str);
    HEADER(string)     = (Object)Type_String_Class;
    return string;
}

Type_String new_Type_String_sized(unsigned int size)
{
    wchar_t * string = (wchar_t *)PALLOC(sizeof(wchar_t)*(size+1));
    return new_Type_String(string);
}

void pre_init_Type_String()
{
    Type_String_Class    = new_Named_Class((Object)Type_Object_Class,
                                           L"String",
                                           create_type(0, WORDS));
    empty_Type_String         = new_Type_String(L"");
}

/* ========================================================================= */

Type_String char2Type_String(const char * input)
{
    int size             = strlen(input)+1;
    wchar_t * wchar_copy = malloc(sizeof(wchar_t)*(size));
    swprintf(wchar_copy, size, L"%s", input);
    Type_String result   =  new_Type_String(wchar_copy);
    free(wchar_copy);
    return result;
}

Type_String Type_String_concat_(Type_String str1, Type_String str2)
{
    assert1(str1 && str1->value, "Invalid Argument for String concat:");
    assert1(str2 && str2->value, "Invalid Argument for String concat:");
    int len               = str1->size + str2->size;
    wchar_t* concatenated = (wchar_t*)PALLOC(sizeof(wchar_t) * len);
    concatenated          = wcsncpy(concatenated, str1->value, str1->size);
    assert0(concatenated!=NULL);
    concatenated          = wcsncat(concatenated, str2->value, str2->size);
    assert0(concatenated!=NULL);
    Type_String string    =  new_Type_String(concatenated);
    free(concatenated);
    return string;
}

CNT(Type_String_concat_)
    Object string = pop_EXP();
    Object self   = peek_EXP(1);
    poke_EXP(1, Type_String_concat_((Type_String)self, (Type_String)string));
}

NATIVE1(Type_String_concat_)
    push_CNT(Type_String_concat_);
    push_CNT(send_Eval);
    poke_EXP(1, self); 
    push_EXP(new_AST_Send((Object)new_AST_Constant(args->values[0]), 
                                                  (Object)SMB_asString, 
                                                  empty_Type_Array));
}

NATIVE0(Type_String_asString)
    poke_EXP(1, self);
}

NATIVE0(Type_String_asSymbol)
    poke_EXP(1, new_Type_Symbol(((Type_String)self)->value));
}


NATIVE2(Type_String_at_put_)
    ASSERT_ARG_TYPE(0, Type_SmallInt_Class);
    ASSERT_ARG_TYPE(1, Type_Character_Class);
    Type_SmallInt pos = (Type_SmallInt) args->values[0];
    assert(pos->value <= ((Type_String)self)->size,
        printf("%i is out of Bounds[%i]", pos->value, ((Type_String)self)->size));
    ((Type_String)self)->value[pos->value] = ((Type_Character) args->values[1])->value;
}

/* ========================================================================= */

void post_init_Type_String()
{
    install_symbol_methods(Type_String_Class);
    store_native_method(Type_String_Class, SMB_concat_,  NM_Type_String_concat_);
    store_native_method(Type_String_Class, SMB_asString, NM_Type_String_asString);
    store_native_method(Type_String_Class, SMB_asSymbol, NM_Type_String_asSymbol);
    store_native_method(Type_String_Class, SMB_at_put_,  NM_Type_String_at_put_);
}

