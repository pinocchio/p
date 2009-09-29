#ifndef STRING_H
#define STRING_H

#include <pinocchio.h>

/* ========================================================================== */

CREATE_INITIALIZERS(Type_String)

Type_String new_Type_String(const wchar_t * str);

/* ========================================================================== */

extern Type_String Type_String_concat_(Type_String str1, Type_String str2);

/* ========================================================================== */

#endif // STRING_H
