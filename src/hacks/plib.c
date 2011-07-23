#include <gc/gc.h>
#include <signal.h>
#include <string.h>
#include <pinocchio.h>

extern void * fib(long* i);
long plus(long left, long right);
long minus(long left, long right);
tObject smaller(long left, long right);

void cache_and_call()
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
    __asm("mov %0, %%rax"::"r"(&SmallInteger));
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
    printf("Lookup of msg %ld failed on %p\n", msg, receiver);
    __asm("int3");
}

void invoke() {
    __asm("cmp $0x611b38, %rax");
    __asm("mov $plus, %r10");
    __asm("je cache_and_call");

    __asm("cmp $21, %rax");
    __asm("mov $minus, %r10");
    __asm("je cache_and_call");

    __asm("cmp $31, %rax");
    __asm("mov $fib, %r10");
    __asm("je cache_and_call");

    __asm("cmp $11, %rax");
    __asm("mov $smaller, %r10");
    __asm("je cache_and_call");

    __asm("cmp $51, %rax");
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
    if (ARE_INTS(left, right)) {
        return (left ^ 1) + right;
    }
    PINOCCHIO_FAIL("Ints expected");
}

long minus(long left, long right)
{
//    printf( "minus: %p - %p\n", left, right );
    if (ARE_INTS(left, right)) {
        return (left - right) | 1;
    }
    PINOCCHIO_FAIL("Ints expected");
}

tObject smaller(long left, long right)
{
    // printf( "smaller: %d < %d\n", left, right );
    if (ARE_INTS(left, right)) {
    // we don't need to remove the tag since it will end up being the same order.
        // printf( "smaller: %d < %d\n", left, right );
        return (tObject)(left < right ? &true : &false);
    }
    PINOCCHIO_FAIL("Ints expected");
}


tObject smallerEqual(long left, long right)
{
    // printf( "smaller: %d < %d\n", left, right );
    if (ARE_INTS(left, right)) {
    // we don't need to remove the tag since it will end up being the same order.
        // printf( "smaller: %d < %d\n", left, right );
        return (tObject)(left <= right ? &true : &false);
    }
    PINOCCHIO_FAIL("Ints expected");
}

extern struct Class Kernel_Object_Metaclass;

void print_symbol(tSymbol symbol) {
    tObject object = (tObject)symbol;
    long size = (long)object[-3];
    char buffer[size+1];
    strncpy(buffer, (char*)object, size);
    buffer[size] = 0;
    printf("%s", buffer);
}

void print_class_name(tClass cls) {
    if (CLASS_OF(cls) == &Kernel_Object_Metaclass) {
        print_symbol(((tMetaclass)cls)->instance->name);
        printf(" class");
    } else {
        print_symbol(cls->name);
    }
}

typedef struct header {
    unsigned char base:     8;
    unsigned char variable: 1;
    unsigned char bytes:    1;
    unsigned char mutable:  1;
    unsigned char gcmark:   1;
    unsigned long hash:     sizeof(unsigned long) * 8 - 12;
} header;

header get_header(header * object) {
    return object[-1];
}

void print_object(void* object[]) {
    
    if (IS_INT(object)) {
        printf(" %ld\n", DEC_INT(object));
        return;
    }

    printf("printing object: %p\n", object);
    header h = get_header((header*)object);
    if (h.variable || h.bytes) {
        printf("size: %lu\n", (long)object[-3]);
    }
    printf(" header: (base: %i var: %i bytes: %i mutable: %i gcmark: %i hash: %lu)\n", 
                      h.base, h.variable, h.bytes, h.mutable, h.gcmark, (unsigned long)h.hash);

    if (&Symbol == CLASS_OF(object)) {
        printf(" #'");
        print_symbol((tSymbol)object);
        printf("' (%p)\n", object);
        return;
    }

    printf(" is a: ");
    print_class_name(CLASS_OF(object));
    printf("\n");
}

tObject basicNew(tBehavior b) {
    long _h = b->instanceHeader >> 1;
    header h = *(header*)&_h;
    tObject result;
    if (h.variable) {
        result = (tObject)GC_MALLOC(sizeof(void**) * (h.base + 3)) + 3;
        result[-3] = (tObject)0;
    } else {
        result = (tObject)GC_MALLOC(sizeof(void**) * (h.base + 2)) + 2;
    }
    result[-2] = (tObject)b;
    result[-1] = (tObject)_h;
    return result;
}

tObject basicNew_(tBehavior b, long tagged_size) {
    if (!(tagged_size & 1)) {
        PINOCCHIO_FAIL("Invalid size type given, expects SmallInteger");
    }
    long size = tagged_size >> 1;
    long _h   = b->instanceHeader >> 1;
    header h = *(header*)&_h;
    tObject result;
    if (h.variable) {
        result = (tObject)GC_MALLOC(sizeof(void**) * (size + h.base + 3)) + 3;
        result[-3] = (tObject)size;
    } else {
        PINOCCHIO_FAIL("Trying to instantiate non-variable-sized class");
    }
    result[-2] = (tObject)b;
    result[-1] = (tObject)_h;
    return result;
}

void basicAtPut(tObject receiver, tSmallInteger index, tObject value)
{
}

tObject basicAt(tObject receiver, tSmallInteger index)
{
    return NULL;
}

tSmallInteger size(tObject receiver)
{
    return ENC_INT(SIZE(receiver));
}
