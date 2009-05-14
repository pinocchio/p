#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>
#include <thread.h>
#include <scheme/system.h>

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

void native_test_single_arg_5() {
    context_object c = get_context();
    assert(number_value(array_size(&c->arguments)) == 1);
    assert(number_value(argument_at(c, 0).number) == 5);
    argument_at(c, 0).number->value = 6;
    pop_context();
}

SETUP(test_string_equals) 

    assert(string_equals(make_string("a string"), make_string("a string")));
    assert(!string_equals(make_string("a string"), make_string("b string")));
}

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

    object result = transfer(ci);

    assert(result.pointer == v.pointer);
}

SETUP(test_return_of_ilist)

    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ilist_object ilist = make_ilist(1);

    ilist_at_put(ilist, 0, (object)iconst);

    context_object make_eval_context(ci, ilist, fools_system->nil);

    object result = transfer(ci);

    assert(result.pointer == v.pointer);
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

    object result = transfer(ci);

    assert(result.pointer == v3.pointer);

    ci = make_context((object)env2, 3);
    
    set_message(ci, FETCH_FROM);
    set_argument(ci, 1, (object)make_number(0));
    set_argument(ci, 2, e2k);

    result = transfer(ci);

    assert(result.pointer == v2.pointer);

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

    object result = transfer(ci);

    assert(result.pointer == v.pointer);
}

void native_icallable() {
    context_object c = get_context();
    number_object first = argument_at(c, 0).number;
    assert(number_value(first) == 5);
    first->value = 6;
    pop_context();
}

SETUP(test_icall)

    iconst_object iconst =
        make_iconst(
            (object)make_native(
                &native_icallable));

    object v = (object)make_number(5);

    icall_object icall = make_icall((object)iconst, 1);
    set_callarg(icall, 0, v);

    context_object make_eval_context(ci, icall,
        make_env((object)fools_system->nil,
                 (object)fools_system->nil,
                 0));

    transfer(ci);

    assert(number_value(array_at(icall->arguments, 0).number) == 6);
}

SETUP(test_new_iscoped)

    iconst_object iconst = make_iconst(fools_system->iscoped);

    object v = (object)make_number(5);
    object exp = (object)make_iconst(v);

    icall_object icall = make_icall((object)iconst, 4);
    set_callmsg(icall, ENV_NEW_SIZE);
    set_callarg(icall, 1, exp);
    set_callarg(icall, 2, (object)make_number(0));

    env_object start = make_env((object)fools_system->nil,
                                (object)fools_system->nil,
                                0);

    context_object make_eval_context(ci, icall, start);

    object result = transfer(ci);

    object level_shifter = header(result.pointer);
    assert(level_shifter.native->target == &shift_level);

    iscoped_object iscope = header(level_shifter.pointer).iscoped;

    assert(pheader(iscope) == fools_system->iscoped_class.pointer);
    assert(iscope->expression.pointer == exp.pointer);
    assert(iscope->scope.env == start);

}

SETUP(test_eval_iscoped)

    iconst_object iconst = make_iconst(fools_system->iscoped);

    object v = (object)make_number(5);
    object exp = (object)make_iconst(v);

    icall_object icall = make_icall((object)iconst, 4);
    set_callmsg(icall, ENV_NEW_SIZE);
    set_callarg(icall, 1, exp);
    set_callarg(icall, 2, (object)make_number(0));

    env_object start = make_env((object)fools_system->nil,
                                (object)fools_system->nil,
                                0);

    context_object make_eval_context(ci, icall, start);

    object result = transfer(ci);

    iscoped_object iscope = result.iscoped;

    iconst->constant = (object)iscope;
    icall = make_icall((object)iconst, 0);

    make_eval_context(ci, icall, start);

    result = transfer(ci);

    assert(result.pointer == v.pointer);

}

SETUP(test_icapture)
    
    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    context_object make_eval_context(ci, fools_system->icapture, env);

    object result = transfer(ci);

    assert(result.env == env);
}

SETUP(test_env_parent)
    
    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    env_object env2 = make_env((object)fools_system->nil,
                              (object)env, 0);

    icall_object icall = make_icall(
                            (object)
                            make_iconst((object)env2), 1);
    set_callmsg(icall, ENV_PARENT);
    context_object make_eval_context(ci, icall, env);

    object result = transfer(ci);
    
    assert(result.env == env);                     
}

SETUP(test_capture_parent)
    
    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    env_object env2 = make_env((object)fools_system->nil,
                              (object)env, 0);

    icall_object icall = make_icall(fools_system->icapture, 1);
    set_callmsg(icall, ENV_PARENT);
    context_object make_eval_context(ci, icall, env2);

    object result = transfer(ci);
    
    assert(result.env == env);                     
}

SETUP(test_make_function_no_args)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    array_object args = make_array(1);
    array_at_put(args, 0, (object)make_ivar());

    object constant_function =
        make_func(args,
                  (object)
                  make_iconst((object)make_number(42)));

    context_object make_eval_context(ci, constant_function, env);

    object result = transfer(ci);

    object iscope = header(pheader(result.pointer));

    assert(pheader(iscope.pointer) == fools_system->iscoped_class.pointer);
    assert(iscope.iscoped->scope.env == env);

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

    object result = transfer(ci);
    
    assert(result.env == env);
}

SETUP(test_eval_function_no_args)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);


    iconst_object the_instr = make_iconst((object)make_number(42));

    array_object args = make_array(1);
    array_at_put(args, 0, (object)make_ivar());

    object constant_function =
        make_func(args,
                    (object)
                    the_instr
                  );

    context_object make_eval_context(ci, constant_function, env);

    object scoped_function = transfer(ci);

    object iconst = (object)make_iconst(scoped_function);
    icall_object icall = make_icall(iconst, 0);

    make_eval_context(ci, icall, env);

    object result = transfer(ci);

    assert(number_value(result.number) == 42);

}

SETUP(test_make_function_1_arg)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);



    ivar_object ivar = make_ivar();
    array_object arguments = make_array(2);
    array_at_put(arguments, 0, (object)make_ivar()); // self
    array_at_put(arguments, 1, (object)ivar);

    object constant_function =
        make_func(arguments,
                    (object)
                    ivar
                  );

    context_object make_eval_context(ci, constant_function, env);

    transfer(ci);
}

SETUP(test_eval_function_1_arg)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);



    ivar_object ivar = make_ivar();
    array_object arguments = make_array(2);
    array_at_put(arguments, 0, (object)make_ivar()); // self
    array_at_put(arguments, 1, (object)ivar);

    object constant_function =
        make_func(arguments,
                    (object)
                    ivar
                  );

    context_object make_eval_context(ci, constant_function, env);

    object scoped_function = transfer(ci);

    object arg = (object)make_number(42);

    object iconst = (object)make_iconst(scoped_function);
    icall_object icall = make_icall(iconst, 1);
    set_callarg(icall, 0, (object)make_iconst(arg));

    make_eval_context(ci, icall, env);

    object result = transfer(ci);

    assert(number_value(result.number) == 42);
}

SETUP(test_eval_nested_function)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    ivar_object ivar = make_ivar();
    array_object arguments = make_array(2);
    array_at_put(arguments, 0, (object)make_ivar()); // self
    array_at_put(arguments, 1, (object)ivar);

    array_object args = make_array(1);
    array_at_put(args, 0, (object)make_ivar()); // self

    object constant_function1 =
        make_func(args,
                    (object)
                    ivar
                  );

    object constant_function = make_func(arguments, constant_function1);
    context_object make_eval_context(ci, constant_function, env);

    object scoped_function = transfer(ci);

    object arg = (object)make_number(42);
    object iconst = (object)make_iconst(scoped_function);
    icall_object icall = make_icall(iconst, 1);
    set_callarg(icall, 0, (object)make_iconst(arg));

    make_eval_context(ci, icall, env);

    object nested_function = transfer(ci);
    
    //assert(pheader(nested_function.pointer) ==
    //       fools_system->iscoped_class.pointer);

    iconst = (object)make_iconst(nested_function);
    icall = make_icall(iconst, 1);
    set_callarg(icall, 0, (object)make_iconst(arg));

    make_eval_context(ci, icall, env);

    object result = transfer(ci);

    assert(number_value(result.number) == 42);
}

int main() {
    test_header();
    test_array();
    test_string_equals();
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
