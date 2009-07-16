#include <system.h>
#include <thread.h>
#include <wchar.h>
#include <string.h>

wchar_t* wcsdup(const wchar_t* input) {
    int len         = wcslen(input) + 1;
    wchar_t* output = (wchar_t*)PALLOC(sizeof(wchar_t) * len);
    int i           = 0;
    for (; i < len; i++) {
        output[i] = input[i];
    }
    return output;
}

int inline symbol_equals(symbol_object symbol1, symbol_object symbol2) {
    int left_size   = symbol1->size->value;
    int right_size  = symbol2->size->value;
    return (left_size == right_size) &&
           (memcmp(symbol1->value, symbol2->value, left_size) == 0);
}

with_pre_eval1(symbol_at, context, w_idx,
    cast(idx, w_idx, number);
    symbol_object self = context->self.symbol;

    error_guard(idx->value < self->size->value, "Out of bounds.");
    error_guard(0 <= idx->value, "Out of bounds.");
    return_from_context(context,
        (object)make_char(self->value[idx->value]));
)

void inline symbol_hash() {
    context_object context = get_context();
    symbol_object self     = context->self.symbol;
    if (self->hash) {
        return_from_context(context, (object)self->hash);
        return;
    }
    // create the hash int here see pythons unicode symbol hash for more infos
    int len    = self->size->value;
    wchar_t *p = self->value;
    int x      = *p << 7;
    while (--len >= 0) {
        x = (1000003*x) ^ *p++;
    }
    x ^= self->size->value;
    self->hash = make_number(x);
    return_from_context(context, (object)self->hash);
}

void inline symbol_size() {
    context_object context = get_context();
    symbol_object self = context->self.symbol;
    return_from_context(context, (object)self->size);
}

define_bootstrapping_type(symbol,
    // instance
    if_selector(EVAL,         identity);
    if_selector(PRE_EVAL_ENV, identity);
    if_selector(OBJECT_AT,    symbol_at);
    if_selector(SIZE,         symbol_size);,
    // class
)

// Object creation

symbol_object make_symbol(const wchar_t* value) {
    symbol_object result = NEW(struct symbol);
    result->hash         = NULL;
    result->value        = wcsdup(value);
    result->size         = make_number(wcslen(value));
    header(result)       = (object)woodstock->symbol_class;
    return result;
}

symbol_object make_symbol_sized(int size) {
    symbol_object result = NEW(struct symbol);
    result->hash         = NULL;
    result->value        = (wchar_t*)PALLOC(sizeof(wchar_t[size]));
    result->size         = make_number(size);
    header(result)       = (object)woodstock->symbol_class;
    return result;
}

