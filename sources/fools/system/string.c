#include <system.h>
#include <thread.h>
#include <wchar.h>
#include <string.h>

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

define_bootstrapping_type(istring,
    // instance
    if_selector(selector, EVAL,         identity);
    if_selector(selector, PRE_EVAL_ENV, identity);,
    // class
    if_selector(selector, SIZED,        string_new);
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
