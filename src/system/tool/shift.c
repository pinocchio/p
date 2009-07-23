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
    context = make_empty_context(2);
    context->env = env;
    if (isinstance(dispatch, ast_scoped)) {
        context->self = dispatch;
        set_argument(context, 1, (object)arguments);
        set_argument(context, 2, env);
        ast_scoped_apply_in_do();
    } else {
        new_target(context, dispatch);
        set_message(context, APPLY_IN_);
        set_argument_const(context, 1, (object)arguments);
        set_argument_const(context, 2, env);
    }

    debug("ret>>shiftLevel\n");
}
