(bootstrapping-type Env runtime ((key "object") (parent "object")
                                 (values array))
   ((fetch:from: (w_index w_key)
        "
        env_object env = context->self.env;
        debug(\"env>>fetch:from: (%i) %p\\n\", env->values->size, env);

        if (env->key.pointer == w_key.pointer) {
            cast(index, w_index, smallint);
            debug(\"index: %i\\n\", index->value);
            object value = env_at(env, index->value);
            debug(\"ret>>env>>fetch:from: (return) %p\\n\", value.pointer);
            return return_from_context(context, value);
        }
        error_guard(env->parent.object != woodstock->nil, \"Variable not found.\");
        debug(\"fallback to parent: %p\\n\", env->parent.pointer);

        // Optimization, avoid const rewrapping if type is known
        if (isinstance(env->parent, env)) {
            context->self = env->parent;
            gen_env_fetch_col_from_col__do();
        } else {
            new_target(context, env->parent);
            set_message(context, FETCH_FROM_);
            set_argument_const(context, 1, w_index);
            set_argument_const(context, 2, w_key);
        }
        ")
    (store:at:in: (w_value w_index w_key)
        "
        env_object env = context->self.env;
        if (env->key.pointer == w_key.pointer) {
            cast(index, w_index, smallint)
            env_at_put(env, index->value, w_value);
            debug(\"ret>>env>>store:at:in: %i, %p\\n\", index->value, w_value.pointer);
            return pop_context();
        }
        error_guard(env->parent.object != woodstock->nil, \"Variable not found.\");
        
        // Optimization, avoid const rewrapping if type is known
        if (isinstance(env->parent, env)) {
            context->self = env->parent;
            gen_env_store_col_at_col_in_col__do();
        } else {
            new_target(context, env->parent);
            set_message(context, STORE_AT_IN_);
            set_argument_const(context, 1, w_value);
            set_argument_const(context, 2, w_index);
            set_argument_const(context, 3, w_key);
        }
        ")
    (subScope:key: (w_size w_key)
        "
        object env  = context->self;
        cast(size, w_size, smallint);

        env_object new_env = make_env(w_key, env, size->value);

        return_from_context(context, (object)new_env);
        ")
    (parent ()
        "
        return_from_context(context, context->self.env->parent);
        ")
    (parent: (w_parent)
        "
        context->self.env->parent = w_parent;
        return_from_context(context, w_parent);
        "))
   ((scopeId:size: (w_key w_size)
        "
        cast(size, w_size, smallint);
	    env_object new_env =
            make_env(w_key, (object)woodstock->nil, size->value);
        return_from_context(context, (object)new_env);
        "))
   (("object inline env_at(env_object env, int index)"
        "
        return array_at(env->values, index);
        ")
    ("void inline env_at_put(env_object env, int index, object value)"
        "
        array_at_put(env->values, index, value);
        ")
    ("env_object make_env(object w_key, object parent, int size)"
        "
        new_instance(env);
        result->key     = w_key;
        result->parent      = parent;
        result->values      = make_array(size);
        return result;
        ")))
