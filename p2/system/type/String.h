#ifndef STRING_H
#define STRING_H

#include <pinocchio.h>

/* ========================================================================= */

typedef Type_Symbol Type_String;

extern Type_String empty_Type_String;

CREATE_INITIALIZERS(Type_String)

Type_String new_Type_String(const wchar_t * str);
Type_String new_Type_String_sized(uns_int size);

/* ========================================================================= */

extern Type_String Type_String_concat_(Type_String str1, Type_String str2);
extern Type_String new_Type_String_from_charp(const char * input);

/* ========================================================================= */

#endif // STRING_H
