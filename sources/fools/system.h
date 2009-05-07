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

extern void ilist_dispatch();
extern void icall_dispatch();
extern void iconst_dispatch();
extern void iassign_dispatch();
extern void ivar_dispatch();
extern void icapture_dispatch();
extern void appcall_dispatch();
extern void env_dispatch();
extern void iscoped_dispatch();
extern void iscoped_class_dispatch();

// Convenience function for composing primitives into closures.
extern object inline make_func(array_object arguments, object body);

#endif
