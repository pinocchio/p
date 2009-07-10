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
    debug("ivar>>eval \"%ls\"\n", ivar->name->value);

    object env = ivar_context->env;

    pop_context();
    ivar_context = make_context(env, 3);
    ivar_context->env = env;
    set_message(ivar_context, FETCH_FROM);
    set_argument(ivar_context, 1, (object)ivar->index);
    set_argument(ivar_context, 2, ivar->scope);

    debug("ret>>ivar>>eval:\n");
}

with_pre_eval1(ivar_new, context, w_name,
    // XXX breaking encapsulation
    // probably should at least clone the value ...
    const wchar_t* name = w_name.string->value;
    return_from_context(context, (object)make_ivar(name));
)

define_bootstrapping_class(ivar,
    // instance
    if_selector(selector, EVAL,         ivar_eval);
    if_selector(selector, ASSIGN_IN,    ivar_assign);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);,
    // class
    if_selector(selector, SIZED,        ivar_new); // should rename SIZED...
)

// Object creation
ivar_object make_ivar(const wchar_t* name) {
    new_instance(ivar);
    result->name            = make_string(name);
    result->scope           = (object)fools_system->nil;
    result->index           = make_number(0);
    return result;
}
