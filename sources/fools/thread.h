#ifndef THREAD_H
#define THREAD_H

extern void init_thread();
extern context_object stack_claim(int size);
extern void pop_context();
extern void stack_set_context();
extern int empty_stack();

#endif // THREAD_H
