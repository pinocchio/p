#include <system.h>
#include <thread.h>

void ifixed_dispatcher() {
    debug("an_ifixed>>dispatcher\n");
    context_object context = get_context();
    object self = context->self;
    object interp = header(self.pointer);
    object ifixed = (object)(pointer)*PINC(interp.pointer);
    
    set_argument(return_context(context), 1, ifixed);
    pop_context();
    debug("ret>>an_ifixed>>dispatcher\n");
}

static void ifixed_at_do() {
    debug("an_ifixed>>at\n");
    context_object context = get_context();

    object self = context->self;
    object interp = header(self.pointer);
    ifixed_object ifixed = (ifixed_object)*PINC(interp.pointer);

    object idx = argument_at(context, 1);
    // XXX breaks encapsulation.
    int index = number_value(idx.number);
    int size = number_value(ifixed->size.number);
    debug("at %i (size %i)\n", index, size);

    assert(0 <= index);
    assert(index < size);
    
    set_argument(return_context(context), 1, object_at(self.object, index));
    pop_context();
    debug("ret>>an_ifixed>>at\n");
}

static void inline ifixed_at() {
    debug("an_ifixed>>at(pre)\n");
    context_object ifixed_context = get_context();
    assert_argsize(ifixed_context, 2);
    push_eval_of(ifixed_context, 1);
    ifixed_context->code = &ifixed_at_do;
    debug("ret>>an_ifixed>>at(pre)\n");
}

static void ifixed_at_put_do() {
    context_object context = get_context();
    assert_argsize(context, 3);

    object self = context->self;
    object interp = header(self.pointer);
    ifixed_object ifixed = (ifixed_object)*PINC(interp.pointer);

    object idx = argument_at(context, 1);
    // XXX breaks encapsulation.
    int index = number_value(idx.number);
    int size = number_value(ifixed->size.number);
    debug("an_ifixed>>atput (%i of %i)\n", index, size);

    assert(0 <= index);
    assert(index < size);
    
    object value = argument_at(context, 2);
    object_at_put(self.object, index, value);

    pop_context();
    debug("ret>>an_ifixed>>atput\n");
}

static void inline ifixed_at_put() {
    debug("an_ifixed>>atput(pre)\n");
    context_object ifixed_context = get_context();
    assert_argsize(ifixed_context, 2);
    push_eval_of(ifixed_context, 1);
    push_eval_of(ifixed_context, 2);
    ifixed_context->code = &ifixed_at_put_do;
    debug("ret>>an_ifixed>>atput(pre)\n");
}

void ifixed_shift_level() {

    debug("ifixedShiftLevel\n");
    
    context_object context = get_context();

    if (context_size(context) >= 1) {
        object selector = message(context);
        if_selector(selector, DISPATCH,         ifixed_dispatcher);
        if_selector(selector, OBJECT_AT,        ifixed_at);
        if_selector(selector, OBJECT_AT_PUT,    ifixed_at_put);
    }

    object env = context->env;
    object self = context->self;
    object interp = header(self.pointer);
    object dispatch = header(interp.pointer);
    
    int argsize = context_size(context);
    array_object args = make_array(argsize);
    
    for (--argsize; 0 <= argsize; argsize--) {
        raw_array_at_put(args, argsize, argument_at(context, argsize));
    }

    pop_context();
    context = make_context(dispatch, 3);
    context->env = env;
    set_argument(context, 0, self);
    set_argument(context, 1, env);
    set_argument(context, 2, (object)args);

    debug("ret>>ifixedShiftLevel\n");
}

static void inline ifixed_size() {
    debug("ifixed>>size\n");
    context_object context = get_context();
    ifixed_object ifixed = context->self.ifixed;
    set_argument(return_context(context), 1, ifixed->size);
    pop_context();
    debug("ret>>ifixed>>size\n");
}

static void inline ifixed_delegate() {
    debug("ifixed>>delegate\n");
    context_object context = get_context();
    ifixed_object ifixed = context->self.ifixed;
    set_argument(return_context(context), 1, ifixed->delegate);
    pop_context();
    debug("ret>>ifixed>>delegate\n");
}

static void inline ifixed_new() {
    debug("ifixed>>new\n");
    // XXX breaking encapsulation of the number. should
    // check it's actually a number!
    context_object context = get_context();
    ifixed_object ifixed = context->self.ifixed;
    int size = number_value(ifixed->size.number);
    object_object instance = make_object(size, ifixed->interp);
    set_argument(return_context(context), 1, (object)instance);
    pop_context();
    debug("ret>>ifixed>>new\n");
}

void ifixed_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, NEW,      ifixed_new);
    if_selector(selector, DELEGATE, ifixed_delegate);
    if_selector(selector, SIZE,     ifixed_size);
    doesnotunderstand("ifixed", selector);
}

// ifixed_class>>new:size:
static void ifixed_class_new_do() {
    debug("ifixedcls>>dispatch:delegate:size:\n");
    context_object ifixed_context = get_context();
    object ifixed =
        make_ifixed(
            argument_at(ifixed_context, 1),  // dispatch
            argument_at(ifixed_context, 2),  // delegate
            argument_at(ifixed_context, 3)); // size

    set_argument(return_context(ifixed_context), 1, ifixed);
    debug("ret>>ifixedcls>>dispatch:delegate:size:\n");
    pop_context();
}

// ifixed_class>>new:size:(pre)
static void ifixed_class_new() {
    debug("ifixedcls>>(pre)\n");
    context_object ifixed_context = get_context();
    assert_argsize(ifixed_context, 4);
    push_eval_of(ifixed_context, 1);
    push_eval_of(ifixed_context, 2);
    push_eval_of(ifixed_context, 3);
    ifixed_context->code = &ifixed_class_new_do;
    debug("ret>>ifixedcls>>(pre)\n");
}

void ifixed_class_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, DISPATCH_DELEGATE_SIZE, ifixed_class_new);
    doesnotunderstand("ifixed_class", selector);
}

// Object creation
object make_ifixed(object dispatch, object delegate, object size) {
    new_instance(ifixed);
    result->delegate        = delegate;
    result->size            = size;
    result->interp          = (object)make_object(2, dispatch);
    object_at_put(result->interp.object, 0, (object)(pointer)&ifixed_shift_level);
    object_at_put(result->interp.object, 1, (object)result);
    return (object)result;
}
