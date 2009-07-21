#ifndef SCHEME_NATIVES_H
#define SCHEME_NATIVES_H

extern object scheme_plus;
extern object scheme_minus;
extern object scheme_smallerp;
extern object scheme_equalp;
extern object scheme_eqp;
extern object scheme_chareqp;

extern object scheme_string_to_symbol;

extern object scheme_true;
extern object scheme_false;
extern object scheme_display;
extern object scheme_callec;
extern object scheme_exit;
extern object scheme_error_handler;
extern object inline make_bool(int bl);

extern void bootstrap_scheme();


#define preval_header(name) \
extern object scheme##_##name;\
extern void scheme##_##name##_##func();


#define preval1(name, context, argument, body) \
object scheme##_##name;\
void name##_##do() {\
    context_object context = get_context();\
    object argument = argument_at(context, 0);\
    body;\
}\
void scheme##_##name##_##func() {\
    context_object context = get_context();\
    assert_argsize(context, 1);\
    push_eval_of(context, 0);\
    context->code = &name##_##do;\
}


#define preval2_push(name) \
void name##_##func() {\
    context_object context = get_context();\
    assert_argsize(context, 2);\
    push_eval_of(context, 0);\
    push_eval_of(context, 1);\
    context->code = &name##_##func_do;\
}


#define init_op(name)\
    scheme##_##name = (object)make_iconst(\
                        (object)make_object(0,\
                            (object)make_native(&scheme##_##name##_##func)));
#define init_direct_op(name)\
    scheme##_##name = (object)make_object(0,\
                        (object)make_native(&scheme##_##name##_##func));


#define cast_bin_eval_with(name, type1, type2, func)\
object scheme##_##name;\
static void scheme##_##name##_##func_do() {\
    dec();\
    debug("scheme>>"#name"\n");\
    context_object context = get_context();\
    cast(v1##_##type1, argument_at(context, 0), type1);\
    cast(v2##_##type2, argument_at(context, 1), type2);\
    object result = func(v1##_##type1, v2##_##type2);\
    return_from_context(context, result);\
    debug("ret>>scheme>>"#name"\n");\
}\
preval2_push(scheme##_##name);


#define bin_eval_with(name, func)\
object scheme##_##name;\
static void scheme##_##name##_##func_do() {\
    dec();\
    debug("scheme>>"#name"\n");\
    context_object context = get_context();\
    object result = func(argument_at(context, 0).object,\
                         argument_at(context, 1).object);\
    return_from_context(context, result);\
    debug("ret>>scheme>>"#name"\n");\
}\
preval2_push(scheme##_##name);


#define bin_io_op(name, input, output, op)\
object inline scheme##_##name##_##native(input##_##object left, input##_##object right) {\
    return (object)make##_##output(left->value op right->value);\
}\
cast_bin_eval_with(name, input, input, scheme##_##name##_##native)


#define bin_number_number_op(name, op)\
    bin_io_op(name, number, number, op)

#define bin_number_bool_op(name, op)\
    bin_io_op(name, number, bool, op)

#define bin_char_bool_op(name, op)\
    bin_io_op(name, chr, bool, op)

#define bin_object_bool_op(name, op)\
object inline scheme##_##name##_##native(object_object left, object_object right) {\
    return (object)make_bool(left op right);\
}\
bin_eval_with(name, scheme##_##name##_##native)


#endif //SCHEME_NATIVES_H
