#include <pinocchio.h>
#include <asm/signal.h>
#define UNW_LOCAL_ONLY
#include <libunwind.h>

extern struct Class Kernel_Behavior_Closure;
extern struct Class Kernel_Collection_RemoteArray;

tObject closureNew(long size) {
    tObject closure = basicNew_((tBehavior)&Kernel_Behavior_Closure, size);
//    printf( "- new closure at: %p size %ld\n", closure, DEC_INT(size) );
    return closure;
}

tObject remoteArrayNew(long size) {
    tObject array = basicNew_((tBehavior)&Kernel_Collection_RemoteArray, size);
//    printf( "- new array at: %p\n", array );
    return array;
}

void closureValue() {
    //if its not a closure then jmp to invoke
    __asm("bt $0, %rdi");
    __asm("jnae "FN_PREFIX"invokeP");
    __asm("cmp %0, -0x10(%%rdi)"::"r"(&Kernel_Behavior_Closure));
    __asm("jne "FN_PREFIX"invokeP");
    //load code-pointer from the closure-object
    __asm("mov (%rdi), %rax");
    __asm("jmpq *%rax");
}

void closureReturn() {
  __asm("mov (%rdi),%rsp");
  
  //compare return token
  __asm("pop    %rcx");
  __asm("cmp %rcx, %rdi");
  __asm("jne "FN_PREFIX"closureReturnFail");

  __asm("pop    %r15");
  __asm("pop    %r14");
  __asm("pop    %r13");
  __asm("pop    %r12");
  __asm("pop    %rbp");
  __asm("pop    %rbx");
  __asm("ret");
}

void closureReturnFail() {
  PINOCCHIO_FAIL("closure returned to a wrong stack frame");
}

void * newClosureReturnToken() {
  return GC_MALLOC(sizeof(void*));
}
