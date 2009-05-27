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
