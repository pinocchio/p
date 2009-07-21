#ifndef SCHEME_NATIVES_H
#define SCHEME_NATIVES_H

extern object scheme_plus;
extern object scheme_minus;
extern object scheme_smallerp;
extern object scheme_equalp;
extern object scheme_eqp;
extern object scheme_chareqp;
extern object scheme_cons;

extern object scheme_string_to_symbol;

extern object scheme_true;
extern object scheme_false;
extern object scheme_display;
extern object scheme_callec;
extern object scheme_exit;
extern object scheme_error_handler;
extern object inline make_bool(int bl);

extern object cons(object car, object cdr);
extern int scheme_list_size(object l);
extern object make_scheme_list(int size);
extern object scheme_list_at(object l, int index);
extern void scheme_list_at_put(object l, int index, object value);

extern void bootstrap_scheme();


#define preval_header(name) \
extern object scheme##_##name;\
extern void scheme##_##name##_##func();


#define preval1(name, argument, body) \
object scheme##_##name;\
void name##_##do() {\
    context_object context = get_context();\
    object argument = argument_at(context, 0);\
    body;\
}\
preval_push(name, 1);


#define preval2(name, arg1, arg2, body) \
object scheme##_##name;\
void name##_##do() {\
    context_object context = get_context();\
    object arg1 = argument_at(context, 0);\
    object arg2 = argument_at(context, 1);\
    body;\
}\
preval_push(name, 2);


#define preval3(name, arg1, arg2, arg3, body) \
object scheme##_##name;\
void name##_##do() {\
    context_object context = get_context();\
    object arg1 = argument_at(context, 0);\
    object arg2 = argument_at(context, 1);\
    object arg3 = argument_at(context, 2);\
    body;\
}\
preval_push(name, 3);


#define preval4(name, arg1, arg2, arg3, arg4, body) \
object scheme##_##name;\
void name##_##do() {\
    context_object context = get_context();\
    object arg1 = argument_at(context, 0);\
    object arg2 = argument_at(context, 1);\
    object arg3 = argument_at(context, 2);\
    object arg4 = argument_at(context, 4);\
    body;\
}\
preval_push(name, 4);

#define preval_push(name, count)\
void scheme##_##name##_##func() {\
    context_object context = get_context();\
    assert_argsize(context, count);\
    int i;\
    for (i=0; i<count; i++) {\
		push_eval_of(context, i);\
    }\
    context->code = &name##_##do;\
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
static void name##_##do() {\
    dec();\
    debug("scheme>>"#name"\n");\
    context_object context = get_context();\
    cast(v1##_##type1, argument_at(context, 0), type1);\
    cast(v2##_##type2, argument_at(context, 1), type2);\
    object result = func(v1##_##type1, v2##_##type2);\
    return_from_context(context, result);\
    debug("ret>>scheme>>"#name"\n");\
}\
preval_push(name, 2);


#define bin_eval_with(name, func)\
object scheme##_##name;\
static void name##_##do() {\
    dec();\
    debug("scheme>>"#name"\n");\
    context_object context = get_context();\
    object result = func(argument_at(context, 0).object,\
                         argument_at(context, 1).object);\
    return_from_context(context, result);\
    debug("ret>>scheme>>"#name"\n");\
}\
preval_push(name, 2);


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
