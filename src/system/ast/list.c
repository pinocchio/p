#include <system.h>
#include <thread.h>
#include <print.h>

list_object make_list(int size) {
        list_object result = NEW_ARRAYED(list_object, object, size + 1);
        header(result)         = (object)woodstock->list_class;
        result->size           = size;
        return result;
        }

int inline list_size(list_object list) {
        return list->size;
        }

void inline list_check_bounds(list_object list, int index) {
        error_guard(0 <= index,
            "InstructionList index out of bounds. (< 0)");
        error_guard(index < list_size(list),
            "InstructionList index out of bounds. (> limit)");
        }

object inline raw_list_at(list_object list, int index) {
        return list->instructions[index];
        }

void inline raw_list_at_put(list_object list, int index, object value) {
        list->instructions[index] = value;
        }

void inline list_at_put(list_object list, int index, object value) {
        list_check_bounds(list, index);
        raw_list_at_put(list, index, value);
        }

with_pre_eval0(gen_list_eval, context,     
        list_object self = context->self.list;

        if (list_size(self) == 0) {
            pop_context();
            debug("ret>>list>>eval(0)\n");
            return;
        }

        int end = list_size(self) - 1;

        object instruction = (object)raw_list_at(self, end);
        new_target(context, instruction);
        object env = context->env;

        // Lign up all the context frames necessary to perform
        // the whole list.
        for (--end; 0 <= end; end--) {
            context         = make_empty_context(2);
            context->code   = &pop_context;
            instruction     = (object)raw_list_at(self, end);
            context         = make_context(instruction, 1);
            set_message(context, EVAL);
            context->env    = env;
        }
        )
with_pre_eval1(gen_list_eval_col_, context, w_env, 
        context->env = w_env;
        gen_list_eval();
        )
with_pre_eval1(gen_list_objectat_col_, context, w_idx, 
        array_object array = context->self.array;
        cast(index, w_idx, smallint);
        return_from_context(context, array_at(array, index->value));
        )
with_pre_eval0(gen_list_size, context, 
        object size = (object)make_smallint(context->self.array->size);    
        return_from_context(context, size);
        )

define_bootstrapping_type(list,
    // instance
    if_selector(EVAL, gen_list_eval);
    if_selector(EVAL_, gen_list_eval_col_);
    if_selector(OBJECT_AT_, gen_list_objectat_col_);
    if_selector(SIZE, gen_list_size);
,
    // class
)
