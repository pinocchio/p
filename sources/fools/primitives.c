#include <model.h>

void iplus(context_object context) {
    number_object* left = (number_object*)context->arguments->values[0].pointer;
    number_object first = context->arguments->values[1].number;
    number_object second = context->arguments->values[2].number;
    *left = make_number(first->value + second->value);
}

void iminus(context_object context) {
    number_object* left = (number_object*)context->arguments->values[0].pointer;
    number_object first = context->arguments->values[1].number;
    number_object second = context->arguments->values[2].number;
    *left = make_number(first->value - second->value);
}
