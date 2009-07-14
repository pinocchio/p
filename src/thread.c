#include <constants.h>
#include <model.h>
#include <system.h>
#include <thread.h>
#include <assert.h>

#define ctx_size (sizeof(struct context) / sizeof(object))

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

static void inline set_context(context_object context) {
    stk_idx = context;
}

context_object inline get_context() {
    return stk_idx;
}

void inline pop_context() {
    set_context(return_context(get_context()));
}

int inline empty_stack() {
    return stk_idx == stk_return;
}

object inline get_stk_return() {
    return return_value(stk_return);
}

void inline return_to_context(context_object context, object value) {
    set_argument(context, 1, value);
    set_context(context);
}

void inline return_from_context(context_object context, object value) {
    set_argument(return_context(context), 1, value);
    pop_context();
}

void inline set_message(context_object context, object msg) {
    raw_array_at_put(&context->arguments, 0, msg);
}

void inline set_new_message(context_object context, object msg) {
    context->code = ntarget(header(pheader(pheader(context))));
    set_message(context, msg);
}

void inline set_argument(context_object context, int index, object value) {
    raw_array_at_put(&context->arguments, index, value);
}

object inline argument_at(context_object context, int index) {
    return raw_array_at(&context->arguments, index);
}

object inline message(context_object context) {
    return argument_at(context, 0);
}

int inline context_size(context_object context) {
    return array_size(&context->arguments);
}

context_object inline return_context(context_object context) {
    int size = context_size(context);
    return context - size - ctx_size;
}

// Object creation
context_object make_context(object self, int size) {
    context_object result   = stack_claim(size + ctx_size);
    result->self            = self;
    result->code            = ntarget(header(self.pointer));
    result->arguments.size  = size;
    return result;
}

context_object make_empty_context(int size) {
    context_object result   = stack_claim(size + ctx_size);
    result->arguments.size  = size;
    return result;
}

// Meta-interpreter just takes the next action and performs it.
object inline transfer() {
    reset_debug();
    return continue_transfer();
}

object inline continue_transfer() {
    while (!empty_stack()) {
        // printf("self: %p\n", get_context()->self.pointer);
        get_context()->code();
    }
    return get_stk_return();
}
