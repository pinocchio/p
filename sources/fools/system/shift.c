#include <system.h>
#include <thread.h>
#include <model.h>

void shift_level() {

    debug("shiftLevel\n");
    
    context_object context = get_context();

    object env = context->env;
    object dispatch = object_at(context->self.object, 0);
    
    int argsize = context_size(context);
    array_object arguments = make_array(argsize);
    
    for (; 0 <= argsize; argsize--) {
        raw_array_at_put(arguments, argsize, argument_at(context, argsize));
    }

    pop_context();
    context = make_context(dispatch, 2);
    context->env = env;
    set_message(context, IAPPLY);
    set_argument(context, 1, (object)arguments);

    debug("ret>>shiftLevel\n");
}

void inline fallback_shift(context_object context) {
    object env = context->env;
    object self = context->self;
    object interp = header(self.pointer);
    object dispatch = header(interp.pointer);
    
    int argsize = context_size(context);
    array_object args = make_array(argsize);
    
    for (--argsize; 0 <= argsize; argsize--) {
        raw_array_at_put(args, argsize, argument_at(context, argsize));
    }

    pop_context();
    context = make_context(dispatch, 3);
    context->env = env;
    set_argument(context, 0, self);
    set_argument(context, 1, env);
    set_argument(context, 2, (object)args);
}
