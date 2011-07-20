#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ENC_INT(v)  ((long*)(((v) << 1) + 1))
#define DEC_INT(v)  ((long)(v) >> 1)
#define IS_INT(v)   ((long)(v) & 1)

extern long SmallInteger[];
extern long fib(long receiver);

int main(int argc, char**argv)
{
    long * self = ENC_INT(argc > 1 ? atol(argv[1]) : 0);
    
    long * result;
    __asm("mov %0, %%rdi"::"r"(self));
    __asm("mov %0, %%rax"::"r"(SmallInteger));
    __asm("call fib");
    __asm("mov %%rax, %0":"=r"(result));
 
    if (IS_INT(result)) {
        printf("result: %li\n", DEC_INT(result));
    } else {
        printf("result: %p\n", result);
    }
    return 0;
}
