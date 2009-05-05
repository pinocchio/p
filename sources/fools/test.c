#include <assert.h>
#include <model.h>
#include <ast.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>

// Some nice helper constructs.
#define SETUP(name)\
    void name() { printf("################################## "#name"\n"); bootstrap();

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

void native_test_single_arg_5() {
    context_object c = get_context();
    assert(c->arguments->size->value == 1);
    assert(number_value(argument_at(c, 0).number) == 5);
    argument_at(c, 0).number->value = 6;
    return_from_context(c);
}

SETUP(test_native)

    native_object n = make_native(&native_test_single_arg_5);


    printf("test: %p\n", n);

    context_object inner = make_context((object)n, 1);
    set_argument(inner, 0, (object)make_number(5));

    context_object outer = make_meta_context(inner);

    set_transfer(outer);

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

/* invalid. replace by valid tests!
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
*/

SETUP(test_variable_object)
    variable_object result = make_object(10, (object)fools_system->nil);

    assert(header(result).nil == fools_system->nil);
    int i;
    for (i = 0; i < 10; i++) {
        assert(object_at(result, i).nil == fools_system->nil);
    }
}

SETUP(test_transfer_empty_ilist)

    ilist_object ilist = make_ilist(0);

    context_object make_eval_context(ci, ilist, fools_system->nil);
    printf("context: %p\n", ci);
    printf("ilist: %p\n", ilist);
    printf("target: %p\n", &with_native_class_lookup);
    printf("native func: %p\n", &native);
    transfer(ci);
}

SETUP(test_transfer_empty_ilist_in_ilist)

    ilist_object ilist  = make_ilist(2);
    ilist_object ilist2 = make_ilist(0);

    ilist_at_put(ilist, 0, (object)ilist2);
    ilist_at_put(ilist, 1, (object)ilist2);

    context_object make_eval_context(ci, ilist, fools_system->nil);

    transfer(ci);
}

SETUP(test_transfer_iconst)

    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);

    context_object make_eval_context(ci, iconst, fools_system->nil);
    build_return(ci, rc);

    transfer(ci);

    assert(return_value(rc).pointer == v.pointer);
}

SETUP(test_return_of_ilist)

    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ilist_object ilist = make_ilist(1);

    ilist_at_put(ilist, 0, (object)iconst);

    context_object make_eval_context(ci, ilist, fools_system->nil);
    build_return(ci, rc);

    transfer(ci);

    assert(return_value(rc).pointer == v.pointer);
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
    set_message(ci, STORE_AT_IN);
    set_argument(ci, 1, v1);
    set_argument(ci, 2, (object)make_number(0));
    set_argument(ci, 3, e1k);

    transfer(ci);

    assert(array_at(env1->values, 0).pointer == v1.pointer);

    ci = make_context((object)env2, 4);
    set_message(ci, STORE_AT_IN);
    set_argument(ci, 1, v2);
    set_argument(ci, 2, (object)make_number(0));
    set_argument(ci, 3, e2k);

    transfer(ci);

    assert(array_at(env1->values, 0).pointer == v1.pointer);
    assert(array_at(env2->values, 0).pointer == v2.pointer);

    ci = make_context((object)env2, 4);
    set_message(ci, STORE_AT_IN);
    set_argument(ci, 1, v3);
    set_argument(ci, 2, (object)make_number(0));
    set_argument(ci, 3, e1k);

    transfer(ci);

    assert(array_at(env1->values, 0).pointer == v3.pointer);
    assert(array_at(env2->values, 0).pointer == v2.pointer);

    ci = make_context((object)env2, 3);
    set_message(ci, FETCH_FROM);
    set_argument(ci, 1, (object)make_number(0));
    set_argument(ci, 2, e1k);

    build_return(ci, rc);

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v3.pointer);

    ci = make_context((object)env2, 3);
    
    set_message(ci, FETCH_FROM);
    set_argument(ci, 1, (object)make_number(0));
    set_argument(ci, 2, e2k);

    set_message(rc, EVAL);
    ci->return_context = (object)rc;

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v2.pointer);

}

SETUP(test_iassign_ivar)

    env_object k = make_env((object)fools_system->nil,
                            (object)fools_system->nil,
                            1);
    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ivar_object ivar = make_ivar();

    iassign_object iassign = make_iassign(ivar, (object)iconst);

    context_object make_eval_context(ci, iassign, k);

    transfer(ci);

    assert(env_at(k, 0).pointer == v.pointer);
}

SETUP(test_ivar_read)

    env_object k = make_env((object)fools_system->nil,
                            (object)fools_system->nil,
                            1);
    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ivar_object ivar = make_ivar();

    iassign_object iassign = make_iassign(ivar, (object)iconst);

    context_object make_eval_context(ci, iassign, k);

    transfer(ci);

    make_eval_context(ci, ivar, k);
    build_return(ci, rc);

    transfer(ci);

    assert(array_at(rc->arguments, 1).pointer == v.pointer);
}

void native_icallable() {
    context_object c = get_context();
    number_object first = argument_at(c, 0).number;
    assert(number_value(first) == 5);
    first->value = 6;
    return_from_context(c);
}

SETUP(test_icall)

    iconst_object iconst =
        make_iconst(
            (object)make_native(
                &native_icallable));

    object v = (object)make_number(5);

    icall_object icall = make_icall((object)iconst, 2);
    set_callarg(icall, 0, v);

    context_object make_eval_context(ci, icall,
        make_env((object)fools_system->nil,
                 (object)fools_system->nil,
                 0));

    transfer(ci);

    assert(number_value(array_at(icall->arguments, 0).number) == 6);
}

SETUP(test_new_iscoped)

    iconst_object iconst = make_iconst(fools_system->iscope);

    object v = (object)make_number(5);
    object exp = (object)make_iconst(v);

    icall_object icall = make_icall((object)iconst, 4);
    set_callmsg(icall, ENV_NEW_SIZE);
    set_callarg(icall, 2, exp);
    set_callarg(icall, 3, (object)make_number(0));

    env_object start = make_env((object)fools_system->nil,
                                (object)fools_system->nil,
                                0);

    context_object make_eval_context(ci, icall, start);
    build_return(ci, rc);

    transfer(ci);

    iscoped_object iscope = return_value(rc).iscoped;

    assert(header(iscope).native_class == fools_system->iscope_class);
    assert(iscope->expression.pointer == exp.pointer);
    assert(iscope->scope.env == start);

}

SETUP(test_eval_iscoped)

    iconst_object iconst = make_iconst(fools_system->iscope);

    object v = (object)make_number(5);
    object exp = (object)make_iconst(v);

    icall_object icall = make_icall((object)iconst, 4);
    set_callmsg(icall, ENV_NEW_SIZE);
    set_callarg(icall, 2, exp);
    set_callarg(icall, 3, (object)make_number(0));

    env_object start = make_env((object)fools_system->nil,
                                (object)fools_system->nil,
                                0);

    context_object make_eval_context(ci, icall, start);
    build_return(ci, rc);

    transfer(ci);

    iscoped_object iscope = return_value(rc).iscoped;

    iconst->constant = (object)iscope;
    appcall_object appcall = make_appcall((object)iconst, 0);

    make_eval_context(ci, appcall, start);
    ci->return_context = (object)rc;

    transfer(ci);

    assert(return_value(rc).pointer == v.pointer);

}

SETUP(test_icapture)
    
    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    context_object make_eval_context(ci, fools_system->icapture, env);
    build_return(ci, rc);

    transfer(ci);

    assert(return_value(rc).env == env);
}

SETUP(test_env_parent)
    
    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    env_object env2 = make_env((object)fools_system->nil,
                              (object)env, 0);

    // !!!
    // needs size 2 since call: expects interpreter level and passes env
    // automatically.
    // !!!
    icall_object icall = make_icall(
                            (object)
                            make_iconst((object)env2), 2);
    set_callmsg(icall, ENV_PARENT);
    context_object make_eval_context(ci, icall, env);
    build_return(ci, rc);

    transfer(ci);
    
    assert(return_value(rc).env == env);                     
}

SETUP(test_capture_parent)
    
    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    env_object env2 = make_env((object)fools_system->nil,
                              (object)env, 0);

    // !!!
    // needs size 2 since call: expects interpreter level and passes env
    // automatically.
    // !!!
    icall_object icall = make_icall(fools_system->icapture, 2);
    set_callmsg(icall, ENV_PARENT);
    context_object make_eval_context(ci, icall, env2);
    build_return(ci, rc);

    transfer(ci);
    
    assert(return_value(rc).env == env);                     
}

SETUP(test_make_function_no_args)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    object constant_function =
        make_func(make_array(0),
                  (object)
                  make_iconst((object)make_number(42)));

    context_object make_eval_context(ci, constant_function, env);
    build_return(ci, rc);

    transfer(ci);

    object result = return_value(rc);
    assert(header(result.pointer).native_class == fools_system->iscope_class);
    assert(result.iscoped->scope.env == env);

}

SETUP(test_ilist_pass_context)

    ilist_object ilist = make_ilist(1);
    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    env_object env2 = make_env((object)fools_system->nil,
                              (object)env, 0);

    icall_object icall = make_icall(fools_system->icapture, 2);
    set_callmsg(icall, ENV_PARENT);

    ilist_at_put(ilist, 0, (object)icall);

    context_object make_eval_context(ci, ilist, env2);
    build_return(ci, rc);

    transfer(ci);
    
    assert(return_value(rc).env == env);
}

SETUP(test_eval_function_no_args)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);


    iconst_object the_instr = make_iconst((object)make_number(42));
    object constant_function =
        make_func(make_array(0),
                    (object)
                    the_instr
                  );

    context_object make_eval_context(ci, constant_function, env);
    build_return(ci, rc);

    transfer(ci);

    object scoped_function = return_value(rc);
    object iconst = (object)make_iconst(scoped_function);
    appcall_object appcall = make_appcall(iconst, 0);

    make_eval_context(ci, appcall, env);
    ci->return_context = (object)rc;

    transfer(ci);

    assert(number_value(return_value(rc).number) == 42);

}

SETUP(test_make_function_1_arg)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);



    ivar_object ivar = make_ivar();
    array_object arguments = make_array(1);
    array_at_put(arguments, 0, (object)ivar);

    object constant_function =
        make_func(arguments,
                    (object)
                    ivar
                  );

    context_object make_eval_context(ci, constant_function, env);
    build_return(ci, rc);

    transfer(ci);
}

SETUP(test_eval_function_1_arg)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);



    ivar_object ivar = make_ivar();
    array_object arguments = make_array(1);
    array_at_put(arguments, 0, (object)ivar);

    object constant_function =
        make_func(arguments,
                    (object)
                    ivar
                  );

    context_object make_eval_context(ci, constant_function, env);
    build_return(ci, rc);

    transfer(ci);

    object arg = (object)make_number(42);

    object scoped_function = return_value(rc);
    object iconst = (object)make_iconst(scoped_function);
    appcall_object appcall = make_appcall(iconst, 1);
    set_appcarg(appcall, 0, (object)make_iconst(arg));

    make_eval_context(ci, appcall, env);
    ci->return_context = (object)rc;

    transfer(ci);

    assert(number_value(return_value(rc).number) == 42);
}

SETUP(test_eval_nested_function)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    ivar_object ivar = make_ivar();
    array_object arguments = make_array(1);
    array_at_put(arguments, 0, (object)ivar);

    object constant_function1 =
        make_func(make_array(0),
                    (object)
                    ivar
                  );

    object constant_function = make_func(arguments, constant_function1);

    context_object make_eval_context(ci, constant_function, env);
    build_return(ci, rc);

    transfer(ci);

    object arg = (object)make_number(42);

    object scoped_function = return_value(rc);
    object iconst = (object)make_iconst(scoped_function);
    appcall_object appcall = make_appcall(iconst, 1);
    set_appcarg(appcall, 0, (object)make_iconst(arg));

    make_eval_context(ci, appcall, env);
    ci->return_context = (object)rc;

    transfer(ci);
    
    object nested_function = return_value(rc);

    assert(header(nested_function.pointer).native_class ==
           fools_system->iscope_class);

    iconst = (object)make_iconst(nested_function);
    appcall = make_appcall(iconst, 1);
    set_appcarg(appcall, 0, (object)make_iconst(arg));

    make_eval_context(ci, appcall, env);
    ci->return_context = (object)rc;

    transfer(ci);

    assert(number_value(return_value(rc).number) == 42);
}

int main() {
    test_header();
    test_array();
    test_native_layout();
    //test_native();  // broken for now. 
    test_transfer();
    test_string_equals();
    //test_dict();
    //test_transfer_dict();
    test_variable_object();
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
    test_icapture();
    test_env_parent();
    test_capture_parent();
    test_make_function_no_args();
    test_ilist_pass_context();
    test_eval_function_no_args();
    test_make_function_1_arg();
    test_eval_function_1_arg();
    test_eval_nested_function();

    return 0;
}
