#ifndef PINOCCHIO_H
#define PINOCCHIO_H

#include <stdlib.h>
#include <setjmp.h>
#include <errno.h>

/* ========================================================================= */

#if TEST
#define DEBUG
#endif

#ifdef NOGC
    #undef PALLOC
    #define PALLOC malloc
#else
    #include <gc/gc.h>
    #ifdef GC_MALLOC
        #define PALLOC GC_MALLOC
    #else 
        #define PALLOC malloc
    #endif // GC_MALLOC
#endif // NOGC

#define M64
#ifdef M32
typedef unsigned int uns_int;
#define F_I ""
#endif 
#ifdef M64
typedef unsigned long int uns_int;
#define F_I "l"
#endif

/* ========================================================================= */

#define HEADER_SIZE (sizeof(Object))
#define POINTER_INC(p) (((Object) (p)) + 1) 
#define POINTER_DEC(p) (((Object) (p)) - 1)

#define HEADER(o) (*(Type_Class*)POINTER_DEC(o))

/* ========================================================================= */

#define NEW(layout)\
    NEW_ARRAYED(layout, Object[0])

#define NEW_t(name) NEW(struct name##_t)

#define NEW_OBJECT(class) \
    class result = NEW_t(class);\
    HEADER(result) = class##_Class;

#define NEW_ARRAY_OBJECT(class, extra) \
    class result = NEW_ARRAYED(struct class##_t, extra);\
    HEADER(result) = class##_Class;

#define NEW_ARRAYED(base, end) \
   (base *)(POINTER_INC(PALLOC(HEADER_SIZE + sizeof(base) + sizeof(end))))

#define EXPORT_REFERENCE(class)\
extern Organization_ClassReference class##_Reference;

#define EXPORT_CLASS(class)\
extern Type_Class class##_Class;\

#define CREATE_INITIALIZERS(class) \
extern void pre_init##_##class(); \
extern void post_init##_##class(); \
EXPORT_CLASS(class);\
EXPORT_REFERENCE(class);\

#define DECLARE_REFERENCE(class)\
Organization_ClassReference class##_Reference;

#define DECLARE_CLASS(class)\
Type_Class class##_Class;\
DECLARE_REFERENCE(class);

#define REFER_TO(class)\
class##_Reference = new_Organization_ClassReference(class##_Class);

#define REFER_DIRECT_TO(class)\
class##_Reference = new_Organization_ClassReference(class);
/* ========================================================================= */

#define ASSERT_ARG_SIZE(raw_size) \
	uns_int size_value = (raw_size); \
    assert((argc <= size_value && argc >= 0), \
		printf("Invalid argument size! Expected %"F_I"u but was %"F_I"u\n", size_value, argc));

// TODO make sure we do a proper class lookup here
#define ASSERT_TYPE(expression, class) \
    assert(HEADER(expression)==(class), \
        printf("Invalid type of arguments given.\n");\
        printf("Expected %ls but got %ls.", \
                HEADER(expression)->name->value, \
                ((Type_Class)(class))->name->value));

#define ASSERT_INSTANCE_OF(expression, class)\
    assert(isInstance((expression), (Object)(class)), \
        printf("Invalid argument type.\n"); \
        printf("Expected %ls but got %ls.", \
                HEADER(expression)->name->value, \
                ((Type_Class)(class))->name->value));
    
// TODO make sure this is not via c stack
#define ASSERT_EQUALS(exp1, exp2) \
    assert0(Eval_Send1((Object)(exp1), SMB__pequal, \
        (Object)(exp2)) == (Object)True);
        
#define ASSERT_NOT_EQUALS(exp1, exp2) \
    assert0(Eval_Send1((Object)(exp1), SMB__pequal, \
        (Object)(exp2)) == (Object)False);

#define COPY_ARGS(source, target)\
{\
    uns_int i;\
    va_list args;\
    va_start(args, source);\
    for (i = 0; i < source; i++) {\
        target[i] = va_arg(args, Object);\
    }\
    va_end(args);\
}


/* ========================================================================= */

typedef void** Object;
typedef void(*cont)();
#include <thread.h>

#define CNT(name) void CNT_##name() {\
    zap_CNT();

/* ========================================================================= */


extern void printf0(const char * string, ...);
extern void _indent_(uns_int i);
extern uns_int nrsends();

extern void print_EXP();

#ifdef DEBUG
    #define LOGFUN LOG(__FUNCTION__); printf("\n");
    #define LOG _indent_(nrsends()); printf
    #define LOG_AST_INFO(print, info) printf(print); print_AST_Info(info); printf("\n");
#else
    #define LOGFUN
    #define LOG printf0
    #define LOG_AST_INFO(print, info)
#endif

#define RESET_LOG() printf("\n");

/* ========================================================================= */

typedef unsigned int    bool;
typedef struct Type_Nil{} Type_Nil;   

/* ========================================================================= */

#define STACK_SIZE 1024*1024
#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 127

extern void CNT_continue_eval();
extern void CNT_abort_eval();
extern void CNT_exit_eval();

/* ========================================================================= */

#define TYPE(name) typedef struct name##_##t * name;

#include <pinocchioType.hi>

typedef void(*native)(Object interpreter, Object self, Type_Class class, uns_int argc);

/* ========================================================================= */

extern Collection_Dictionary _NATIVES_;

/* ========================================================================= */

extern int IN_EVAL;

/* ========================================================================= */

#include <pinocchioTypeInclude.hi>

/* ========================================================================= */

extern void CNT_send_Eval();
extern Object Eval(Object code);
extern Object Eval_Send0(Object self, Type_Symbol symbol);
extern Object Eval_Send1(Object self, Type_Symbol symbol, Object arg);
extern Object Eval_Send2(Object self, Type_Symbol symbol, Object arg1,  Object arg2);

/* ========================================================================= */

#include <pinocchioHelper.hi>
#include <plugin.h>

/* ========================================================================= */

#endif // PINOCCHIO_H
