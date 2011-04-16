#include <pinocchio.h>
#include <alloca.h>

/* ======================================================================= */

#define OPCODE_DECLS\
    char method_context( void ** pc, JumpTarget return_target, Object arg[] ) {

#define OPCODE_HEAD\
    if ( arg == NULL ) {\

#define OPCODE_BODY\
        return 0;\
    }\
    local = (Object*)alloca(((uns_int)*(pc + 1)) * sizeof(Object));\
    JUMP(2);

#define OPCODE_END\
    }

#define INSTALL_OPCODE(name)\
    op_##name = &&label_##name;

/* ======================================================================= */

#define GO_NEXT()                   goto **GET_PC()
#define SET_PC(value)               pc = value
#define GET_PC()                    pc

#define FETCH(index)                *(index)

#define SELF()                      arg[0]
#define OPERAND(idx)                FETCH(GET_PC() + idx)
#define UNS_INT_OPERAND(idx)        (uns_int)(FETCH(GET_PC() + idx))
#define INT_OPERAND(idx)            (long)(FETCH(GET_PC() + idx))

#define SET_RETURN(value)           SELF() = (value)
#define RETURN(code)                return code;
#define END_OPCODE                  

#define LOAD(idx)                   local[idx]
#define STORE(idx, object)          local[idx] = object
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
DECLARE_OPCODE(lookup_native)
DECLARE_OPCODE(move)
DECLARE_OPCODE(return)
DECLARE_OPCODE(return_constant)
DECLARE_OPCODE(return_self)
DECLARE_OPCODE(self)
DECLARE_OPCODE(send)
DECLARE_OPCODE(field_read)
DECLARE_OPCODE(field_write)

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
char            return_code;
Object *        local;
Block           block;
void **         method_code;
Behavior        cache_type;

OPCODE_HEAD

INSTALL_OPCODE(nop)
INSTALL_OPCODE(block_return)
INSTALL_OPCODE(capture)
INSTALL_OPCODE(exit)
INSTALL_OPCODE(iffalse_iftrue)
INSTALL_OPCODE(iftrue_iffalse)
INSTALL_OPCODE(jump)
INSTALL_OPCODE(load_constant)
INSTALL_OPCODE(lookup_native)
INSTALL_OPCODE(move)
INSTALL_OPCODE(return)
INSTALL_OPCODE(return_constant)
INSTALL_OPCODE(return_self)
INSTALL_OPCODE(self)
INSTALL_OPCODE(send)
INSTALL_OPCODE(field_read)
INSTALL_OPCODE(field_write)

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
    target = UNS_INT_OPERAND(1);
    origin = UNS_INT_OPERAND(2);
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
    offset      = UNS_INT_OPERAND(1);
    cache_type  = (Behavior)OPERAND(2);
    method_code = OPERAND(3);

    if (cache_type != local[offset]->header.class) {
        selector    = (Symbol)OPERAND(4);
        next_method = lookup(local[offset], selector);
        if (next_method == NULL) {
            RETURN(-2);
        }
        method_code = next_method->code->data;
        OPERAND(2)  = local[offset]->header.class;
        OPERAND(3)  = method_code;
    }

    return_code = ((native)*method_code)(method_code, NULL, &local[offset]);

    if ( return_code != 0 ) {
	    return return_code;
    }

    JUMP(5);
END_OPCODE

OPCODE(return_constant)
    value = (Object)OPERAND(1);
    SET_RETURN(value);
    RETURN(0);
END_OPCODE

OPCODE(return)
    origin  = UNS_INT_OPERAND(1);
    value   = LOAD(origin);
    SET_RETURN(value);
    RETURN(0);
END_OPCODE

OPCODE(return_self)
    RETURN(0);
END_OPCODE

OPCODE(block_return)
    origin  = UNS_INT_OPERAND(1);
    value   = LOAD(origin);
    if (return_target == NULL) {
        RETURN(-1);
    }
    *return_target->return_pointer = value;
    longjmp(return_target->target, 1);
END_OPCODE

OPCODE(iftrue_iffalse)
    origin = UNS_INT_OPERAND(1);
    value  = LOAD(origin);
    if (value == false) {
        address = INT_OPERAND(2);
        JUMP(address);
    } else if (value != true) {
        address = INT_OPERAND(3);
        JUMP(address);
    }
    JUMP(4);
END_OPCODE

OPCODE(iffalse_iftrue)
    origin = UNS_INT_OPERAND(1);
    value  = LOAD(origin);
    if (value  == true) {
        address = INT_OPERAND(2);
        JUMP(address);
    } else if (value  != false) {
        address = INT_OPERAND(3);
        JUMP(address);
    }
    JUMP(4);
END_OPCODE

OPCODE(jump)
    address = INT_OPERAND(1);
    JUMP(address);
END_OPCODE

OPCODE(capture)
    block = (Block)OPERAND(1);
    if (return_target == NULL) {
        return_target = new_JumpTarget(arg);
        if (setjmp(return_target->target)) {
            RETURN(0);
        }
    }
    offset = UNS_INT_OPERAND(2);
    size   = UNS_INT_OPERAND(3);
    target = UNS_INT_OPERAND(4);
    value  = (Object)new_BlockClosure(block, return_target, SELF(), size, &local[offset]);
    STORE(target, value);
    JUMP(5);
END_OPCODE;

OPCODE(lookup_native)
    name       = (NativeName)OPERAND(1);
    function   = lookup_native(name);
    OPERAND(0) = OP(jump);
    OPERAND(1) = 2;
    if (function) {
        OPERAND(-2) = function;
        return function(pc-1, return_target, arg);
    }
    JUMP(2);
END_OPCODE

OPCODE(exit)
    RETURN(-1);
END_OPCODE

OPCODE_END
