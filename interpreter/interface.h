#ifndef INTERPRETER_INTERFACE_H
#define INTERPRETER_INTERFACE_H

#include <pinocchio.h>

/* ======================================================================= */

extern void send_message(Thread thread, Object receiver,
                         Symbol selector, uns_int argc, ...);
extern void send_message_with(Thread thread, Object receiver,
                              Symbol selector, Array arguments);

/* ======================================================================= */

#endif // INTERPRETER_INTERFACE_H
