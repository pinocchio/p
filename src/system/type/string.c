#include <system.h>
#include <assert.h>
#include <thread.h>
#include <wchar.h>
#include <string.h>

wchar_t* wcsdup(const wchar_t* input) {
    int len         = wcslen(input) + 1;
    wchar_t* output = (wchar_t*)FOOLS_ALLOC(sizeof(wchar_t) * len);
    int i           = 0;
    for (; i < len; i++) {
        output[i] = input[i];
    }
    return output;
}

with_pre_eval1(string_new, context, w_size,
    // XXX breaking encapsulation
    int size = w_size.number->value;
    return_from_context(context, (object)make_string_sized(size));
)

wchar_t* string_value(string_object string) {
    return string->value;
}

int inline string_equals(string_object string1, string_object string2) {
    int left_size   = string1->size->value;
    int right_size  = string2->size->value;
    return (left_size == right_size) &&
           (memcmp(string1->value, string2->value, left_size) == 0);
}

with_pre_eval1(string_at, context, w_idx,
    // XXX breaking encapsulation
    int idx            = w_idx.number->value;
    string_object self = context->self.string;
    if (idx >= self->size->value) {
        printf("Out of bounds: %i of %i!\n", idx, self->size->value-1);
        assert(NULL);
    }
    return_from_context(context, (object)make_char(self->value[idx]));
)

with_pre_eval2(string_at_put, context, w_idx, w_char,
    // XXX breaking encapsulation
    int idx = w_idx.number->value;
    string_object self = context->self.string;
    if (idx >= self->size->value) {
        printf("Out of bounds: %i of %i!\n", idx, self->size->value-1);
        assert(NULL);
    }
    // XXX breaking encapsulation
    self->value[idx] = w_char.chr->value;
    pop_context();
)

static void inline istring_size() {
    context_object context = get_context(); 
    object result          = (object)context->self.string->size;
    return_from_context(context, result);
}

static void inline string_hash() {
    context_object context = get_context();
    string_object self     = context->self.string;
    if (self->hash) {
        return_from_context(context, (object)self->hash);
        return;
    }
    // create the hash int here see pythons unicode string hash for more infos
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

define_bootstrapping_type(istring,
    // instance
    if_selector(EVAL,             identity);
    if_selector(PRE_EVAL_ENV,     identity);
    if_selector(OBJECT_AT,        string_at);
    if_selector(SIZE,             istring_size);
    if_selector(OBJECT_AT_PUT,    string_at_put);,
    // class
    if_selector(SIZED,            string_new);
)

// Object creation
string_object make_string(const wchar_t* value) {
    string_object result    = NEW(struct string);
    result->hash            = NULL;
    result->value           = wcsdup(value);
    result->size            = make_number(wcslen(value));
    header(result)          = (object)fools_system->string_class;
    return result;
}

object make_symbol(const wchar_t* value) {
    string_object result    = NEW(struct string);
    result->hash            = NULL;
    result->value           = wcsdup(value);
    result->size            = make_number(wcslen(value));
    header(result)          = (object)fools_system->symbol_class;
    return (object)result;
}

string_object make_string_sized(int size) {
    string_object result    = NEW(struct string);
    result->hash            = NULL;
    result->value           = (wchar_t*)FOOLS_ALLOC(sizeof(wchar_t[size]));
    result->size            = make_number(size);
    header(result)          = (object)fools_system->string_class;
    return result;
}
