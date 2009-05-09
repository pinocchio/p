#include <model.h>
#include <system.h>
#include <bootstrap.h>
#include <stdio.h>

/*
// number>>+
void number_env_plus(context_object context) {
    debug("number>>+\n");
    context_object plus_context = target_context(context);
    // XXX breaking encapsulation!
    number_object argument = argument_at(plus_context, 1).number;
    number_object self     = header(plus_context).number;

    set_argument(return_context(plus_context), 1,
        (object)make_number(self->value +
                            argument->value));

    debug("ret>>number>>+\n");
    return_from_context(plus_context);
}

// number>>-
void number_env_minus(context_object context) {
    debug("number>>-\n");
    context_object minus_context = target_context(context);
    // XXX breaking encapsulation!
    number_object argument = argument_at(minus_context, 1).number;
    number_object self     = header(minus_context).number;

    set_argument(return_context(minus_context), 1,
        (object)make_number(self->value -
                            argument->value));

    debug("ret>>number>>-\n");
    return_from_context(minus_context);
}

// number>>*
void number_env_times(context_object context) {
    debug("number>>*\n");
    context_object times_context = target_context(context);
    // XXX breaking encapsulation!
    number_object argument = argument_at(times_context, 1).number;
    number_object self     = header(times_context).number;

    set_argument(return_context(times_context), 1,
        (object)make_number(self->value *
                            argument->value));

    debug("ret>>number>>*\n");
    return_from_context(times_context);
}

// number>>/
void number_env_divide(context_object context) {
    debug("number>>/\n");
    context_object divide_context = target_context(context);
    // XXX breaking encapsulation!
    number_object argument = argument_at(divide_context, 1).number;
    number_object self     = header(divide_context).number;

    set_argument(return_context(divide_context), 1,
        (object)make_number(self->value /
                            argument->value));

    debug("ret>>number>>/\n");
    return_from_context(divide_context);
}

// true>>ifTrue:ifFalse:
void true_env_if(context_object context) {
    debug("true>>ifTrue:ifFalse:\n");
    context_object if_context = target_context(context);

    object true_branch = argument_at(if_context, 1);
    header(if_context) = true_branch;
    
    debug("true>>ifTrue:ifFalse:\n");
    set_transfer(if_context);
}

// false>>ifTrue:ifFalse:
void false_env_if(context_object context) {
    debug("false>>ifTrue:ifFalse:\n");
    context_object if_context = target_context(context);

    object false_branch = argument_at(if_context, 2);
    header(if_context) = false_branch;
    
    debug("false>>ifTrue:ifFalse:\n");
    set_transfer(if_context);
}
*/
