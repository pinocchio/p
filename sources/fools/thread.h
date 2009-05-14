#ifndef THREAD_H
#define THREAD_H

extern void init_thread();

extern context_object inline stack_claim(int size);
extern void inline pop_context();

extern int inline empty_stack();
extern object inline get_stk_return();
extern context_object inline get_context();




#endif // THREAD_H
