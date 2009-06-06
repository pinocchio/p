#include <system.h>
#include <thread.h>

// ivar>>assign:
static void inline ivar_assign() {
    context_object ivar_context = get_context();
    assert_argsize(ivar_context, 2);

    ivar_object ivar = ivar_context->self.ivar;

    debug("ivar>>assign:\n");

    object env      = ivar_context->env;
    object value    = argument_at(ivar_context, 1);

    pop_context();

    ivar_context = make_context(env, 4);
    ivar_context->env = env;

    set_message(ivar_context, STORE_AT_IN);
    set_argument(ivar_context, 1, value);
    set_argument(ivar_context, 2, (object)ivar->index);
    set_argument(ivar_context, 3, ivar->scope);

    debug("ret>>ivar>>assign:\n");
}

// ivar>>eval:
static void inline ivar_eval() {
    context_object ivar_context = get_context();
    ivar_object ivar = ivar_context->self.ivar;
    debug("ivar>>eval \"%s\"\n", ivar->name->value);

    object env = ivar_context->env;

    pop_context();
    ivar_context = make_context(env, 3);
    ivar_context->env = env;
    set_message(ivar_context, FETCH_FROM);
    set_argument(ivar_context, 1, (object)ivar->index);
    set_argument(ivar_context, 2, ivar->scope);

    debug("ret>>ivar>>eval:\n");
}

void ivar_dispatch() {
    dispatch_header(context, selector);
    if_selector(selector, EVAL,         ivar_eval);
    if_selector(selector, ASSIGN_IN,    ivar_assign);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("ivar", selector);
}

void ivar_class_dispatch() {
    dispatch_header(context, selector);
    doesnotunderstand("ivar_class", selector);
}

// Object creation
ivar_object make_ivar(const char* name) {
    new_instance(ivar);
    result->name            = make_string(name);
    result->scope           = (object)fools_system->nil;
    result->index           = make_number(0);
    return result;
}
