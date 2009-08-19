#ifndef AST_H
#define AST_H

#include <gc/gc.h>
#define PALLOC GC_MALLOC

#define HEADER_SIZE (sizeof(Object))
#define POINTER_INC(p) (((Object) p) + 1) 
#define POINTER_DEC(p) (((Object) p) - 1)

#define NEW(layout)\
    NEW_ARRAYED(layout, Object[0])

#define NEW_ARRAYED(base, end) \
   (base *)(POINTER_INC(PALLOC(HEADER_SIZE +\
            sizeof(base) + sizeof(end))))

#define HEADER(o) (*(Object*)POINTER_DEC(o))

#define STACK_SIZE 1024*1024

typedef void**          Object;
typedef unsigned int    bool;

struct Type_SmallInt;
struct Type_Object;

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

typedef struct AST_Variable {
    unsigned int    index;
    Object          key;
    Object          name;
} AST_Variable;

typedef struct AST_Send {
    Object          receiver;
    Object          message;
    Object          type;
    Object          method;
    Type_Array      *arguments;
} AST_Send;

typedef struct AST_Assign {
    Object          variable;
    Object          expression;
} AST_Assign;

typedef struct Type_Dictionary {
    Type_Array     *layout;
} Type_Dictionary;

typedef struct Type_Class {
    Object              name;
    Object              super;
    Type_Dictionary    *methods;
    Object              cvars[];
} Type_Class;

typedef struct Type_ObjectClass {
    Type_Class      clspart;
    unsigned int    size;
} Type_ObjectClass;

typedef void(*native)(Object self, Object class, Type_Array * args);

typedef struct AST_Native_Method {
    native          code;
} AST_Native_Method;

typedef struct AST_Method {
    unsigned int    paramc;
    Object          environment;
    Type_Array     *body;
} AST_Method;

typedef struct Runtime_Env {
    Object          self;
    Object          class;
    AST_Method      *method;
    unsigned int    pc;
    Object          parent;
    Object          key;
    Type_Array     *values;
} Runtime_Env;

extern void AST_Constant_eval();
extern void AST_Variable_eval();
extern void AST_Assign_eval();
extern void AST_Send_eval();

#endif // AST_H
