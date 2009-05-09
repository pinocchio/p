#include <system.h>
#include <stdio.h>

#define if_selector(selector, symb, todo)\
    if (selector.pointer == symb.pointer)\
        return todo();

void doesnotunderstand(const char* class, object selector) {
    printf("DNU: %s>>%s\n", class, selector.string->value);
    assert(NULL);
}

// Context handling

context_object global_context;

void inline set_transfer(context_object context) {
    global_context = context;
}

void inline return_from_context(context_object context) {
    return set_transfer(return_context(context));
}

context_object inline get_context() {
    return global_context;
}

void inline new_target(context_object context, object target) {
    header(context) = target;
    context->code = ntarget(header(target.pointer));
}

// Transferring primitives.

void inline native() {
    // Finds the code which was tagged with native and executes it.
    // Code tagged with native has to know by itself on which level it
    // executes!
    object code = (object)global_context;
    while (pheader(code.pointer) != ((object)fools_system->native).pointer) {
        code = header(code.pointer);
    }
    global_context->code = ntarget(code);
}

void inline transfer(context_object context) {

    global_context = context;

    while (((object)global_context).nil != fools_system->nil) {
        global_context->code();
    }
}


// AST Handling

// o>>preEval:env:
void pre_eval_env() {
    debug("o>>preEval:env:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);

    object env      = argument_at(receiver, 1);
    object env_arg  = argument_at(receiver, 2);

    context_object context = make_context(env_arg, 2);
    set_message(context, EVAL);
    set_argument(context, 1, env);

    receiver->arguments = make_array(2);
    set_new_message(receiver, EVAL);

    context->return_context = (object)receiver;

    debug("ret>>o>>preEval:env:\n");
    set_transfer(context);
}
/*
// Native class handling

void with_native_class_lookup() {
    context_object receiver_context = get_context();
                                    // call -> object -> class
    native_class_object class       = header(pheader(receiver_context)).native_class;
    dict_object natives             = class->natives;
    object selector                 = message(receiver_context);
    object native                   = dict_at(natives, selector);

    if (native.nil == fools_system->nil) {
        debug("non-native: %s sent \n",
                selector.string->value);
        //header(class_context) = class->class;
        assert(NULL);
    } else {
        debug("native: %s\n", selector.string->value);
        receiver_context->code = ntarget(native);
    }
}*/


