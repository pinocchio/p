#include <stdlib.h>
#include <stdio.h>
#include <gc/gc.h>
#include <signal.h>

extern long p_true[];
extern long p_false[];

#define ENC_INT(v)  ((long*)(((v) << 1) + 1))
#define DEC_INT(v)  ((long)(v) >> 1)
#define IS_INT(v)   ((long)(v) & 1 == 1)

#define TRUE  (p_true + 2)
#define FALSE (p_false + 2)

extern void * fib(long* i);

long plus(long left, long right)
{
//    printf( "plus: %p + %p\n", left, right );
//    printf( "  ->   %ld + %ld\n", left[0], right[0] );
    if (IS_INT(left) && IS_INT(right))
        return (left - 1) + right;
}

long minus(long left, long right)
{
//    printf( "minus: %p - %p\n", left, right );
//    printf( "  ->   %ld - %ld\n", left[0], right[0] );
    if (IS_INT(left) && IS_INT(right))
        return left - right + 1;
}

void * smaller(long *left, long *right)
{
//    printf( "smaller: %p < %p\n", left, right );
//    printf( "  ->   %ld < %ld\n", left[0], right[0] );
    if (IS_INT(left) && IS_INT(right))
    // we don't need to remove the tag since it will end up being the same order.
        return left < right ? TRUE : FALSE;
}

void invoke_error(long msg, void* receiver)
{
    printf("Lookup of msg %ld failed on %p\n", msg, receiver);
    __asm("int3");
}

void invoke() {
    __asm("cmp $21, %rax");
    __asm( "je minus");
    __asm("cmp $41, %rax");
    __asm( "je plus");
    __asm("cmp $31, %rax");
    __asm( "je fib+0xa");
    __asm("cmp $11, %rax");
    __asm( "je smaller");
    __asm("cmp $51, %rax");
    __asm( "je fibSend+0x22");

    __asm("mov %rdi, %rsi");
    __asm("mov %rax, %rdi");
    __asm("call invoke_error");
}

long * closureNew(int size) {
    long * c = GC_MALLOC( sizeof(long*)+size*sizeof(long*) );
    c[0] = 77;
    printf( "- new closure at: %p\n", c );
    return c + 1;
}

long * remoteArrayNew(int size) {
    long * c = GC_MALLOC( sizeof(long*)+size*sizeof(long*) );
    c[0] = 33;
    printf( "- new array at: %p\n", c );
    return c + 1;
}

void closureValue() {
    //if its not a closure then jmp to invoke
    __asm("cmp $77, -0x8(%rdi)");
    __asm( "jne invoke");
    //load code-pointer from the closure-object
    __asm( "mov (%rdi), %rax");
    __asm( "jmpq *%rax");
}

