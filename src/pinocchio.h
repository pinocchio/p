#ifndef PINOCCHIO_H
#define PINOCCHIO_H

#include <stdlib.h>
#include <setjmp.h>
#include <errno.h>
#include <stdio.h>
#include <wchar.h>

#include <gc.h>

/* ======================================================================= */

typedef unsigned long               uns_int;

typedef struct Object*              Object;
typedef struct Behavior*            Behavior;
typedef struct Class*               Class;
typedef struct Slot*                Slot;
typedef struct Layout*              Layout;
typedef struct Metaclass*           Metaclass;
typedef struct Dictionary*          Dictionary;
typedef struct SmallInteger*        SmallInteger;
typedef struct Array*               Array;
typedef struct Symbol*              Symbol;
typedef struct String*              String;
typedef struct Dictionary*          SymbolTable;
typedef struct Bucket*              Bucket;
typedef struct BucketArray*         BucketArray;
typedef struct Method*              Method;
typedef struct MethodClosure*       MethodClosure;
typedef struct Block*               Block;
typedef struct BlockClosure*        BlockClosure;
typedef struct NativeName*          NativeName;

typedef struct Context*             Context;
typedef struct MethodContext*       MethodContext;
typedef struct BlockContext*        BlockContext;
typedef struct Thread*              Thread;
typedef struct Raw*                 Raw;
typedef struct RawArray*            RawArray;
typedef struct JumpTarget*          JumpTarget;

typedef Dictionary                  IdentityDictionary;
typedef Dictionary                  MethodDictionary;
typedef Dictionary                  NativesDictionary;

typedef char (*native)( Object arg[]);

struct Format {
    uns_int     base:          7;
    uns_int     variable:      1;
    uns_int     raw:           1;
    uns_int     mutable:       1;
    uns_int     gcmark:        1;
    uns_int     hash: sizeof(uns_int) * 8 - 11;
};

typedef struct Format Format;

struct Header {
    Behavior    class;
    Format      format;
};

typedef struct Header Header;

struct VariableHeader {
    uns_int     size;
    Behavior    class;
    Format      format;
};
typedef struct VariableHeader VariableHeader;

/* ======================================================================= */

#include <assert.h>


#include <kernel/string/utility.h>
#include <kernel/object/object.h>
#include <kernel/object/raw.h>
#include <kernel/object/rawarray.h>
#include <kernel/object/class.h>
#include <kernel/structure/slot/slot.h>
#include <kernel/structure/layout.h>
#include <kernel/string/symbol.h>
#include <kernel/string/string.h>
#include <kernel/number/smallinteger.h>
#include <kernel/collection/dictionary.h>
#include <kernel/collection/identitydictionary.h>
#include <kernel/collection/bucket.h>
#include <kernel/collection/array.h>
#include <kernel/behavior/methoddictionary.h>
#include <kernel/behavior/nativesdictionary.h>
#include <kernel/behavior/method.h>
#include <kernel/behavior/methodclosure.h>
#include <kernel/behavior/block.h>
#include <kernel/behavior/blockclosure.h>

#include <kernel/interpreter/context.h>
#include <kernel/interpreter/thread.h>
#include <kernel/interpreter/jumptarget.h>

#include <interpreter/native.h>
#include <interpreter/opcodes.h>

/* ======================================================================= */

#endif // PINOCCHIO_H
