#ifndef STRING_H
#define STRING_H

#include <pinocchio.h>

/* ========================================================================= */

struct String_t {
	SmallInt hash;
	uns_int size;
	wchar_t value[];
};


extern String empty_String;

CREATE_INITIALIZERS(String)

extern String new_String(const wchar_t * str);
extern String new_String_sized(uns_int size);

/* ========================================================================= */

extern String String_concat_(String str1, String str2);
extern String new_String_from_charp(const char * input);
extern long Words_compare(Symbol s1, Symbol s2);
extern char* unicode_to_ascii(const wchar_t* str);
extern wchar_t * ascii_to_unicode(const char* str);
extern SmallInt String_hash(String string);

/* ========================================================================= */

#endif // STRING_H
