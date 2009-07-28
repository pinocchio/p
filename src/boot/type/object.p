(bootstrapping-type Object type (("fields[0]" "object"))
   ((objectAt: (w_idx)
        "
        object self = context->self;
        object_t_object ifixed = ifixed_descr(self);

        cast(index, w_idx, smallint);
        debug(\"at %i (size %i)\\n\", index->value, ifixed->size);

        error_guard(0 <= index->value, \"Out of bounds.\");
        error_guard(index->value < ifixed->size, \"Out of bounds.\");

        return_from_context(context, object_at(self.object, index->value));
        ")
    (objectAt:put: (w_idx w_value)
        "
        object self = context->self;
        object_t_object ifixed = ifixed_descr(self);

        cast(index, w_idx, smallint);
        debug(\"an_ifixed>>at:put: (%i of %i)\\n\", index->value, ifixed->size);

        error_guard(0 <= index->value, \"Out of bounds.\");
        error_guard(index->value < ifixed->size, \"Out of bounds.\");
        
        object_at_put(self.object, index->value, w_value);

        pop_context();
        "))
   ((basicNew ()
        "
        object_t_object ifixed = context->self.ifixed;
        object_object instance = make_object(ifixed->size, (object)ifixed);
        return_from_context(context, (object)instance);
        ")
    (size ()
        "
        object_t_object ifixed = context->self.ifixed;
        return_from_context(context, (object)make_smallint(ifixed->size));
        "))
   (("object inline object_at(object_object object, int index)"
        "
        return object->fields[index];
        ")
    ("void inline object_at_put(object_object o, int index, object value)"
        "
        o->fields[index] = value;
        ")
    ("object_t_object inline ifixed_descr(object inst)"
        "
        return (object_t_object)pheader(inst.pointer);
        ")))
