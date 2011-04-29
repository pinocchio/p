#include <pinocchio.h>
#include <alloca.h>

/* ======================================================================= */

#define OPCODE_DECLS\
    __attribute__((optimize("-fno-omit-frame-pointer"))) Object method_context( void ** pc, Object self ) {

#define OPCODE_HEAD\
    if ( pc == NULL ) {\

/* use alloca rather than manually changing the RSP since it
 * stores it as the RBP and can return immediately without
 * calculating the frame size again
 */
#define OPCODE_BODY\
        return NULL;\
    }\
    stack_pointer = alloca(((uns_int)*(pc + 1)) * sizeof(Object));\
    return_value  = self;\
    JUMP(2);
    // stack_pointer -= (uns_int)*(pc + 1);

#define OPCODE_END\
    }

#define SET_OPCODE(name, value) op_##name = (void*)value;
#define INSTALL_OPCODE(name)    SET_OPCODE(name, &&label_##name)

/* ======================================================================= */

#define GO_NEXT()                   goto **GET_PC()
#define SET_PC(value)               pc = value
#define GET_PC()                    pc

#define FETCH(index)                *(index)

#define SELF()                      self
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

DECLARE_OPCODE(block_return)
DECLARE_OPCODE(capture)
DECLARE_OPCODE(exit)
DECLARE_OPCODE(iftrue_iffalse)
DECLARE_OPCODE(jump)
DECLARE_OPCODE(load_constant)
DECLARE_OPCODE(move)
DECLARE_OPCODE(return)
DECLARE_OPCODE(return_constant)
DECLARE_OPCODE(return_self)
DECLARE_OPCODE(self)
DECLARE_OPCODE(send)
DECLARE_OPCODE(store_result)
DECLARE_OPCODE(field_read)
DECLARE_OPCODE(field_write)
DECLARE_OPCODE(return_result)

DECLARE_OPCODE(result_receiver)
DECLARE_OPCODE(arg_receiver)
DECLARE_OPCODE(self_receiver)
DECLARE_OPCODE(temp_receiver)

OPCODE_DECLS

uns_int         target;
uns_int         origin;
uns_int         offset;
long            address;
Symbol          selector;
MethodClosure   next_method;
Block           block;
void **         method_code;

Object          value;
Object          return_value;
Object          receiver;

OPCODE_HEAD

INSTALL_OPCODE(block_return)
INSTALL_OPCODE(capture)
INSTALL_OPCODE(exit)
INSTALL_OPCODE(jump)
INSTALL_OPCODE(load_constant)
INSTALL_OPCODE(move)
INSTALL_OPCODE(return)
INSTALL_OPCODE(return_self)
INSTALL_OPCODE(return_constant)
INSTALL_OPCODE(self)
INSTALL_OPCODE(send)
INSTALL_OPCODE(field_read)
INSTALL_OPCODE(field_write)

INSTALL_OPCODE(store_result)
INSTALL_OPCODE(return_result)
INSTALL_OPCODE(iftrue_iffalse)

#define RCV_RESULT 0
#define RCV_SELF   1
#define RCV_ARG    2
#define RCV_TEMP   3

SET_OPCODE(result_receiver, RCV_RESULT)
SET_OPCODE(self_receiver,   RCV_SELF)
SET_OPCODE(arg_receiver,    RCV_ARG)
SET_OPCODE(temp_receiver,   RCV_TEMP)

OPCODE_BODY

OPCODE(self)
    target = UNS_INT_OPERAND(1);
    STORE(target, self);
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

OPCODE(send)
    switch (UNS_INT_OPERAND(1)) {
        case RCV_RESULT: receiver = return_value; break;
        case RCV_SELF:   receiver = self; break;
        default: receiver = self;
    }
    if ((Behavior)OPERAND(2) == receiver->header.class) {
        method_code = OPERAND(3);
    } else {
        selector    = (Symbol)OPERAND(4);
        OPERAND(2)  = receiver->header.class;
        next_method = lookup(receiver, selector);
        if (next_method == NULL) {
            OPERAND(1) = NULL;
            RETURN(NULL);
        }
        method_code = next_method->code->data;
        OPERAND(3)  = method_code;
    }
    return_value = ((native)*method_code)(method_code, receiver);
    JUMP(5);
END_OPCODE

OPCODE(store_result)
    offset = UNS_INT_OPERAND(1);
    STORE(offset, return_value);
    JUMP(2);
END_OPCODE

OPCODE(return_result)
    RETURN(return_value);
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
    RETURN(SELF());
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
    address = INT_OPERAND(1);
    if (return_value == false) {
        JUMP(address);
    } else if (return_value != true) {
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
