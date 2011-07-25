#include <pinocchio.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern long testStatic(long receiver);
extern void* Test_StaticKernelTest_class;
extern void* Test_StaticKernelTest;


int main(int argc, char**argv)
{
    setlocale(LC_ALL, "");

    tObject self = basicNew(Test_StaticKernelTest_class);
    
//    long * result;
    __asm("mov %0, %%rdi"::"r"(self));
    __asm("mov %0, %%rax"::"r"(&Test_StaticKernelTest));
    __asm("call testStatic");
//    __asm("mov %%rax, %0":"=r"(result));
 
//    if (IS_INT(result)) {
//        printf("result: %li\n", DEC_INT(result));
//    } else {
//        printf("result: %p\n", result);
//   }
    return 0;
}
