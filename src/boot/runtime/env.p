(bootstrapping-type Env runtime ((key "object") (parent "object")
                                 (values array))
   ((fetch:from: (w_index w_key)
        "
        env_object self = context->self.env;
        debug(\"env>>fetch:from: (%i) %p\\n\", self->values->size, self);

        if (self->key.pointer == w_key.pointer) {
            cast(index, w_index, smallint);
            debug(\"index: %i\\n\", index->value);
            object value = env_at(self, index->value);
            debug(\"ret>>env>>fetch:from: (return) %p\\n\", value.pointer);
            return return_from_context(context, value);
        }
        error_guard(self->parent.object != woodstock->nil, \"Variable not found.\");
        debug(\"fallback to parent: %p\\n\", self->parent.pointer);

        // Optimization, avoid const rewrapping if type is known
        if (isinstance(self->parent, env)) {
            context->self = self->parent;
            gen_env_fetch_col_from_col__do();
        } else {
            object env = context->env;
            pop_context();
            "
            (send self->parent fetch:from: w_index w_key)
            "
        }
        ")
    (store:at:in: (w_value w_index w_key)
        "
        env_object self = context->self.env;
        if (self->key.pointer == w_key.pointer) {
            cast(index, w_index, smallint)
            env_at_put(self, index->value, w_value);
            debug(\"ret>>env>>store:at:in: %i, %p\\n\", index->value, w_value.pointer);
            return pop_context();
        }
        error_guard(self->parent.object != woodstock->nil, \"Variable not found.\");
        
        // Optimization, avoid const rewrapping if type is known
        if (isinstance(self->parent, env)) {
            context->self = self->parent;
            gen_env_store_col_at_col_in_col__do();
        } else {
            object env = context->env;
            pop_context();
            "
            (send self->parent store:at:in: w_value w_index w_key)
            "
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
