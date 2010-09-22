#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Thread.h>
#include <system/interpretation/Threaded.h>
#include <time.h>

/* ========================================================================= */
static Symbol SMB_yield_;
static Symbol SMB_evaluate_;
/* ========================================================================= */

void reset_thread(Thread thread)
{
    thread->_EXP_            = &thread->Double_Stack[-1];
    thread->_CNT_            = (threaded**)&thread->Double_Stack[thread->size];
    thread->_ENV_            = nil;
    thread->next_interpreter = nil;
    thread->storage          = new_IdentityDictionary();
}

Thread new_Thread(uns_int size)
{
    NEW_ARRAY_OBJECT(Thread, Optr[size]);
    result->size  = size;
    reset_thread(result);
    return result;
}

void yield()
{
    _thread_->backup_pc = pc;
    Thread previous     = _thread_;
    _thread_            = _scheduler_thread_;
    reset_thread(_scheduler_thread_);
    Class_direct_dispatch((Optr)Thread_Class, HEADER(Thread_Class), 
                          (Optr)SMB_yield_, 1, (Optr)previous);
}

/* ========================================================================= */

NATIVE0(Thread_current)
    RETURN_FROM_NATIVE(_thread_);
}

NATIVE0(Thread_primYield)
    RETURN_FROM_NATIVE(self);
    yield();
}

NATIVE0(Thread_resume)
    Thread next_thread = (Thread) self;
    _thread_->backup_pc = pc;
    RETURN_FROM_NATIVE(nil);
    pc       = next_thread->backup_pc;
    _thread_ = next_thread;
}

NATIVE1(Thread_new_)
    Optr value          = NATIVE_ARG(0);
    _thread_->backup_pc = pc;
    Thread previous     = _thread_;
    Thread new_thread   = new_Thread(STACK_SIZE);
    _thread_            = new_thread;
    Class_direct_dispatch((Optr)_thread_, HEADER(_thread_), 
                          (Optr)SMB_evaluate_, 1, (Optr)value);
    _thread_->backup_pc = pc;
    _thread_            = previous;
    pc                  = previous->backup_pc;
    RETURN_FROM_NATIVE(new_thread);
}

time_t start_sleep_time;

NATIVE1(Thread_sleep_)
    Optr value = NATIVE_ARG(0);
    start_sleep_time = time(NULL);

    time_t now = time(NULL);
    /*if (now - start_sleep_time > unwrap_int(value)) {
        RETURN_FROM_NATIVE(nil);
    }
    else
    {
        yield();
    }*/
}



/* ========================================================================= */

void post_init_Thread()
{
    SMB_yield_    = new_Symbol(L"yield:");
    SMB_evaluate_ = new_Symbol(L"evaluate:");
    
    PLUGIN natives = add_plugin(L"Runtime.Thread");
    store_native(natives, L"current", NM_Thread_current);
    store_native(natives, L"resume", NM_Thread_resume);
    store_native(natives, L"new:", NM_Thread_new_);
    store_native(natives, L"sleep", NM_Thread_sleep_);
    store_native(natives, L"primYield", NM_Thread_primYield);
    //  ((Class)Thread_Class)->cvars[0] = (Optr)_threads_;
    // ((Class)Thread_Class)->cvars[1] = (Optr)_thread_;   
}
