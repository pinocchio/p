(bootstrapping-type Class type ((cdisp "object") (dispatch "object")
                                   (delegate "object") (size "int"))
   ((dispatch:delegate:size: (w_disp w_del w_size)
        "
        cast(size, w_size, smallint);
        object ifixed = make_class(size->value, &object_dispatch);
        ifixed.ifixed->delegate = w_del;
        ifixed.ifixed->dispatch = w_disp;
        return_from_context(context, ifixed);
        ")
    (size: (w_size)
        "
        cast(size, w_size, smallint);
        return_from_context(context, incomplete_fixed_class(size->value));
        "))
   ()
   (("object make_class(int size, transfer_target cdispatch)"
        "
        class_object result = NEW(struct class);
        header(result) = (object)woodstock->object_t_class;
        result->size    = size;
        result->cdisp   = (object)cdispatch;
        return (object)result;
        ")
    ("object inline incomplete_fixed_class(int size)"
        "
        object ifixed = make_class(size, &object_stub_dispatch);
        header(ifixed.pointer) = woodstock->object_t_stub_class;
        return ifixed;
        ")))
