#include <pinocchio.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern long fib(long receiver);

int main(int argc, char**argv)
{
    setlocale(LC_ALL, "");

    long self = ENC_INT(argc > 1 ? atol(argv[1]) : 0);
    
    long * result;
    __asm("mov %0, %%rdi"::"r"(self));
    __asm("mov %0, %%rax"::"r"(&SmallInteger));
    __asm("call fib");
    __asm("mov %%rax, %0":"=r"(result));
 
    if (IS_INT(result)) {
        printf("result: %li\n", DEC_INT(result));
    } else {
        printf("result: %p\n", result);
    }
    return 0;
}
