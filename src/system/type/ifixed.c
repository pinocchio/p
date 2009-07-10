#include <system.h>
#include <assert.h>
#include <thread.h>

static ifixed_object inline ifixed_descr(object inst) {
    return (ifixed_object)pheader(inst.pointer);
}

with_pre_eval1(ifixed_at, context, idx,
    object self = context->self;
    ifixed_object ifixed = ifixed_descr(self);

    // XXX breaks encapsulation.
    int index = number_value(idx.number);
    debug("at %i (size %i)\n", index, ifixed->size);

    assert(0 <= index);
    assert(index < ifixed->size);

    return_from_context(context, object_at(self.object, index));
);

with_pre_eval2(ifixed_at_put, context, idx, value,
    object self = context->self;
    ifixed_object ifixed = ifixed_descr(self);

    // XXX breaks encapsulation.
    int index = number_value(idx.number);
    debug("an_ifixed>>at:put: (%i of %i)\n", index, ifixed->size);

    assert(0 <= index);
    assert(index < ifixed->size);
    
    object_at_put(self.object, index, value);

    pop_context();
    debug("ret>>an_ifixed>>at:put:\n");
);

static void inline ifixed_size() {
    context_object context = get_context();
    ifixed_object ifixed = context->self.ifixed;
    return_from_context(context, (object)make_number(ifixed->size));
}

static object inline ifixed_inst(ifixed_object ifixed) {
    return (object)ifixed;
}

static void inline ifixed_new() {
    debug("ifixed>>new\n");
    context_object context = get_context();
    ifixed_object ifixed = context->self.ifixed;
    object_object instance = make_object(ifixed->size, ifixed_inst(ifixed));
    return_from_context(context, (object)instance);
    debug("ret>>ifixed>>new\n");
}

define_bootstrapping_type(ifixed, 
    // instance
    if_selector(OBJECT_AT,        ifixed_at);
    if_selector(OBJECT_AT_PUT,    ifixed_at_put);,
    // class
    if_selector(NEW,          ifixed_new);
    if_selector(SIZE,         ifixed_size);
)

with_pre_eval3(ifixed_class_new, context, dispatch, delegate, size,
    object ifixed           = make_class(size, &ifixed_dispatch);
    ifixed.ifixed->delegate = delegate;
    ifixed.ifixed->dispatch = dispatch;
    return_from_context(context, ifixed);
);

with_pre_eval1(ifixed_stub_class_new, context, size,
    object ifixed           = make_class(size, &ifixed_stub_dispatch);
    header(ifixed.pointer)  = fools_system->ifixed_stub_class;
    return_from_context(context, ifixed);
)

define_bootstrapping_class(fixed,
    // instance
    if_selector(DISPATCH_DELEGATE_SIZE, ifixed_class_new);
    if_selector(WITH_SIZE, ifixed_stub_class_new);,
    // class
    // XXX using selector to avoid compiler warnings
    if (0) { printf("%p\n", selector.pointer); }
)

// Object creation
object make_class(object size, transfer_target cdispatch) {
    new_instance(ifixed);
    // XXX breaking encapsulation
    result->size            = number_value(size.number);
    result->cdisp           = (object)cdispatch;
    return (object)result;
}
