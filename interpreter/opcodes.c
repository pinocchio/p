#include <pinocchio.h>

/* ======================================================================= */

#define OPCODE_HEAD\
    void install_opcodes() {

#define OPCODE_BODY\
    }

#define OPCODE_END
#define INSTALL_OPCODE(name)

/* ======================================================================= */

#define SET_PC(value) 
#define GET_PC() (void**)nil

#define SELF() nil

#define FETCH(type, index)\
    (type)(*index)

#define OBJECT(index) nil

#define OPCODE(name)\
    void op_##name(Thread thread) {

#define END_OPCODE\
    }

#define UNS_INT_OPERAND(idx)\
    FETCH(uns_int, GET_PC() + idx)

#define OBJECT_OPERAND(idx)\
    OBJECT(FETCH(uns_int, GET_PC() + idx))

#define LOAD(idx)\
    Context_load(thread, idx);

#define STORE(idx, object)\
    Context_store(thread, idx, object);

#define JUMP(offset)\
    SET_PC(GET_PC() + offset);

#define RETURN(value)\
    Context_return(thread, value);

#define CONTEXT_LOAD(depth, index) nil
#define CONTEXT_STORE(depth, index, object)
#define READ_FIELD(index) nil
#define WRITE_FIELD(index, value)

/* ======================================================================= */

OPCODE_HEAD

INSTALL_OPCODE(move);
INSTALL_OPCODE(load_constant);
INSTALL_OPCODE(lookup);
INSTALL_OPCODE(slot_read);
INSTALL_OPCODE(slot_store);
INSTALL_OPCODE(invoke);
INSTALL_OPCODE(return);
INSTALL_OPCODE(block_return);
INSTALL_OPCODE(iftrue_iffalse);
INSTALL_OPCODE(iffalse_iftrue);
INSTALL_OPCODE(goto);

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
    Object self    = SELF();
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

OPCODE(invoke)
    Object selector = OBJECT_OPERAND(1);
    uns_int offset  = UNS_INT_OPERAND(2);
    JUMP(2);
    invoke(selector, offset);
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
        uns_int target = UNS_INT_OPERAND(2);
        JUMP(target);
    }
    if (test != true) {
        uns_int target = UNS_INT_OPERAND(3);
        JUMP(target);
    }
    JUMP(3);
END_OPCODE

OPCODE(iffalse_iftrue)
    uns_int origin = UNS_INT_OPERAND(1);
    Object test = LOAD(origin);
    if (test == true) {
        uns_int target = UNS_INT_OPERAND(2);
        JUMP(target);
    }
    if (test != false) {
        uns_int target = UNS_INT_OPERAND(3);
        JUMP(target);
    }
    JUMP(3);
END_OPCODE

OPCODE(goto)
    uns_int target = UNS_INT_OPERAND(1);
    JUMP(target);
END_OPCODE

OPCODE_END
