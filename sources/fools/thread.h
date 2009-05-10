#ifndef THREAD_H
#define THREAD_H

extern void init_thread();
extern inline context_object stack_claim(int size);
extern inline void pop_context();
extern inline void stack_set_context();
extern inline int empty_stack();

#endif // THREAD_H
