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
    assert(number_value(argument_at(c, 0).number) == 5);
    argument_at(c, 0).number->value = 6;
}

SETUP(test_native)

    native_object n = make_native(&native_test_single_arg_5);

    context_object inner = make_context((object)n, 1);
    set_argument(inner, 0, (object)make_number(5));

    context_object outer = make_meta_context(inner);

    native(outer);

    assert(number_value(argument_at(inner, 0).number) == 6);
}

SETUP(test_transfer)

    native_object n = make_native(&native_test_single_arg_5);
    
    context_object inner = make_context((object)n, 1);
    set_argument(inner, 0, (object)make_number(5));

    transfer(inner);

    assert(number_value(argument_at(inner, 0).number) == 6);
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

    set_message(context, "at:put:");
    set_argument(context, 1, (object)k1);
    set_argument(context, 2, (object)v1);

    transfer(context);

    set_argument(context, 1, (object)k2);
    set_argument(context, 2, (object)v2);

    transfer(context);

    assert(dict_at(dict, (object)k1).number == v1);
    assert(dict_at(dict, (object)k2).number == v2);
    assert(dict_at(dict, (object)k3).nil == fools_system->nil);

    context = make_context((object)dict, 3);
    object result;

    set_message(context, "at:");
    set_argument(context, 1, (object)k1);
    set_argument(context, 2, (object)(pointer)&result);

    transfer(context);

    assert(result.number == v1);

    set_argument(context, 1, (object)k2);

    transfer(context);
    assert(result.number == v2);

    set_argument(context, 1, (object)k3);

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
    set_argument(to, 0, (object)make_number(5));

    from->return_context = (object)to;

    return_from_context(from);

    assert(number_value(argument_at(to, 0).number) == 6);
}

SETUP(test_transfer_empty_ilist)

    ilist_object ilist = make_ilist(0);

    context_object ci = make_context((object)(instruction)ilist, 2);
    set_message(ci, "eval:");
    set_argument(ci, 1, (object)fools_system->nil);
    transfer(ci);
}

SETUP(test_transfer_empty_ilist_in_ilist)

    ilist_object ilist  = make_ilist(2);
    ilist_object ilist2 = make_ilist(0);

    ilist_at_put(ilist, 0, (instruction)ilist2);
    ilist_at_put(ilist, 1, (instruction)ilist2);

    context_object ci = make_context((object)(instruction)ilist, 2);
    set_message(ci, "eval:");
    set_argument(ci, 1, (object)fools_system->nil);

    transfer(ci);
}

SETUP(test_transfer_iconst)

    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ilist_object ilist = make_ilist(0);

    context_object ci = make_context((object)(instruction)iconst, 2);
    context_object rc = make_context((object)(instruction)ilist, 2);
    set_message(ci, "eval:");
    set_argument(ci, 1, (object)fools_system->nil);
    set_message(rc, "eval:");
    ci->return_context = (object)rc;

    transfer(ci);

    assert(argument_at(rc, 1).pointer == v.pointer);
}

SETUP(test_return_of_ilist)

    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ilist_object ilist = make_ilist(1);
    ilist_object empty_ilist = make_ilist(0);

    ilist_at_put(ilist, 0, (instruction)iconst);

    context_object ci = make_context((object)(instruction)ilist, 2);
    set_message(ci, "eval:");
    set_argument(ci, 1, (object)fools_system->nil);

    context_object rc = make_context((object)(instruction)empty_ilist, 2);
    set_message(rc, "eval:");

    ci->return_context = (object)rc;

    transfer(ci);

    assert(argument_at(rc, 1).pointer == v.pointer);
}

SETUP(test_env_lookup)

    object e1k = (object)make_string("env1 identifier");
    object e2k = (object)make_string("env2 identifier");

    object v1 = (object)make_string("v1");
    object v2 = (object)make_string("v2");
    object v3 = (object)make_string("v3");

    env_object env1 = make_env(0, e1k,
                               (object)fools_system->nil,
                               1);

    env_object env2 = make_env(0, e2k,
                               (object)env1,
                               1);

    context_object ci = make_context((object)env1, 4);
    set_message(ci, "store:at:in:");
    set_argument(ci, 1, v1);
    set_argument(ci, 2, (object)make_number(0));
    set_argument(ci, 3, e1k);

    transfer(ci);

    assert(array_at(env1->values, 0).pointer == v1.pointer);

    ci = make_context((object)env2, 4);
    set_message(ci, "store:at:in:");
    set_argument(ci, 1, v2);
    set_argument(ci, 2, (object)make_number(0));
    set_argument(ci, 3, e2k);

    transfer(ci);

    assert(array_at(env1->values, 0).pointer == v1.pointer);
    assert(array_at(env2->values, 0).pointer == v2.pointer);

    ci = make_context((object)env2, 4);
    set_message(ci, "store:at:in:");
    set_argument(ci, 1, v3);
    set_argument(ci, 2, (object)make_number(0));
    set_argument(ci, 3, e1k);

    transfer(ci);

    assert(array_at(env1->values, 0).pointer == v3.pointer);
    assert(array_at(env2->values, 0).pointer == v2.pointer);

    ci = make_context((object)env2, 3);
    set_message(ci, "fetch:from:");
    set_argument(ci, 1, (object)make_number(0));
    set_argument(ci, 2, e1k);

    ilist_object ilist = make_ilist(0);
    context_object rc = make_context((object)(instruction)ilist, 2);
    set_message(rc, "eval:");
    ci->return_context = (object)rc;

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v3.pointer);

    ci = make_context((object)env2, 3);
    
    set_message(ci, "fetch:from:");
    set_argument(ci, 1, (object)make_number(0));
    set_argument(ci, 2, e2k);

    set_message(rc, "eval:");
    ci->return_context = (object)rc;

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v2.pointer);

}

SETUP(test_iassign_ivar)

    env_object k = make_env(0, (object)fools_system->nil,
                            (object)fools_system->nil,
                            1);
    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ivar_object ivar = make_ivar((object)fools_system->nil,
                                 make_number(0));

    iassign_object iassign = make_iassign(ivar, (object)(instruction)iconst);

    context_object ci = make_context((object)(instruction)iassign, 2);
    set_message(ci, "eval:");
    set_argument(ci, 1, (object)k);

    transfer(ci);

    assert(env_at(k, 0).pointer == v.pointer);
}

SETUP(test_ivar_read)

    env_object k = make_env(0, (object)fools_system->nil,
                            (object)fools_system->nil,
                            1);
    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ivar_object ivar = make_ivar((object)fools_system->nil,
                                 make_number(0));

    iassign_object iassign = make_iassign(ivar, (object)(instruction)iconst);

    context_object ci = make_context((object)(instruction)iassign, 2);
    set_message(ci, "eval:");
    set_argument(ci, 1, (object)k);

    transfer(ci);

    ilist_object ilist = make_ilist(0);

    ci = make_context((object)(instruction)ivar, 2);
    context_object rc = make_context((object)(instruction)ilist, 2);
    set_message(ci, "eval:");
    set_argument(ci, 1, (object)k);
    set_message(rc, "eval:");
    ci->return_context = (object)rc;

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v.pointer);
}

void native_icallable(context_object c) {
    number_object first = argument_at(c, 0).number;
    assert(number_value(first) == 5);
    first->value = 6;
}

SETUP(test_icall)

    iconst_object iconst =
        make_iconst(
            (object)make_native(
                &native_icallable));

    object v = (object)make_number(5);

    icall_object icall = make_icall((object)(instruction)iconst, 2);
    set_callarg(icall, 0, v);

    context_object ci = make_context((object)(instruction)icall, 2);
    set_message(ci, "eval:");
    set_argument(ci, 1, (object)make_env(0, (object)fools_system->nil,
                                         (object)fools_system->nil,
                                         0));

    transfer(ci);

    assert(number_value(array_at(icall->arguments, 0).number) == 6);
}

SETUP(test_new_iscoped)

    object iscope_class =
        (object)make_object(0,
            (object)fools_system->iscope_metaclass
        );
    iconst_object iconst = make_iconst(iscope_class);

    object v = (object)make_number(5);
    object exp = (object)(instruction)make_iconst(v);

    icall_object icall = make_icall((object)(instruction)iconst, 3);
    set_callarg(icall, 0, symbol_known_to_the_vm("env:new:"));
    set_callarg(icall, 2, exp);

    context_object ci = make_context((object)(instruction)icall, 2);
    set_message(ci, "eval:");
    env_object start = make_env(0,
                                (object)fools_system->nil,
                                (object)fools_system->nil,
                                0);
    set_argument(ci, 1, (object)start);

    ilist_object ilist = make_ilist(0);
    context_object rc = make_context((object)(instruction)ilist, 2);
    set_message(rc, "eval:");
    ci->return_context = (object)rc;

    transfer(ci);

    iscoped_object iscope = argument_at(rc, 1).instruction.iscoped;

    assert(iscope->expression.pointer == exp.pointer);
    assert(iscope->scope.env == start);

}

SETUP(test_eval_iscoped)

    object iscope_class =
        (object)make_object(0,
            (object)fools_system->iscope_metaclass
        );
    iconst_object iconst = make_iconst(iscope_class);

    object v = (object)make_number(5);
    object exp = (object)(instruction)make_iconst(v);

    icall_object icall = make_icall((object)(instruction)iconst, 3);
    set_callarg(icall, 0, symbol_known_to_the_vm("env:new:"));
    set_callarg(icall, 2, exp);

    context_object ci = make_context((object)(instruction)icall, 2);
    set_message(ci, "eval:");
    env_object start = make_env(0,
                                (object)fools_system->nil,
                                (object)fools_system->nil,
                                0);
    set_argument(ci, 1, (object)start);

    ilist_object ilist = make_ilist(0);
    context_object rc = make_context((object)(instruction)ilist, 2);
    set_message(rc, "eval:");
    ci->return_context = (object)rc;

    transfer(ci);

    iscoped_object iscope = argument_at(rc, 1).instruction.iscoped;

    iconst->constant = (object)(instruction)iscope;
    ivinstr_object ivinstr = make_ivinstr((object)(instruction)iconst);

    ci = make_context((object)(instruction)ivinstr, 2);
    set_message(ci, "eval:");
    set_argument(ci, 1, (object)start);

    ci->return_context = (object)rc;

    transfer(ci);

    assert(argument_at(rc, 1).pointer == v.pointer);

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
    test_env_lookup();
    test_iassign_ivar();
    test_ivar_read();
    test_icall();
    test_new_iscoped();
    test_eval_iscoped();

    return 0;
}
