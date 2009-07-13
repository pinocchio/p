#ifndef SYSTEM_CHAR_H
#define SYSTEM_CHAR_H

#include <system/type/type.h>
export_type(chr);

extern chr_object make_char(wchar_t value);
extern chr_object make_empty_char();

struct chr {
    wchar_t value;
};

#endif // SYSTEM_NUMBER_H
