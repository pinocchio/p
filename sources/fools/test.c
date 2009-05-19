#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>
#include <thread.h>
#include <scheme/system.h>
#include <scheme/symbols.h>
#include <scheme/natives.h>

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
    transfer();
}

SETUP(test_transfer_empty_ilist_in_ilist)

    ilist_object ilist  = make_ilist(2);
    ilist_object ilist2 = make_ilist(0);

    ilist_at_put(ilist, 0, (object)ilist2);
    ilist_at_put(ilist, 1, (object)ilist2);

    context_object make_eval_context(ci, ilist, fools_system->nil);

    transfer();
}

SETUP(test_transfer_iconst)

    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);

    context_object make_eval_context(ci, iconst, fools_system->nil);

    object result = transfer();

    assert(result.pointer == v.pointer);
}

SETUP(test_return_of_ilist)

    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ilist_object ilist = make_ilist(1);

    ilist_at_put(ilist, 0, (object)iconst);

    context_object make_eval_context(ci, ilist, fools_system->nil);

    object result = transfer();

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

    transfer();

    assert(array_at(env1->values, 0).pointer == v1.pointer);

    ci = make_context((object)env2, 4);
    set_message(ci, STORE_AT_IN);
    set_argument(ci, 1, v2);
    set_argument(ci, 2, (object)make_number(0));
    set_argument(ci, 3, e2k);

    transfer();

    assert(array_at(env1->values, 0).pointer == v1.pointer);
    assert(array_at(env2->values, 0).pointer == v2.pointer);

    ci = make_context((object)env2, 4);
    set_message(ci, STORE_AT_IN);
    set_argument(ci, 1, v3);
    set_argument(ci, 2, (object)make_number(0));
    set_argument(ci, 3, e1k);

    transfer();

    assert(array_at(env1->values, 0).pointer == v3.pointer);
    assert(array_at(env2->values, 0).pointer == v2.pointer);

    ci = make_context((object)env2, 3);
    set_message(ci, FETCH_FROM);
    set_argument(ci, 1, (object)make_number(0));
    set_argument(ci, 2, e1k);

    object result = transfer();

    assert(result.pointer == v3.pointer);

    ci = make_context((object)env2, 3);
    
    set_message(ci, FETCH_FROM);
    set_argument(ci, 1, (object)make_number(0));
    set_argument(ci, 2, e2k);

    result = transfer();

    assert(result.pointer == v2.pointer);

}

SETUP(test_iassign_ivar)

    env_object k = make_env((object)fools_system->nil,
                            (object)fools_system->nil,
                            1);
    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ivar_object ivar = make_ivar("iv");

    iassign_object iassign = make_iassign(ivar, (object)iconst);

    context_object make_eval_context(ci, iassign, k);

    transfer();

    assert(env_at(k, 0).pointer == v.pointer);
}

SETUP(test_ivar_read)

    env_object k = make_env((object)fools_system->nil,
                            (object)fools_system->nil,
                            1);
    object v = (object)make_number(42);
    iconst_object iconst = make_iconst(v);
    ivar_object ivar = make_ivar("iv");

    iassign_object iassign = make_iassign(ivar, (object)iconst);

    context_object make_eval_context(ci, iassign, k);

    transfer();

    make_eval_context(ci, ivar, k);

    object result = transfer();

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

    transfer();

    assert(number_value(array_at(icall->arguments, 0).number) == 6);
}

SETUP(test_new_iscoped)

    iconst_object iconst = make_iconst(fools_system->iscoped);

    object v = (object)make_number(5);
    object exp = (object)make_iconst(v);

    icall_object icall = make_icall((object)iconst, 3);
    set_callmsg(icall, NEW_SIZE);
    set_callarg(icall, 1, exp);
    set_callarg(icall, 2, (object)make_number(0));

    icall = make_icall((object)icall, 1);
    set_callmsg(icall, SHIFT);

    env_object start = make_env((object)fools_system->nil,
                                (object)fools_system->nil,
                                0);

    context_object make_eval_context(ci, icall, start);

    object result = transfer();
    
    iscoped_object iscope = object_at(result.object, 0).iscoped;

    object level_shifter = header(result.pointer);
    assert(level_shifter.native->target == &shift_level);

    assert(pheader(iscope) == fools_system->iscoped_class.pointer);
    assert(iscope->expression.pointer == exp.pointer);
    assert(iscope->scope.env == start);

}

SETUP(test_eval_iscoped)

    iconst_object iconst = make_iconst(fools_system->iscoped);

    object v = (object)make_number(5);
    object exp = (object)make_iconst(v);

    icall_object icall = make_icall((object)iconst, 4);
    set_callmsg(icall, NEW_SIZE);
    set_callarg(icall, 1, exp);
    set_callarg(icall, 2, (object)make_number(0));

    icall = make_icall((object)icall, 1);
    set_callmsg(icall, SHIFT);

    env_object start = make_env((object)fools_system->nil,
                                (object)fools_system->nil,
                                0);

    context_object make_eval_context(ci, icall, start);

    object result = transfer();

    iscoped_object iscope = result.iscoped;

    iconst->constant = (object)iscope;
    icall = make_icall((object)iconst, 0);

    make_eval_context(ci, icall, start);

    result = transfer();

    assert(result.pointer == v.pointer);

}

SETUP(test_icapture)
    
    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    context_object make_eval_context(ci, fools_system->icapture, env);

    object result = transfer();

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

    object result = transfer();
    
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

    object result = transfer();
    
    assert(result.env == env);                     
}

SETUP(test_make_function_no_args)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    array_object args = make_array(1);
    array_at_put(args, 0, (object)make_ivar("iv"));

    object constant_function =
        make_func(args,
                  (object)
                  make_iconst((object)make_number(42)));

    context_object make_eval_context(ci, constant_function, env);

    object result = transfer();

    iscoped_object iscope = object_at(result.object, 0).iscoped;
    assert(pheader(iscope) == fools_system->iscoped_class.pointer);
    assert(iscope->scope.env == env);

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

    object result = transfer();
    
    assert(result.env == env);
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

    object scoped_function = transfer();

    object iconst = (object)make_iconst(scoped_function);
    icall_object icall = make_icall(iconst, 0);

    make_eval_context(ci, icall, env);

    object result = transfer();

    assert(number_value(result.number) == 42);

}

SETUP(test_make_function_1_arg)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);



    ivar_object ivar = make_ivar("iv");
    array_object arguments = make_array(1);
    array_at_put(arguments, 0, (object)ivar);

    object constant_function =
        make_func(arguments,
                    (object)
                    ivar
                  );

    context_object make_eval_context(ci, constant_function, env);

    transfer();
}

SETUP(test_eval_function_1_arg)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);



    ivar_object ivar = make_ivar("iv");
    array_object arguments = make_array(1);
    array_at_put(arguments, 0, (object)ivar);

    object constant_function =
        make_func(arguments,
                    (object)
                    ivar
                  );

    context_object make_eval_context(ci, constant_function, env);

    object scoped_function = transfer();

    object arg = (object)make_number(42);

    object iconst = (object)make_iconst(scoped_function);
    icall_object icall = make_icall(iconst, 1);
    set_callarg(icall, 0, (object)make_iconst(arg));

    make_eval_context(ci, icall, env);

    object result = transfer();

    assert(number_value(result.number) == 42);
}

SETUP(test_eval_nested_function)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    ivar_object ivar = make_ivar("iv");
    array_object arguments = make_array(1);
    array_at_put(arguments, 0, (object)ivar);

    object constant_function1 =
        make_func(make_array(0),
                    (object)
                    ivar
                  );

    object constant_function = make_func(arguments, constant_function1);
    context_object make_eval_context(ci, constant_function, env);

    object scoped_function = transfer();

    object arg = (object)make_number(42);
    object iconst = (object)make_iconst(scoped_function);
    icall_object icall = make_icall(iconst, 1);
    set_callarg(icall, 0, (object)make_iconst(arg));

    make_eval_context(ci, icall, env);

    object nested_function = transfer();
    
    iconst = (object)make_iconst(nested_function);
    icall = make_icall(iconst, 0);

    make_eval_context(ci, icall, env);

    object result = transfer();

    assert(number_value(result.number) == 42);
}

object create_class_dispatch() {
/* Code generated from:
(dispatch (self args)
    (let ((msg (args 'at 0)))
        (args 'atput 0 self)
        (let loop ((class ((self 'dispatch) 'delegate)))
            (if (eq? class null)
                (self 'doesNotUnderstand msg args)
                (let ((method ((class 'at 1) 'lookup msg)))
                    (if method
                        (method 'execute args)
                        (loop (class 'at 0))))))))
*/
object ivar_3_self = (object)make_ivar("self");
object ivar_4_args = (object)make_ivar("args");
object ivar_6_msg = (object)make_ivar("msg");
object number_8_0 = (object)make_iconst((object)make_number(0));
icall_object icall_9_ivar_4_args = make_icall((object)ivar_4_args, 3);
set_callarg(icall_9_ivar_4_args, 0, OBJECT_AT_PUT);
set_callarg(icall_9_ivar_4_args, 1, (object)number_8_0);
set_callarg(icall_9_ivar_4_args, 2, (object)ivar_3_self);
object ivar_11_loop = (object)make_ivar("loop");
object ivar_15_class = (object)make_ivar("class");
icall_object icall_16_scheme_eqp = make_icall((object)scheme_eqp, 2);
set_callarg(icall_16_scheme_eqp, 0, (object)ivar_15_class);
set_callarg(icall_16_scheme_eqp, 1, (object)(object)make_iconst((object)fools_system->nil));
icall_object icall_17_ivar_3_self = make_icall((object)ivar_3_self, 3);
set_callarg(icall_17_ivar_3_self, 0, (object)SYMBOL_doesNotUnderstand);
set_callarg(icall_17_ivar_3_self, 1, (object)ivar_6_msg);
set_callarg(icall_17_ivar_3_self, 2, (object)ivar_4_args);
object ivar_19_method = (object)make_ivar("method");
icall_object icall_20_ivar_19_method = make_icall((object)ivar_19_method, 2);
set_callarg(icall_20_ivar_19_method, 0, (object)SYMBOL_execute);
set_callarg(icall_20_ivar_19_method, 1, (object)ivar_4_args);
object number_21_1 = (object)make_iconst((object)make_number(0));
icall_object icall_22_ivar_15_class = make_icall((object)ivar_15_class, 2);
set_callarg(icall_22_ivar_15_class, 0, OBJECT_AT);
set_callarg(icall_22_ivar_15_class, 1, (object)number_21_1);
icall_object icall_23_ivar_11_loop = make_icall((object)ivar_11_loop, 1);
set_callarg(icall_23_ivar_11_loop, 0, (object)icall_22_ivar_15_class);
icall_object icall_24_ivar_19_method = make_icall((object)ivar_19_method, 2);
set_callarg(icall_24_ivar_19_method, 0, (object)icall_20_ivar_19_method);
set_callarg(icall_24_ivar_19_method, 1, (object)icall_23_ivar_11_loop);
array_object array_25_lambda_18_x = make_array(1);
array_at_put(array_25_lambda_18_x, 0, ivar_19_method);
object lambda_18_x = make_func(array_25_lambda_18_x, (object)icall_24_ivar_19_method);
object number_26_2 = (object)make_iconst((object)make_number(1));
icall_object icall_27_ivar_15_class = make_icall((object)ivar_15_class, 2);
set_callarg(icall_27_ivar_15_class, 0, OBJECT_AT);
set_callarg(icall_27_ivar_15_class, 1, (object)number_26_2);
icall_object icall_28_icall_27_ivar_15_class = make_icall((object)icall_27_ivar_15_class, 2);
set_callarg(icall_28_icall_27_ivar_15_class, 0, (object)SYMBOL_lookup);
set_callarg(icall_28_icall_27_ivar_15_class, 1, (object)ivar_6_msg);
icall_object icall_29_lambda_18_x = make_icall((object)lambda_18_x, 1);
set_callarg(icall_29_lambda_18_x, 0, (object)icall_28_icall_27_ivar_15_class);
icall_object icall_30_icall_16_scheme_eqp = make_icall((object)icall_16_scheme_eqp, 2);
set_callarg(icall_30_icall_16_scheme_eqp, 0, (object)icall_17_ivar_3_self);
set_callarg(icall_30_icall_16_scheme_eqp, 1, (object)icall_29_lambda_18_x);
array_object array_31_lambda_14_x = make_array(1);
array_at_put(array_31_lambda_14_x, 0, ivar_15_class);
object lambda_14_x = make_func(array_31_lambda_14_x, (object)icall_30_icall_16_scheme_eqp);
iassign_object iassign_13_x = make_iassign(ivar_11_loop.ivar, (object)lambda_14_x);
icall_object icall_32_ivar_3_self = make_icall((object)ivar_3_self, 1);
set_callarg(icall_32_ivar_3_self, 0, DISPATCH);
icall_object icall_33_icall_32_ivar_3_self = make_icall((object)icall_32_ivar_3_self, 1);
set_callarg(icall_33_icall_32_ivar_3_self, 0, DELEGATE);
icall_object icall_34_ivar_11_loop = make_icall((object)ivar_11_loop, 1);
set_callarg(icall_34_ivar_11_loop, 0, (object)icall_33_icall_32_ivar_3_self);
ilist_object ilist_12_lambda = make_ilist(2);
ilist_at_put(ilist_12_lambda, 0, (object)iassign_13_x);
ilist_at_put(ilist_12_lambda, 1, (object)icall_34_ivar_11_loop);
array_object array_35_lambda_10_x = make_array(1);
array_at_put(array_35_lambda_10_x, 0, ivar_11_loop);
object lambda_10_x = make_func(array_35_lambda_10_x, (object)ilist_12_lambda);
icall_object icall_36_lambda_10_x = make_icall((object)lambda_10_x, 1);
set_callarg(icall_36_lambda_10_x, 0, (object)(object)make_iconst((object)fools_system->nil));
ilist_object ilist_7_lambda = make_ilist(2);
ilist_at_put(ilist_7_lambda, 0, (object)icall_9_ivar_4_args);
ilist_at_put(ilist_7_lambda, 1, (object)icall_36_lambda_10_x);
array_object array_37_lambda_5_x = make_array(1);
array_at_put(array_37_lambda_5_x, 0, ivar_6_msg);
object lambda_5_x = make_func(array_37_lambda_5_x, (object)ilist_7_lambda);
object number_38_0 = (object)make_iconst((object)make_number(0));
icall_object icall_39_ivar_4_args = make_icall((object)ivar_4_args, 2);
set_callarg(icall_39_ivar_4_args, 0, OBJECT_AT);
set_callarg(icall_39_ivar_4_args, 1, (object)number_38_0);
icall_object icall_40_lambda_5_x = make_icall((object)lambda_5_x, 1);
set_callarg(icall_40_lambda_5_x, 0, (object)icall_39_ivar_4_args);
array_object array_41_lambda_2_x = make_array(2);
array_at_put(array_41_lambda_2_x, 0, ivar_3_self);
array_at_put(array_41_lambda_2_x, 1, ivar_4_args);
return make_dispatch(array_41_lambda_2_x, (object)icall_40_lambda_5_x);
}

SETUP(test_make_ifixed)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    object class_dispatch = create_class_dispatch();
    icall_object icall4(icall, (object)make_iconst(fools_system->ifixed),
                        DISPATCH_DELEGATE_SIZE,
                        class_dispatch,
                        (object)make_iconst((object)fools_system->nil),
                        (object)make_iconst((object)make_number(5)));

    context_object make_eval_context(ci, icall, env);

    object result = transfer();    

    assert(number_value(result.ifixed->size.number) == 5);
    assert(result.ifixed->delegate.nil == fools_system->nil);

    assert((pointer)*PINC(result.ifixed->interp.pointer) == result.pointer);
}

SETUP(test_ifixed_natives)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    object class_dispatch = create_class_dispatch();
    icall_object icall4(icall, (object)make_iconst(fools_system->ifixed),
                        DISPATCH_DELEGATE_SIZE,
                        class_dispatch,
                        (object)make_iconst((object)fools_system->nil),
                        (object)make_iconst((object)make_number(5)));

    context_object make_eval_context(ci, icall, env);

    object ifixed = transfer();    

    assert(number_value(ifixed.ifixed->size.number) == 5);
    assert(ifixed.ifixed->delegate.nil == fools_system->nil);

    icall1(icall, make_iconst(ifixed), DELEGATE);
    make_eval_context(ci, icall, env);

    object result = transfer();

    assert(result.nil == fools_system->nil);

    icall1(icall, make_iconst(ifixed), SIZE);
    make_eval_context(ci, icall, env);

    result = transfer();

    assert(number_value(result.number) == 5);

    icall1(icall, make_iconst(ifixed), NEW);
    make_eval_context(ci, icall, env);

    transfer();

    
}

SETUP(test_ifixed_object)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    object class_dispatch = create_class_dispatch();
    icall_object icall4(icall, (object)make_iconst(fools_system->ifixed),
                        DISPATCH_DELEGATE_SIZE,
                        class_dispatch,
                        (object)make_iconst((object)fools_system->nil),
                        (object)make_iconst((object)make_number(5)));

    context_object make_eval_context(ci, icall, env);

    object ifixed = transfer();    

    icall1(icall, make_iconst(ifixed), NEW);
    make_eval_context(ci, icall, env);

    object thefixed = transfer();

    icall1(icall, make_iconst(thefixed), DISPATCH);
    make_eval_context(ci, icall, env);

    object result = transfer();
    assert(result.pointer == ifixed.pointer);
    
    icall2(icall, make_iconst(thefixed), OBJECT_AT,
           (object)make_iconst((object)make_number(0)));
    make_eval_context(ci, icall, env);

    result = transfer();
    assert(result.nil == fools_system->nil);

    icall2(icall, make_iconst(thefixed), OBJECT_AT,
           (object)make_iconst((object)make_number(4)));
    make_eval_context(ci, icall, env);

    result = transfer();
    assert(result.nil == fools_system->nil);

    icall3(icall, make_iconst(thefixed),
           OBJECT_AT_PUT, (object)make_iconst((object)make_number(3)),
           (object)make_iconst(ifixed));
    make_eval_context(ci, icall, env);

    transfer();

    icall2(icall, make_iconst(thefixed), OBJECT_AT,
           (object)make_iconst((object)make_number(3)));
    make_eval_context(ci, icall, env);

    result = transfer();
    assert(result.pointer == ifixed.pointer);

}

SETUP(test_ifixed_dispatch)

    env_object env = make_env((object)fools_system->nil,
                              (object)fools_system->nil, 0);

    object class_dispatch = create_class_dispatch();
    icall_object icall4(icall, (object)make_iconst(fools_system->ifixed),
                        DISPATCH_DELEGATE_SIZE,
                        class_dispatch,
                        (object)make_iconst((object)fools_system->nil),
                        (object)make_iconst((object)make_number(2))); // superclass + methoddict

    context_object make_eval_context(ci, icall, env);

    object class_ifixed = transfer();    

    icall1(icall, make_iconst(class_ifixed), NEW);
    make_eval_context(ci, icall, env);

    object theclass = transfer();

    icall4(icall, (object)make_iconst(fools_system->ifixed),
                  DISPATCH_DELEGATE_SIZE,
                  class_dispatch,
                  (object)make_iconst(theclass),
                  (object)make_iconst((object)make_number(5)));

    make_eval_context(ci, icall, env);

    object instance_ifixed = transfer();    

    icall1(icall, make_iconst(instance_ifixed), NEW);
    make_eval_context(ci, icall, env);

    object instance = transfer();

    icall1(icall, make_iconst(instance), NEW);
    make_eval_context(ci, icall, env);

    printf("env: %p\n", env);

    transfer();
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
    test_make_ifixed();
    test_ifixed_natives();
    test_ifixed_object();
    test_ifixed_dispatch();

    return 0;
}
