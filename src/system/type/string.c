#include <system.h>
#include <thread.h>
#include <wchar.h>
#include <string.h>

int inline string_equals(string_object string1, string_object string2) {
    return symbol_equals((symbol_object) string1, (symbol_object) string2);
}

with_pre_eval1(string_new, context, w_size,
    cast(size, w_size, number);
    return_from_context(context, (object)make_string_sized(size->value));
)

with_pre_eval2(string_at_put, context, w_idx, w_char,
    cast(idx, w_idx, number);
    string_object self = context->self.string;
    error_guard(idx->value < self->size->value, "Out of bounds.");
    error_guard(0 <= idx->value, "Out of bounds.");
    cast(chr, w_char, chr);
    self->value[idx->value] = chr->value;
    pop_context();
)

define_bootstrapping_type(string,
    // instance
    if_selector(EVAL,          identity);
    if_selector(PRE_EVAL_ENV,  identity);
    if_selector(OBJECT_AT,     symbol_at);
    if_selector(SIZE,          symbol_size);
    if_selector(OBJECT_AT_PUT, string_at_put);,
    // class
    if_selector(SIZED,         string_new);
)

// Object creation
string_object make_string(const wchar_t* value) {
    // string and symbol share the same struct
    string_object result = NEW(struct symbol);
    result->hash         = NULL;
    result->value        = wcsdup(value);
    result->size         = make_number(wcslen(value));
    header(result)       = (object)woodstock->string_class;
    return result;
}

string_object make_string_sized(int size) {
    // string and symbol share the same struct
    string_object result = NEW(struct symbol);
    result->hash         = NULL;
    result->value        = (wchar_t*)PALLOC(sizeof(wchar_t[size]));
    result->size         = make_number(size);
    header(result)       = (object)woodstock->string_class;
    return result;
}

