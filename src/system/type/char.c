#include <system.h>
#include <thread.h>

define_bootstrapping_type(char,
    // instance
    if_selector(EVAL,         identity);,
    // class
    // XXX to avoid compiler warnings
    if (0) { printf("%p", selector.pointer); }
)

// Object creation
chr_object make_char(wchar_t value) {
    new_instance(chr);
    result->value           = value;
    return result;
}

chr_object make_empty_char() {
    new_instance(chr);
    return result;
}
