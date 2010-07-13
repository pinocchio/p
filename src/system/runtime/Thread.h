#ifndef RUNTIME_THREAD_H
#define RUNTIME_THREAD_H
#include <pinocchio.h>

/* ========================================================================= */

struct Thread_t {
    uns_int         size;
    Optr            _ENV_;
    Optr *          _EXP_;
    Optr            storage;
    Optr            Error_Handler;
    threaded**      _CNT_;
    jmp_buf         Eval_Exit;
    jmp_buf         Eval_Continue;
    Optr            Double_Stack[];
};

extern Thread new_Thread(uns_int size);

/* ========================================================================= */

#endif // RUNTIME_THREAD_H
