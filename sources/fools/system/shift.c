#include <system.h>
#include <thread.h>
#include <model.h>

void shift_level() {

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
    // set_transfer(context);
}

object make_level_shift(object dispatch) {
    native_object result = NEW(struct native);
    header(result) = dispatch;
    result->target = &shift_level;
    return (object)result;
}
