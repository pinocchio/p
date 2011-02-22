#ifndef KERNEL_INTERPRETER_CONTEXT_H
#define KERNEL_INTERPRETER_CONTEXT_H

#include <pinocchio.h>

/* ======================================================================= */

struct Context {
    Header              header;
    Raw                 pc;
    Object              closure;
    MethodContext       home_context;
    Context             caller_context;
    Object              self_or_outer;
    Object              local[];
};

struct MethodContext {
    Header              header;
    Raw                 pc;
    Object              closure;
    MethodContext       home_context;
    Context             caller_context;
    Object              self;
    Object              local[];
};
extern Class MethodContext_class;

struct BlockContext {
    Header              header;
    Raw                 pc;
    Object              closure;
    MethodContext       home_context;
    Context             caller_context;
    Context             outer_context;
    Object              local[];
};
extern Class BlockContext_class;

/* ======================================================================= */

extern Context new_BlockContext(uns_int size);
extern Context new_MethodContext(uns_int size);

/* ======================================================================= */

extern Object Context_direct_load(Context context, uns_int index);
extern void Context_direct_store(Context context, uns_int index, Object value);
extern Object Context_load(Context context, uns_int depth, uns_int index);
extern void Context_store(Context context, uns_int depth, uns_int index, Object value);

/* ======================================================================= */

#endif // KERNEL_INTERPRETER_CONTEXT_H
