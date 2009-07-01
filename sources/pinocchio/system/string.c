#include <system.h>
#include <thread.h>
#include <wchar.h>
#include <string.h>

wchar_t* wcsdup(const wchar_t* input) {
    int len = wcslen(input) + 1;
    wchar_t* output = (wchar_t*)FOOLS_ALLOC(sizeof(wchar_t) * len);
    int i = 0;
    for (; i < len; i++) {
        output[i] = input[i];
    }
    return output;
}

with_pre_eval1(string_new, context, w_size,
    // XXX breaking encapsulation
    int size = number_value(w_size.number);
    return_from_context(context, (object)make_string_sized(size));
)

wchar_t* string_value(string_object string) {
    return string->value;
}

number_object inline string_size(string_object string) {
    return string->size;
}

int inline string_equals(string_object string1, string_object string2) {
    int left_size   = number_value(string_size(string1));
    int right_size  = number_value(string_size(string2));
    return (left_size == right_size) &&
           (memcmp(string_value(string1),
                   string_value(string2),
                   left_size) == 0);
}

with_pre_eval1(string_at, context, w_idx,
    // XXX breaking encapsulation
    int idx = number_value(w_idx.number);
    string_object self = context->self.string;
    if (idx >= number_value(self->size)) {
        printf("Out of bounds: %i of %i!\n", idx, number_value(self->size)-1);
        assert(NULL);
    }
    return_from_context(context, (object)make_char(self->value[idx]));
)

with_pre_eval2(string_at_put, context, w_idx, w_char,
    // XXX breaking encapsulation
    int idx = number_value(w_idx.number);
    string_object self = context->self.string;
    if (idx >= number_value(self->size)) {
        printf("Out of bounds: %i of %i!\n", idx, number_value(self->size)-1);
        assert(NULL);
    }
    // XXX breaking encapsulation
    self->value[idx] = w_char.chr->value;
    pop_context();
)

static void inline istring_size() {
    context_object context = get_context(); 
    object result = (object)context->self.string->size;
    return_from_context(context, result);
}

define_bootstrapping_type(istring,
    // instance
    if_selector(selector, EVAL,             identity);
    if_selector(selector, PRE_EVAL_ENV,     identity);
    if_selector(selector, OBJECT_AT,        string_at);
    if_selector(selector, SIZE,             istring_size);
    if_selector(selector, OBJECT_AT_PUT,    string_at_put);,
    // class
    if_selector(selector, SIZED,            string_new);
)

// Object creation
string_object make_string(const wchar_t* value) {
    string_object result    = NEW(struct string);
    result->value           = wcsdup(value);
    result->size            = make_number(wcslen(value));
    header(result)          = (object)fools_system->string_class;
    return result;
}

// should become wchar_t*
// and printf("%ls", wchar_t*)
// for unicode support.
object make_symbol(const wchar_t* value) {
    string_object result    = NEW(struct string);
    result->value           = wcsdup(value);
    result->size            = make_number(wcslen(value));
    header(result)          = (object)fools_system->symbol_class;
    return (object)result;
}

string_object make_string_sized(int size) {
    string_object result    = NEW(struct string);
    result->value           = (wchar_t*)FOOLS_ALLOC(sizeof(wchar_t[size]));
    result->size            = make_number(size);
    header(result)          = (object)fools_system->string_class;
    return result;
}
