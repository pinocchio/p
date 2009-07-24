(bootstrapping-type Dictionary type ((values array))
   ((objectAt: (key)
        "
        dictionary_object dict = context->self.dict;
        array_object kv = dict->values;
        object result   = (object)woodstock->nil;
        int i;
        int limit = array_size(kv) / 2;
        for (i = 0; i < limit; i++) {
            if (raw_array_at(kv, i * 2).pointer == key.pointer) {
                result = raw_array_at(kv, i * 2 + 1);
                break;
            }
        }

        return_from_context(context, result);
        ")
    (objectAt:put: (key value)
        "
        dictionary_object dict = context->self.dict;
 
        array_object kv = dict->values;
        int i;
        int limit = array_size(dict->values) / 2;
        for (i = 0; i < limit; i++) {
            object v = raw_array_at(kv, i * 2);
            if (v.pointer == key.pointer || v.object == woodstock->nil) {
                break;
            }
        }
        
        if (i == limit) {
            kv = double_array(kv);
            dict->values = kv;
        }
 
        raw_array_at_put(kv, i * 2, key);
        raw_array_at_put(kv, i * 2 + 1, value);
 
        return_from_context(context, value);
        "))
   ((basicNew ()
        "
        return_from_context(context, (object)make_dict(2));
        "))
   (("dictionary_object make_dict(int size)"
        "
        error_guard(size>0, \"Invalid dictionary size\");
        new_instance(dictionary);
        result->values = make_array(size * 2);
        return result;
        ")
    ("array_object inline double_array(array_object values)"
        "
        int oldsize = array_size(values);
        array_object new = make_array(oldsize * 2);
        for (--oldsize; oldsize >= 0; oldsize--) {
            raw_array_at_put(new, oldsize, raw_array_at(values, oldsize));
        }
        return new;
        "))

)

