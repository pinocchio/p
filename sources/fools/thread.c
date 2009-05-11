#include <constants.h>
#include <model.h>
#include <system.h>
#include <thread.h>
#include <assert.h>

context_object stk_idx;
context_object stk_bottom;
context_object stk_return;

void inline init_stack(int size) {
    stk_bottom  = NEW_ARRAYED(context_object, object, size);
    stk_idx     = stk_bottom;
    stk_return  = make_empty_context(2);
}

void init_thread() {
    init_stack(STACK_SIZE);
}

static void expand_stack() {
    assert(NULL);
}

context_object inline stack_claim(int size) {
    if (STACK_SIZE - (stk_idx - stk_bottom) < size) {
        expand_stack();
    }
    stk_idx += size;
    return stk_idx;
}

void inline pop_context() {
    stk_idx = return_context(get_context());
}

int inline empty_stack() {
    return stk_idx == stk_return;
}

object inline get_stk_return() {
    return return_value(stk_return);
}

context_object inline get_context() {
    return stk_idx;
}

void inline set_transfer(context_object context) {
    stk_idx = context;
}
