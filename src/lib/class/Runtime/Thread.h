#ifndef PINOCCHIO_LIB_RUNTIME_PTHREAD
#define PINOCCHIO_LIB_RUNTIME_PTHREAD 

#include <pinocchio.h>
extern void init_Runtime_PThread_methods();

extern void init_Runtime_PThread_layout();

#include <lib/lib.h>

extern Optr slot_Runtime_Thread_Class_class_threads;
extern Optr layout_Runtime_Thread_Class_class;
extern Optr slot_Runtime_Thread_backupPc;
extern Optr slot_Runtime_Thread_env;
extern Optr slot_Runtime_Thread_exp;
extern Optr slot_Runtime_Thread_storage;
extern Optr slot_Runtime_Thread_nextInterpreter;
extern Optr slot_Runtime_Thread_handler;
extern Optr slot_Runtime_Thread_cnt;
extern Optr slot_Runtime_Thread_exit;
extern Optr slot_Runtime_Thread_continue;
extern Optr layout_Runtime_Thread;


#endif //PINOCCHIO_LIB_RUNTIME_PTHREAD