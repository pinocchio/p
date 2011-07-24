#ifndef PINOCCHIO_H
#define PINOCCHIO_H

#include <stdlib.h>
#include <setjmp.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
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
typedef struct Block*               tBlock;
typedef struct Method*              tMethod;
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
typedef tObject*    tArray;
typedef tSlot*      tLayout;
typedef char*       tSymbol;
typedef char*       tString;
typedef tBucket*    tBucketArray;

extern struct Class Array;

#define ENC_INT(v)  (((v) << 1) + 1)
#define DEC_INT(v)  ((long)(v) >> 1)
#define IS_INT(v)   ((char)(long)(v) & 1)
#define ARE_INTS(x, y) ((char)(x) & (char)(y) & (char)1)

#define PINOCCHIO_FAIL(msg) printf(""#msg"\n"); __asm("int3"); return 0 
#define CLASS_OF(object)    (((long)object) & 1?&SmallInteger:((tClass*)object)[-2])

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

#include <symbol.h>
#include <dictionary.h>
#include <class.h>
#include <kernel/structure/slot/slot.h>
#include <kernel/structure/layout.h>

/* ======================================================================= */
extern struct Class Object;
extern struct Class UndefinedObject;
extern struct Class True;
extern struct Class False;
extern struct Class SmallInteger;
extern struct Class String;
extern struct Class Symbol;
/* ======================================================================= */

extern struct Object true;
extern struct Object false;
extern struct Object nil;
/* ======================================================================= */

#endif // PINOCCHIO_H
