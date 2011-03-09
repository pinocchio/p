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

#define SELF() CONTEXT()->home->self

#define FETCH(type, index)\
    (type)(*(index))

#define OBJECT(index) ((Object)index)

#define OPCODE(name)\
    void op_##name(Thread thread) {\
        fwprintf(stderr, L" ## "#name"\n");

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

#define RETURN()\
    Thread_return(thread);

#define CONTEXT() thread->context
#define CONTEXT_LOAD(depth, index)\
    Context_load(CONTEXT(), depth, index)
#define CONTEXT_STORE(depth, index, object)\
    Context_store(CONTEXT(), depth, index, object)
#define READ_FIELD(index) SELF()->field[index]
#define WRITE_FIELD(index, value) SELF()->field[index] = value

/* ======================================================================= */

uns_int target;
uns_int origin;
uns_int depth;
uns_int idx;
uns_int size;
uns_int offset;
Object  value;

OPCODE_HEAD

INSTALL_OPCODE(block_return);
INSTALL_OPCODE(cache_send);
INSTALL_OPCODE(exit);
INSTALL_OPCODE(goto);
INSTALL_OPCODE(iffalse_iftrue);
INSTALL_OPCODE(iftrue_iffalse);
INSTALL_OPCODE(load_constant);
INSTALL_OPCODE(lookup);
INSTALL_OPCODE(move);
INSTALL_OPCODE(poly_send);
INSTALL_OPCODE(return);
INSTALL_OPCODE(return_self);
INSTALL_OPCODE(self);
INSTALL_OPCODE(send);
INSTALL_OPCODE(slot_read);
INSTALL_OPCODE(slot_write);

OPCODE_BODY

OPCODE(self)
    target = UNS_INT_OPERAND(1);
    value  = SELF();
    STORE(target, value);
    JUMP(2);
END_OPCODE

OPCODE(move)
    origin = UNS_INT_OPERAND(2);
    target = UNS_INT_OPERAND(1);
    value  = LOAD(origin);
    STORE(target, value);
    JUMP(3);
END_OPCODE

OPCODE(load_constant)
    target = UNS_INT_OPERAND(1);
    value  = OBJECT_OPERAND(2);
    STORE(target, value);
    JUMP(3);
END_OPCODE

OPCODE(lookup)
    target = UNS_INT_OPERAND(1);
    depth  = UNS_INT_OPERAND(2);
    idx    = UNS_INT_OPERAND(3);
    value  = CONTEXT_LOAD(depth, idx);
    STORE(target, value);
    JUMP(4);
END_OPCODE

OPCODE(store)
    origin = UNS_INT_OPERAND(1);
    depth  = UNS_INT_OPERAND(2);
    idx    = UNS_INT_OPERAND(3);
    value  = LOAD(origin);
    CONTEXT_STORE(depth, idx, value);
    JUMP(4);
END_OPCODE

OPCODE(slot_read)
    target        = UNS_INT_OPERAND(1);
    uns_int field = UNS_INT_OPERAND(2);
    value         = READ_FIELD(field);
    STORE(target, value);
    JUMP(3);
END_OPCODE

OPCODE(slot_write)
    origin = UNS_INT_OPERAND(1);
    idx    = UNS_INT_OPERAND(2);
    value  = LOAD(origin);
    WRITE_FIELD(idx, value);
    JUMP(3);
END_OPCODE

OPCODE(send)
    size            = UNS_INT_OPERAND(1);
    offset          = UNS_INT_OPERAND(2);
    Symbol selector = (Symbol)OBJECT_OPERAND(3);
    send(thread, selector, size, offset);
END_OPCODE

OPCODE(cache_send)
    size            = UNS_INT_OPERAND(1);
    offset          = UNS_INT_OPERAND(2);
    Symbol selector = (Symbol)OBJECT_OPERAND(3);
    JUMP(4);
    send(thread, selector, size, offset);
END_OPCODE

OPCODE(poly_send)
    size            = UNS_INT_OPERAND(1);
    offset          = UNS_INT_OPERAND(2);
    Symbol selector = (Symbol)OBJECT_OPERAND(3);
    JUMP(4);
    send(thread, selector, size, offset);
END_OPCODE

OPCODE(return)
    origin  = UNS_INT_OPERAND(1);
    value   = LOAD(origin);
    RETURN();
    JUMP(4);
    target  = UNS_INT_OPERAND(2);
    STORE(target, value);
END_OPCODE

OPCODE(return_self)
    RETURN();
    JUMP(4);
END_OPCODE

OPCODE(block_return)
    origin  = UNS_INT_OPERAND(1);
    value   = LOAD(origin);
    RETURN();
    target  = UNS_INT_OPERAND(2);
    STORE(target, value);
    JUMP(4);
END_OPCODE

OPCODE(iftrue_iffalse)
    origin      = UNS_INT_OPERAND(1);
    Object test = LOAD(origin);
    if (test == false) {
        long target = INT_OPERAND(2);
        JUMP(target);
    }
    if (test != true) {
        long target = INT_OPERAND(3);
        JUMP(target);
    }
    JUMP(4);
END_OPCODE

OPCODE(iffalse_iftrue)
    origin      = UNS_INT_OPERAND(1);
    Object test = LOAD(origin);
    if (test == true) {
        long target = INT_OPERAND(2);
        JUMP(target);
    }
    if (test != false) {
        long target = INT_OPERAND(3);
        JUMP(target);
    }
    JUMP(4);
END_OPCODE

OPCODE(goto)
    long target = INT_OPERAND(1);
    JUMP(target);
END_OPCODE

OPCODE(exit)
    exit(0);
END_OPCODE

OPCODE_END
