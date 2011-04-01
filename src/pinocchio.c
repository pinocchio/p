#include <pinocchio.h>
#include <bootstrap.h>
#include <locale.h>
#include <string.h>
#include <test.h>

void thread(Array arguments)
{
    test2();
}

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

int main(int argc, const char ** argv)
{
    setlocale(LC_ALL, "");
    pinocchio_bootstrap();

    Array args = get_args(argc, argv);
    thread(args);

    return EXIT_SUCCESS;
}
