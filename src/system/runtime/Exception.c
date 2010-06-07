#include <pinocchio.h>
#include <system/runtime/Exception.h>
#include <stdarg.h>
#include <lib/lib.h>

void fail(const Class exception_class, uns_int argc, ...)
{
    Type_Object error = (Type_Object)instantiate(exception_class);
    error->ivals[0] = (Object)current_env();

    va_list args;
    va_start(args, argc);
    int idx;
    for (idx = 1; idx <= argc; idx++) {
        error->ivals[idx] = va_arg(args, Object);
    }
    va_end(args);

    //raise(SIGSEGV);

    if (HEADER(tget(Error_Handler)) == Runtime_Continue_Class) {
        Runtime_Continue_escape((Runtime_Continue)tget(Error_Handler),
                                (Object)error);
    } else {
        push_CNT(exit_error);
        handle_assert("Unsupported type of error-handler installed.");
    }
    longjmp(tget_buf(Eval_Continue), 1);
}

void handle_assert(const char * message)
{
    raise(SIGSEGV);
    //fail(Exception_AssertionFailure_Class, 1,
    //     new_String_from_charp(message));
}

