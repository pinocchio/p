#include <gc/gc.h>
#include <string.h>
#include <pinocchio.h>

extern void * Kernel_Collection_Array;

void inline_cache_and_call() {
    //invoke-frame is already gone
    //r10 is the target code address

    //backup rdx
    __asm("mov %rdx, %r11");
    //backup class in the red zone
    __asm("mov %rax, -0x8(%rsp)");

    //copy in method
    __asm("mov %r10, %rdx");

    // Fetch the calling instruction pointer (stack-stored ip)
    __asm("mov 0x0(%rsp), %eax");
    // Calculate the offset of the actual code pointer
    __asm("sub %eax, %edx");
    // Overwrite the 4-byte call-target offset with the method
    __asm("movl %edx, -4(%eax)");

    // Calculate the location of the literal in the frame
    __asm("lea -5(%eax), %edx");
    __asm("movl -9(%eax), %eax");
    __asm("cltq");
    __asm("add %rax, %rdx");

    //restore the class
    __asm("mov -0x8(%rsp), %rax");
    //copy the class into literal frame
    __asm("mov %rax, (%rdx)");

    //restore rdx
    __asm("mov %r11, %rdx");
    //jump to the method
    __asm("jmp *%r10");
}

void wrap_and_call() {
    //invoke-frame is half-gone, call arguments are still on the stack
    //ready to call: "aMethod perform: selector on: receiver with: arguments"

    //untag numOfArgs
    __asm("shr %r10");

    //wrap all arguments in the arguments array
    //call arguments are on the stack in reverse order, first arg (the original receiver) is already copied.
    //the 4th call register (=arguments) already contains an array with the appropriate size
  __asm( "loop:" );
    __asm("cmp $0, %r10");
    __asm("je done");

    __asm("mov (%rsp,%r10,8), %r9");
    __asm("sub $1, %r10");
    __asm("mov %r9, (%rcx,%r10,8)");
    __asm("jmp loop");

  __asm("done:");

    //remove the call arguments (saved by invoke) from the stack
    __asm("add $0x30, %rsp");

    //invoke this
    __asm( "jmp groundedInvoke" );
}

void unwrap() {
    //%r11 = theArgs

    __asm("mov 0x0(%r11), %rsi");
    __asm("mov 0x8(%r11), %rdx");
    __asm("mov 0x10(%r11), %rcx");
    __asm("mov 0x18(%r11), %r8");
    __asm("mov 0x20(%r11), %r9");

    //todo push the rest to the stack...
    //get size
    //__asm("mov -0x18(%r11) ");
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

long count_args(tSymbol sym) {
  int count = 0;
  size_t len = (long)((tObject)sym)->value[-3];
  for(int i = 0; i<len; ++i) {
    if( sym[i] == ':' )
      ++count;
  }
  return ENC_INT(count);
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
