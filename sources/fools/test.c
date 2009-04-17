#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>

#define SETUP\
    bootstrap();

void test_array() {
    SETUP;

    array_object a = make_array(100);
    assert(a->size->value == 100);
    int i;
    for(i = 0; i < 100; i++) {
        a->values[i] = (object)make_number(i);
    }
    
    for(i = 0; i < 100; i++) {
        assert(a->values[i].number->value == i);
    }
}

void native_test_single_arg_5(context_object c) {
    assert(c->arguments->size->value == 1);
    assert(c->arguments->values[0].number->value == 5);
    c->arguments->values[0].number->value = 6;
}

void test_native_layout() {
    SETUP;
    printf("%lo\n", header(fools_system->native));
    printf("%lo\n", fools_system->native);
    assert(header(fools_system->native) == fools_system->native);
}

void test_native() {
    SETUP;

    native_object n = make_native(&native_test_single_arg_5);
    *header(n) = (object)fools_system->native;

    context_object inner = make_context((object)n, 1);
    inner->arguments->values[0] = (object)make_number(5);

    context_object outer = make_context((object)NULL, 1);
    outer->arguments->values[0] = (object)inner;

    native(outer);

    assert(inner->arguments->values[0].number->value == 6);
}

void test_transfer() {
    SETUP;

    native_object n = make_native(&native_test_single_arg_5);
    *header(n) = (object)fools_system->native;

    context_object inner = make_context((object)n, 1);
    inner->arguments->values[0] = (object)make_number(5);

    transfer(inner);

    assert(inner->arguments->values[0].number->value == 6);
}

int main() {

    test_array();
    test_native_layout();
    test_native();   
    test_transfer();

    return 0;
    
}
