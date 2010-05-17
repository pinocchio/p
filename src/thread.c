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
    tset(Double_Stack, PALLOC(sizeof(Object[size])));
    tset(_EXP_, &tget(Double_Stack)[-1]);
    tset(_CNT_, &tget(Double_Stack)[size]);
}

void init_Error_Handler()
{
    tset(Error_Handler, new_Runtime_Continue_offset(0));
}

void initialize_Thread()
{
    init_Stack(STACK_SIZE);
    tset(_ISS_, Nil); 
    tset(_ENV_, Nil);

    tset(Eval_Exit,     PALLOC(sizeof(jmp_buf)));
    tset(Eval_Continue, PALLOC(sizeof(jmp_buf)));
    tset(Eval_Abort,    PALLOC(sizeof(jmp_buf)));
}

void extend_ISS(Object self)
{
    Type_Object link = (Type_Object)instantiate((Type_Class)Collection_Link_Class);
    link->ivals[0] = self;
    link->ivals[1] = (Object)tget(_ISS_);
    tset(_ISS_, link);
}

/* ========================================================================= */

Object pop_EXP()
{
    Object * p = tget(_EXP_);
    tset(_EXP_, p - 1);
    return *p;
}

void _push_EXP(Object e)
{
    Object * p = tget(_EXP_) + 1;
    tset(_EXP_, p);
    *p = e;
}

void _push_CNT(cont e)
{
    cont * p = (cont*)tget(_CNT_) - 1;
    tset(_CNT_, p);
    *p = e;
}

/* ========================================================================= */

Collection_Array get_args(int argc, const char ** argv)
{
    Collection_Array args = new_Collection_Array_raw(argc - 1);
    int i;
    argv++;
    for (i = 1; i < argc; i++) {
        const char * arg = *argv++;
        int length = strlen(arg);
        wchar_t warg[length + 1];
        assert1(mbstowcs(warg, arg, length + 1) != -1, "failed to parse arguments");
        Type_Symbol sarg = new_Type_Symbol_cached(warg);
        args->values[i-1] = (Object)sarg;
    }
    return args;
}

/* ========================================================================= */

#ifdef TEST
#include <test/pinocchioTest.h>
#include <test/FibTest.ci>
#endif // TEST

/* ========================================================================= */

static const char ** cargv;

void * pinocchio_main_thread(void * argc)
{
    initialize_Thread();
    init_lib();

#ifdef TEST
    run_tests();
    // run_FibTest();
#else // TEST
    Collection_Array args = get_args((int)(uns_int)argc, cargv);
    Eval_Send1(Interpretation_MainInterpreter_Class, SMB_main_, (Object)args);
#endif // TEST

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
