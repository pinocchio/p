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
typedef struct Metaclass*           Metaclass;
typedef struct MethodDictionary*    MethodDictionary;
typedef struct Dictionary*          Dictionary;
typedef struct SmallInteger*        SmallInteger;
typedef struct Array*               Array;
typedef struct Symbol*              Symbol;
typedef struct Bucket*              Bucket;
typedef struct BucketArray*         BucketArray;

typedef Behavior                    Header;

/* ======================================================================= */

#include <assert.h>
#include <kernel/string/utility.h>
#include <kernel/object/object.h>
#include <kernel/string/symbol.h>
#include <kernel/number/smallinteger.h>
#include <kernel/collection/dictionary.h>
#include <kernel/collection/bucket.h>

struct Behavior {
    Header   header;
    Behavior super;
    Object   methods;
    Object   classfields[];
};

struct Class {
    Header              header;
    Class               super;
    MethodDictionary    methods;
    Symbol              name;
    Object              package;
    Object              classfields[];
};

struct Metaclass {
    Header              header;
    Behavior            super;
    MethodDictionary    methods;
    Class               instance;
    Object              classfields[];
};

struct MethodDictionary {
    Header              header;
    SmallInteger        size;
    SmallInteger        maxLinear;
    SmallInteger        ratio;
    Array               data;
    Object              linear;
};

struct Array {
    Header              header;
    uns_int             size;
    Object              value[];
};

/* ======================================================================= */

#endif // PINOCCHIO_H
