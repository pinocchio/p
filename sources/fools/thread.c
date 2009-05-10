#include <constants.h>
#include <model.h>
#include <system.h>
#include <thread.h>
#include <assert.h>

context_object stk_idx;
context_object stk_bottom;

void init_thread() {
    stk_bottom = NEW_ARRAYED(context_object, object, STACK_SIZE);
    stk_idx = stk_bottom;
}

static void inline expand_stack() {
    assert(NULL);
}

context_object stack_claim(int size) {
    if (STACK_SIZE - (stk_idx - stk_bottom) < size) {
        expand_stack();
    }
    stk_idx += size;
    return stk_idx;
}

void pop_context() {
    stk_idx = return_context(get_context());
}

void stack_set_context() {
    stk_idx = get_context();
}

int empty_stack() {
    return stk_idx == stk_bottom;
}
