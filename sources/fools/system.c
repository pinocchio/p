#include <system.h>
#include <thread.h>
#include <stdio.h>

#define if_selector(selector, symb, todo)\
    if (selector.pointer == symb.pointer)\
        return todo();

void doesnotunderstand(const char* class, object selector) {
    printf("DNU: %s>>%s\n", class, selector.string->value);
    assert(NULL);
}

// Context handling

void inline new_target(context_object context, object target) {
    context->self = target;
    context->code = ntarget(header(target.pointer));
}

// Transferring primitives.

void inline native() {
    // Finds the code which was tagged with native and executes it.
    // Code tagged with native has to know by itself on which level it
    // executes!
    object code = get_context()->self;
    while (pheader(code.pointer) != ((object)fools_system->native).pointer) {
        code = header(code.pointer);
    }
    get_context()->code = ntarget(code);
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
