#ifndef SYSTEM_H
#define SYSTEM_H

#include <model.h>
#include <ast.h>
#include <bootstrap.h>
#include <assert.h>
#include <stdio.h>

#include <system/appcall.h>
#include <system/dircall.h>
#include <system/env.h>
#include <system/iassign.h>
#include <system/icall.h>
#include <system/icapture.h>
#include <system/iconst.h>
#include <system/ilist.h>
#include <system/iscoped.h>
#include <system/ivar.h>

#define NDEBUG 1
#define debug if (!NDEBUG) indent(); if (!NDEBUG) printf

#define if_selector(selector, symb, todo)\
    if (selector.pointer == symb.pointer)\
        return todo();

extern void indent();
extern void inline inc();
extern void inline dec();

// Starting an evaluation thread.
extern void inline transfer(context_object context);

// Structures to build interfaces to C.
extern void inline native();

// Meta-interpretation primitives.
extern void inline set_transfer(context_object context);
extern context_object inline target_context(context_object interpreter_context);
extern void inline return_from_context(context_object context);
extern context_object inline get_context();
extern void inline new_target(context_object context, object target);

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

#define eval_in_scope(input, env, output)\
    { \
        context_object make_eval_context(ci, input, env);\
        build_return(ci, rc);\
        transfer(ci);\
        output = return_value(rc);\
    }

// Bootstrapping natives.
extern void pre_eval_env();

// Convenience function for composing primitives into closures.
extern void doesnotunderstand(const char* class, object selector);
extern object inline make_func(array_object arguments, object body);
extern object inline make_dyn_func(array_object arguments, object body);

#endif
