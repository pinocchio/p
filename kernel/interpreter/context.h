#ifndef KERNEL_INTERPRETER_CONTEXT_H
#define KERNEL_INTERPRETER_CONTEXT_H

#include <pinocchio.h>

/* ======================================================================= */

struct MethodContext {
    Header              header;
    Raw                 program_counter;
    Object              closure;
    Context             home_context;
    Context             caller_context;
    Object              self;
    Object              local[];
};
extern Class MethodContext_class;

struct BlockContext {
    Header              header;
    Raw                 program_counter;
    Object              closure;
    Context             home_context;
    Context             caller_context;
    Object              outer_context;
    Object              local[];
};
extern Class BlockContext_class;

/* ======================================================================= */

extern Context new_BlockContext(uns_int size);
extern Context new_MethodContext(uns_int size);

/* ======================================================================= */

#endif // KERNEL_INTERPRETER_CONTEXT_H
