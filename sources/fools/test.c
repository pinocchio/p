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
    assert(number_value(array_at(c->arguments, 0).number) == 5);
    array_at(c->arguments, 0).number->value = 6;
}

void test_native() {
    SETUP;

    native_object n = make_native(&native_test_single_arg_5);
    header(n) = (object)fools_system->native;

    context_object inner = make_context((object)n, 1);
    array_at_put(inner->arguments, 0, (object)make_number(5));

    context_object outer = make_context((object)fools_system->nil, 1);
    array_at_put(outer->arguments, 0, (object)inner);

    native(outer);

    assert(number_value(array_at(inner->arguments, 0).number) == 6);
}

void test_dict() {
    SETUP;

    dict_object dict = make_dict(2);

    string_object k1 = make_string("One");
    string_object k2 = make_string("Two");
    string_object k3 = make_string("Three");
    number_object v1 = make_number(1);
    number_object v2 = make_number(2);

    dict_at_put(dict, 0, (object)k1, (object)v1);
    dict_at_put(dict, 1, (object)k2, (object)v2);
    
    assert(dict_at(dict, (object)k1).number == v1);
    assert(dict_at(dict, (object)k2).number == v2);
    assert(dict_at(dict, (object)k3).nil == fools_system->nil);
}

void test_transfer() {
    SETUP;

    native_object n = make_native(&native_test_single_arg_5);
    header(n) = (object)fools_system->native;
    
    context_object inner = make_context((object)n, 1);
    array_at_put(inner->arguments, 0, (object)make_number(5));

    transfer(inner);

    assert(number_value(array_at(inner->arguments, 0).number) == 6);
}

int main() {
    
    test_header();
    test_array();
    test_native_layout();
    test_native();   
    test_transfer();
    test_dict();

    return 0;
    
}
