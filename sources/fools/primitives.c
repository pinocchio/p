#include <model.h>

void prim_number_plus(context_object context) {
    number_object* left     = (number_object*)array_at(context->arguments, 0).pointer;
    number_object first     = array_at(context->arguments, 1).number;
    number_object second    = array_at(context->arguments, 2).number;
    *left = make_number(first->value + second->value);
}

void prim_number_minus(context_object context) {
    number_object* left     = (number_object*)array_at(context->arguments, 0).pointer;
    number_object first     = array_at(context->arguments, 1).number;
    number_object second    = array_at(context->arguments, 2).number;
    *left = make_number(first->value - second->value);
}

void prim_dict_at(context_object context) {
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    object key              = array_at(receiver->arguments, 1);
    object* value           = (object*)array_at(receiver->arguments, 2).pointer;
    *value = dict_at(receiver->self.dict, key);
}

void prim_dict_at_put(context_object context) {
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    object key              = array_at(receiver->arguments, 1);
    object value            = array_at(receiver->arguments, 2);
    dict_at_put(receiver->self.dict, key, value);
}
