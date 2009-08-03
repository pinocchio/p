#include <model.h>
#include <bootstrap.h>
#include <system.h>
#include <scheme/natives.h>
#include <scheme/behaviour.h>
#include <scheme/symbols.h>
#include <print.h>
#include <thread.h>

#include <stdio.h>

object inline make_bool(int bl) {
    if (bl) {
        return scheme_true;
    } else {
        return scheme_false;
    }
}

object scheme_true;
void scheme_true_func() {
    context_object context = get_context();
    debug("scheme>>true\n");
    object if_true = argument_at(context, 0);

    new_target(context, if_true);
    set_message(context, EVAL);

    debug("ret>>scheme>>true\n");
}

object scheme_false;
void scheme_false_func() {
    context_object context = get_context();
    debug("scheme>>false\n");
    object if_false = argument_at(context, 1);

    new_target(context, if_false);
    set_message(context, EVAL);

    debug("ret>>scheme>>false\n");
}

bin_number_number_op( plus,      +  )
bin_number_number_op( minus,     -  )
bin_number_bool_op  ( smallerp,  <  )
bin_number_bool_op  ( smaller_equalp,   <=  )
bin_number_bool_op  ( bigger_equalp,    >=  )
bin_number_bool_op  ( equalp,    == )
bin_char_bool_op    ( chareqp,   == )
bin_object_bool_op  ( eqp,       == )

preval1(display, value,
    debug("scheme>>display\n");
    print_object(value);
    return_from_context(context, value);
    debug("ret>>scheme>>display\n");
)

object scheme_continue;

object make_ec() {
    object_object ec = make_object(1, scheme_continue);
    object_at_put(ec, 0, (object)get_context());
    return (object)ec;
}
// TODO move to separate files
preval1(callec, lambda,
    object env = context->env;
    pop_context();
    object ec = make_ec();
    context = make_context(lambda, 1);
    context->env = env;
    set_argument(context, 0, (object)make_constant(ec));
    // marker on return_context
    set_argument(return_context(context), 1, ec);
)

preval1(cont, value,
    object self = context->self;
    context_object return_context = object_at(self.object, 0).context;

    int test = argument_at(return_context, 1).object == self.object;
    if (self.object != woodstock->error.object) {
        error_guard(test, "Continuing finished escape continuation.");
    } else if (!test) {
       printf("Failing to continue the error-handler!\n");
       exit(-1);
    }
    return_to_context(return_context, value);
)

preval1(error, message,
    print_object(message);
    exit(-1);
)

preval1(error_handler, error_handler,
    woodstock->error     = error_handler;
    return_from_context(context, error_handler);
)

preval1(exit, value,
    cast(n, value, smallint);
    exit(n->value);
)

preval2(cons, car, cdr,
    return_from_context(context, cons(car, cdr));
)

preval1(car, cons,
    return_from_context(context, car(cons));
)

preval1(cdr, cons,
    return_from_context(context, cdr(cons));
)

object cons(object car, object cdr) {
    object_object cons = make_object(2, woodstock->cons_class);
    object_at_put(cons, 0, car);
    object_at_put(cons, 1, cdr);
    return (object)cons; 
}

object car(object cons) {
    error_guard(pheader(cons.object) == woodstock->cons_class.pointer,
        "Not a cons");
    return object_at(cons.object, 0);
}

object cdr(object cons) {
    error_guard(pheader(cons.object) == woodstock->cons_class.pointer,
        "Not a cons");
    return object_at(cons.object, 1);
}

int scheme_list_size(object l) {
    object_object list = l.object;
    int size = 0;
    while (list != woodstock->nil) {
        error_guard(pheader(list) == woodstock->cons_class.pointer,
                    "Not a valid list");
        size++;
        list = object_at(list, 1).object;
    }
    return size;
}

object make_scheme_list(int size) {
    object list = (object)woodstock->nil;
    while (size > 0) {
        list = cons((object)woodstock->nil, list);
        size--;
    }
    return list;
}

object scheme_list_at(object l, int index) {
    object_object list = l.object;
    while (index > 0) {
        error_guard(list != woodstock->nil, "List index out of bounds");
        error_guard(pheader(list) == woodstock->cons_class.pointer,
                    "Not a valid list");
        index--;
        list = object_at(list, 1).object;
    }
    return object_at(list, 0);
}

void scheme_list_at_put(object l, int index, object value) {
    object_object list = l.object;
    while (index > 0) {
        error_guard(list != woodstock->nil, "List index out of bounds");
        error_guard(pheader(list) == woodstock->cons_class.pointer,
                    "Not a valid list");
        index--;
        list = object_at(list, 1).object;
    }
    object_at_put(list, 0, value);
}

void bootstrap_scheme() {
    bootstrap_symbols();
    init_op(plus);
    init_op(minus);
    init_op(smallerp);
    init_op(smaller_equalp);
    init_op(bigger_equalp);
    init_op(equalp);
    init_op(eqp);
    init_op(chareqp)
    init_direct_op(true);
    init_direct_op(false);

    scheme_continue  = (object)make_native(&scheme_cont_func);

    woodstock->true  = scheme_true;
    woodstock->false = scheme_false;

    init_op(callec);
    init_op(display);
    init_op(exit);
    init_op(cons);
    init_op(car);
    init_op(cdr);
    init_direct_op(error);
    init_op(error_handler);

    woodstock->error = scheme_error;

    // init_op(list_new_from_array);
    init_op(ast_var_new_from_string);
    init_op(ast_scoped_new_from_scope_expression_size);
    //init_op(ast_const_new_from_object);
    // init_op(ast_call_new_from_self_size);
    // init_op(ast_assign_new_from_variable_expression);

    init_op(env_new_from_id_parent_size);
}
