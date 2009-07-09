#include <system.h>
#include <thread.h>
#include <stdio.h>

#define if_selector(selector, symb, todo)\
    if (selector.pointer == symb.pointer)\
        return todo();

void doesnotunderstand(const wchar_t* class, object selector) {
    wchar_t buffer[1024];
    debug("does not understand\n");
    swprintf(buffer, 1024, L"DNU: %ls>>%ls\n", class, selector.string->value);
    wdebug(buffer);
    object message = (object)make_string(buffer);
    pop_context();
    context_object context = make_context(fools_system->error, 1);
    set_argument(context, 0, message);
}

// Context handling

void inline new_target(context_object context, object target) {
    context->self = target;
    context->code = ntarget(header(target.pointer));
}

// Meta-interpreter just takes the next action and performs it.
object inline transfer() {
    reset_debug();
    while (!empty_stack()) {
        // printf("self: %p\n", get_context()->self.pointer);
        get_context()->code();
    }
    return get_stk_return();
}

// AST Handling

static void switch_env() {
    context_object receiver = get_context();
    object env = argument_at(receiver, 1);
    return_context(receiver)->env = env;
    pop_context();
}

// o>>preEval:
void pre_eval_env() {
    debug("o>>preEval:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 2);

    object self     = receiver->self;
    object env      = receiver->env;
    object env_arg  = argument_at(receiver, 1);

    pop_context();
    receiver = make_context(self, 1);
    set_message(receiver, EVAL);

    receiver = make_empty_context(2);
    receiver->code = &switch_env;

    context_object context = make_context(env_arg, 1);
    context->env = env;
    set_message(context, EVAL);
    set_argument(context, 1, env);

    debug("ret>>o>>preEval:\n");
}

native_class_object inline class_descr(object inst) {
    return (native_class_object)pheader(inst.pointer);
}

void inline object_delegate() {
    debug("object>>delegate\n");
    context_object context = get_context();
    native_class_object cls = class_descr(context->self);
    return_from_context(context, cls->delegate);
    debug("ret>>object>>delegate\n");
}

void inline identity() {
    context_object context = get_context();
    return_from_context(context, context->self);
}
