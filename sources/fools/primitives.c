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
    object* left = (object*)array_at(context->arguments, 0).pointer;
    object key   = array_at(context->arguments, 1);
    *left        = dict_at(context->self.dict, key);
}

void prim_dict_at_put(context_object context) {
    number_object index = array_at(context->arguments, 0).number;
    object key          = array_at(context->arguments, 1);
    object value        = array_at(context->arguments, 2);
    dict_at_put(context->self.dict, number_value(index), key, value);
}
