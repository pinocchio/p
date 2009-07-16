#include <system.h>
#include <thread.h>


// TODO cache the first 128 chars

void inline char_hash() {
    context_object context = get_context();
    chr_object self        = context->self.chr;
    // TODO switch to long
    return_from_context(context, (object) make_number((int)self->value));
}

define_bootstrapping_type(chr,
    // instance
    if_selector(EVAL,         identity);
    if_selector(HASH,         char_hash);,
    // class
    // XXX to avoid compiler warnings
    if (0) { printf("%p", selector.pointer); }
)

chr_object do_make_char(wchar_t value) {
    new_instance(chr);
    result->value = value;
    return result;
}

// Object creation
chr_object make_char(wchar_t value) {
    if (value < 256) {
        object result = object_at(woodstock->chartable.object, value);
        if (result.object == woodstock->nil) {
            result = (object)do_make_char(value);
            object_at_put(woodstock->chartable.object, value, result);
        }
       return result.chr;
    }
    return do_make_char(value);
}
