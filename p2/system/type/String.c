
#include <wchar.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Symbol.h>
#include <system/type/String.h>

/* =========================================================================*/

Type_String new_String(const wchar_t * str)
{
    Type_String string = (Type_String) new_Symbol(str);
    HEADER(string)       = (Object)String_Class;
    return string;
}

extern void pre_initialize_String()
{
    String_Class = new_Named_Class((Object)Symbol_Class, L"String");
}

/* =========================================================================*/

void String_sub() 
{
    // TODO implement
}

void String_concat()
{
    // TODO implement
}

void String_toSymbol()
{
    // TODO implement
}

/* =========================================================================*/

extern void post_initialize_String()
{
    // TODO implement
}

