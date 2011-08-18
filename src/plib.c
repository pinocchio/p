#include <gc/gc.h>
#include <string.h>
#include <pinocchio.h>

void cache_and_call_method() {
  __asm( "mov (%r10), %r11" );
  __asm( "shr %r11" );
  __asm( "lea (%r10,%r11,8), %r10" );
    
    __asm("push %rdx");
    __asm("mov %r10, %rdx");
    // Fetch the calling instruction pointer (stack-stored ip)
    __asm("mov 0x8(%rsp), %eax");
    // Calculate the offset of the actual code pointer
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
    __asm("mov %0, %%rax"::"r"(&SmallInteger));
    __asm("mov %rax, (%rdx)");
    __asm("pop %rdx");
    __asm("jmp *%r10");
    // If not tagged, store the class of the receiver
__asm("not_tagged:");
    __asm("mov -16(%rdi), %rax");
    __asm("mov %rax, (%rdx)");
    __asm("pop %rdx");
    __asm("jmp *%r10");
}

void call_method() {
  __asm( "mov (%r10), %r11" );
  __asm( "shr %r11" );
  __asm( "lea (%r10,%r11,8), %r10" );
  __asm("jmp *%r10");
}

long plus(long left, long right)
{
//    printf( "plus: %p + %p\n", left, right );
    if (ARE_INTS(left,right)) {
        return (left ^ 1) + right;
    }
    return 0;
}

long mult(long left, long right)
{
//    printf( "plus: %p + %p\n", left, right );
    if (ARE_INTS(left,right)) {
        return ENC_INT(DEC_INT(left)*DEC_INT(right));
    }
    return 0;
}

long intDivide(long left, long right)
{
//    printf( "plus: %p + %p\n", left, right );
    if (ARE_INTS(left,right)) {
        return ENC_INT(DEC_INT(left)/DEC_INT(right));
    }
    return 0;
}


long modulo(long left, long right)
{
//    printf( "modulo: %p + %p\n", left, right );
    if (ARE_INTS(left,right)) {
        return ENC_INT(DEC_INT(left)%DEC_INT(right));
    }
    return 0;
}

long minus(long left, long right)
{
//    printf( "minus: %p - %p\n", left, right );
    if (IS_INT(right)) {
        return (left - right) | 1;
    }
    return 0;
}

long bitShift(long self, long bits)
{
//    printf( "minus: %p - %p\n", left, right );
    if (IS_INT(bits)) {
        
        return ENC_INT(DEC_INT(self)<<DEC_INT(bits));
    }
    return 0;
}


tObject smaller(long left, long right)
{
    if (IS_INT(right)) {
    // we don't need to remove the tag since it will end up being the same order.
        // printf( "smaller: %d < %d\n", left, right );
        return left < right ? &true : &false;
    }
    return 0;
}

tObject bigger(long left, long right)
{
    if (IS_INT(right)) {
    // we don't need to remove the tag since it will end up being the same order.
        // printf( "smaller: %d < %d\n", left, right );
        return left > right ? &true : &false;
    }
    return 0;
}



tObject smallerEqual(long left, long right)
{
    // printf( "smaller: %d < %d\n", left, right );
    if (IS_INT(right)) {
    // we don't need to remove the tag since it will end up being the same order.
        // printf( "smaller: %d < %d\n", left, right );
        return left <= right ? &true : &false;
    }
    return 0;
}

tObject print(tSymbol msg) {
    print_symbol(msg);
    printf("\n");
    return (tObject)msg;
}
