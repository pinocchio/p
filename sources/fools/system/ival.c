#include <system.h>
#include <thread.h>

void ival() {
    context_object context = get_context();
    array_object args = argument_at(context, 0).array;
    object value = argument_at(context, 1);
    int pos = number_value(argument_at(context, 2).number);
    array_at_put(args, pos, value);
    pop_context();
}

void inline push_ival(object exp, context_object target, number_object pos) {
    context_object c = make_empty_context(3);
    set_argument(c, 0, (object)(&target->arguments));
    set_argument(c, 2, (object)pos);
    c->code = &ival;

    c = make_context(exp, 1);
    set_message(c, EVAL);
}
