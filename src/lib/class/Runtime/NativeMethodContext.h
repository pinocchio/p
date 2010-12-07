#ifndef PINOCCHIO_LIB_RUNTIME_PNATIVEMETHODCONTEXT
#define PINOCCHIO_LIB_RUNTIME_PNATIVEMETHODCONTEXT 

#include <pinocchio.h>
extern void init_Runtime_PNativeMethodContext_methods();

extern void init_Runtime_PNativeMethodContext_layout();

#include <lib/lib.h>

extern Optr layout_Runtime_NativeMethodContext_Class_class;
extern Optr slot_Runtime_NativeMethodContext_receiver;
extern Optr slot_Runtime_NativeMethodContext_message;
extern Optr slot_Runtime_NativeMethodContext_returnContext;
extern Optr slot_Runtime_NativeMethodContext_closure;
extern Optr layout_Runtime_NativeMethodContext;


#endif //PINOCCHIO_LIB_RUNTIME_PNATIVEMETHODCONTEXT