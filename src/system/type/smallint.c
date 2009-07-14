#include <system.h>
#include <thread.h>
 //TODO rename

static void inline smallint_hash() {
    context_object context = get_context();
    return_from_context(context, context->self);
}

define_bootstrapping_type(number,
    // instance
    if_selector(EVAL,         identity);
    if_selector(HASH,         smallint_hash);,
    
    // class
    // XXX to avoid compiler warnings
    if (0) { printf("%p", selector.pointer); }
)

// Object creation
number_object make_number(int value) {
    new_instance(number);
    result->value           = value;
    return result;
}
