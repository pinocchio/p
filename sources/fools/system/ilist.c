#include <system.h>
#include <thread.h>

// ilist>>eval:
static void inline ilist_eval() {
    debug("ilist>>eval\n");
    context_object ilist_context = get_context();
    ilist_object ilist = ilist_context->self.ilist;

    if (ilist_size(ilist) == 0) {
        pop_context();
        debug("ret>>ilist>>eval(0)\n");
        return;
    }

    int end = ilist_size(ilist) - 1;

    object instruction = (object)raw_ilist_at(ilist, end);
    new_target(ilist_context, instruction);
    object env = ilist_context->env;

    // Lign up all the context frames necessary to perform
    // the whole ilist.
    for (--end; 0 <= end; end--) {
        context_object ilist_pop = make_empty_context(2);
        ilist_pop->code = &pop_context;
        instruction = (object)raw_ilist_at(ilist, end);
        ilist_context = make_context(instruction, 1);
        set_message(ilist_context, EVAL);
        ilist_context->env = env;
    }

    debug("ret>>ilist>>eval(n)\n");
}

void ilist_dispatch() {
    dispatch_header(context, selector);
    if_selector(selector, EVAL,         ilist_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("ilist", selector);
}

// Object creation
ilist_object make_ilist(int size) {
    ilist_object result = NEW_ARRAYED(ilist_object, object, size + 1);
    header(result)      = (object)fools_system->ilist_class;
    result->size        = size;
    return result;
}

// Accessors
int inline ilist_size(ilist_object ilist) {
    return ilist->size;
}

void inline ilist_check_bounds(ilist_object ilist, int index) {
    assert(0 <= index);
    assert(index < ilist_size(ilist));
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
