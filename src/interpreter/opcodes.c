#include <pinocchio.h>
#include <alloca.h>

/* ======================================================================= */

#define OPCODE_DECLS\
    Object method_context( void ** pc, Object * arg ) {

#define OPCODE_HEAD\
    if ( pc == NULL ) {\

/* use alloca rather than manually changing the RSP since it
 * stores it as the RBP and can return immediately without
 * calculating the frame size again
 */
#define OPCODE_BODY\
        return NULL;\
    }\
    register Object * stack_pointer __asm("rsp");\
    register Object * base_pointer  __asm("rbp");\
    alloca(((uns_int)*(pc + 1)) * sizeof(Object));\
    JUMP(2);
    // stack_pointer -= (uns_int)*(pc + 1);

#define OPCODE_END\
    }

#define INSTALL_OPCODE(name)\
    op_##name = &&label_##name;

/* ======================================================================= */

#define GO_NEXT()                   goto **GET_PC()
#define SET_PC(value)               pc = value
#define GET_PC()                    pc

#define FETCH(index)                *(index)

#define ARG(index)	                arg[index]

#define SELF()                      ARG(0)
#define OPERAND(idx)                FETCH(GET_PC() + idx)
#define UNS_INT_OPERAND(idx)        (uns_int)(FETCH(GET_PC() + idx))
#define INT_OPERAND(idx)            (long)(FETCH(GET_PC() + idx))

#define RETURN(result)              return result;
#define END_OPCODE                  

#define LOAD(idx)                   stack_pointer[idx]
#define STORE(idx, object)          stack_pointer[idx] = object
#define READ_FIELD(index)           SELF()->field[index]
#define WRITE_FIELD(index, value)   SELF()->field[index] = value

// #define DEBUG
#ifndef DEBUG
#define OPCODE(name)\
    label_##name:
#else
#define OPCODE(name)\
    label_##name:\
        printf(" ## op_"#name"\n");
#endif

#define JUMP(offset)\
    SET_PC(GET_PC() + offset);\
    GO_NEXT();

/* ======================================================================= */

#define DECLARE_OPCODE(name) void * op_##name; 

/* ======================================================================= */

DECLARE_OPCODE(nop)
DECLARE_OPCODE(block_return)
DECLARE_OPCODE(capture)
DECLARE_OPCODE(exit)
DECLARE_OPCODE(iffalse_iftrue)
DECLARE_OPCODE(iftrue_iffalse)
DECLARE_OPCODE(jump)
DECLARE_OPCODE(load_constant)
DECLARE_OPCODE(move)
DECLARE_OPCODE(return)
DECLARE_OPCODE(return_constant)
DECLARE_OPCODE(return_self)
DECLARE_OPCODE(self)
DECLARE_OPCODE(send)
DECLARE_OPCODE(lookup_send)
DECLARE_OPCODE(field_read)
DECLARE_OPCODE(field_write)
DECLARE_OPCODE(return_result)

OPCODE_DECLS

uns_int         target;
uns_int         origin;
uns_int         offset;
uns_int         size;
long            address;
Symbol          selector;
Object          value;
NativeName      name;
native          function;
MethodClosure   next_method;
Block           block;
void **         method_code;

OPCODE_HEAD

INSTALL_OPCODE(nop)
INSTALL_OPCODE(block_return)
INSTALL_OPCODE(capture)
INSTALL_OPCODE(exit)
INSTALL_OPCODE(iffalse_iftrue)
INSTALL_OPCODE(iftrue_iffalse)
INSTALL_OPCODE(jump)
INSTALL_OPCODE(load_constant)
INSTALL_OPCODE(move)
INSTALL_OPCODE(return)
INSTALL_OPCODE(return_constant)
INSTALL_OPCODE(return_self)
INSTALL_OPCODE(self)
INSTALL_OPCODE(send)
INSTALL_OPCODE(lookup_send)
INSTALL_OPCODE(field_read)
INSTALL_OPCODE(field_write)
INSTALL_OPCODE(return_result)

OPCODE_BODY

OPCODE(nop)
    JUMP(1);
END_OPCODE

OPCODE(self)
    target = UNS_INT_OPERAND(1);
    value  = SELF();
    STORE(target, value);
    JUMP(2);
END_OPCODE

OPCODE(move)
    origin = UNS_INT_OPERAND(1);
    target = UNS_INT_OPERAND(2);
    value  = LOAD(origin);
    STORE(target, value);
    JUMP(3);
END_OPCODE

OPCODE(load_constant)
    value  = (Object)OPERAND(1);
    target = UNS_INT_OPERAND(2);
    STORE(target, value);
    JUMP(3);
END_OPCODE

OPCODE(field_read)
    target        = UNS_INT_OPERAND(1);
    uns_int field = UNS_INT_OPERAND(2);
    value         = READ_FIELD(field);
    STORE(target, value);
    JUMP(3);
END_OPCODE

OPCODE(field_write)
    origin = UNS_INT_OPERAND(1);
    offset = UNS_INT_OPERAND(2);
    value  = LOAD(origin);
    WRITE_FIELD(offset, value);
    JUMP(3);
END_OPCODE

OPCODE(lookup_send)
    selector    = (Symbol)OPERAND(3);
    value       = LOAD(0);
    next_method = lookup(value, selector);
    if (next_method == NULL) {
        RETURN(NULL);
    }
    method_code = next_method->code->data;
    //reload value so that gcc doesn't save and restore it on the C stack for lookup call. It is already on the stack at *[ER]SP
    value       = LOAD(0);
    OPERAND(1)  = value->header.class;
    OPERAND(2)  = method_code;

    STORE(0, ((native)*method_code)(method_code, stack_pointer));
    JUMP(4);
END_OPCODE

OPCODE(send)
    value = LOAD(0);
    if ((Behavior)OPERAND(1) == value->header.class) {
        method_code = OPERAND(2);
    } else {
        goto *OP(lookup_send);
    }
    STORE(0, ((native)*method_code)(method_code, stack_pointer));
    JUMP(4);
END_OPCODE

OPCODE(return_result)
    value = LOAD(0);
    RETURN(value);
END_OPCODE

OPCODE(return_constant)
    value = (Object)OPERAND(1);
    RETURN(value);
END_OPCODE

OPCODE(return)
    origin  = UNS_INT_OPERAND(1);
    value   = LOAD(origin);
    RETURN(value);
END_OPCODE

OPCODE(return_self)
    value = SELF();
    RETURN(value);
END_OPCODE

OPCODE(block_return)
    origin  = UNS_INT_OPERAND(1);
    value   = LOAD(origin);
    /*
    if (return_target == NULL) {
        RETURN(-1);
    }
    *return_target->return_pointer = value;
    longjmp(return_target->target, 1);
    */
END_OPCODE

OPCODE(iftrue_iffalse)
    value = LOAD(0);
    address = INT_OPERAND(1);
    if (value == false) {
        JUMP(address);
    } else if (value != true) {
        address = INT_OPERAND(2);
        exit(-1);
        JUMP(address);
    }
    JUMP(3);
END_OPCODE

OPCODE(iffalse_iftrue)
    value = LOAD(0);
    address = INT_OPERAND(1);
    if (value == true) {
        JUMP(address);
    } else if (value  != false) {
        address = INT_OPERAND(2);
        exit(-1);
        JUMP(address);
    }
    JUMP(3);
END_OPCODE

OPCODE(jump)
    address = INT_OPERAND(1);
    JUMP(address);
END_OPCODE

OPCODE(capture)
    block = (Block)OPERAND(1);
    /*
    if (return_target == NULL) {
        return_target = new_JumpTarget(arg);
        if (setjmp(return_target->target)) {
            RETURN(0);
        }
    }
    offset = UNS_INT_OPERAND(2);
    size   = UNS_INT_OPERAND(3);
    target = UNS_INT_OPERAND(4);
    value  = (Object)new_BlockClosure(block, return_target, SELF(), size, stack_pointer);
    STORE(target, value);
    */
    JUMP(5);
END_OPCODE;

OPCODE(exit)
    exit(-1);
END_OPCODE

OPCODE_END
