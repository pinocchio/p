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

static Object invoke(void** pc, Object receiver)
{
    void ** method_code;
    if ((Behavior)OPERAND(1) == receiver->header.class) {
        method_code = OPERAND(2);
    } else {
        Symbol selector           = (Symbol)OPERAND(3);
        OPERAND(1)                = receiver->header.class;
        MethodClosure next_method = lookup(receiver, selector);
        if (next_method == NULL) {
            OPERAND(1) = NULL;
            RETURN(NULL);
        }
        method_code = next_method->code->data;
        OPERAND(2)  = method_code;
    }
    return ((native)*method_code)(method_code, receiver);
}

DECLARE_OPCODE(block_return)
DECLARE_OPCODE(capture)
DECLARE_OPCODE(iftrue_iffalse)
DECLARE_OPCODE(jump)
DECLARE_OPCODE(load_constant)
DECLARE_OPCODE(move)
DECLARE_OPCODE(return)
DECLARE_OPCODE(return_constant)
DECLARE_OPCODE(return_self)
DECLARE_OPCODE(self)
DECLARE_OPCODE(store_result)
DECLARE_OPCODE(field_read)
DECLARE_OPCODE(field_write)
DECLARE_OPCODE(return_result)

DECLARE_OPCODE(self_send)
DECLARE_OPCODE(result_send)
DECLARE_OPCODE(temp_send)
DECLARE_OPCODE(arg_send)

OPCODE_DECLS

uns_int         target;
uns_int         origin;
uns_int         offset;
long            address;
Block           block;

Object          value;
Object          return_value;
Object          receiver;

OPCODE_HEAD

INSTALL_OPCODE(block_return)
INSTALL_OPCODE(capture)
INSTALL_OPCODE(jump)
INSTALL_OPCODE(load_constant)
INSTALL_OPCODE(move)
INSTALL_OPCODE(return)
INSTALL_OPCODE(return_self)
INSTALL_OPCODE(return_constant)
INSTALL_OPCODE(self)
INSTALL_OPCODE(field_read)
INSTALL_OPCODE(field_write)

INSTALL_OPCODE(iftrue_iffalse)
INSTALL_OPCODE(return_result)
INSTALL_OPCODE(store_result)

INSTALL_OPCODE(self_send)
INSTALL_OPCODE(result_send)
INSTALL_OPCODE(temp_send)
INSTALL_OPCODE(arg_send)

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

OPCODE(self_send)
    receiver     = self;
    return_value = invoke(GET_PC(), receiver);
    JUMP(4);
END_OPCODE

OPCODE(result_send)
    receiver     = return_value;
    return_value = invoke(GET_PC(), receiver);
    JUMP(4);
END_OPCODE

OPCODE(temp_send)
    offset       = UNS_INT_OPERAND(1);
    receiver     = LOAD(offset);
    SET_PC(GET_PC() + 1);
    return_value = invoke(GET_PC(), receiver);
    JUMP(4);
END_OPCODE

OPCODE(arg_send)
    offset       = UNS_INT_OPERAND(1);
    receiver     = ARGUMENT(offset);
    SET_PC(GET_PC() + 1);
    return_value = invoke(GET_PC(), receiver);
    JUMP(4);
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

OPCODE_END
