#ifndef KERNEL_INTERPRETER_THREAD_H
#define KERNEL_INTERPRETER_THREAD_H

#include <pinocchio.h>

/* ======================================================================= */
#define STACK_SIZE 1024*1024*10
/* ======================================================================= */

struct Thread {
    Header              header;
    Context             context;
    Raw                 stack_pointer;
    Dictionary          storage; // TODO IdentityDictionary?
    Object              error_handler;
    RawArray            stack;
};
extern Class Thread_class;

/* ======================================================================= */

#define THREAD_SIZE 10*1024*1024
extern Thread new_Thread(uns_int size, Object receiver, Symbol message);

/* ======================================================================= */

extern void Thread_return(Thread thread, Object value);

/* ======================================================================= */

#endif // KERNEL_INTERPRETER_THREAD_H
