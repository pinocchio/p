#include <system.h>
#include <thread.h>
#include <model.h>
#include <scheme/natives.h>

void shift_level() {
    debug("shiftLevel\n");
    context_object context = get_context();

    object env = context->env;
    object dispatch = object_at(context->self.object, 0);
    
    int argsize = context_size(context);
    object arguments = (object)woodstock->nil;
    
    for (argsize--; 0 <= argsize; argsize--) {
        arguments = cons(argument_at(context, argsize), arguments);
    }

    pop_context();
    context = make_context(dispatch, 2);
    context->env = env;
    set_message(context, IAPPLY_);
    set_argument(context, 1, (object)arguments);

    debug("ret>>shiftLevel\n");
}
