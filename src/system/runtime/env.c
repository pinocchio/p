#include <system.h>
#include <thread.h>

// env>>fetch:from:
with_pre_eval2(env_fetch_from, receiver, w_index, w_key,
    // arguments at: 0 -> selector
    runtime_env_object env = receiver->self.env;
    debug("env>>fetch:from: (%i) %p\n", env->values->size, env);

    if (env->scopeId.pointer == w_key.pointer) {
        cast(index, w_index, number);
        debug("index: %i\n", index->value);
        object value = env_at(env, index->value);
        debug("ret>>env>>fetch:from: (return) %p\n", value.pointer);
        return return_from_context(receiver, value);
    }
    error_guard(env->parent.object != woodstock->nil, "Variable not found.");
    debug("fallback to parent: %p\n", env->parent.pointer);

    // Optimization, avoid const rewrapping if type is known
    if (isinstance(env->parent, runtime_env)) {
        receiver->self = env->parent;
        env_fetch_from_do();
    } else {
        new_target(receiver, env->parent);
        set_message(receiver, FETCH_FROM);
        set_argument_const(receiver, 1, w_index);
        set_argument_const(receiver, 2, w_key);
    }

    debug("ret>>env>>fetch:from:\n");
)

// env>>store:at:in:
with_pre_eval3(env_store_at_in, context, w_value, w_index, w_key,
    runtime_env_object env = context->self.env;
    if (env->scopeId.pointer == w_key.pointer) {
        cast(index, w_index, number)
        env_at_put(env, index->value, w_value);
        debug("ret>>env>>store:at:in: %i, %p\n", index->value, w_value.pointer);
        return pop_context();
    }
    error_guard(env->parent.object != woodstock->nil, "Variable not found.");
    
    // Optimization, avoid const rewrapping if type is known
    if (isinstance(env->parent, runtime_env)) {
        context->self = env->parent;
        env_store_at_in_do();
    } else {
        new_target(context, env->parent);
        set_message(context, STORE_AT_IN_);
        set_argument_const(context, 1, w_value);
        set_argument_const(context, 2, w_index);
        set_argument_const(context, 3, w_key);
    }
)

// env>>subScope:key:
with_pre_eval2(env_subscope, receiver, w_size, w_key,
    object env  = receiver->self;
    cast(size, w_size, number);

    runtime_env_object new_env = make_env(w_key, env, size->value);

    return_from_context(receiver, (object)new_env);
)

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

with_pre_eval2(env_class_scopeid_size, context, key, w_size ,
    cast(size, w_size, number);
	runtime_env_object new_env =
        make_env(key, (object)woodstock->nil, size->value);
    return_from_context(context, (object)new_env);
)

define_bootstrapping_type(runtime_env,
    // instance
    if_selector(FETCH_FROM,     env_fetch_from);
    if_selector(STORE_AT_IN_,   env_store_at_in);
    if_selector(SUBSCOPE_KEY_,  env_subscope);
    if_selector(PARENT_,        env_set_parent);
    if_selector(PARENT,         env_parent);,
    // class
    if_selector(SCOPEID_SIZE_, env_class_scopeid_size);
)

object inline env_at(runtime_env_object env, int index) {
    return array_at(env->values, index);
}

void inline env_at_put(runtime_env_object env, int index, object value) {
    array_at_put(env->values, index, value);
}

runtime_env_object make_env(object scopeId, object parent, int size) {
    new_instance(runtime_env);
    result->scopeId     = scopeId;
    result->parent      = parent;
    result->values      = make_array(size);
    return result;
}

preval3(env_new_from_id_parent_size, scopeId, parent, v3,
	cast(size, v3, number);
	return_from_context(context, (object) make_env(scopeId, parent, size->value));
)
