#include <thread.h>
#include <lib/lib.h>
#include <string.h>

Thread _thread_;

/* ========================================================================= */

void init_Stack(uns_int size)
{
    _thread_ = new_Thread(size);
}

void init_Error_Handler()
{
    tset(Error_Handler, new_Continue_offset(0));
}

void initialize_Thread()
{
    init_Stack(STACK_SIZE);
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
    // Optr result = Eval_Send0(new_SmallInt(30), new_Symbol(L"fib"));
    // inspect(result);
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
