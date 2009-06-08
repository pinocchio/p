#include <system.h>
#include <thread.h>
#include <string.h>

with_pre_eval1(string_new, context, w_size,
    // XXX breaking encapsulation
    int size = number_value(w_size.number);
    return_from_context(context, (object)make_string_sized(size));
)

char* string_value(string_object string) {
    return string->value;
}

number_object inline string_size(string_object string) {
    return string->size;
}

int inline string_equals(string_object string1, string_object string2) {
    int left_size   = number_value(string_size(string1));
    int right_size  = number_value(string_size(string2));
    return (left_size == right_size) &&
           (strncmp(string_value(string1),
                   string_value(string2),
                   left_size) == 0);
}

define_bootstrapping_class(string,
    // instance
    if_selector(selector, EVAL,         identity);
    if_selector(selector, PRE_EVAL_ENV, identity);,
    // class
    if_selector(selector, SIZED,        string_new);
)

// Object creation
string_object make_string(const char* value) {
    string_object result    = NEW(struct string);
    result->value           = strdup(value);
    result->size            = make_number(strlen(value));
    header(result)          = (object)fools_system->string_class;
    return result;
}

string_object make_string_sized(int size) {
    string_object result    = NEW(struct string);
    result->value           = (char*)FOOLS_ALLOC(sizeof(char[size]));
    result->size            = make_number(size);
    header(result)          = (object)fools_system->string_class;
    return result;
}
