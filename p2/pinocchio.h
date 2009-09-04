#ifndef AST_H
#define AST_H

/* ======================================================================== */

#include <gc/gc.h>
#ifdef GC_MALLOC
#define PALLOC GC_MALLOC
#else 
#define PALLOC malloc
#endif
#undef PALLOC
#define PALLOC malloc

/* ======================================================================== */

#define HEADER_SIZE (sizeof(Object))
#define POINTER_INC(p) (((Object) p) + 1) 
#define POINTER_DEC(p) (((Object) p) - 1)

#define NEW(layout)\
    NEW_ARRAYED(layout, Object[0])

#define NEW_ARRAYED(base, end) \
   (base *)(POINTER_INC(PALLOC(HEADER_SIZE +\
            sizeof(base) + sizeof(end))))

#define HEADER(o) (*(Object*)POINTER_DEC(o))

/* ======================================================================== */

#define CREATE_INITIALIZERS(class) void pre_initialize##_##class();\
void pre_initialize##_##class();

#define ASSERT_ARG_SIZE(raw_size) int size_value = (raw_size);\
    if(args->size < size_value || args->size > size_value) {\
        printf("Invalid argument size! Expected %i but was %i", size_value, args->size);\
        assert(args->size < size_value || args->size > size_value);\
    }

/* ======================================================================== */

#define push_EXP(value)         (*(_EXP_++) = ((Object)value));
#define pop_EXP()               (*(--_EXP_))
#define peek_EXP(depth)         (*(_EXP_ - depth))
#define poke_EXP(depth, value)  (*(_EXP_ - depth) = ((Object)value));
#define zap_EXP()               (_EXP_--);

#define push_CNT(value)         (*(_CNT_--) = ((cont)value));
#define pop_CNT()               (*(++_CNT_))
#define peek_CNT(depth)         (*(_CNT_ + depth))
#define poke_CNT(depth, value)  (*(_CNT_ + depth) = ((cont)value));
#define zap_CNT()               (_CNT_++);

/* ======================================================================== */

#define DEBUG
#ifdef DEBUG
#define LOGFUN LOG(__FUNCTION__); printf("\n");
#define LOG printf
#else
#define LOG
#define LOGFUN printf
#endif


/* ======================================================================== */

#define STACK_SIZE 1024*1024
#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 127

/* ======================================================================== */

typedef void**          Object;
typedef unsigned int    bool;

/* ======================================================================== */

struct Type_SmallInt;
struct Type_Object;

typedef void(*cont)();

typedef struct Type_Null {} Type_Null;

typedef struct Type_Character {
    wchar_t value;
} Type_Character;

typedef struct Type_SmallInt {
    int             value;
} Type_SmallInt;

typedef struct Type_Object {
    Object          ivals[0]; 
} Type_Object;

typedef struct Type_Symbol { 
    Type_SmallInt * hash;
    Type_SmallInt * size;
    wchar_t * value;
} Type_Symbol;

typedef Type_Symbol Type_String;

typedef struct Type_Boolean {
    char            value;
} Type_Boolean;

typedef struct Type_Array {
    unsigned int    size;
    Object          values[];
} Type_Array;

typedef struct Type_Dictionary {
    Type_Array     *layout;
} Type_Dictionary;

typedef struct Type_Class {
    Type_String    *name;
    Object          super;
    Type_Dictionary*methods;
    Object          cvars[];
} Type_Class;

typedef struct Type_File {
} Type_File;


typedef struct Type_ObjectClass {
    Type_Class      clspart;
    unsigned int    size;
} Type_ObjectClass;

typedef struct AST_Constant {
    Object          constant;
} AST_Constant;

typedef struct AST_Self {} AST_Self;

typedef struct InlineCache {
    Object          type;
    Object          method;
} InlineCache;

typedef struct AST_Super {
    InlineCache     cache;
    Object          message; 
    Type_Array     *arguments;
} AST_Super;

typedef struct AST_Continue {
    Object         *EXP;
    cont           *CNT;
    Object          target;
} AST_Continue;

typedef struct AST_Callec {
    AST_Continue   *cont;
    Object          target;
} AST_Callec;

typedef struct AST_Variable {
    unsigned int    index;
    Object          key;
    Object          name;
} AST_Variable;

    
typedef struct AST_Send {
    InlineCache     cache;
    Object          receiver;
    Object          message;
    Type_Array     *arguments;
} AST_Send;

typedef struct AST_Assign {
    Object          variable;
    Object          expression;
} AST_Assign;

typedef void(*native)(Object self, Object class, Type_Array * args);
#define NATIVE(name) void name(Object self, Object class, Type_Array * args)

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

/* ======================================================================== */

extern Object Null;
extern Type_Class * Object_Class;

/* ======================================================================== */

#include <system/type/Character.h>
#include <system/type/String.h>
#include <system/type/Boolean.h>
#include <system/type/Array.h>
#include <system/type/Dictionary.h>
#include <system/type/Class.h>
#include <system/type/Object.h>
#include <system/type/SmallInt.h>

#include <system/io/File.h>

#include <system/ast/Self.h>
#include <system/ast/Super.h>
#include <system/ast/Constant.h>
#include <system/ast/Variable.h>
#include <system/ast/Assign.h>
#include <system/ast/Send.h>
#include <system/ast/Method.h>
#include <system/ast/NativeMethod.h>
#include <system/ast/Continue.h>
#include <system/ast/Callec.h>

#include <system/runtime/Env.h>


AST_Constant * new_Constant(Object constant);

extern void AST_Constant_eval();
extern void AST_Variable_eval();
extern void AST_Assign_eval();
extern void AST_Send_eval();

Runtime_Env * new_Env(Object parent, Object key, Type_Array * values);
Runtime_Env * new_Env_Sized(Object parent, Object key, int size);

void Runtime_Env_assign(Runtime_Env * self, unsigned int index,
                        Object key, Object value);
                        
void Runtime_Env_lookup(Runtime_Env * self, unsigned int index, Object key);

void AST_Native_Method_invoke(AST_Native_Method * method, Object self,
                              Object class, Type_Array * args);

Object Dictionary_lookup(Type_Dictionary * self, Object key);

void type_class_super();
void AST_Assign_assign();
void push_restore_env();
void send_Eval();
void store_argument();
Type_SmallInt * new_SmallInt(int value);

void Class_dispatch(InlineCache * sender, Object self, Object class,
                         Object msg, Type_Array * args);
void Method_invoke(Object method, Object self, Object class, Type_Array * args);
Type_Class* new_Named_Class(Object superclass, const wchar_t* name);
Type_Class* new_Class(Object superclass);
Type_String * new_String(const wchar_t * str);

void store_native_method(Type_Class * class, Object symbol, native code);

AST_Native_Method * new_Native_Method(native code);

#endif // AST_H
