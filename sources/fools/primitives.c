#include <model.h>

void iplus(number_object left, number_object first, number_object second) {
    left->value = first->value + second->value;
}

void iminus(number_object left, number_object first, number_object second) {
    left->value = first->value - second->value;
}
