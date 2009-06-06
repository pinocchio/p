#include <system.h>
#include <thread.h>

ifixed_object inline ifixed_descr(object inst) {
    return (ifixed_object)pheader(inst.pointer);
}

static void ifixed_delegate() {
    debug("an_ifixed>>delegate\n");
    context_object context = get_context();
    ifixed_object ifixed = ifixed_descr(context->self);
    return_from_context(context, ifixed->delegate);
    debug("ret>>an_ifixed>>delegate\n");
}

with_pre_eval1(ifixed_at, context, idx,
    object self = context->self;
    ifixed_object ifixed = ifixed_descr(self);

    // XXX breaks encapsulation.
    int index = number_value(idx.number);
    int size = number_value(ifixed->size.number);
    debug("at %i (size %i)\n", index, size);

    assert(0 <= index);
    assert(index < size);

    return_from_context(context, object_at(self.object, index));
);

with_pre_eval2(ifixed_at_put, context, idx, value,
    object self = context->self;
    ifixed_object ifixed = ifixed_descr(self);

    // XXX breaks encapsulation.
    int index = number_value(idx.number);
    int size = number_value(ifixed->size.number);
    debug("an_ifixed>>at:put: (%i of %i)\n", index, size);

    assert(0 <= index);
    assert(index < size);
    
    object_at_put(self.object, index, value);

    pop_context();
    debug("ret>>an_ifixed>>at:put:\n");
);

void ifixed_dispatch() {
    debug("ifixedShiftLevel\n");
    context_object context = get_context();

    if (context_size(context) >= 1) {
        object selector = message(context);
        if_selector(selector, DELEGATE,         ifixed_delegate);
        if_selector(selector, OBJECT_AT,        ifixed_at);
        if_selector(selector, OBJECT_AT_PUT,    ifixed_at_put);
    }

    fallback_shift(context);
    debug("ret>>ifixedShiftLevel\n");
}

accessor_for(ifixed, size)

static object inline ifixed_inst(ifixed_object ifixed) {
    return (object)ifixed;
}

static void inline ifixed_new() {
    debug("ifixed>>new\n");
    // XXX breaking encapsulation of the number. should
    // check it's actually a number!
    context_object context = get_context();
    ifixed_object ifixed = context->self.ifixed;
    int size = number_value(ifixed->size.number);
    object_object instance = make_object(size, ifixed_inst(ifixed));
    return_from_context(context, (object)instance);
    debug("ret>>ifixed>>new\n");
}

define_bootstrapping_class(ifixed_class, 
    if_selector(selector, NEW,          ifixed_new);
    if_selector(selector, SIZE,         ifixed_size);
)

with_pre_eval3(ifixed_class_new, context, dispatch, delegate, size,
    object ifixed = make_class(dispatch, delegate, size, &ifixed_dispatch);
    return_from_context(context, ifixed);
);

with_pre_eval1(ifixed_stub_class_new, context, size,
    object ifixed = make_stub_class(size, &ifixed_dispatch);
    return_from_context(context, ifixed);
)

define_bootstrapping_class(ifixed_metaclass,
    if_selector(selector, DISPATCH_DELEGATE_SIZE, ifixed_class_new);
    if_selector(selector, WITH_SIZE, ifixed_stub_class_new);
)

// Object creation
object make_class(object dispatch, object delegate, object size,
                  transfer_target cdispatch) {
    new_instance(ifixed);
    result->delegate        = delegate;
    result->dispatch        = dispatch;
    result->size            = size;
    result->cdisp           = (object)cdispatch;
    return (object)result;
}

object make_stub_class(object size, transfer_target cdispatch) {
    new_instance(ifixed);
    header(result)          = fools_system->ifixed_stub_class;
    result->size            = size;
    result->cdisp           = (object)cdispatch;
    return (object)result;
}
