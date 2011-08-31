#include <pinocchio.h>

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

void closureReturn() {
  __asm("mov (%rdi),%rsp");
  
  //compare return token
  __asm("pop    %r10");
  __asm("cmp %r10, %rdi");
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

#define return_token_space_size 400
unsigned int return_tokens_allocated = return_token_space_size;
void** return_token_space;

void * newClosureReturnToken() {
  if( return_token_space_size == return_tokens_allocated ) {
    return_token_space = GC_malloc_atomic(return_token_space_size*sizeof(void*));
    return_tokens_allocated=0;
  }
  return &return_token_space[return_tokens_allocated++];
}
