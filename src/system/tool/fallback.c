#include <system.h>
#include <thread.h>

fallback_object inline fallback_descr(object inst) {
    return (fallback_object)pheader(inst.pointer);
}

void inline fallback_shift(context_object context) {
    object env = context->env;
    object self = context->self;

    fallback_object fallback = fallback_descr(self);
    object dispatch = fallback->dispatch;
    
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
