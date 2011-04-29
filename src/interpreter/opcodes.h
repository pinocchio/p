#ifndef INTERPRETER_OPCODES_H
#define INTERPRETER_OPCODES_H

#include <pinocchio.h>

/* ======================================================================= */

extern Object method_context( void ** pc, Object self );

#define EXTERN_OPCODE(name) extern void * op_##name; 
#define OP(name) op_##name

/* ======================================================================= */

EXTERN_OPCODE(block_return)
EXTERN_OPCODE(capture)
EXTERN_OPCODE(exit)
EXTERN_OPCODE(iftrue_iffalse)
EXTERN_OPCODE(jump)
EXTERN_OPCODE(load_constant)
EXTERN_OPCODE(move)
EXTERN_OPCODE(return)
EXTERN_OPCODE(return_constant)
EXTERN_OPCODE(return_self)
EXTERN_OPCODE(return_result)
EXTERN_OPCODE(store_result)
EXTERN_OPCODE(self)
EXTERN_OPCODE(send)
EXTERN_OPCODE(store_result)
EXTERN_OPCODE(field_read)
EXTERN_OPCODE(field_write)
EXTERN_OPCODE(try_native)

EXTERN_OPCODE(result_receiver)
EXTERN_OPCODE(arg_receiver)
EXTERN_OPCODE(self_receiver)
EXTERN_OPCODE(temp_receiver)

/* ======================================================================= */

#endif // INTERPRETER_OPCODES_H
