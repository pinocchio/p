#include <system.h>
#include <thread.h>
#include <model.h>

void shift_level_with_self() {

    debug("shiftLevel\n");
    
    context_object context = get_context();

    object env = context->env;
    object self = context->self;
    object interp = header(self.pointer);
    object dispatch = header(interp.pointer);
    
    int argsize = context_size(context);
    array_object arguments = make_array(argsize + 1);
    
    for (--argsize; 0 <= argsize; argsize--) {
        raw_array_at_put(arguments, argsize + 1, argument_at(context, argsize));
    }

    raw_array_at_put(arguments, 0, self);

    pop_context();
    context = make_context(dispatch, 2);
    context->env = env;
    set_message(context, EVAL_WITHARGUMENTS);
    set_argument(context, 1, (object)arguments);

    debug("ret>>shiftLevel\n");
}

void shift_level() {

    debug("shiftLevel\n");
    
    context_object context = get_context();

    object env = context->env;
    object dispatch = (object)PINC(context->self.pointer); // skip header
    
    int argsize = context_size(context);
    array_object arguments = make_array(argsize);
    
    for (; 0 <= argsize; argsize--) {
        raw_array_at_put(arguments, argsize, argument_at(context, argsize));
    }

    pop_context();
    context = make_context(dispatch, 2);
    context->env = env;
    set_message(context, EVAL_WITHARGUMENTS);
    set_argument(context, 1, (object)arguments);

    debug("ret>>shiftLevel\n");
}
