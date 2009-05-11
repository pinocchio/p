#include <system.h>
#include <thread.h>

// ilist>>return:env:continue:
static void inline ilist_continue_eval() {
    context_object ilist_context = get_context();
    int index = number_value(argument_at(ilist_context, 2).number);

    ilist_object ilist = ilist_context->interpreter.ilist;
    int size = number_value(ilist->size) - 1;

    object env = argument_at(ilist_context, 0);
    object instruction = (object)raw_ilist_at(ilist, index);

    if (index < size) {
        set_argument(ilist_context, 2, (object)make_number(index + 1));
    } else { // tailcall.
        pop_context();
        dec();
    }

    context_object context = make_context(instruction, 2);
    set_message(context, EVAL);
    set_argument(context, 1, env);

    set_transfer(context);
}

// ilist>>eval:
static void inline ilist_eval() {
    debug("ilist>>eval:\n");
    context_object ilist_context = get_context();
    assert_argsize(ilist_context, 2);
    ilist_object ilist = ilist_context->interpreter.ilist;

    if (number_value(ilist->size) == 0) {
        pop_context();
        debug("ret>>ilist>>eval(0):\n");
        return;
    }

    if (number_value(ilist->size) == 1) {
        object instruction = (object)raw_ilist_at(ilist, 0);
        new_target(ilist_context, instruction);
        debug("ret>>ilist>>eval(1):\n");
        return;
    }

    object env = argument_at(ilist_context, 1);

    pop_context();

    ilist_context = make_empty_context(3);
    ilist_context->interpreter = (object)ilist;
    set_argument(ilist_context, 0, env);
    set_argument(ilist_context, 2, (object)make_number(0));
    ilist_context->code = &ilist_continue_eval;

    set_transfer(ilist_context);

    debug("ret>>ilist>>eval(n):\n");
    inc();
}

void ilist_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         ilist_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("ilist", selector);
}

// Object creation
ilist_object make_ilist(int size) {
    ilist_object result = NEW_ARRAYED(ilist_object, object, size + 1);
    header(result)      = (object)fools_system->ilist_class;
    result->size        = make_number(size);
    return result;
}

// Accessors
number_object inline ilist_size(ilist_object ilist) {
    return ilist->size;
}

void inline ilist_check_bounds(ilist_object ilist, int index) {
    assert(0 <= index);
    assert(index < number_value(ilist_size(ilist)));
}

object inline raw_ilist_at(ilist_object ilist, int index) {
    return ilist->instructions[index];
}

void inline raw_ilist_at_put(ilist_object ilist, int index, object value) {
    ilist->instructions[index] = value;
}

void inline ilist_at_put(ilist_object ilist, int index, object value) {
    ilist_check_bounds(ilist, index);
    raw_ilist_at_put(ilist, index, value);
}
