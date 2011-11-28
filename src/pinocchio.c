#include <pinocchio.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern struct Class Test_KernelTest;
//extern struct Class Test_PerformanceTest;
extern struct Class Test_StaticKernelTest;
extern struct Class Kernel_Package_Package;
extern struct Class Examples_ExamplesTest;
extern void * s_ok;
extern void * s_loadClasses;
extern void * s_run;
extern void * invokeP();

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    GC_INIT();

/*    tObject self = basicNew((tBehavior)&Test_PerformanceTest);
    send(self, "run");
}*/

    puts("");
    puts( "testing invokeP" );
    tObject self = basicNew((tBehavior)&Test_KernelTest);
    __asm("mov %0, %%rdi"::"r"(self));
    __asm("mov %0, %%rax"::"r"(&s_ok));
    __asm("call groundedInvoke");
    
    puts("");
    puts( "sending an unknown message:" );
    __asm("mov %0, %%rdi"::"r"(self));
    __asm("mov %0, %%rax"::"r"(&s_loadClasses));
    __asm("call groundedInvoke");
    puts("");
    
    // tObject self    = basicNew((tBehavior)&Kernel_Package_Package);
    self = basicNew((tBehavior)&Test_StaticKernelTest);
    send(self, "testStatic");
    
    self = basicNew((tBehavior)&Test_KernelTest);
    tObject result = send(self, "testDynamic");
    
    self = basicNew((tBehavior)&Examples_ExamplesTest);
    send(self, "run");

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
