#ifndef THREAD_H
#define THREAD_H

extern void init_thread();

extern context_object inline stack_claim(int size);
extern void inline pop_context();

extern int inline empty_stack();
extern object inline get_stk_return();
extern context_object inline get_context();
extern context_object make_context(object self, int size);
extern context_object make_empty_context(int size);
extern context_object inline return_context(context_object context);

extern void   inline set_message(context_object context, object msg);
extern void   inline set_new_message(context_object context, object msg);
extern void   inline set_argument(context_object context, int index, object value);
extern object inline argument_at(context_object context, int index);
extern object inline message(context_object context);
extern int    inline context_size(context_object context);

extern void inline return_from_context(context_object context, object value);

struct context {
    transfer_target     code;
    object              self;
    object              env;
    struct array        arguments;
};

#endif // THREAD_H
