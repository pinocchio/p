#include <pinocchio.h>
#include <system/runtime/Exception.h>
#include <stdarg.h>
#include <lib/lib.h>

void fail(const Class exception_class, uns_int argc, ...)
{
    Object error    = (Object)instantiate(exception_class);
    error->ivals[0] = nil; // (Optr)current_env();

    va_list args;
    va_start(args, argc);
    long idx;
    for (idx = 1; idx <= argc; idx++) {
        error->ivals[idx] = va_arg(args, Optr);
    }
    va_end(args);

    if (HEADER(tget(Error_Handler)) == Continue_Class) {
        Continue_escape((Continue)tget(Error_Handler), (Optr)error);
    } else {
        handle_assert("Unsupported type of error-handler installed.");
    }
    longjmp(tget_buf(Eval_Continue), 1);
}

void handle_assert(const char * message)
{
    fail(Exception_AssertionFailure_Class, 1, new_String_from_charp(message));
}

/* ========================================================================= */

NATIVE0(Exception_handler)
    Optr error_handler = tget(Error_Handler);
    RETURN_FROM_NATIVE(error_handler);
}

NATIVE1(Exception_handler_)
    tset(Error_Handler, NATIVE_ARG(0));
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void post_init_Exception()
{
    Dictionary natives = add_plugin(L"Runtime.Exception");
    store_native(natives, L"handler",  NM_Exception_handler);
    store_native(natives, L"handler:", NM_Exception_handler_);
}

