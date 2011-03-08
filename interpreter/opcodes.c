#include <pinocchio.h>

/* ======================================================================= */

#define OPCODE_HEAD\
    void install_opcodes() {

#define OPCODE_BODY\
    }

#define OPCODE_END
#define INSTALL_OPCODE(name)

/* ======================================================================= */

#define SET_PC(value) CONTEXT()->pc->data = value
#define GET_PC() CONTEXT()->pc->data

#define SELF() CONTEXT()->home_context->self

#define FETCH(type, index)\
    (type)(*index)

#define OBJECT(index) ((Object)index)

#define OPCODE(name)\
    void op_##name(Thread thread) {

#define END_OPCODE\
    }

#define UNS_INT_OPERAND(idx)\
    FETCH(uns_int, GET_PC() + idx)

#define INT_OPERAND(idx)\
    FETCH(long, GET_PC() + idx)

#define OBJECT_OPERAND(idx)\
    OBJECT(FETCH(uns_int, GET_PC() + idx))

#define LOAD(idx)\
    Context_direct_load(CONTEXT(), idx);

#define STORE(idx, object)\
    Context_direct_store(CONTEXT(), idx, object);

#define JUMP(offset)\
    SET_PC(GET_PC() + offset);

#define RETURN(value)\
    Thread_return(thread, value);

#define CONTEXT() thread->context
#define CONTEXT_LOAD(depth, index)\
    Context_load(CONTEXT(), depth, index)
#define CONTEXT_STORE(depth, index, object)\
    Context_store(CONTEXT(), depth, index, object)
#define READ_FIELD(index) SELF()->field[index]
#define WRITE_FIELD(index, value) SELF()->field[index] = value

/* ======================================================================= */

OPCODE_HEAD

INSTALL_OPCODE(move);
INSTALL_OPCODE(load_constant);
INSTALL_OPCODE(lookup);
INSTALL_OPCODE(slot_read);
INSTALL_OPCODE(slot_store);
INSTALL_OPCODE(send);
INSTALL_OPCODE(return);
INSTALL_OPCODE(block_return);
INSTALL_OPCODE(iftrue_iffalse);
INSTALL_OPCODE(iffalse_iftrue);
INSTALL_OPCODE(goto);
INSTALL_OPCODE(exit);

OPCODE_BODY

OPCODE(move)
    uns_int target = UNS_INT_OPERAND(1);
    uns_int origin = UNS_INT_OPERAND(2);
    Object value   = LOAD(origin);
    STORE(target, value);
    JUMP(2);
END_OPCODE

OPCODE(load_constant)
    uns_int target = UNS_INT_OPERAND(1);
    Object value   = OBJECT_OPERAND(2);
    STORE(target, value);
    JUMP(2);
END_OPCODE

OPCODE(lookup)
    uns_int target = UNS_INT_OPERAND(1);
    uns_int depth  = UNS_INT_OPERAND(2);
    uns_int index  = UNS_INT_OPERAND(3);
    Object value   = CONTEXT_LOAD(depth, index);
    STORE(target, value);
    JUMP(3);
END_OPCODE

OPCODE(store)
    uns_int origin = UNS_INT_OPERAND(1);
    uns_int depth  = UNS_INT_OPERAND(2);
    uns_int index  = UNS_INT_OPERAND(3);
    Object value   = LOAD(origin);
    CONTEXT_STORE(depth, index, value);
    JUMP(3);
END_OPCODE

OPCODE(slot_read)
    uns_int target = UNS_INT_OPERAND(1);
    uns_int field  = UNS_INT_OPERAND(2);
    Object value   = READ_FIELD(field);
    STORE(target, value);
    JUMP(2);
END_OPCODE

OPCODE(slot_store)
    uns_int origin = UNS_INT_OPERAND(1);
    uns_int index  = UNS_INT_OPERAND(2);
    Object value   = LOAD(origin);
    WRITE_FIELD(index, value);
    JUMP(2);
END_OPCODE

OPCODE(send)
    Symbol selector = (Symbol)OBJECT_OPERAND(1);
    uns_int size    = UNS_INT_OPERAND(2);
    uns_int offset  = UNS_INT_OPERAND(3);
    JUMP(3);
    send(thread, selector, size, offset);
END_OPCODE

OPCODE(return)
    uns_int origin = UNS_INT_OPERAND(1);
    Object value   = LOAD(origin);
    RETURN(value);
END_OPCODE

OPCODE(block_return)
    uns_int origin = UNS_INT_OPERAND(1);
    Object value   = LOAD(origin);
    RETURN(value);
END_OPCODE

OPCODE(iftrue_iffalse)
    uns_int origin = UNS_INT_OPERAND(1);
    Object test = LOAD(origin);
    if (test == false) {
        long target = INT_OPERAND(2);
        JUMP(target);
    }
    if (test != true) {
        long target = INT_OPERAND(3);
        JUMP(target);
    }
    JUMP(3);
END_OPCODE

OPCODE(iffalse_iftrue)
    uns_int origin = UNS_INT_OPERAND(1);
    Object test = LOAD(origin);
    if (test == true) {
        long target = INT_OPERAND(2);
        JUMP(target);
    }
    if (test != false) {
        long target = INT_OPERAND(3);
        JUMP(target);
    }
    JUMP(3);
END_OPCODE

OPCODE(goto)
    long target = INT_OPERAND(1);
    JUMP(target);
END_OPCODE

OPCODE(exit)
    fwprintf(stdout, L"HELLO WORLD!\n");
    exit(0);
END_OPCODE

OPCODE_END
