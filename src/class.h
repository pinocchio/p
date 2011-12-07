#ifndef CLASS_H
#define CLASS_H

#include <pinocchio.h>

/*  =======================================================================  */

struct Behavior {
    tSmallInteger        instanceHeader;
    tObject              behavior;
    tLayout              layout;
};

struct Class {
    tSmallInteger        instanceHeader;
    tObject              behavior;
    tLayout              layout;
    tSymbol              name;
    tObject              package;
    tObject              classfield[];
};

struct Metaclass {
    tSmallInteger        instanceHeader;
    tObject              behavior;
    tLayout              layout;
    tClass               instance;
    tObject              classfield[];
};

extern struct Class Behavior;
extern struct Class Class;
extern struct Class Metaclass;

struct STBehavior {
    tMethodDictionary    methods;
    tClass               class;
    tSTBehavior            super;
};



/* ======================================================================= */

struct Dictionary {
    tSmallInteger        size;
    tSmallInteger        maxLinear;
    tSmallInteger        ratio;
    tBucketArray         buckets;
    tObject              linear;
};

struct Bucket {
    tSmallInteger        tally;
    tObject              value[];
};

extern struct Class Bucket;
extern struct Class BucketArray;
extern struct Class Dictionary;
extern struct Class IdentityDictionary;
extern struct Class MethodDictionary;

/* ======================================================================= */

struct Method {
    tSmallInteger       code;
    tArray              arguments;
    tSymbol             selector;
    tBehavior           host;
    tObject             package;
    tObject             literal[];
};

/* ======================================================================= */

extern tObject send(tObject receiver, const char* msg);
extern tMethod lookup(tObject receiver, tSymbol message);
extern tObject basicNew(tBehavior b);
extern tObject basicNew_(tBehavior b, long tagged_size);

/*  =======================================================================  */

#endif // CLASS_H
