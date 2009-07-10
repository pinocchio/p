#ifndef SYSTEM_STRING_H
#define SYSTEM_STRING_H

#include <system/type/symbol.h>

extern void istring_stub_dispatch();
extern void istring_class_dispatch();
extern void istring_class_stub_dispatch();

extern string_object make_string(const wchar_t* value);
extern string_object make_string_sized(int size);

#endif // SYSTEM_STRING_H
