#include <system.h>
#include <thread.h>

define_bootstrapping_class(number,
    // instance
    if_selector(selector, EVAL,         identity);
    if_selector(selector, PRE_EVAL_ENV, identity);,
    // class
    // XXX to avoid compiler warnings
    if (0) { printf("%p", selector.pointer); }
)

int inline number_value(number_object number) {
    return number->value;
}

// Object creation
number_object make_number(int value) {
    new_instance(number);
    result->value           = value;
    return result;
}
