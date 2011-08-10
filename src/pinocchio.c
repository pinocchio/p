#include <pinocchio.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern struct Class Test_KernelTest;
extern struct Class Test_StaticKernelTest;
extern struct Class Kernel_Package_Package;
extern void * s_ok;
extern void * s_print;
extern void * invokeP();

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    GC_INIT();

    puts("");
    puts( "testing invokeP" );
    tObject self = basicNew((tBehavior)&Test_KernelTest);
    __asm("mov %0, %%rdi"::"r"(self));
    __asm("mov %0, %%rax"::"r"(&s_ok));
    __asm("call invokeP");
    
    puts("");
    puts( "sending an unknown message:" );
    __asm("mov %0, %%rdi"::"r"(self));
    __asm("mov %0, %%rax"::"r"(&s_print));
    __asm("call invokeP");
    puts("");
    
    // tObject self    = basicNew((tBehavior)&Kernel_Package_Package);
    self = basicNew((tBehavior)&Test_StaticKernelTest);
    send(self, "testStatic");

    self = basicNew((tBehavior)&Test_KernelTest);
    tObject result = send(self, "testDynamic");

    puts("Object new:");
    print_object( result );
    
//    long * result;
 
//    if (IS_INT(result)) {
//        printf("result: %li\n", DEC_INT(result));
//    } else {
//        printf("result: %p\n", result);
//   }
    return 0;
}
