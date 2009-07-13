#include <system.h>
#include <assert.h>
#include <thread.h>

// env>>fetch:from:
static void inline env_fetch_from() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
    // arguments at: 0 -> selector
    runtime_env_object env = receiver->self.env;
    debug("env>>fetch:from: (%i) %p\n", env->values->size, env);

    if (env->scope.pointer == argument_at(receiver, 2).pointer) {
        int index = argument_at(receiver, 1).number->value;
        debug("index: %i\n", index);
        object value = env_at(env, index);
        debug("ret>>env>>fetch:from: (return) %p\n", value.pointer);
        return return_from_context(receiver, value);
    }
    if (env->parent.nil == woodstock->nil) {
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
    runtime_env_object env = receiver->self.env;
    if (env->scope.pointer == argument_at(receiver, 3).pointer ) {
        int index = argument_at(receiver, 2).number->value;
        object value = argument_at(receiver, 1);
        env_at_put(env, index, value);
        debug("ret>>env>>store:at:in: %i, %p\n", index, value.pointer);
        return pop_context();
    }
    if (env->parent.nil == woodstock->nil) {
        assert(NULL); // TODO we currently fail hard in this case.
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
    int size    = argument_at(receiver, 1).number->value;
    object key  = argument_at(receiver, 2);

    runtime_env_object new_env = make_env(key, env, size);

    return_from_context(receiver, (object)new_env);
    debug("ret>>env>>subScope:key: %i, %p\n", size, new_env);
}

// env>>parent:
with_pre_eval1(env_set_parent, context, new_env,
    object env = context->self;
    assert(new_env.pointer != NULL);
    env.env->parent = new_env;

    // Don't accidentally set parent to self; a common error
    assert(env.env->parent.env != env.env);
    pop_context();
)

// env>>parent
accessor_for(env, parent)

with_pre_eval2(env_class_scope_key, context, key, w_size,
    // XXX breaks encapsulation
    int size    = w_size.number->value;
	runtime_env_object new_env = make_env(key, (object)woodstock->nil, size);
    return_from_context(context, (object)new_env);
)

define_bootstrapping_class(runtime_env,
    // instance
    if_selector(FETCH_FROM,       env_fetch_from);
    if_selector(STORE_AT_IN,      env_store_at_in);
    if_selector(SUBSCOPE_KEY,     env_subscope);
    if_selector(SET_PARENT,       env_set_parent);
    if_selector(PARENT,           env_parent);,
    // class
    if_selector(SCOPE_KEY, env_class_scope_key);
)
