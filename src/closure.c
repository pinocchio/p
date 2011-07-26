#include <pinocchio.h>

extern struct Class Kernel_Behavior_Closure;
extern struct Class Kernel_Collection_RemoteArray;

tObject closureNew(int size) {
    tObject closure = basicNew_((tBehavior)&Kernel_Behavior_Closure, ENC_INT(size));
    printf( "- new closure at: %p\n", closure );
    return closure;
}

tObject remoteArrayNew(int size) {
    tObject array = basicNew_((tBehavior)&Kernel_Collection_RemoteArray, ENC_INT(size));
    printf( "- new array at: %p\n", array );
    return array;
}

void closureValue() {
    //if its not a closure then jmp to invoke
    __asm("bt $0, %rdi");
    __asm("jnae invoke0");
    __asm("cmp %0, -0x10(%%rdi)"::"r"(&Kernel_Behavior_Closure));
    __asm("jne invoke5");
    //load code-pointer from the closure-object
    __asm("mov (%rdi), %rax");
    __asm("jmpq *%rax");
}

