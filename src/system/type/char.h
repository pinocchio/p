#ifndef SYSTEM_CHAR_H
#define SYSTEM_CHAR_H

extern void char_stub_dispatch();
extern void char_class_dispatch();
extern void char_class_stub_dispatch();

extern chr_object make_char(wchar_t value);
extern chr_object make_empty_char();

struct chr {
    wchar_t value;
};

#endif // SYSTEM_NUMBER_H
