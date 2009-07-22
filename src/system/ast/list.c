#include <system.h>
#include <thread.h>
#include <scheme/natives.h>
#include <system/type/array.h>

// ast_list>>eval:
static void inline ast_list_eval() {
    debug("ast_list>>eval\n");
    context_object ast_list_context = get_context();
    ast_list_object ast_list = ast_list_context->self.ast_list;

    if (ast_list_size(ast_list) == 0) {
        pop_context();
        debug("ret>>ast_list>>eval(0)\n");
        return;
    }

    int end = ast_list_size(ast_list) - 1;

    object instruction = (object)raw_ast_list_at(ast_list, end);
    new_target(ast_list_context, instruction);
    object env = ast_list_context->env;

    // Lign up all the context frames necessary to perform
    // the whole ast_list.
    for (--end; 0 <= end; end--) {
        context_object ast_list_pop = make_empty_context(2);
        ast_list_pop->code          = &pop_context;
        instruction              = (object)raw_ast_list_at(ast_list, end);
        ast_list_context            = make_context(instruction, 1);
        set_message(ast_list_context, EVAL);
        ast_list_context->env       = env;
    }

    debug("ret>>ast_list>>eval(n)\n");
}

with_pre_eval1(ast_list_new, context, w_size,
    cast(size, w_size, number);
    return_from_context(context, (object)make_ast_list(size->value));
)

define_bootstrapping_type(ast_list, 
    // instance
    if_selector(EVAL,  ast_list_eval);
    if_selector(EVAL_, pre_eval_env);
    // instance array
    if_selector(OBJECT_AT_,        iarray_at);
    if_selector(SIZE,              iarray_size);,
    // class
    if (selector.pointer != selector.pointer) { };
)

// Object creation
ast_list_object make_ast_list(int size) {
    ast_list_object result = NEW_ARRAYED(ast_list_object, object, size + 1);
    header(result)         = (object)woodstock->ast_list_class;
    result->size           = size;
    return result;
}

// Accessors
int inline ast_list_size(ast_list_object ast_list) {
    return ast_list->size;
}

void inline ast_list_check_bounds(ast_list_object ast_list, int index) {
    error_guard(0 <= index,
        "InstructionList index out of bounds. (< 0)");
    error_guard(index < ast_list_size(ast_list),
        "InstructionList index out of bounds. (> limit)");
}

object inline raw_ast_list_at(ast_list_object ast_list, int index) {
    return ast_list->instructions[index];
}

void inline raw_ast_list_at_put(ast_list_object ast_list, int index, object value) {
    ast_list->instructions[index] = value;
}

void inline ast_list_at_put(ast_list_object ast_list, int index, object value) {
    ast_list_check_bounds(ast_list, index);
    raw_ast_list_at_put(ast_list, index, value);
}

// Creation
preval1(ast_list_new_from_array, value,
	cast(array_value, value, array);
    ast_list_object list = make_ast_list(array_value->size);
	int i;
	for (i=0; i<array_value->size; ++i) {
		list->instructions[i] = array_value->values[i];
	}
    return_from_context(context, (object)list);
)
