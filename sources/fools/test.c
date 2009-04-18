#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>

#define SETUP\
    bootstrap();

void test_header() {
    string_object string1 = NEW(struct string);
    string_object string2 = NEW(struct string);
    
    header(string1)       = (object) string2;
    assert(header(string1).string == string2);
}

void test_array() {
    SETUP;

    array_object a = make_array(100);
    assert(a->size->value == 100);
    int i;
    for(i = 0; i < 100; i++) {
        array_at_put(a, i, (object)make_number(i));
    }
    
    for(i = 0; i < 100; i++) {
        assert(array_at(a, i).number->value == i);
    }
}

void test_native_layout() {
    SETUP;
    assert(header(fools_system->native).native == fools_system->native);
    assert(native_target(fools_system->native) == &native);
}

void native_test_single_arg_5(context_object c) {
    assert(c->arguments->size->value == 1);
    assert(c->arguments->values[0].number->value == 5);
    c->arguments->values[0].number->value = 6;
}

void test_native() {
    SETUP;

    native_object n = make_native(&native_test_single_arg_5);
    header(n) = (object)fools_system->native;

    context_object inner = make_context((object)n, 1);
    inner->arguments->values[0] = (object)make_number(5);

    context_object outer = make_context((object)fools_system->nil, 1);
    outer->arguments->values[0] = (object)inner;

    native(outer);

    assert(inner->arguments->values[0].number->value == 6);
}

void test_transfer() {
    SETUP;

    native_object n = make_native(&native_test_single_arg_5);
    header(n) = (object)fools_system->native;
    
    context_object inner = make_context((object)n, 1);
    inner->arguments->values[0] = (object)make_number(5);

    transfer(inner);

    assert(inner->arguments->values[0].number->value == 6);
}

int main() {
    
    test_header();
    test_array();
    test_native_layout();
    test_native();   
    test_transfer();

    return 0;
    
}
