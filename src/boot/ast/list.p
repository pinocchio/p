(bootstrapping-type List ast ((size "int") ("instructions[]" "object"))
   ((eval ()
        "    
        list_object self = context->self.list;

        if (list_size(self) == 0) {
            pop_context();
            debug(\"ret>>list>>eval(0)\\n\");
            return;
        }

        int end = list_size(self) - 1;

        object instruction = (object)raw_list_at(self, end);
        new_target(context, instruction);
        object env = context->env;

        // Lign up all the context frames necessary to perform
        // the whole list.
        for (--end; 0 <= end; end--) {
            context         = make_empty_context(2);
            context->code   = &pop_context;
            instruction     = (object)raw_list_at(self, end);
            "
            (send instruction eval)
            "
        }
        ")
    (eval: (w_env)
        "
        context->env = w_env;
        gen_list_eval();
        ")
    (objectAt: (w_idx)
        "
        array_object array = context->self.array;
        cast(index, w_idx, smallint);
        return_from_context(context, array_at(array, index->value));
        ")
    (size ()
        "
        object size = (object)make_smallint(context->self.array->size);    
        return_from_context(context, size);
        "))
   ()
   (("list_object make_list(int size)"
        "
        list_object result = NEW_ARRAYED(list_object, object, size + 1);
        header(result)         = (object)woodstock->list_class;
        result->size           = size;
        return result;
        ")    

    ("int inline list_size(list_object list)"
        "
        return list->size;
        ")
    ("void inline list_check_bounds(list_object list, int index)"
        "
        error_guard(0 <= index,
            \"InstructionList index out of bounds. (< 0)\");
        error_guard(index < list_size(list),
            \"InstructionList index out of bounds. (> limit)\");
        ")
    ("object inline raw_list_at(list_object list, int index)"
        "
        return list->instructions[index];
        ")
    ("void inline raw_list_at_put(list_object list, int index, object value)"
        "
        list->instructions[index] = value;
        ")
    ("void inline list_at_put(list_object list, int index, object value)"
        "
        list_check_bounds(list, index);
        raw_list_at_put(list, index, value);
        ")))
