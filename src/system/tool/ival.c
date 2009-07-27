#include <system.h>
#include <thread.h>

void ival() {
    context_object context = get_context();
    array_object args = argument_at(context, 0).array;
    object value      = argument_at(context, 1);
    int pos           = argument_at(context, 2).smallint->value;
    debug("ival %i (size %i)\n", pos, array_size(args));
    array_at_put(args, pos, value);
    pop_context();
    debug("ret>>ival\n");
    dec();
}

void inline push_ival(object exp, context_object target, smallint_object pos) {
    context_object c = make_empty_context(3);
    set_argument(c, 0, (object)(&target->arguments));
    set_argument(c, 2, (object)pos);
    c->code = &ival;
    // Check if this is always true.
    c = make_context(exp, 1);
    c->env = target->env;
    set_message(c, EVAL);
    inc();
}
