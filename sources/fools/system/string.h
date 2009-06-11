#ifndef SYSTEM_STRING_H
#define SYSTEM_STRING_H

extern void istring_stub_dispatch();
extern void istring_class_dispatch();
extern void istring_class_stub_dispatch();

extern string_object make_string_sized(int size);
extern string_object make_string(const wchar_t* value);
extern object make_symbol(const wchar_t* value);

extern int           inline string_equals(string_object string1,
                                          string_object string2);

struct string {
    number_object       size;
    wchar_t*            value;
};

#endif // SYSTEM_STRING_H
