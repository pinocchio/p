#include <system.h>
#include <stdio.h>

// ilist>>return:env:continue:
void ilist_continue_eval() {
    context_object ilist_context = get_context();
    int index = number_value(argument_at(ilist_context, 3).number);

    ilist_object ilist = header(ilist_context).ilist;
    int size = number_value(ilist->size) - 1;

    object env = argument_at(ilist_context, 2);
    context_object context = argument_at(ilist_context, 0).context;

    if (index < size) {
        set_argument(ilist_context, 3, (object)make_number(index + 1));
        context->return_context = (object)ilist_context;
    } else { // tailcall.
        context->arguments = make_array(2);
        context->return_context = ilist_context->return_context;
        dec();
    }
    
    object instruction = (object)raw_ilist_at(ilist, index);
    new_target(context, instruction);

    set_message(context, EVAL);
    set_argument(context, 1, env);

    set_transfer(context);
}

// ilist>>eval:
void inline ilist_eval() {
    debug("ilist>>eval:\n");
    context_object ilist_context = get_context();
    assert_argsize(ilist_context, 2);
    ilist_object ilist = (ilist_object)header(ilist_context).pointer;

    if (number_value(ilist->size) == 0) {
        return return_from_context(ilist_context);
    }

    if (number_value(ilist->size) == 1) {
        object instruction = (object)raw_ilist_at(ilist, 0);
        new_target(ilist_context, instruction);
        return;
    }


    context_object rec = make_context((object)ilist, 4);

    object environment = argument_at(ilist_context, 1);

    // optimization, reuse object.
    set_argument(rec, 0, (object)ilist_context); 
    set_argument(rec, 2, environment);
    set_argument(rec, 3, (object)make_number(0));
    rec->code = &ilist_continue_eval;
    rec->return_context = ilist_context->return_context;

    set_transfer(rec);

    debug("ret>>ilist>>eval:\n");
    inc();
}

void ilist_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, EVAL,         ilist_eval);
    if_selector(selector, PRE_EVAL_ENV, pre_eval_env);
    doesnotunderstand("ilist", selector);
}
