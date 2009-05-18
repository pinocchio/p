#include <system.h>
#include <thread.h>

// env>>fetch:from:
static void inline env_fetch_from() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
    // arguments at: 0 -> selector
    env_object env = receiver->self.env;
    debug("env>>fetch:from: %p\n", env);

    if (env->scope.pointer == argument_at(receiver, 2).pointer) {
        int index = number_value(argument_at(receiver, 1).number);
        debug("index: %i\n", index);
        object value = env_at(env, index);
        set_argument(return_context(receiver), 1, value);
        return pop_context();
    }
    if (env->parent.nil == fools_system->nil) {
        assert(NULL); // XXX should go to error-handler here.
    }
    debug("fallback to parent: %p\n", env->parent.pointer);
    new_target(receiver, env->parent);
    debug("ret>>env>>fetch:from:\n");
}

// env>>store:at:in:
static void inline env_store_at_in() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>store:at:in:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 4);
    // arguments at: 0 -> selector
    env_object env = receiver->self.env;
    if (env->scope.pointer == argument_at(receiver, 3).pointer ) {
        int index = number_value(argument_at(receiver, 2).number);
        object value = argument_at(receiver, 1);
        env_at_put(env, index, value);
        return pop_context();
    }
    if (env->parent.nil == fools_system->nil) {
        return;
    }
    new_target(receiver, env->parent);
    debug("ret>>env>>store:at:in:\n");
}

// env>>subScope:key:
static void inline env_subscope() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    debug("env>>subScope:key:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
    object env  = receiver->self;
    // arguments at: 0 -> selector
    int size    = number_value(argument_at(receiver, 1).number);
    object key  = argument_at(receiver, 2);

    env_object new_env = make_env(key, env, size);
    set_argument(return_context(receiver), 1, (object)new_env);

    debug("ret>>env>>subScope:key: %i, %p\n", size, new_env);

    pop_context();
}

// env>>parent:
static void inline env_do_set_parent() {
    // actual setting of the evaluted parent. related to env>>parent:
    context_object receiver = get_context();
    assert_argsize(receiver, 2);
    // arguments at: 0 -> selector
    object env = receiver->self;
    object new_env = argument_at(receiver, 1);
    assert(new_env.pointer != NULL);
    debug("internal>>env>>parent: %p\n", new_env.env);

    env.env->parent = new_env;

    // Don't accidentally set parent to self!
    assert(env.env->parent.env != env.env);
    pop_context();
    debug("internal>>ret>>env>>parent:\n");
}

// env>>parent:
static void inline env_set_parent() {
    debug("env>>parent:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 2);
    // arguments at: 0 -> selector
    object env = receiver->env;
    object new_env = argument_at(receiver, 1);

    context_object context = make_context(new_env, 1);
    context->env = env;
    set_message(context, EVAL);

    receiver->code = &env_do_set_parent;

    debug("ret>>env>>parent:\n");
}

// env>>parent
static void inline env_parent() {
    debug("env>>envParent:\n");
    context_object receiver = get_context();
    // arguments at: 0 -> selector
    object env = receiver->self;
    set_argument(return_context(receiver), 1, env.env->parent);
    debug("ret>>env>>envParent:\n");
    pop_context();
}

void env_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, FETCH_FROM,       env_fetch_from);
    if_selector(selector, STORE_AT_IN,      env_store_at_in);
    if_selector(selector, SUBSCOPE_KEY,     env_subscope);
    if_selector(selector, ENV_SET_PARENT,   env_set_parent);
    if_selector(selector, ENV_PARENT,       env_parent);
    doesnotunderstand("env", selector);
}
