#ifndef SYSTEM_H
#define SYSTEM_H

#include <model.h>

// Starting an evaluation thread.
extern void inline transfer(context_object context);

// Structures to build interfaces to C.
extern void with_native_class_lookup();
extern void inline native();

// Meta-interpretation primitives.
extern void inline set_transfer(context_object context);
extern context_object inline target_context(context_object interpreter_context);
extern void inline return_from_context(context_object context);
extern context_object inline get_context();

// Convenience macros.
#define build_return(for_c, name)\
    ilist_object m1ilist = make_ilist(0);\
    context_object name = make_context((object)m1ilist, 2);\
    set_message(name, EVAL);\
    for_c->return_context = (object)rc;

#define return_value(rc)\
    argument_at(rc, 1)

#define make_eval_context(name, todo, env)\
    name = make_context((object)todo, 2);\
    set_message(name, EVAL);\
    set_argument(name, 1, (object)env);


// Bootstrapping natives.
extern void pre_eval_env();

extern void ilist_eval();
extern void ilist_continue_eval();

extern void icall_eval();
extern void icall_invoke_env();

extern void iconst_eval();

extern void iassign_eval();

extern void ivar_eval();
extern void ivar_assign();

extern void icapture_eval();

extern void appcall_invoke();

extern void env_fetch_from();
extern void env_store_at_in();
extern void env_subscope();
extern void env_parent();
extern void env_set_parent();
extern void env_set_env_parent();

extern void iscope_new();

extern void iscoped_eval_arguments();
extern void iscoped_eval();
extern void iscoped_scope();

// Convenience function for composing primitives into closures.
extern object inline make_func(array_object arguments, object body);

#endif
