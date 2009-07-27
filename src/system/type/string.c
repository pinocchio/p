#include <system.h>
#include <thread.h>
#include <wchar.h>
#include <string.h>

int inline string_equals(string_object string1, string_object string2) {
    return symbol_equals((symbol_object) string1, (symbol_object) string2);
}

with_pre_eval1(string_new, context, w_size,
    cast(size, w_size, smallint);
    return_from_context(context, (object)make_string_sized(size->value));
)

with_pre_eval2(string_at_put, context, w_idx, w_char,
    cast(idx, w_idx, smallint);
    string_object self = context->self.string;
    error_guard(idx->value < self->size->value, "Out of bounds.");
    error_guard(0 <= idx->value, "Out of bounds.");
    cast(chr, w_char, chr);
    self->value[idx->value] = chr->value;
    pop_context();
)

with_pre_eval1(symbol_at, context, w_idx,
    cast(idx, w_idx, smallint);
    symbol_object self = context->self.symbol;

    error_guard(idx->value < self->size->value, "Out of bounds.");
    error_guard(0 <= idx->value, "Out of bounds.");
    return_from_context(context,
        (object)make_char(self->value[idx->value]));
)

void inline symbol_size() {
    context_object context = get_context();
    symbol_object self = context->self.symbol;
    return_from_context(context, (object)self->size);
}

define_bootstrapping_type(string,
    // instance
    if_selector(EVAL,          identity);
    if_selector(EVAL_,  identity);
    if_selector(OBJECT_AT_,     symbol_at);
    if_selector(SIZE,          symbol_size);
    if_selector(OBJECT_AT_PUT_, string_at_put);,
    // class
    if_selector(BASICNEW_,         string_new);
)

// Object creation
string_object make_string(const wchar_t* value) {
    // string and symbol share the same struct
    string_object result = NEW(struct symbol);
    result->hash         = NULL;
    result->value        = wcsdup(value);
    result->size         = make_smallint(wcslen(value));
    header(result)       = (object)woodstock->string_class;
    return result;
}

string_object make_string_sized(int size) {
    // string and symbol share the same struct
    string_object result = NEW(struct symbol);
    result->hash         = NULL;
    result->value        = (wchar_t*)PALLOC(sizeof(wchar_t[size]));
    result->size         = make_smallint(size);
    header(result)       = (object)woodstock->string_class;
    return result;
}

