#ifndef AST_H
#define AST_H

#include <gc/gc.h>
#define PALLOC GC_MALLOC

#define HEADER_SIZE (sizeof(Object))
#define POINTER_INC(p) (((Object) p) + 1) 
#define POINTER_DEC(p) (((Object) p) - 1)

#define NEW(layout) NEW_ARRAYED(layout*, layout, 1)

#define NEW_ARRAYED(type, layout, size) \
            (type)(\
               POINTER_INC(PALLOC(HEADER_SIZE + sizeof(layout[size]))))

#define HEADER(o) (*(Object*)POINTER_DEC(o))

#define STACK_SIZE 1024*1024

typedef void**          Object;
typedef unsigned int    bool;

struct Type_SmallInt;
struct Type_Object;

typedef void(*cdp)(Object self, Object msg, int argc, Object argv[]);
typedef void(*cont)();

typedef struct Type_SmallInt {
    int             value;
} Type_SmallInt;

typedef struct Type_Object {
    Object          ivals[0]; 
} Type_Object;

typedef struct AST_Constant {
    Object          constant;
} AST_Constant;

typedef struct Type_Array {
    unsigned int    size;
    Object          values[];
} Type_Array;

typedef struct Runtime_Env {
    Object          parent;
    Object          key;
    Type_Array      *values;
} Runtime_Env;

typedef struct Context_Frame {
    Object          self;
    Object          message;
    unsigned int    return_exp;
    unsigned int    return_cnt;
    unsigned int    argc;
    Object          argv[];
} Context_Frame;

typedef struct AST_Variable {
    unsigned int    index;
    Object          key;
    Object          name;
} AST_Variable;

typedef struct AST_Send {
    Object          receiver;
    Object          message;
    Type_Array      *arguments;
} AST_Send;

typedef struct AST_Assign {
    Object          variable;
    Object          expression;
} AST_Assign;

typedef struct Type_Class {
    cdp             dispatch;
    Object          name;
    Object          super;
    Object          methods;
    Object          cvals[0];
} Type_Class;

typedef struct Type_ObjectClass {
    Type_Class      clspart;
    unsigned int    size;
} Type_ObjectClass;

typedef struct AST_Method {
    unsigned int    paramc;
    bool            has_rest;
    Object          body;
} AST_Method;

#endif // AST_H
