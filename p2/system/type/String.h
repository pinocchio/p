#ifndef STRING_H
#define STRING_H

#include <pinocchio.h>

/* ========================================================================== */

CREATE_INITIALIZERS(String)

Type_String new_String(const wchar_t * str);

/* ========================================================================== */

extern Type_String String_concat_(Type_String str1, Type_String str2);

/* ========================================================================== */

#endif // STRING_H
