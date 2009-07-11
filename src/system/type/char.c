#include <system.h>
#include <thread.h>


// TODO cache the first 128 chars

// cache the empty char
chr_object empty_chr_object;

void inline char_hash() {
    context_object context = get_context();
    chr_object self        = context->self.chr;
    // TODO switch to long
    return_from_context(context, (object) make_number((int)self->value));
}

define_bootstrapping_type(char,
    // instance
    if_selector(EVAL,         identity);
    if_selector(HASH,         char_hash);,
    // class
    // XXX to avoid compiler warnings
    if (0) { printf("%p", selector.pointer); }
)

// Object creation
chr_object make_char(wchar_t value) {
    if (!value) { return empty_chr_object }
    new_instance(chr);
    result->value = value;
    return result;
}
