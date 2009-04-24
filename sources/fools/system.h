#ifndef SYSTEM_H
#define SYSTEM_H

#include <model.h>

extern void native(context_object context);
extern void inline transfer(context_object context);

extern void with_native_class_lookup(context_object context);

extern context_object inline target_context(context_object interpreter_context);
extern void inline return_from_context(context_object context);

extern void ilist_eval(context_object context);
extern void ilist_continue_eval(context_object context);
extern void icall_eval(context_object context);
extern void iconst_eval(context_object context);
extern void iassign_eval(context_object context);
extern void iassign_continue_eval(context_object context);

#endif
