#ifndef KERNEL_INTERPRETER_CONTEXT_H
#define KERNEL_INTERPRETER_CONTEXT_H

#include <pinocchio.h>

/* ======================================================================= */

struct Context {
    Header              header;
    uns_int             size;
    Raw                 pc;
    Object              closure;
    MethodContext       home;
    Context             sender;
    Object              self_or_outer;
    Object              local[];
};

struct MethodContext {
    Header              header;
    uns_int             size;
    Raw                 pc;
    MethodClosure       closure;
    MethodContext       home;
    Context             sender;
    Object              self;
    Object              local[];
};
extern Class MethodContext_class;

struct BlockContext {
    Header              header;
    uns_int             size;
    Raw                 pc;
    Object              closure;
    MethodContext       home;
    Context             sender;
    Context             outer;
    Object              local[];
};
extern Class BlockContext_class;

/* ======================================================================= */

extern BlockContext new_BlockContext(Thread thread, uns_int size);
extern MethodContext new_MethodContext(Thread thread, uns_int size);

/* ======================================================================= */

extern Object Context_direct_load(Context context, uns_int index);
extern void Context_direct_store(Context context, uns_int index, Object value);
extern Object Context_load(Context context, uns_int depth, uns_int index);
extern void Context_store(Context context, uns_int depth, uns_int index, Object value);

/* ======================================================================= */

#endif // KERNEL_INTERPRETER_CONTEXT_H
