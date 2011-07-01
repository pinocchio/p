#include <pinocchio.h>
#include <bootstrap.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern void* __fibSend[];

extern void * fibSend();
extern void * arrayNew();

long p_true[2];
long p_false[2];
long p_nil[2];

int main(int argc, char**argv)
{

    setlocale(LC_ALL, "");
    pinocchio_do_bootstrap();

    printf( "__fibSend[7] %p\n", __fibSend[7] );
    
    long * self = ENC_INT(argc > 1 ? atol(argv[1]) : 0);
    
    long * result;
    __asm("mov %0, %%rdi"::"r"(self));
    __asm("mov %0, %%rax"::"r"(SmallInteger+2));
    __asm("call fibSend");
    __asm("mov %%rax, %0":"=r"(result));
 
    if (IS_INT(result)) {
        printf("result: %li\n", DEC_INT(result));
    } else {
        printf("result: %p\n", result);
    }
    return 0;
}
