#ifndef SYSTEM_STRING_H
#define SYSTEM_STRING_H
#include <system/type/symbol.h>

#include <system/type/type.h>
export_type(string);

extern string_object make_string(const wchar_t* value);
extern string_object make_string_sized(int size);

extern int inline string_equals(string_object string1,
                                string_object string2);
#endif // SYSTEM_STRING_H
