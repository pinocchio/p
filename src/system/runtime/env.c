#include <system.h>
#include <thread.h>

// env>>fetch:from:
static void inline env_fetch_from() {
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
    // arguments at: 0 -> selector
    runtime_env_object env = receiver->self.env;
    debug("env>>fetch:from: (%i) %p\n", env->values->size, env);

    if (env->scope.pointer == argument_at(receiver, 2).pointer) {
        cast(index, argument_at(receiver, 1), number);
        debug("index: %i\n", index->value);
        object value = env_at(env, index->value);
        debug("ret>>env>>fetch:from: (return) %p\n", value.pointer);
        return return_from_context(receiver, value);
    }
    error_guard(env->parent.object != woodstock->nil, "Variable not found.");
    debug("fallback to parent: %p\n", env->parent.pointer);
    new_target(receiver, env->parent);
    debug("ret>>env>>fetch:from:\n");
}

// env>>store:at:in:
static void inline env_store_at_in() {
    debug("env>>store:at:in:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 4);
    runtime_env_object env = receiver->self.env;
    if (env->scope.pointer == argument_at(receiver, 3).pointer ) {
        cast(index, argument_at(receiver, 2), number)
        object value = argument_at(receiver, 1);
        env_at_put(env, index->value, value);
        debug("ret>>env>>store:at:in: %i, %p\n", index->value, value.pointer);
        return pop_context();
    }
    error_guard(env->parent.object != woodstock->nil, "Variable not found.");
    new_target(receiver, env->parent);
    debug("ret>>env>>store:at:in:\n");
}

// env>>subScope:key:
static void inline env_subscope() {
    debug("env>>subScope:key:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);
    object env  = receiver->self;
    cast(size, argument_at(receiver, 1), number);
    object key  = argument_at(receiver, 2);

    runtime_env_object new_env = make_env(key, env, size->value);

    return_from_context(receiver, (object)new_env);
    debug("ret>>env>>subScope:key: %i, %p\n", size->value, new_env);
}

// env>>parent:
with_pre_eval1(env_set_parent, context, new_env,
    object env = context->self;
    error_guard(new_env.pointer != NULL, "Setting parent to NULL.");
    env.env->parent = new_env;

    // Don't accidentally set parent to self; a common error
    error_guard(env.env->parent.env != env.env, "Building circular environment.");
    pop_context();
)

// env>>parent
accessor_for(env, parent)

with_pre_eval2(env_class_scope_key, context, w_size, key,
    cast(size, w_size, number);
	runtime_env_object new_env =
        make_env(key, (object)woodstock->nil, size->value);
    return_from_context(context, (object)new_env);
)

define_bootstrapping_type(runtime_env,
    // instance
    if_selector(FETCH_FROM,       env_fetch_from);
    if_selector(STORE_AT_IN,      env_store_at_in);
    if_selector(SUBSCOPE_KEY,     env_subscope);
    if_selector(SET_PARENT,       env_set_parent);
    if_selector(PARENT,           env_parent);,
    // class
    if_selector(SCOPE_KEY, env_class_scope_key);
)

object inline env_at(runtime_env_object env, int index) {
    return array_at(env->values, index);
}

void inline env_at_put(runtime_env_object env, int index, object value) {
    array_at_put(env->values, index, value);
}

runtime_env_object make_env(object scope, object parent, int size) {
    new_instance(runtime_env);
    result->scope       = scope;
    result->parent      = parent;
    result->values      = make_array(size);
    return result;
}
