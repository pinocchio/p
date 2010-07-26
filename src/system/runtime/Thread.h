#ifndef RUNTIME_THREAD_H
#define RUNTIME_THREAD_H
#include <pinocchio.h>

/* ========================================================================= */

struct Thread_t {
    uns_int         size;
    threaded*       backup_pc;
    Optr            _ENV_;
    Optr *          _EXP_;
    Optr            storage;
    Optr            Error_Handler;
    threaded**      _CNT_;
    jmp_buf         Eval_Exit;
    jmp_buf         Eval_Continue;
    Optr            Double_Stack[];
};

CREATE_INITIALIZERS(Object)


/* ========================================================================= */

extern Thread new_Thread(uns_int size);

extern void yield();

extern void post_init_Thread();
/* ========================================================================= */

#endif // RUNTIME_THREAD_H
