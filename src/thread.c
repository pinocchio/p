#include <thread.h>
#include <lib/lib.h>
#include <string.h>

THREAD_OBJECT _thread_;
Thread _scheduler_thread_;
//Array _threads_;

/* ========================================================================= */

void init_Stack(uns_int size)
{
    _scheduler_thread_ = new_Thread(size);
    _thread_ = _scheduler_thread_;
}

void init_Error_Handler()
{
    tset(Error_Handler, (Optr)new_Continue_offset(0));
}

void initialize_Thread()
{
    init_Stack(STACK_SIZE);
  //   _threads_ = new_Array_with(1, _thread_);
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
        String sarg = new_String(warg);
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
	#include <pinocchioLateInit.ci>

    _thread_ = new_Thread(STACK_SIZE);

    // TODO find a nicer fix to bootstrap Threads correctly
   // HEADER(_thread_) = Thread_Class;
   // HEADER(_scheduler_thread_) = Thread_Class;

    Array args = get_args((int)(uns_int)argc, cargv);
    // Optr result = Eval_Send0(new_SmallInt(30), raw_Symbol(L"fib"));
    // inspect(result);
    Eval_Send1((Optr)Interpretation_Main_Class,
               new_Symbol(L"main:"), (Optr)args);

    return EXIT_SUCCESS;
}

void pinocchio_main(int argc, const char ** argv)
{
    cargv = argv;
#ifdef THREAD
    pthread_t thread;
    pthread_attr_t pthread_custom_attr;
    pthread_attr_init(&pthread_custom_attr);
    pthread_create(&thread, &pthread_custom_attr, &pinocchio_main_thread, 
                   (void*)(uns_int)argc);
    pthread_join(thread, NULL);
#else //THREAD
     pinocchio_main_thread((void*)(uns_int)argc);
#endif //THREAD
    pinocchio_exit(EXIT_SUCCESS);
}
