#ifndef PINOCCHIO_LIB_CONCURRENCY_MUTEX
#define PINOCCHIO_LIB_CONCURRENCY_MUTEX 

#include <pinocchio.h>
extern void init_Concurrency_Mutex_methods();

extern void init_Concurrency_Mutex_layout();

#include <lib/lib.h>

extern Optr layout_Concurrency_Mutex_Class_class;
extern Optr slot_Concurrency_Mutex_semaphore;
extern Optr slot_Concurrency_Mutex_owner;
extern Optr layout_Concurrency_Mutex;


#endif //PINOCCHIO_LIB_CONCURRENCY_MUTEX