#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>

#define SETUP\
    fools_object system = bootstrap();

void test_array() {
    SETUP;

    array_object a = make_array(system, 100);
    assert(a->size->value == 100);
    int i;
    for(i = 0; i < 100; i++) {
        a->values[i] = (object)make_number(system, i);
    }
    
    for(i = 0; i < 100; i++) {
        assert(a->values[i].number->value == i);
    }
}

void native_test_single_arg_5(context_object c) {
    assert(c->arguments->size->value == 1);
    assert(c->arguments->values[0].number->value == 5);
}

void test_native() {
    SETUP;

    native_object n = make_native(&native_test_single_arg_5);
    header(n) = (object)system->native;

    context_object inner = make_context(system, (object)n, 1);
    inner->arguments->values[0] = (object)make_number(system, 5);

    context_object outer = make_context(system, (object)NULL, 1);
    outer->arguments->values[0] =  

    native(c);
}

int main() {

    test_array();
    test_native();   

    return 0;
    
}
