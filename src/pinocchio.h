#ifndef PINOCCHIO_H
#define PINOCCHIO_H

#include <stdlib.h>
#include <setjmp.h>
#include <errno.h>
#include <stdio.h>
#include <wchar.h>
#include <alloca.h>
#include <stdint.h> 

#include <gc.h>

/* ======================================================================= */

typedef unsigned long               uns_int;
typedef long                        tSmallInteger;

typedef struct Behavior*            tBehavior;
typedef struct Class*               tClass;
typedef struct Slot*                tSlot;
typedef struct Metaclass*           tMetaclass;
typedef struct Dictionary*          tDictionary;
typedef struct Dictionary*          tSymbolTable;
typedef struct Bucket*              tBucket;
typedef struct MethodClosure*       tMethodClosure;
typedef struct Block*               tBlock;
typedef struct BlockClosure*        tBlockClosure;
typedef struct NativeName*          tNativeName;

typedef struct Context*             tContext;
typedef struct MethodContext*       tMethodContext;
typedef struct BlockContext*        tBlockContext;
typedef struct Thread*              tThread;
typedef struct JumpTarget*          tJumpTarget;

typedef tDictionary                 tIdentityDictionary;
typedef tDictionary                 tMethodDictionary;
typedef tDictionary                 tNativesDictionary;

typedef void**      tObject;
typedef tObject**   tArray;
typedef tSlot**     tLayout;
typedef char**      tSymbol;
typedef char**      tString;
typedef tBucket**   tBucketArray;

#define ENC_INT(v)  (((v) << 1) + 1)
#define DEC_INT(v)  ((long)(v) >> 1)
#define IS_INT(v)   ((char)(long)(v) & 1)
#define ARE_INTS(x, y) ((char)(x) & (char)(y) & (char)1)

#define PINOCCHIO_FAIL(msg) printf(""#msg"\n"); exit(-1)
#define CLASS_OF(object)    (((tClass*)object)[-2])

#define HEADER(object)      (((tHeader*)object)[-1])
#define HASH(object)        HEADER(object).hash
#define BASE(object)        HEADER(object).base
#define MARK(object)        HEADER(object).gcmark
#define SIZE(object)        ((long)((tObject*)object)[-3])

struct Header {
    uns_int     base:          8;
    uns_int     variable:      1;
    uns_int     raw:           1;
    uns_int     mutable:       1;
    uns_int     gcmark:        1;
    uns_int     hash: sizeof(uns_int) * 8 - 12;
};

typedef struct Header tHeader;

/* ======================================================================= */

#include <assert.h>


#include <kernel/string/utility.h>
#include <kernel/object/object.h>
#include <kernel/object/class.h>
#include <kernel/structure/slot/slot.h>
#include <kernel/structure/layout.h>
#include <kernel/string/symbol.h>
#include <kernel/string/string.h>
#include <kernel/collection/dictionary.h>
#include <kernel/collection/identitydictionary.h>
#include <kernel/collection/bucket.h>
#include <kernel/collection/array.h>

/* ======================================================================= */

#endif // PINOCCHIO_H
