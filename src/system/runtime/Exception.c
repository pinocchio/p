#include <pinocchio.h>
#include <system/runtime/Exception.h>
#include <stdarg.h>
#include <lib/lib.h>

void fail(const Class exception_class, uns_int argc, ...)
{
    Object error = (Object)instantiate(exception_class);
    error->ivals[0] = (Optr)current_env();

    va_list args;
    va_start(args, argc);
    long idx;
    for (idx = 1; idx <= argc; idx++) {
        error->ivals[idx] = va_arg(args, Optr);
    }
    va_end(args);

    //raise(SIGSEGV);

    if (HEADER(tget(Error_Handler)) == Continue_Class) {
        Continue_escape((Continue)tget(Error_Handler),
                                (Optr)error);
    } else {
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

