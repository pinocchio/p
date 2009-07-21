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
bin_number_bool_op  ( equalp,    == )
bin_char_bool_op    ( chareqp,   == )
bin_object_bool_op  ( eqp,       == )

preval1(display, context, v,
    debug("scheme>>display\n");
    print_object(v);
    return_from_context(context, v);
    debug("ret>>scheme>>display\n");
)

object scheme_continue;

object make_ec() {
    object_object ec = make_object(1, scheme_continue);
    object_at_put(ec, 0, (object)get_context());
    return (object)ec;
}
// TODO move to separate files
preval1(callec, context, lambda,
    object env = context->env;
    pop_context();
    object ec = make_ec();
    context = make_context(lambda, 1);
    context->env = env;
    set_argument(context, 0, (object)make_iconst(ec));
    // marker on return_context
    set_argument(return_context(context), 1, ec);
)

preval1(cont, context, value,
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

preval1(error, context, message,
    print_object(message);
    exit(-1);
)

preval1(error_handler, context, error_handler,
    woodstock->error     = error_handler;
    return_from_context(context, error_handler);
)

preval1(exit, context, value,
    cast(n, value, number);
    exit(n->value);
)

void bootstrap_scheme() {
    bootstrap_scheme_symbols();
    init_op(plus);
    init_op(minus);
    init_op(smallerp);
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
    init_direct_op(error);
    init_op(error_handler);

    woodstock->error = scheme_error;

    init_op(create_from_array);
}
