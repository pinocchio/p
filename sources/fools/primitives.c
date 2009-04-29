#include <model.h>
#include <ast.h>
#include <system.h>
#include <bootstrap.h>
#include <stdio.h>

#define NDEBUG 1
#define debug if (!NDEBUG) printf

/* broken
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
    *value = dict_at(header(receiver).dict, key);
    return_from_context(receiver);
}

void prim_dict_at_put(context_object context) {
    context_object receiver = target_context(context);
    // arguments at: 0 -> selector
    object key              = array_at(receiver->arguments, 1);
    object value            = array_at(receiver->arguments, 2);
    dict_at_put(header(receiver).dict, key, value);
    return_from_context(receiver);
}
*/


