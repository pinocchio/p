#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "settings.h"

#define SMALLER     (void*)11
#define MINUS       (void*)21
#define FIB         (void*)31
#define PLUS        (void*)41
#define FIB_SEND    (void*)51

#define ENC_INT(v)  ((long*)(((v) << 1) + 1))
#define DEC_INT(v)  ((long)(v) >> 1)
#define IS_INT(v)   ((long)(v) & 1)

extern void * METHOD_NAME();
extern void * METHOD_OBJECT[];
extern void * blockTest();
extern void * arrayNew();

long p_true[2];
long p_false[2];
long p_nil[2];

long SmallInteger[2];
extern void* __fibSend[];
extern void* __fib[];
extern void* __simpleMethod[];
extern void* __blockTest[];
extern void* __blockTest2[];

int main(int argc, char**argv)
{
    __fibSend[0x7] = SMALLER;
    __fibSend[0x8] = MINUS;
    __fibSend[0x9] = FIB_SEND;
    __fibSend[0xa] = MINUS;
    __fibSend[0xb] = FIB_SEND;
    __fibSend[0xc] = PLUS;

    __simpleMethod[0x7] = PLUS;

    __fib[0x7] = SmallInteger + 2;
    __fib[0x8] = SmallInteger + 2;
    __fib[0x9] = SmallInteger + 2;
    __fib[0xa] = SmallInteger + 2;
    __fib[0xb] = SmallInteger + 2;
    __fib[0xc] = PLUS;

    __blockTest[0x7] = PLUS;
    __blockTest[0x8] = PLUS;

    __blockTest2[0x7] = PLUS;

    long * self = ENC_INT(argc > 1 ? atol(argv[1]) : 0);
    
    long * result;
    __asm("mov %0, %%rdi"::"r"(self));
    __asm("mov %0, %%rax"::"r"(SmallInteger+2));
    __asm(METHOD_CALL);
    __asm("mov %%rax, %0":"=r"(result));
 
    if (IS_INT(result)) {
        printf("result: %li\n", DEC_INT(result));
    } else {
        printf("result: %p\n", result);
    }
    return 0;
}
