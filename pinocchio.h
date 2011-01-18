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

typedef Dictionary                  MethodDictionary;
typedef Behavior                    Header;

/* ======================================================================= */

#include <assert.h>
#include <kernel/string/utility.h>
#include <kernel/object/object.h>
#include <kernel/object/class.h>
#include <kernel/object/structure/slot/slot.h>
#include <kernel/object/structure/layout.h>
#include <kernel/string/symbol.h>
#include <kernel/string/string.h>
#include <kernel/number/smallinteger.h>
#include <kernel/collection/dictionary.h>
#include <kernel/collection/bucket.h>
#include <kernel/collection/array.h>
#include <kernel/object/behavior/methoddictionary.h>
#include <kernel/object/behavior/method.h>

/* ======================================================================= */

#endif // PINOCCHIO_H
