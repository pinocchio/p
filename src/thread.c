#include <thread.h>
#include <lib/lib.h>
#include <string.h>

THREAD_OBJECT Double_Stack;
THREAD_OBJECT _ISS_;
THREAD_OBJECT _EXP_;
THREAD_OBJECT _ENV_;
THREAD_OBJECT _CNT_;

THREAD_OBJECT Eval_Exit;
THREAD_OBJECT Eval_Continue;
THREAD_OBJECT Eval_Abort;

THREAD_OBJECT Error_Handler;

/* ========================================================================= */

void init_Stack(uns_int size)
{
    // TODO allocate the stack with the given size
    tset(Double_Stack, PALLOC(sizeof(Optr[size])));
    tset(_EXP_, &tget(Double_Stack)[-1]);
    tset(_CNT_, &tget(Double_Stack)[size]);
}

void init_Error_Handler()
{
    tset(Error_Handler, new_Continue_offset(0));
}

void initialize_Thread()
{
    init_Stack(STACK_SIZE);
    tset(_ISS_, nil); 
    tset(_ENV_, nil);

    tset(Eval_Exit,     PALLOC(sizeof(jmp_buf)));
    tset(Eval_Continue, PALLOC(sizeof(jmp_buf)));
    tset(Eval_Abort,    PALLOC(sizeof(jmp_buf)));
}

void extend_ISS(Optr self)
{
    Object link = (Object)instantiate((Class)Collection_Link_Class);
    link->ivals[0]   = self;
    link->ivals[1]   = (Optr)tget(_ISS_);
    tset(_ISS_, link);
}

/* ========================================================================= */

Optr pop_EXP()
{
    Optr * p = tget(_EXP_);
    tset(_EXP_, p - 1);
    return *p;
}

void _push_EXP(Optr e)
{
    Optr * p = tget(_EXP_) + 1;
    tset(_EXP_, p);
    *p = e;
}

void _push_CNT(threaded* e)
{
    threaded ** p = (threaded**)tget(_CNT_) - 1;
    tset(_CNT_, p);
    *p = e;
}

/* ========================================================================= */

Array get_args(int argc, const char ** argv)
{
    Array args = new_Array_raw(argc - 1);
    int i;
    argv++;
    for (i = 1; i < argc; i++) {
        const char * arg = *argv++;
        int length = strlen(arg);
        wchar_t warg[length + 1];
        assert1(mbstowcs(warg, arg, length + 1) != -1, "failed to parse arguments");
        Symbol sarg = new_Symbol_cached(warg);
        args->values[i-1] = (Optr)sarg;
    }
    return args;
}

/* ========================================================================= */

static const char ** cargv;

void * pinocchio_main_thread(void * argc)
{
    initialize_Thread();
    init_lib();
    
    Array args = get_args((int)(uns_int)argc, cargv);
    // Eval_Send0(new_SmallInt(30), new_Symbol(L"fib"));
    Eval_Send1((Optr)Interpretation_MainInterpreter_Class,
                SMB_main_, (Optr)args);

    return EXIT_SUCCESS;
}

void pinocchio_main(int argc, const char ** argv)
{
    cargv = argv;
#ifdef THREAD
    pthread_t main_thread;
    pthread_create(&main_thread, NULL, &pinocchio_main_thread, (void*)(uns_int)argc);
    pthread_join(main_thread, NULL);
#else //THREAD
     pinocchio_main_thread((void*)(uns_int)argc);
#endif //THREAD
}
