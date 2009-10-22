
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
    wchar_t str[size+1];
    return new_Type_String(&str[0]);
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
    wchar_t cp[size];
    cp[size - 1] = L'\0';
    wchar_t * copy = &cp[0];
    swprintf(copy, size, L"%s", input);
    return new_Type_String(copy);
}

Type_String Type_String_concat_(Type_String str1, Type_String str2)
{
    assert1(str1 && str1->value, "Invalid Argument for String concat:");
    assert1(str2 && str2->value, "Invalid Argument for String concat:");
    int len               = str1->size + str2->size + 1;
    wchar_t conc[len];
    conc[len - 1] = L'\0';
    wchar_t * concatenated = &conc[0];
    concatenated = wcsncpy(concatenated, str1->value, str1->size);
    assert0(concatenated!=NULL);
    wchar_t * rc = wcsncpy(concatenated + str1->size, str2->value, str2->size);
    assert0(rc!=NULL);
    return new_Type_String(concatenated);
}

CNT(Type_String_concat_)
    Object string = pop_EXP();
    Object self   = peek_EXP(0);
    poke_EXP(0, Type_String_concat_((Type_String)self, (Type_String)string));
}

NATIVE1(Type_String_concat_)
    Object w_arg = NATIVE_ARG(0);
    push_CNT(Type_String_concat_);
    push_CNT(send_Eval);
    RETURN_FROM_NATIVE(self); 
    push_EXP(new_AST_Send((Object)new_AST_Constant(w_arg),
                                                  (Object)SMB_asString, 
                                                  empty_Type_Array));
}

NATIVE0(Type_String_asString)
    RETURN_FROM_NATIVE(self);
}

NATIVE0(Type_String_asSymbol)
    RETURN_FROM_NATIVE(new_Type_Symbol(((Type_String)self)->value));
}

// TODO check types not classes!
NATIVE2(Type_String_at_put_)
    Object w_arg0 = NATIVE_ARG(0);
    Object w_arg1 = NATIVE_ARG(1);
    ASSERT_INSTANCE_OF(w_arg0, Type_SmallInt_Class);
    ASSERT_INSTANCE_OF(w_arg1, Type_Character_Class);
    Type_SmallInt pos = (Type_SmallInt)w_arg0;
    assert(pos->value <= ((Type_String)self)->size,
        printf("%i is out of Bounds[%i]", pos->value, ((Type_String)self)->size));
    ((Type_String)self)->value[pos->value] = ((Type_Character)w_arg1)->value;
    RETURN_FROM_NATIVE(self);
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

