#include <pinocchio.h>
#include <stdlib.h>
#include <stdio.h>
#include <gc/gc.h>
#include <signal.h>

extern long p_true[];
extern long p_false[];

extern void * fib(long* i);
long plus(long left, long right);
long minus(long left, long right);
long * smaller(long left, long right);

long cache_and_call()
{
    // Fetch the calling instruction pointer (stack-stored ip)
    __asm("mov 0(%rsp), %eax");
    // Calculate the offset of the actual code pointer
    __asm("mov %r10, %rdx");
    __asm("sub %eax, %edx");
    // Overwrite the 4-byte call-target offset with the method
    __asm("movl %edx, -4(%eax)");
    // Calculate the location of the literal in the frame
    __asm("lea -5(%eax), %edx");
    __asm("movl -9(%eax), %eax");
    __asm("cltq");
    __asm("add %rax, %rdx");
    // Calculate the class
    // If tagged integer, store the SmallInteger class
    __asm("bt $0, %rdi");
    __asm("jae not_tagged");
    __asm("mov %0, %%rax"::"r"(SmallInteger + 2));
    __asm("mov %rax, (%rdx)");
    // __asm("int3");
    __asm("jmp *%r10");
    // If not tagged, store the class of the receiver
__asm("not_tagged:");
    __asm("mov -8(%rdi), %rdx");
    __asm("mov %rdx, (%rax)");
    __asm("jmp *%r10");
}

void invoke_error(long msg, void* receiver)
{
    printf("Lookup of msg %p failed on %p\n", msg, receiver);
    __asm("int3");
}

void * minus_sym;
void * less_sym;
void * plus_sym;
void * fibSend_sym;

void init_selectors() {
  minus_sym = new_Symbol(L"-");
  less_sym = new_Symbol(L"<");
  plus_sym = new_Symbol(L"+");
  fibSend_sym = new_Symbol(L"fibSend");
  printf("init_selectors : %p %p %p %p\n", minus_sym, less_sym, plus_sym, fibSend_sym);
}

void invoke() {
    __asm("cmp $minus_sym, %rax");
    __asm("mov $minus, %r10");
    __asm("je cache_and_call");

    __asm("cmp $plus_sym, %rax");
    __asm("mov $plus, %r10");
    __asm("je cache_and_call");

/*    __asm("cmp $31, %rax");
    __asm("mov $fib, %r10");
    __asm("je cache_and_call");
*/
    __asm("cmp $less_sym, %rax");
    __asm("mov $smaller, %r10");
    __asm("je cache_and_call");

    __asm("cmp $fibSend_sym, %rax");
    __asm("mov $fibSend, %r10");
    __asm("je cache_and_call");

    __asm("mov %rdi, %rsi");
    __asm("mov %rax, %rdi");
    __asm("call invoke_error");
}

long * closureNew(int size) {
    long * c = GC_MALLOC( sizeof(long*) + size*sizeof(long*) );
    c[0] = 77;
    printf( "- new closure at: %p\n", c+1 );
    return c + 1;
}

long * remoteArrayNew(int size) {
    long * c = GC_MALLOC( sizeof(long*) + size*sizeof(long*) );
    c[0] = 33;
    printf( "- new array at: %p\n", c+1 );
    return c + 1;
}

void closureValue() {
    //if its not a closure then jmp to invoke
    __asm("bt $0, %rdi");
    __asm("jnae invoke");
    __asm("cmp $77, -0x8(%rdi)");
    __asm("jne invoke");
    //load code-pointer from the closure-object
    __asm("mov (%rdi), %rax");
    __asm("jmpq *%rax");
}

long plus(long left, long right)
{
//    printf( "plus: %p + %p\n", left, right );
//    printf( "  ->   %ld + %ld\n", left[0], right[0] );
    if (ARE_INTS(left, right))
        return (left ^ 1) + right;
}

long minus(long left, long right)
{
//    printf( "minus: %p - %p\n", left, right );
//    printf( "  ->   %ld - %ld\n", left[0], right[0] );
    if (ARE_INTS(left, right))
        return (left - right) | 1;
}

long * smaller(long left, long right)
{
//    printf( "smaller: %p < %p\n", left, right );
//    printf( "  ->   %ld < %ld\n", left[0], right[0] );
    if (ARE_INTS(left, right))
    // we don't need to remove the tag since it will end up being the same order.
        return left < right ? TRUE : FALSE;
}

