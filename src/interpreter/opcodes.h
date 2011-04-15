#ifndef INTERPRETER_OPCODES_H
#define INTERPRETER_OPCODES_H

#include <pinocchio.h>

/* ======================================================================= */

char method_context( Method method, JumpTarget return_target, Object arg[] );

#define EXTERN_OPCODE(name) extern void * op_##name; 
#define OP(name) op_##name

/* ======================================================================= */

EXTERN_OPCODE(allocate_locals)
EXTERN_OPCODE(block_return)
EXTERN_OPCODE(cache_send)
EXTERN_OPCODE(capture)
EXTERN_OPCODE(exit)
EXTERN_OPCODE(iffalse_iftrue)
EXTERN_OPCODE(iftrue_iffalse)
EXTERN_OPCODE(jump)
EXTERN_OPCODE(load_constant)
EXTERN_OPCODE(lookup_native)
EXTERN_OPCODE(move)
EXTERN_OPCODE(poly_send)
EXTERN_OPCODE(return)
EXTERN_OPCODE(return_constant)
EXTERN_OPCODE(return_self)
EXTERN_OPCODE(self)
EXTERN_OPCODE(send)
EXTERN_OPCODE(field_read)
EXTERN_OPCODE(field_write)
EXTERN_OPCODE(try_native)

/* ======================================================================= */

#endif // INTERPRETER_OPCODES_H
