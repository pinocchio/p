#ifndef RUNTIME_EXCEPTION_H
#define RUNTIME_EXCEPTION_H

extern void handle_assert(const char * message);
extern void fail(Class exception_class, uns_int argc, ...);

extern void post_init_Exception();

#endif // RUNTIME_EXCEPTION_H
