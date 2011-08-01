#include <pinocchio.h>
#include <asm/signal.h>
#define UNW_LOCAL_ONLY
#include <libunwind.h>

extern struct Class Kernel_Behavior_Closure;
extern struct Class Kernel_Collection_RemoteArray;

tObject closureNew(long size) {
    tObject closure = basicNew_((tBehavior)&Kernel_Behavior_Closure, size);
    printf( "- new closure at: %p size %ld\n", closure, DEC_INT(size) );
    return closure;
}

tObject remoteArrayNew(long size) {
    tObject array = basicNew_((tBehavior)&Kernel_Collection_RemoteArray, size);
    printf( "- new array at: %p\n", array );
    return array;
}

void closureValue() {
    //if its not a closure then jmp to invoke
    __asm("bt $0, %rdi");
    __asm("jnae "FN_PREFIX"invoke0");
    __asm("cmp %0, -0x10(%%rdi)"::"r"(&Kernel_Behavior_Closure));
    __asm("jne "FN_PREFIX"invoke5");
    //store current stackpointer
    __asm("mov %rsp, 0x8(%rdi)");
    //load code-pointer from the closure-object
    __asm("mov (%rdi), %rax");
    __asm("jmpq *%rax");
}

void closureReturn() {
  void * old_sp;
  __asm("mov %%rcx, %0":"=r"(old_sp):);

  unw_cursor_t cursor; unw_context_t uc;
  unw_word_t ip=0, sp;

  unw_getcontext(&uc);
  unw_init_local(&cursor, &uc);
  while (unw_step(&cursor) > 0 && sp != (long)old_sp) {
     unw_get_reg(&cursor, UNW_REG_SP, &sp);
     printf ("ip = %lx, sp = %lx\n", (long) ip, (long) sp);
  }
}
