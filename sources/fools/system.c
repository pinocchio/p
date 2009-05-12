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
object inline transfer(context_object context) {
    while (!empty_stack()) {
        get_context()->code();
    }
    return get_stk_return();
}

// AST Handling

// o>>preEval:env:
void pre_eval_env() {
    debug("o>>preEval:env:\n");
    context_object receiver = get_context();
    assert_argsize(receiver, 3);

    object self     = receiver->self;
    object env      = argument_at(receiver, 1);
    object env_arg  = argument_at(receiver, 2);

    pop_context();
    receiver = make_context(self, 2);
    set_message(receiver, EVAL);

    context_object context = make_context(env_arg, 2);
    set_message(context, EVAL);
    set_argument(context, 1, env);

    debug("ret>>o>>preEval:env:\n");
    set_transfer(context);
}
