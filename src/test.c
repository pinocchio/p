#include <assert.h>
#include <model.h>
#include <bootstrap.h>
#include <stdio.h>
#include <system.h>
#include <thread.h>
#include <scheme/behaviour.h>
#include <scheme/symbols.h>
#include <scheme/natives.h>
#include <print.h>

// TODO copy to boot/test/test-ast.p

// Some nice helper constructs.
#define SETUP(name)\
    void name() {\
        printf("################################## "#name"\n");\
        bootstrap();

SETUP(test_header)
    string_object string1 = NEW(struct symbol);
    string_object string2 = NEW(struct symbol);
    
    header(string1)       = (object) string2;
    assert(header(string1).string == string2);
}

SETUP(test_array)
    array_object a = make_array(100);
    assert(a->size == 100);

    int i;

    for(i = 0; i < 100; i++) {
        assert(array_at(a, i).object == woodstock->nil);
        array_at_put(a, i, (object)make_smallint(i));
    }
    
    for(i = 0; i < 100; i++) {
        assert(array_at(a, i).smallint->value == i);
    }
}

void native_test_single_arg_5() {
    context_object c = get_context();
    assert(array_size(&c->arguments) == 1);
    assert(argument_at(c, 0).smallint->value == 5);
    argument_at(c, 0).smallint->value = 6;
    pop_context();
}

SETUP(test_string_equals) 
    assert(string_equals(make_string(L"a string"), make_string(L"a string")));
    assert(!string_equals(make_string(L"a string"), make_string(L"b string")));
}

SETUP(test_object_object)
    object_object result = make_object(10, (object)woodstock->nil);

    assert(header(result).object == woodstock->nil);
    int i;
    for (i = 0; i < 10; i++) {
        assert(object_at(result, i).object == woodstock->nil);
    }
}

SETUP(test_transfer_empty_list)

    list_object list = make_list(0);

    context_object make_eval_context(ci, list, woodstock->nil);
    transfer();
}

SETUP(test_transfer_empty_list_in_list)

    list_object list  = make_list(2);
    list_object list2 = make_list(0);

    list_at_put(list, 0, (object)list2);
    list_at_put(list, 1, (object)list2);

    context_object make_eval_context(ci, list, woodstock->nil);

    transfer();
}

SETUP(test_transfer_constant)

    object v = (object)make_smallint(42);
    constant_object constant = make_constant(v);

    context_object make_eval_context(ci, constant, woodstock->nil);

    object result = transfer();

    assert(result.pointer == v.pointer);
}

SETUP(test_return_of_list)

    object v = (object)make_smallint(42);
    constant_object constant = make_constant(v);
    list_object list = make_list(1);

    list_at_put(list, 0, (object)constant);

    context_object make_eval_context(ci, list, woodstock->nil);

    object result = transfer();

    assert(result.pointer == v.pointer);
}

SETUP(test_env_lookup)

    object e1k = (object)make_string(L"env1 identifier");
    object e2k = (object)make_string(L"env2 identifier");

    object v1 = (object)make_string(L"v1");
    object v2 = (object)make_string(L"v2");
    object v3 = (object)make_string(L"v3");

    runtime_env_object env1 = make_env(e1k,
                               (object)woodstock->nil,
                               1);

    runtime_env_object env2 = make_env(e2k,
                               (object)env1,
                               1);

    context_object ci = make_context((object)env1, 4);
    set_message(ci, STORE_AT_IN_);
    set_argument(ci, 1, (object) make_constant(v1));
    set_argument(ci, 2, (object) make_constant((object)make_smallint(0)));
    set_argument(ci, 3, (object) make_constant(e1k));

    transfer();

    assert(array_at(env1->values, 0).pointer == v1.pointer);

    ci = make_context((object)env2, 4);
    set_message(ci, STORE_AT_IN_);
    set_argument(ci, 1, (object) make_constant(v2));
    set_argument(ci, 2, (object) make_constant((object)make_smallint(0)));
    set_argument(ci, 3, (object) make_constant(e2k));

    transfer();

    assert(array_at(env1->values, 0).pointer == v1.pointer);
    assert(array_at(env2->values, 0).pointer == v2.pointer);

    ci = make_context((object)env2, 4);
    set_message(ci, STORE_AT_IN_);
    set_argument(ci, 1, (object) make_constant(v3));
    set_argument(ci, 2, (object) make_constant((object)make_smallint(0)));
    set_argument(ci, 3, (object) make_constant(e1k));

    transfer();

    assert(array_at(env1->values, 0).pointer == v3.pointer);
    assert(array_at(env2->values, 0).pointer == v2.pointer);

    ci = make_context((object)env2, 3);
    set_message(ci, FETCH_FROM_);
    set_argument_const(ci, 1, (object)make_smallint(0));
    set_argument_const(ci, 2, e1k);

    object result = transfer();

    assert(result.pointer == v3.pointer);

    ci = make_context((object)env2, 3);
    
    set_message(ci, FETCH_FROM_);
    set_argument_const(ci, 1, (object)make_smallint(0));
    set_argument_const(ci, 2, e2k);

    result = transfer();

    assert(result.pointer == v2.pointer);

}

SETUP(test_ast_assign_var)

    runtime_env_object k = make_env((object)woodstock->nil,
                            (object)woodstock->nil,
                            1);
    object v = (object)make_smallint(42);
    constant_object constant = make_constant(v);
    var_object var = make_ast_var(L"iv");

    assign_object ast_assign = make_ast_assign((object)var, (object)constant);

    context_object make_eval_context(ci, ast_assign, k);

    transfer();

    assert(env_at(k, 0).pointer == v.pointer);
}

SETUP(test_var_read)

    runtime_env_object k = make_env((object)woodstock->nil,
                            (object)woodstock->nil,
                            1);
    object v                   = (object)make_smallint(42);
    constant_object constant = make_constant(v);
    var_object var     = make_ast_var(L"iv");

    assign_object ast_assign = make_ast_assign((object)var, (object)constant);

    context_object make_eval_context(ci, ast_assign, k);

    transfer();

    make_eval_context(ci, var, k);

    object result = transfer();

    assert(result.pointer == v.pointer);
}

void native_ast_callable() {
    context_object c = get_context();
    smallint_object first = argument_at(c, 0).smallint;
    assert(first->value == 5);
    first->value = 6;
    pop_context();
}

SETUP(test_ast_call)

    constant_object constant =
        make_constant(
            (object)make_native(
                &native_ast_callable));

    object v = (object)make_smallint(5);

    call_object ast_call = make_ast_call((object)constant, 1);
    set_callarg(ast_call, 0, v);

    context_object make_eval_context(ci, ast_call,
        make_env((object)woodstock->nil,
                 (object)woodstock->nil,
                 0));

    transfer();

    assert(scheme_list_at(ast_call->arguments, 0).smallint->value == 6);
}

SETUP(test_new_scoped)

    constant_object constant = make_constant(woodstock->scoped_class);

    object v = (object)make_smallint(5);
    object exp = (object)make_constant(v);

    call_object ast_call = make_ast_call((object)constant, 3);
    set_callmsg(ast_call, NEW_SIZE_);
    set_callarg(ast_call, 1, (object)make_constant(exp));
    set_callarg(ast_call, 2, (object)make_constant((object)make_smallint(0)));

    ast_call = make_ast_call((object)ast_call, 1);
    set_callmsg(ast_call, SHIFT);

    runtime_env_object start = make_env((object)woodstock->nil,
                                (object)woodstock->nil,
                                0);

    context_object make_eval_context(ci, ast_call, start);

    object result = transfer();
    
    scoped_object iscope = object_at(result.object, 0).scoped;

    object level_shifter = header(result.pointer);
    assert(level_shifter.native->target.target == &shift_level);

    assert(pheader(iscope) == woodstock->scoped_class.pointer);
    assert(iscope->expression.pointer == exp.pointer);
    assert(iscope->scope.env == start);

}

SETUP(test_eval_scoped)

    constant_object constant = make_constant(woodstock->scoped_class);

    object v = (object)make_smallint(5);
    object exp = (object)make_constant(v);

    call_object ast_call = make_ast_call((object)constant, 4);
    set_callmsg(ast_call, NEW_SIZE_);
    set_callarg(ast_call, 1, (object)make_constant(exp));
    set_callarg(ast_call, 2, (object)make_constant((object)make_smallint(0)));

    ast_call = make_ast_call((object)ast_call, 1);
    set_callmsg(ast_call, SHIFT);

    runtime_env_object start =
        make_env((object)woodstock->nil,
                 (object)woodstock->nil,
                 0);

    context_object make_eval_context(ci, ast_call, start);

    object result = transfer();

    scoped_object iscope = result.scoped;

    constant->constant = (object)iscope;
    ast_call = make_ast_call((object)constant, 0);

    make_eval_context(ci, ast_call, start);

    result = transfer();

    assert(result.pointer == v.pointer);

}

SETUP(test_ast_capture)
    
    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);

    context_object make_eval_context(ci, woodstock->ast_capture, env);

    object result = transfer();

    assert(result.env == env);
}

SETUP(test_env_parent)
    
    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);

    runtime_env_object env2 = make_env((object)woodstock->nil,
                              (object)env, 0);

    call_object ast_call = make_ast_call(
                            (object)
                            make_constant((object)env2), 1);
    set_callmsg(ast_call, PARENT);
    context_object make_eval_context(ci, ast_call, env);

    object result = transfer();
    
    assert(result.env == env);                     
}

SETUP(test_capture_parent)
    
    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);

    runtime_env_object env2 = make_env((object)woodstock->nil,
                              (object)env, 0);

    call_object ast_call = make_ast_call(woodstock->ast_capture, 1);
    set_callmsg(ast_call, PARENT);
    context_object make_eval_context(ci, ast_call, env2);

    object result = transfer();
    
    assert(result.env == env);                     
}

SETUP(test_make_function_no_args)

    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);

    array_object args = make_array(1);
    array_at_put(args, 0, (object)make_ast_var(L"iv"));

    object constant_function =
        make_func(args,
                  (object)
                  make_constant((object)make_smallint(42)));

    context_object make_eval_context(ci, constant_function, env);

    object result = transfer();

    scoped_object iscope = object_at(result.object, 0).scoped;
    assert(pheader(iscope) == woodstock->scoped_class.pointer);
    assert(iscope->scope.env == env);

}

SETUP(test_list_pass_context)

    list_object list = make_list(1);
    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);

    runtime_env_object env2 = make_env((object)woodstock->nil,
                              (object)env, 0);

    call_object ast_call = make_ast_call(woodstock->ast_capture, 1);
    set_callmsg(ast_call, PARENT);

    list_at_put(list, 0, (object)ast_call);

    context_object make_eval_context(ci, list, env2);

    object result = transfer();
    
    assert(result.env == env);
}

SETUP(test_eval_function_no_args)

    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);


    constant_object the_instr = make_constant((object)make_smallint(42));

    object constant_function =
        make_func(make_array(0),
                    (object)
                    the_instr
                  );

    context_object make_eval_context(ci, constant_function, env);

    object scoped_function = transfer();

    object constant = (object)make_constant(scoped_function);
    call_object ast_call = make_ast_call(constant, 0);

    make_eval_context(ci, ast_call, env);

    object result = transfer();

    assert(result.smallint->value == 42);

}

SETUP(test_make_function_1_arg)

    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);



    var_object var = make_ast_var(L"iv");
    array_object arguments = make_array(1);
    array_at_put(arguments, 0, (object)var);

    object constant_function =
        make_func(arguments,
                    (object)
                    var
                  );

    context_object make_eval_context(ci, constant_function, env);

    transfer();
}

SETUP(test_eval_function_1_arg)

    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);



    var_object var = make_ast_var(L"iv");
    array_object arguments = make_array(1);
    array_at_put(arguments, 0, (object)var);

    object constant_function =
        make_func(arguments,
                    (object)
                    var
                  );

    context_object make_eval_context(ci, constant_function, env);

    object scoped_function = transfer();

    object arg = (object)make_smallint(42);

    object constant = (object)make_constant(scoped_function);
    call_object ast_call = make_ast_call(constant, 1);
    set_callarg(ast_call, 0, (object)make_constant(arg));

    make_eval_context(ci, ast_call, env);

    object result = transfer();

    assert(result.smallint->value == 42);
}

SETUP(test_eval_nested_function)

    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);

    var_object var = make_ast_var(L"iv");
    array_object arguments = make_array(1);
    array_at_put(arguments, 0, (object)var);

    object constant_function1 =
        make_func(make_array(0),
                    (object)
                    var
                  );

    object constant_function = make_func(arguments, constant_function1);
    context_object make_eval_context(ci, constant_function, env);

    object scoped_function = transfer();

    object arg = (object)make_smallint(42);
    object constant = (object)make_constant(scoped_function);
    call_object ast_call = make_ast_call(constant, 1);
    set_callarg(ast_call, 0, (object)make_constant(arg));

    make_eval_context(ci, ast_call, env);

    object nested_function = transfer();
    
    constant = (object)make_constant(nested_function);
    ast_call = make_ast_call(constant, 0);

    make_eval_context(ci, ast_call, env);

    object result = transfer();

    assert(result.smallint->value == 42);
}

object SYMBOL_doesNotUnderstand;

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
define_symbol(SYMBOL_doesNotUnderstand, L"DNU");
object null         = (object)make_constant((object)woodstock->nil);
object var_3_self = (object)make_ast_var(L"self");
object var_4_env = (object)make_ast_var(L"env");
object var_5_args = (object)make_ast_var(L"args");
object var_7_msg = (object)make_ast_var(L"msg");
object number_9_0 = (object)make_constant((object)make_smallint(0));
call_object ast_call_10_var_5_args = make_ast_call((object)var_5_args, 3);
set_callarg(ast_call_10_var_5_args, 0, (object)OBJECT_AT_PUT_);
set_callarg(ast_call_10_var_5_args, 1, (object)number_9_0);
set_callarg(ast_call_10_var_5_args, 2, (object)var_3_self);
object var_12_loop = (object)make_ast_var(L"loop");
object var_16_class = (object)make_ast_var(L"class");
call_object ast_call_17_scheme_eqp = make_ast_call((object)scheme_eqp, 2);
set_callarg(ast_call_17_scheme_eqp, 0, (object)var_16_class);
set_callarg(ast_call_17_scheme_eqp, 1, (object)null);
call_object ast_call_18_var_3_self = make_ast_call((object)var_3_self, 4);
set_callarg(ast_call_18_var_3_self, 0, (object)SYMBOL_doesNotUnderstand);
set_callarg(ast_call_18_var_3_self, 1, (object)var_7_msg);
set_callarg(ast_call_18_var_3_self, 2, (object)var_4_env);
set_callarg(ast_call_18_var_3_self, 3, (object)var_5_args);
object var_20_amethod = (object)make_ast_var(L"amethod");
call_object ast_call_21_scheme_eqp = make_ast_call((object)scheme_eqp, 2);
set_callarg(ast_call_21_scheme_eqp, 0, (object)var_20_amethod);
set_callarg(ast_call_21_scheme_eqp, 1, (object)null);
object number_22_0 = (object)make_constant((object)make_smallint(0));
call_object ast_call_23_var_16_class = make_ast_call((object)var_16_class, 2);
set_callarg(ast_call_23_var_16_class, 0, (object)OBJECT_AT_);
set_callarg(ast_call_23_var_16_class, 1, (object)number_22_0);
call_object ast_call_24_var_12_loop = make_ast_call((object)var_12_loop, 1);
set_callarg(ast_call_24_var_12_loop, 0, (object)ast_call_23_var_16_class);
call_object ast_call_25_var_20_amethod = make_ast_call((object)var_20_amethod, 3);
set_callarg(ast_call_25_var_20_amethod, 0, (object)APPLY_IN_);
set_callarg(ast_call_25_var_20_amethod, 1, (object)var_5_args);
set_callarg(ast_call_25_var_20_amethod, 2, (object)var_4_env);
call_object ast_call_26_ast_call_21_scheme_eqp = make_ast_call((object)ast_call_21_scheme_eqp, 2);
set_callarg(ast_call_26_ast_call_21_scheme_eqp, 0, (object)ast_call_24_var_12_loop);
set_callarg(ast_call_26_ast_call_21_scheme_eqp, 1, (object)ast_call_25_var_20_amethod);
array_object array_27_lambda_19_x = make_array(1);
array_at_put(array_27_lambda_19_x, 0, var_20_amethod);
object lambda_19_x = make_func(array_27_lambda_19_x, (object)ast_call_26_ast_call_21_scheme_eqp);
object number_28_1 = (object)make_constant((object)make_smallint(1));
call_object ast_call_29_var_16_class = make_ast_call((object)var_16_class, 2);
set_callarg(ast_call_29_var_16_class, 0, (object)OBJECT_AT_);
set_callarg(ast_call_29_var_16_class, 1, (object)number_28_1);
call_object ast_call_30_ast_call_29_var_16_class = make_ast_call((object)ast_call_29_var_16_class, 2);
set_callarg(ast_call_30_ast_call_29_var_16_class, 0, (object)OBJECT_AT_);
set_callarg(ast_call_30_ast_call_29_var_16_class, 1, (object)var_7_msg);
call_object ast_call_31_lambda_19_x = make_ast_call((object)lambda_19_x, 1);
set_callarg(ast_call_31_lambda_19_x, 0, (object)ast_call_30_ast_call_29_var_16_class);
call_object ast_call_32_ast_call_17_scheme_eqp = make_ast_call((object)ast_call_17_scheme_eqp, 2);
set_callarg(ast_call_32_ast_call_17_scheme_eqp, 0, (object)ast_call_18_var_3_self);
set_callarg(ast_call_32_ast_call_17_scheme_eqp, 1, (object)ast_call_31_lambda_19_x);
array_object array_33_lambda_15_x = make_array(1);
array_at_put(array_33_lambda_15_x, 0, var_16_class);
object lambda_15_x = make_func(array_33_lambda_15_x, (object)ast_call_32_ast_call_17_scheme_eqp);
assign_object ast_assign_14_x = make_ast_assign(var_12_loop, (object)lambda_15_x);
call_object ast_call_34_var_3_self = make_ast_call((object)var_3_self, 1);
set_callarg(ast_call_34_var_3_self, 0, (object)DELEGATE);
call_object ast_call_35_var_12_loop = make_ast_call((object)var_12_loop, 1);
set_callarg(ast_call_35_var_12_loop, 0, (object)ast_call_34_var_3_self);
list_object list_13_lambda = make_list(2);
list_at_put(list_13_lambda, 0, (object)ast_assign_14_x);
list_at_put(list_13_lambda, 1, (object)ast_call_35_var_12_loop);
array_object array_36_lambda_11_x = make_array(1);
array_at_put(array_36_lambda_11_x, 0, var_12_loop);
object lambda_11_x = make_func(array_36_lambda_11_x, (object)list_13_lambda);
call_object ast_call_37_lambda_11_x = make_ast_call((object)lambda_11_x, 1);
set_callarg(ast_call_37_lambda_11_x, 0, (object)null);
list_object list_8_lambda = make_list(2);
list_at_put(list_8_lambda, 0, (object)ast_call_10_var_5_args);
list_at_put(list_8_lambda, 1, (object)ast_call_37_lambda_11_x);
array_object array_38_lambda_6_x = make_array(1);
array_at_put(array_38_lambda_6_x, 0, var_7_msg);
object lambda_6_x = make_func(array_38_lambda_6_x, (object)list_8_lambda);
object number_39_0 = (object)make_constant((object)make_smallint(0));
call_object ast_call_40_var_5_args = make_ast_call((object)var_5_args, 2);
set_callarg(ast_call_40_var_5_args, 0, (object)OBJECT_AT_);
set_callarg(ast_call_40_var_5_args, 1, (object)number_39_0);
call_object ast_call_41_lambda_6_x = make_ast_call((object)lambda_6_x, 1);
set_callarg(ast_call_41_lambda_6_x, 0, (object)ast_call_40_var_5_args);
array_object array_42_lambda_2_x = make_array(3);
array_at_put(array_42_lambda_2_x, 0, var_3_self);
array_at_put(array_42_lambda_2_x, 1, var_4_env);
array_at_put(array_42_lambda_2_x, 2, var_5_args);
return make_dispatch(array_42_lambda_2_x, (object)ast_call_41_lambda_6_x);
}

SETUP(test_make_ifixed)

    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);

    object class_dispatch = create_class_dispatch();
    call_object ast_call4(ast_call, (object)make_constant(woodstock->ifixed),
                        DISPATCH_DELEGATE_SIZE_,
                        class_dispatch,
                        (object)make_constant((object)woodstock->nil),
                        (object)make_constant((object)make_smallint(5)));

    context_object make_eval_context(ci, ast_call, env);

    object result = transfer();    

    assert(result.ifixed->size == 5);
    assert(result.ifixed->delegate.object == woodstock->nil);

    //assert((pointer)*PINC(result.ifixed->interp.pointer) == result.pointer);
    
}

SETUP(test_ifixed_natives)

    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);

    object class_dispatch = create_class_dispatch();
    call_object ast_call4(ast_call, (object)make_constant(woodstock->ifixed),
                        DISPATCH_DELEGATE_SIZE_,
                        class_dispatch,
                        (object)make_constant((object)woodstock->nil),
                        (object)make_constant((object)make_smallint(5)));

    context_object make_eval_context(ci, ast_call, env);

    object ifixed = transfer();    

    assert(ifixed.ifixed->size == 5);
    assert(ifixed.ifixed->delegate.object == woodstock->nil);

    ast_call1(ast_call, make_constant(ifixed), SIZE);
    make_eval_context(ci, ast_call, env);

    object result = transfer();

    assert(result.smallint->value == 5);

    ast_call1(ast_call, make_constant(ifixed), BASICNEW);
    make_eval_context(ci, ast_call, env);

    transfer();

    
}

SETUP(test_ifixed_object)

    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);

    object class_dispatch = create_class_dispatch();
    call_object ast_call4(ast_call, (object)make_constant(woodstock->ifixed),
                        DISPATCH_DELEGATE_SIZE_,
                        class_dispatch,
                        (object)make_constant((object)woodstock->nil),
                        (object)make_constant((object)make_smallint(5)));

    context_object make_eval_context(ci, ast_call, env);

    object ifixed = transfer();    

    ast_call1(ast_call, make_constant(ifixed), BASICNEW);
    make_eval_context(ci, ast_call, env);

    object thefixed = transfer();

    ast_call1(ast_call, make_constant(thefixed), DELEGATE);
    make_eval_context(ci, ast_call, env);

    object result = transfer();
    assert(result.pointer == ifixed.ifixed->delegate.pointer);
    
    ast_call2(ast_call, make_constant(thefixed), OBJECT_AT_,
           (object)make_constant((object)make_smallint(0)));
    make_eval_context(ci, ast_call, env);

    result = transfer();
    assert(result.object == woodstock->nil);

    ast_call2(ast_call, make_constant(thefixed), OBJECT_AT_,
           (object)make_constant((object)make_smallint(4)));
    make_eval_context(ci, ast_call, env);

    result = transfer();
    assert(result.object == woodstock->nil);

    ast_call3(ast_call, make_constant(thefixed),
           OBJECT_AT_PUT_, (object)make_constant((object)make_smallint(3)),
           (object)make_constant(ifixed));
    make_eval_context(ci, ast_call, env);

    transfer();

    ast_call2(ast_call, make_constant(thefixed), OBJECT_AT_,
           (object)make_constant((object)make_smallint(3)));
    make_eval_context(ci, ast_call, env);

    result = transfer();
    assert(result.pointer == ifixed.pointer);

}

SETUP(test_ifixed_dispatch)

    runtime_env_object env = make_env((object)woodstock->nil,
                              (object)woodstock->nil, 0);

    object class_dispatch = create_class_dispatch();
    call_object ast_call4(ast_call, (object)make_constant(woodstock->ifixed),
                        DISPATCH_DELEGATE_SIZE_,
                        class_dispatch,
                        (object)make_constant((object)woodstock->nil),
                        (object)make_constant((object)make_smallint(2))); // superclass + methoddict

    context_object make_eval_context(ci, ast_call, env);

    object class_ifixed = transfer();    

    ast_call1(ast_call, make_constant(class_ifixed), BASICNEW);
    make_eval_context(ci, ast_call, env);

    object theclass = transfer();

    object svar = (object)make_ast_var(L"self");
    object mvar = (object)make_ast_var(L"msg");
    object evar = (object)make_ast_var(L"env");
    object avar = (object)make_ast_var(L"args");
    array_object args = make_array(4);
    raw_array_at_put(args, 0, svar);
    raw_array_at_put(args, 1, mvar);
    raw_array_at_put(args, 2, evar);
    raw_array_at_put(args, 3, avar);
    // TODO should evaluate it's but not shift!
    object dnu = make_m(args, (object)mvar);

    dictionary_object methods = make_dict(2);
    ast_call3(ast_call, (object)make_constant((object)methods),
                  OBJECT_AT_PUT_,
                  (object)make_constant((object)SYMBOL_doesNotUnderstand),
                  dnu);

    make_eval_context(ci, ast_call, env);
    transfer();

    object_at_put(theclass.object, 1, (object)methods);

    ast_call4(ast_call, (object)make_constant(woodstock->ifixed),
                  DISPATCH_DELEGATE_SIZE_,
                  class_dispatch,
                  (object)make_constant(theclass),
                  (object)make_constant((object)make_smallint(5)));

    make_eval_context(ci, ast_call, env);

    object instance_ifixed = transfer();    

    ast_call1(ast_call, make_constant(instance_ifixed), BASICNEW);
    make_eval_context(ci, ast_call, env);

    object instance = transfer();

    ast_call1(ast_call, make_constant(instance), BASICNEW);
    make_eval_context(ci, ast_call, env);
    // assure that the return type is of var
    cast(var, transfer(), var); 
}


int main() {
    test_header();
    test_array();
    test_string_equals();
    test_object_object();
    test_transfer_empty_list();
    test_transfer_empty_list_in_list();
    test_transfer_constant();
    test_return_of_list();
    test_env_lookup();
    test_ast_assign_var();
    test_var_read();
    // test_ast_call(); // currently broken
    test_new_scoped();
    test_eval_scoped();
    test_ast_capture();
    test_env_parent();
    test_capture_parent();
    test_make_function_no_args();
    test_list_pass_context();
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
