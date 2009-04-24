#include <assert.h>
#include <model.h>
#include <ast.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>

#define SETUP(name)\
    void name() { printf(#name"\n"); bootstrap();

SETUP(test_header)
    string_object string1 = NEW(struct string);
    string_object string2 = NEW(struct string);
    
    header(string1)       = (object) string2;
    assert(header(string1).string == string2);
}

SETUP(test_array)

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

SETUP(test_native_layout)
    assert(header(fools_system->native.pointer).native == fools_system->native.native);
    assert(native_target(fools_system->native.native) == &native);
}

void native_test_single_arg_5(context_object c) {
    assert(c->arguments->size->value == 1);
    assert(number_value(array_at(c->arguments, 0).number) == 5);
    array_at(c->arguments, 0).number->value = 6;
}

SETUP(test_native)

    native_object n = make_native(&native_test_single_arg_5);

    context_object inner = make_context((object)n, 1);
    array_at_put(inner->arguments, 0, (object)make_number(5));

    context_object outer = make_meta_context(inner);

    native(outer);

    assert(number_value(array_at(inner->arguments, 0).number) == 6);
}

SETUP(test_transfer)

    native_object n = make_native(&native_test_single_arg_5);
    
    context_object inner = make_context((object)n, 1);
    array_at_put(inner->arguments, 0, (object)make_number(5));

    transfer(inner);

    assert(number_value(array_at(inner->arguments, 0).number) == 6);
}

SETUP(test_string_equals) 

    assert(string_equals(make_string("a string"), make_string("a string")));
    assert(!string_equals(make_string("a string"), make_string("b string")));
}

SETUP(test_dict)

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

SETUP(test_transfer_dict)

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

SETUP(test_variable_object)
    variable_object result = make_object(10, (object)fools_system->nil);

    assert(header(result).nil == fools_system->nil);
    int i;
    for (i = 0; i < 10; i++) {
        assert(object_at(result, i).nil == fools_system->nil);
    }
}

SETUP(test_return_from_context)

    context_object from = make_context((object)fools_system->nil, 0);
    return_from_context(from);

    native_object n = make_native(&native_test_single_arg_5);
    
    context_object to = make_context((object)n, 1);
    array_at_put(to->arguments, 0, (object)make_number(5));

    from->return_context = (object)to;

    return_from_context(from);

    assert(number_value(array_at(to->arguments, 0).number) == 6);
}

SETUP(test_transfer_empty_ilist)

    ilist_object ilist = make_ilist(0);

    context_object ci = make_context((object)(instruction)ilist, 2);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("eval:"));
    array_at_put(ci->arguments, 1, (object)fools_system->nil);
    transfer(ci);
}

SETUP(test_transfer_empty_ilist_in_ilist)

    ilist_object ilist  = make_ilist(2);
    ilist_object ilist2 = make_ilist(0);

    ilist_at_put(ilist, 0, (instruction)ilist2);
    ilist_at_put(ilist, 1, (instruction)ilist2);

    context_object ci = make_context((object)(instruction)ilist, 2);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("eval:"));
    array_at_put(ci->arguments, 1, (object)fools_system->nil);

    transfer(ci);
}

SETUP(test_transfer_iconst)

    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ilist_object ilist = make_ilist(0);

    context_object ci = make_context((object)(instruction)iconst, 2);
    context_object rc = make_context((object)(instruction)ilist, 2);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("eval:"));
    array_at_put(ci->arguments, 1, (object)fools_system->nil);
    array_at_put(rc->arguments, 0, symbol_known_to_the_vm("eval:"));
    ci->return_context = (object)rc;

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v.pointer);
}

SETUP(test_return_of_ilist)

    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ilist_object ilist = make_ilist(1);
    ilist_object empty_ilist = make_ilist(0);

    ilist_at_put(ilist, 0, (instruction)iconst);

    context_object ci = make_context((object)(instruction)ilist, 2);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("eval:"));
    array_at_put(ci->arguments, 1, (object)fools_system->nil);

    context_object rc = make_context((object)(instruction)empty_ilist, 2);
    array_at_put(rc->arguments, 0, symbol_known_to_the_vm("eval:"));

    ci->return_context = (object)rc;

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v.pointer);
}

SETUP(test_icall)

    native_object n = make_native(&native_test_single_arg_5);

    icall_object icall = make_icall((object)n, 1);
    array_at_put(icall->arguments, 0, (object)make_number(5));

    eval_instruction((instruction)icall);

    assert(number_value(array_at(icall->arguments, 0).number) == 6);
}

SETUP(test_iassign_ivar)

    array_object k = make_array(1);
    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ivar_object ivar = make_ivar((object)fools_system->nil,
                                 make_number(0));

    iassign_object iassign = make_iassign(ivar, (object)(instruction)iconst);

    context_object ci = make_context((object)(instruction)iassign, 2);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("eval:"));
    array_at_put(ci->arguments, 1, (object)k);

    transfer(ci);

    assert(array_at(k, 0).pointer == v.pointer);
}

SETUP(test_ivar_read)

    array_object k = make_array(1);
    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ivar_object ivar = make_ivar((object)fools_system->nil,
                                 make_number(0));

    iassign_object iassign = make_iassign(ivar, (object)(instruction)iconst);

    context_object ci = make_context((object)(instruction)iassign, 3);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("eval:"));
    array_at_put(ci->arguments, 1, (object)k);

    transfer(ci);

    ilist_object ilist = make_ilist(0);

    ci = make_context((object)(instruction)ivar, 2);
    context_object rc = make_context((object)(instruction)ilist, 2);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("eval:"));
    array_at_put(ci->arguments, 1, (object)k);
    array_at_put(rc->arguments, 0, symbol_known_to_the_vm("eval:"));
    ci->return_context = (object)rc;

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v.pointer);
}

SETUP(test_env_lookup)

    object e1k = (object)make_string("env1 identifier");
    object e2k = (object)make_string("env2 identifier");

    object v1 = (object)make_string("v1");
    object v2 = (object)make_string("v2");
    object v3 = (object)make_string("v3");

    env_object env1 = make_env(e1k,
                               (object)fools_system->nil,
                               1);

    env_object env2 = make_env(e2k,
                               (object)env1,
                               1);

    context_object ci = make_context((object)env1, 4);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("store:at:in:"));
    array_at_put(ci->arguments, 1, v1);
    array_at_put(ci->arguments, 2, (object)make_number(0));
    array_at_put(ci->arguments, 3, e1k);

    transfer(ci);

    assert(array_at(env1->values, 0).pointer == v1.pointer);

    ci = make_context((object)env2, 4);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("store:at:in:"));
    array_at_put(ci->arguments, 1, v2);
    array_at_put(ci->arguments, 2, (object)make_number(0));
    array_at_put(ci->arguments, 3, e2k);

    transfer(ci);

    assert(array_at(env1->values, 0).pointer == v1.pointer);
    assert(array_at(env2->values, 0).pointer == v2.pointer);

    ci = make_context((object)env2, 4);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("store:at:in:"));
    array_at_put(ci->arguments, 1, v3);
    array_at_put(ci->arguments, 2, (object)make_number(0));
    array_at_put(ci->arguments, 3, e1k);

    transfer(ci);

    assert(array_at(env1->values, 0).pointer == v3.pointer);
    assert(array_at(env2->values, 0).pointer == v2.pointer);

    ci = make_context((object)env2, 3);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("fetch:from:"));
    array_at_put(ci->arguments, 1, (object)make_number(0));
    array_at_put(ci->arguments, 2, e1k);

    ilist_object ilist = make_ilist(0);
    context_object rc = make_context((object)(instruction)ilist, 2);
    array_at_put(rc->arguments, 0, symbol_known_to_the_vm("eval:"));
    ci->return_context = (object)rc;

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v3.pointer);

    ci = make_context((object)env2, 3);
    array_at_put(ci->arguments, 0, symbol_known_to_the_vm("fetch:from:"));
    array_at_put(ci->arguments, 1, (object)make_number(0));
    array_at_put(ci->arguments, 2, e2k);

    array_at_put(rc->arguments, 0, symbol_known_to_the_vm("eval:"));
    ci->return_context = (object)rc;

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v2.pointer);

}

/* start-stub
SETUP(test_class_lookup)

    object class_lookup =
        (object)make_object(1, fools_system->with_cls_interpreter);
    // instvar_1: name
    // instvar_2: super
    // instvar_3: methoddict
    object cls = (object)make_object(3, (object)fools_system->nil);
    object_at_put(cls.object, 0, (object)make_string("A class"));
    object_at_put(cls.object, 1, (object)fools_system->nil);
    object_at_put(cls.object, 2, (object)make_dict(1));

    object_at_put(class_lookup.object, 0, cls);
    
    
}
*/

int main() {
    
    test_header();
    test_array();
    test_native_layout();
    test_native();   
    test_transfer();
    test_string_equals();
    test_dict();
    test_transfer_dict();
    test_variable_object();
    test_return_from_context();
    test_transfer_empty_ilist();
    test_transfer_empty_ilist_in_ilist();
    test_transfer_iconst();
    test_return_of_ilist();
    test_icall();
    test_iassign_ivar();
    test_ivar_read();
    test_env_lookup();

    return 0;
}
