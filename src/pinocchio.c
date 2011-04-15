#include <pinocchio.h>
#include <bootstrap.h>
#include <locale.h>
#include <string.h>

Array get_args(int argc, const char ** argv)
{
    Array args = new_Array(argc - 1);
    int i;
    argv++;
    for (i = 1; i < argc; i++) {
        const char * arg = *argv++;
        int length = strlen(arg);
        String sarg = raw_String(length);
        assert1(
            mbstowcs(sarg->character, arg, length) != -1,
            "failed to parse arguments");
        args->value[i-1] = (Object)sarg;
    }
    return args;
}

#ifndef UNIT_TESTING

int main(int argc, const char ** argv)
{
    setlocale(LC_ALL, "");
    pinocchio_bootstrap();

    //Array args = get_args(argc, argv);

    RawArray code;

    code = new_RawArray(4,
            &method_context, 0,
            OP(lookup_native), new_NativeName( L"SmallInteger", L"smaller"));
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"<"), code);

    code = new_RawArray(4,
            &method_context, 0,
            OP(lookup_native), new_NativeName( L"SmallInteger", L"minus"));
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"-"), code);

    code = new_RawArray(4,
            &method_context, 0,
            OP(lookup_native), new_NativeName( L"SmallInteger", L"plus"));
    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"+"), code);

    code = new_RawArray(57,
            &method_context, (uns_int)3,
            OP(self), (uns_int)0,
            OP(load_constant), new_SmallInteger(2), (uns_int)1, 
            OP(send), (uns_int)0, (uns_int)0, (uns_int)0, new_Symbol(L"<"), 
            OP(iftrue_iffalse), (uns_int)0, (uns_int)6, (uns_int)0,
            OP(return_constant), new_SmallInteger(1),
            
            OP(self), (uns_int)0,
            OP(load_constant), new_SmallInteger(2), (uns_int)1, 
            OP(send), (uns_int)0, (uns_int)0, (uns_int)0, new_Symbol(L"-"),
            OP(send), (uns_int)0, (uns_int)0, (uns_int)0, new_Symbol(L"fib"),
            
            OP(self), (uns_int)1,
            OP(load_constant), new_SmallInteger(1), (uns_int)2,
            OP(send), (uns_int)1, (uns_int)0, (uns_int)0, new_Symbol(L"-"),
            OP(send), (uns_int)1, (uns_int)0, (uns_int)0, new_Symbol(L"fib"),

            OP(send), (uns_int)0, (uns_int)0, (uns_int)0, new_Symbol(L"+"),

            OP(return), (uns_int)0);

    new_MethodClosure((Behavior)SmallInteger_class, new_Symbol(L"fib"), code);

    SmallInteger integer = new_SmallInteger(34);

    Object args[] = { (Object)integer };
    method_context( code->data, NULL, args );

    return EXIT_SUCCESS;
}

#endif
