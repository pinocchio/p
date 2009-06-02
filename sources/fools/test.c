#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>
#include <thread.h>
#include <scheme/system.h>
#include <scheme/symbols.h>
#include <scheme/natives.h>
#include <print.h>

// Some nice helper constructs.
#define SETUP(name)\
    void name() {\
        printf("################################## "#name"\n");\
        bootstrap();

SETUP(test_header)
    string_object string1 = NEW(struct string);
    string_object string2 = NEW(struct string);
    
    header(string1)       = (object) string2;
    assert(header(string1).string == string2);
}

SETUP(test_array)

    array_object a = make_array(100);
    assert(a->size == 100);

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
    assert(array_size(&c->arguments) == 1);
    assert(number_value(argument_at(c, 0).number) == 5);
    argument_at(c, 0).number->value = 6;
    pop_context();
}

SETUP(test_string_equals) 

    assert(string_equals(make_string("a string"), make_string("a string")));
    assert(!string_equals(make_string("a string"), make_string("b string")));
}

SETUP(test_object_object)
    object_object result = make_object(10, (object)fools_system->nil);

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
    set_callmsg(icall, PARENT);
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
    set_callmsg(icall, PARENT);
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

    icall_object icall = make_icall(fools_system->icapture, 1);
    set_callmsg(icall, PARENT);

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
(dispatch (self env args)
    (let ((msg (args 'OBJECT_AT 0)))
        (args 'OBJECT_AT_PUT 0 self)
        (let loop ((class (self 'DELEGATE)))
            (if (eq? class null)
                (self 'SYMBOL_doesNotUnderstand msg env args)
                (let ((method ((class 'OBJECT_AT 1) 'OBJECT_AT msg)))
                    (if (eq? method null)
                        (loop (class 'OBJECT_AT 0))
                        (method 'APPLY_IN args env)))))))
*/
object null         = (object)make_iconst((object)fools_system->nil);
object ivar_3_self = (object)make_ivar("self");
object ivar_4_env = (object)make_ivar("env");
object ivar_5_args = (object)make_ivar("args");
object ivar_7_msg = (object)make_ivar("msg");
object number_9_0 = (object)make_iconst((object)make_number(0));
icall_object icall_10_ivar_5_args = make_icall((object)ivar_5_args, 3);
set_callarg(icall_10_ivar_5_args, 0, (object)OBJECT_AT_PUT);
set_callarg(icall_10_ivar_5_args, 1, (object)number_9_0);
set_callarg(icall_10_ivar_5_args, 2, (object)ivar_3_self);
object ivar_12_loop = (object)make_ivar("loop");
object ivar_16_class = (object)make_ivar("class");
icall_object icall_17_scheme_eqp = make_icall((object)scheme_eqp, 2);
set_callarg(icall_17_scheme_eqp, 0, (object)ivar_16_class);
set_callarg(icall_17_scheme_eqp, 1, (object)null);
icall_object icall_18_ivar_3_self = make_icall((object)ivar_3_self, 4);
set_callarg(icall_18_ivar_3_self, 0, (object)SYMBOL_doesNotUnderstand);
set_callarg(icall_18_ivar_3_self, 1, (object)ivar_7_msg);
set_callarg(icall_18_ivar_3_self, 2, (object)ivar_4_env);
set_callarg(icall_18_ivar_3_self, 3, (object)ivar_5_args);
object ivar_20_amethod = (object)make_ivar("amethod");
icall_object icall_21_scheme_eqp = make_icall((object)scheme_eqp, 2);
set_callarg(icall_21_scheme_eqp, 0, (object)ivar_20_amethod);
set_callarg(icall_21_scheme_eqp, 1, (object)null);
object number_22_0 = (object)make_iconst((object)make_number(0));
icall_object icall_23_ivar_16_class = make_icall((object)ivar_16_class, 2);
set_callarg(icall_23_ivar_16_class, 0, (object)OBJECT_AT);
set_callarg(icall_23_ivar_16_class, 1, (object)number_22_0);
icall_object icall_24_ivar_12_loop = make_icall((object)ivar_12_loop, 1);
set_callarg(icall_24_ivar_12_loop, 0, (object)icall_23_ivar_16_class);
icall_object icall_25_ivar_20_amethod = make_icall((object)ivar_20_amethod, 3);
set_callarg(icall_25_ivar_20_amethod, 0, (object)APPLY_IN);
set_callarg(icall_25_ivar_20_amethod, 1, (object)ivar_5_args);
set_callarg(icall_25_ivar_20_amethod, 2, (object)ivar_4_env);
icall_object icall_26_icall_21_scheme_eqp = make_icall((object)icall_21_scheme_eqp, 2);
set_callarg(icall_26_icall_21_scheme_eqp, 0, (object)icall_24_ivar_12_loop);
set_callarg(icall_26_icall_21_scheme_eqp, 1, (object)icall_25_ivar_20_amethod);
array_object array_27_lambda_19_x = make_array(1);
array_at_put(array_27_lambda_19_x, 0, ivar_20_amethod);
object lambda_19_x = make_func(array_27_lambda_19_x, (object)icall_26_icall_21_scheme_eqp);
object number_28_1 = (object)make_iconst((object)make_number(1));
icall_object icall_29_ivar_16_class = make_icall((object)ivar_16_class, 2);
set_callarg(icall_29_ivar_16_class, 0, (object)OBJECT_AT);
set_callarg(icall_29_ivar_16_class, 1, (object)number_28_1);
icall_object icall_30_icall_29_ivar_16_class = make_icall((object)icall_29_ivar_16_class, 2);
set_callarg(icall_30_icall_29_ivar_16_class, 0, (object)OBJECT_AT);
set_callarg(icall_30_icall_29_ivar_16_class, 1, (object)ivar_7_msg);
icall_object icall_31_lambda_19_x = make_icall((object)lambda_19_x, 1);
set_callarg(icall_31_lambda_19_x, 0, (object)icall_30_icall_29_ivar_16_class);
icall_object icall_32_icall_17_scheme_eqp = make_icall((object)icall_17_scheme_eqp, 2);
set_callarg(icall_32_icall_17_scheme_eqp, 0, (object)icall_18_ivar_3_self);
set_callarg(icall_32_icall_17_scheme_eqp, 1, (object)icall_31_lambda_19_x);
array_object array_33_lambda_15_x = make_array(1);
array_at_put(array_33_lambda_15_x, 0, ivar_16_class);
object lambda_15_x = make_func(array_33_lambda_15_x, (object)icall_32_icall_17_scheme_eqp);
iassign_object iassign_14_x = make_iassign(ivar_12_loop.ivar, (object)lambda_15_x);
icall_object icall_34_ivar_3_self = make_icall((object)ivar_3_self, 1);
set_callarg(icall_34_ivar_3_self, 0, (object)DELEGATE);
icall_object icall_35_ivar_12_loop = make_icall((object)ivar_12_loop, 1);
set_callarg(icall_35_ivar_12_loop, 0, (object)icall_34_ivar_3_self);
ilist_object ilist_13_lambda = make_ilist(2);
ilist_at_put(ilist_13_lambda, 0, (object)iassign_14_x);
ilist_at_put(ilist_13_lambda, 1, (object)icall_35_ivar_12_loop);
array_object array_36_lambda_11_x = make_array(1);
array_at_put(array_36_lambda_11_x, 0, ivar_12_loop);
object lambda_11_x = make_func(array_36_lambda_11_x, (object)ilist_13_lambda);
icall_object icall_37_lambda_11_x = make_icall((object)lambda_11_x, 1);
set_callarg(icall_37_lambda_11_x, 0, (object)null);
ilist_object ilist_8_lambda = make_ilist(2);
ilist_at_put(ilist_8_lambda, 0, (object)icall_10_ivar_5_args);
ilist_at_put(ilist_8_lambda, 1, (object)icall_37_lambda_11_x);
array_object array_38_lambda_6_x = make_array(1);
array_at_put(array_38_lambda_6_x, 0, ivar_7_msg);
object lambda_6_x = make_func(array_38_lambda_6_x, (object)ilist_8_lambda);
object number_39_0 = (object)make_iconst((object)make_number(0));
icall_object icall_40_ivar_5_args = make_icall((object)ivar_5_args, 2);
set_callarg(icall_40_ivar_5_args, 0, (object)OBJECT_AT);
set_callarg(icall_40_ivar_5_args, 1, (object)number_39_0);
icall_object icall_41_lambda_6_x = make_icall((object)lambda_6_x, 1);
set_callarg(icall_41_lambda_6_x, 0, (object)icall_40_ivar_5_args);
array_object array_42_lambda_2_x = make_array(3);
array_at_put(array_42_lambda_2_x, 0, ivar_3_self);
array_at_put(array_42_lambda_2_x, 1, ivar_4_env);
array_at_put(array_42_lambda_2_x, 2, ivar_5_args);
return make_dispatch(array_42_lambda_2_x, (object)icall_41_lambda_6_x);
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

    icall1(icall, make_iconst(ifixed), SIZE);
    make_eval_context(ci, icall, env);

    object result = transfer();

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

    icall1(icall, make_iconst(thefixed), DELEGATE);
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

    object svar = (object)make_ivar("self");
    object mvar = (object)make_ivar("msg");
    object evar = (object)make_ivar("env");
    object avar = (object)make_ivar("args");
    array_object args = make_array(4);
    raw_array_at_put(args, 0, svar);
    raw_array_at_put(args, 1, mvar);
    raw_array_at_put(args, 2, evar);
    raw_array_at_put(args, 3, avar);
    // TODO should evaluate it's but not shift!
    object dnu = make_m(args, (object)mvar);

    dict_object methods = make_dict(2);
    icall3(icall, (object)make_iconst((object)methods),
                  OBJECT_AT_PUT,
                  (object)make_iconst((object)SYMBOL_doesNotUnderstand),
                  dnu);

    make_eval_context(ci, icall, env);
    transfer();

    object_at_put(theclass.object, 1, (object)methods);

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

    object result = transfer();
    print_object(result);
    printf("\n");
}


int main() {
    test_header();
    test_array();
    test_string_equals();
    test_object_object();
    test_transfer_empty_ilist();
    test_transfer_empty_ilist_in_ilist();
    test_transfer_iconst();
    test_return_of_ilist();
    test_env_lookup();
    test_iassign_ivar();
    test_ivar_read();
    // test_icall(); // currently broken
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

    return EXIT_SUCCESS;
}
