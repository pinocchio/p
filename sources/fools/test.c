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
        assert(array_at(a, i).nil == fools_system->nil);
        array_at_put(a, i, (object)make_number(i));
    }
    
    for(i = 0; i < 100; i++) {
        assert(array_at(a, i).number->value == i);
    }
}

void test_native_layout() {
    SETUP;
    assert(header(fools_system->native.pointer).native == fools_system->native.native);
    assert(native_target(fools_system->native.native) == &native);
}

void native_test_single_arg_5(context_object c) {
    assert(c->arguments->size->value == 1);
    assert(number_value(array_at(c->arguments, 0).number) == 5);
    array_at(c->arguments, 0).number->value = 6;
}

void test_native() {
    SETUP;

    native_object n = make_native(&native_test_single_arg_5);

    context_object inner = make_context((object)n, 1);
    array_at_put(inner->arguments, 0, (object)make_number(5));

    context_object outer = make_context((object)fools_system->nil, 1);
    array_at_put(outer->arguments, 0, (object)inner);

    native(outer);

    assert(number_value(array_at(inner->arguments, 0).number) == 6);
}

void test_transfer() {
    SETUP;

    native_object n = make_native(&native_test_single_arg_5);
    
    context_object inner = make_context((object)n, 1);
    array_at_put(inner->arguments, 0, (object)make_number(5));

    transfer(inner);

    assert(number_value(array_at(inner->arguments, 0).number) == 6);
}

void test_string_equals() {
    SETUP;

    assert(string_equals(make_string("a string"), make_string("a string")));
    assert(!string_equals(make_string("a string"), make_string("b string")));
}

void test_dict() {
    SETUP;

    dict_object dict = make_dict(2);

    string_object k1 = make_string("One");
    string_object k2 = make_string("Two");
    string_object k3 = make_string("Three");
    number_object v1 = make_number(1);
    number_object v2 = make_number(2);

    dict_at_put(dict, (object)k1, (object)v1);
    dict_at_put(dict, (object)k2, (object)v2);
    
    assert(dict_at(dict, (object)k1).number == v1);
    assert(dict_at(dict, (object)k2).number == v2);
    assert(dict_at(dict, (object)k3).nil == fools_system->nil);
}

void test_transfer_dict() {
    SETUP;

    dict_object dict = make_dict(2);

    string_object k1 = make_string("One");
    string_object k2 = make_string("Two");
    string_object k3 = make_string("Three");
    number_object v1 = make_number(1);
    number_object v2 = make_number(2);

    context_object context = make_context((object)dict, 4);

    array_at_put(context->arguments, 0, symbol_known_to_the_vm("at:put:"));
    array_at_put(context->arguments, 1, (object)k1);
    array_at_put(context->arguments, 2, (object)v1);

    transfer(context);

    array_at_put(context->arguments, 1, (object)k2);
    array_at_put(context->arguments, 2, (object)v2);

    transfer(context);

    assert(dict_at(dict, (object)k1).number == v1);
    assert(dict_at(dict, (object)k2).number == v2);
    assert(dict_at(dict, (object)k3).nil == fools_system->nil);

    context = make_context((object)dict, 3);
    object result;

    array_at_put(context->arguments, 0, symbol_known_to_the_vm("at:"));
    array_at_put(context->arguments, 1, (object)k1);
    array_at_put(context->arguments, 2, (object)(pointer)&result);

    transfer(context);
    assert(result.number == v1);

    array_at_put(context->arguments, 1, (object)k2);

    transfer(context);
    assert(result.number == v2);

    array_at_put(context->arguments, 1, (object)k3);

    transfer(context);
    assert(result.nil == fools_system->nil);
}

int main() {
    
    test_header();
    test_array();
    test_native_layout();
    test_native();   
    test_transfer();
    test_string_equals();
    test_dict();
    test_transfer_dict();

    return 0;
}
