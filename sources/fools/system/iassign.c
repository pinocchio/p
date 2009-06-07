#include <system.h>
#include <thread.h>

// iassign>>eval:
static void inline iassign_eval() {
    context_object iassign_context = get_context();
    iassign_object iassign = iassign_context->self.iassign;

    debug("iassign>>eval\n");
    
    object env = iassign_context->env;

    pop_context();

    context_object context = make_context((object)iassign->variable, 2);
    context->env = env;
    set_message(context, ASSIGN_IN);

    context = make_context(iassign->expression, 1);
    context->env = env;
    set_message(context, EVAL);

    debug("ret>>iassign>>eval\n");
}

define_bootstrapping_instance(iassign,
    if_selector(selector, EVAL,         iassign_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
)

// Object creation
iassign_object make_iassign(ivar_object variable, object expression) {
    new_instance(iassign);
    result->variable        = variable;
    result->expression      = expression;
    return result;
}
