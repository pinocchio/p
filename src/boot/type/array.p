; Arguments of bootstrapping-type:
;     1) Symbol
;     2) Type: [type, class]
;     3) Struct of the Type, in this example:
;        struct Array { int size; object[] valuues; }
;     4) Instancemethods
;     5) Classmethods
;     6) Helpermethods: Helpermethods are just verbatim code

(bootstrapping-type Array type ((size "int") ("values[]" "object"))
; Instancemethods   
   ((objectAt: (idx)
        " 
        array_object array = context->self.array;
        cast(index, idx, smallint);
        return_from_context(context, array_at(array, index->value));
        ")
    (objectAt:put: (w_idx value)
        "
        array_object array = context->self.array;
        cast(index, w_idx, smallint);
        array_at_put(array, index->value, value);
        pop_context();
        ")
    (size ()
        "
        object size = (object)make_smallint(context->self.array->size);    
        return_from_context(context, size);
        "))
; Classmethods
   ((basicNew: (w_size)
        "
        cast(size, w_size, smallint);
        object result = (object)make_array(size->value);
        return_from_context(context, result);
        "))
; Helpermethods
   (("int inline array_size(array_object array)"
        "
        return array->size;
        ")
    ("object inline raw_array_at(array_object array, int index)"
        "
        return array->values[index];
        ")
    ("object inline array_at(array_object array, int index)"
        "
        array_check_bounds(array, index);
        return raw_array_at(array, index);
        ")
    ("void inline raw_array_at_put(array_object array, int index, object new_value)"
        "
        array->values[index] = new_value;
        ")
    ("void inline array_at_put(array_object array, int index, object new_value)"
        "
        array_check_bounds(array, index);
        raw_array_at_put(array, index, new_value);
        ")
    ("array_object make_array(int size)"
        "
        if (size == 0) { return woodstock->empty; }
        array_object result = (array_object)make_object(size + 1,
                                (object)woodstock->array_class);
        result->size        = size;
        return result;
        ")))
