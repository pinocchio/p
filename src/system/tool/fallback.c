#include <system.h>
#include <thread.h>
#include <scheme/natives.h>

fallback_object inline fallback_descr(object inst) {
    return (fallback_object)pheader(inst.pointer);
}

void inline fallback_shift(context_object context) {
    object env = context->env;
    object self = context->self;

    fallback_object fallback = fallback_descr(self);
    object dispatch = fallback->dispatch;
    
    int argsize = context_size(context);
    object args = (object)woodstock->nil;

    for (--argsize; 0 <= argsize; argsize--) {
        args = cons(argument_at(context, argsize), args);
    }

    pop_context();
    context = make_context(dispatch, 3);
    context->env = env;
    set_argument(context, 0, self);
    set_argument(context, 1, env);
    set_argument(context, 2, args);
}
