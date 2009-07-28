#include <system.h>
#include <thread.h>

with_pre_eval3(ifixed_class_new, context, dispatch, delegate, w_size,
    cast(size, w_size, smallint);
    object ifixed           = make_class(size->value, &object_dispatch);
    ifixed.ifixed->delegate = delegate;
    ifixed.ifixed->dispatch = dispatch;
    return_from_context(context, ifixed);
);

object inline incomplete_fixed_class(int size) {
    object ifixed = make_class(size, &object_stub_dispatch);
    header(ifixed.pointer) = woodstock->object_t_stub_class;
    return ifixed;
}

with_pre_eval1(ifixed_stub_class_new, context, w_size,
    cast(size, w_size, smallint);
    return_from_context(context, incomplete_fixed_class(size->value));
)

define_bootstrapping_type(fixed,
    // instance
    if_selector(DISPATCH_DELEGATE_SIZE_, ifixed_class_new);
    if_selector(SIZE_, ifixed_stub_class_new);,
    // class
    // XXX using selector to avoid compiler warnings
    if (0) { printf("%p\n", selector.pointer); }
)

// Object creation
object make_class(int size, transfer_target cdispatch) {
    new_instance(object_t);
    result->size            = size;
    result->cdisp           = (object)cdispatch;
    return (object)result;
}
