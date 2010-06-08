#ifndef PINOCCHIO_H
#define PINOCCHIO_H

#include <stdlib.h>
#include <setjmp.h>
#include <errno.h>

/* ========================================================================= */

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

/*
#define M64
#ifdef M32
typedef unsigned int uns_int;
#define F_I ""
#endif 
#ifdef M64
*/
typedef unsigned long uns_int;
#define F_I "l"
/*
#endif
*/

/* ========================================================================= */

#define HEADER_SIZE (sizeof(Optr))
#define POINTER_INC(p) (((Optr) (p)) + 1) 
#define POINTER_DEC(p) (((Optr) (p)) - 1)

#define HEADER(o) (*(Class*)POINTER_DEC(o))

/* ========================================================================= */

#define NEW(layout)\
    NEW_ARRAYED(layout, Optr[0])

#define NEW_t(name) NEW(struct name##_t)

#define NEW_OBJECT(class) \
    class result = NEW_t(class);\
    HEADER(result) = class##_Class;

#define NEW_ARRAY_OBJECT(class, extra) \
    class result = NEW_ARRAYED(struct class##_t, extra);\
    HEADER(result) = class##_Class;

#define NEW_ARRAYED(base, end) \
   (base *)(POINTER_INC(PALLOC(HEADER_SIZE + sizeof(base) + sizeof(end))))

#define EXPORT_CLASS(class)\
extern Class class##_Class;\

#define CREATE_INITIALIZERS(class) \
extern void post_init##_##class(); \
EXPORT_CLASS(class);

#define DECLARE_CLASS(class)\
Class class##_Class;

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
                ((Class)(class))->name->value));

#define ASSERT_INSTANCE_OF(expression, class)\
    assert(isInstance((expression), (Optr)(class)), \
        printf("Invalid argument type.\n"); \
        printf("Expected %ls but got %ls.", \
                HEADER(expression)->name->value, \
                ((Class)(class))->name->value));
    
// TODO make sure this is not via c stack
#define ASSERT_EQUALS(exp1, exp2) \
    assert0(Eval_Send1((Optr)(exp1), SMB__pequal, \
        (Optr)(exp2)) == (Optr)true);
        
#define ASSERT_NOT_EQUALS(exp1, exp2) \
    assert0(Eval_Send1((Optr)(exp1), SMB__pequal, \
        (Optr)(exp2)) == (Optr)false);

#define COPY_ARGS(source, target)\
{\
    uns_int i;\
    va_list args;\
    va_start(args, source);\
    for (i = 0; i < source; i++) {\
        target[i] = va_arg(args, Optr);\
    }\
    va_end(args);\
}


/* ========================================================================= */

typedef enum BOOL { FALSE , TRUE } BOOL;

typedef void** Optr;
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
    #define LOG_AST_INFO(print, info) printf(print); print_Info(info); printf("\n");
#else
    #define LOGFUN
    #define LOG printf0
    #define LOG_AST_INFO(print, info)
#endif

#define RESET_LOG() printf("\n");

/* ========================================================================= */

typedef unsigned int    bool;
typedef struct Nil{} Nil;   

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

typedef void(*native)(Optr self, Class class, uns_int argc);

/* ========================================================================= */

extern Dictionary _NATIVES_;

/* ========================================================================= */

extern int IN_EVAL;

/* ========================================================================= */

#include <system/interpretation/Interpreter.h>
#include <pinocchioTypeInclude.hi>

/* ========================================================================= */

extern void CNT_exit_error();
extern Optr Eval(Optr code);
extern Optr Eval_Send0(Optr self, Symbol symbol);
extern Optr Eval_Send1(Optr self, Symbol symbol, Optr arg);
extern Optr Eval_Send2(Optr self, Symbol symbol, Optr arg1,  Optr arg2);
extern void pinocchio_post_init();
extern bool isInstance(Optr object, Optr class);
extern void store_method(Class class, Symbol symbol, Runtime_MethodClosure method);

/* ========================================================================= */

#include <signal.h>
#include <setjmp.h>

#define SIGFAIL SIGABRT
extern jmp_buf Assert_Fail;

#define NYI assert1(NULL, "NYI");

#define ERROR_HANDLER handle_assert

#ifdef __linux
    #include <stdio_ext.h>
    #define FLUSH_STDOUT __fpurge(stdout);
#endif
#ifdef __APPLE__
    #define FLUSH_STDOUT fpurge(stdout);
#endif


#define assert(test, message) \
if (!(test)) {\
    printf ("%s:%u: failed assertion `%s'\n", __FILE__, __LINE__, #test); \
    message; \
    FLUSH_STDOUT; \
    ERROR_HANDLER("Assertion failed: "#test);\
}

#define assert0(test)\
if (!(test)) {\
    printf ("%s:%u: failed assertion `%s'\n", __FILE__, __LINE__, #test); \
    FLUSH_STDOUT; \
    ERROR_HANDLER("Assertion failed: "#test);\
}

#define assert1(test, message)  \
if (!(test)) { \
    printf ("%s:%u: failed assertion `%s'\n", __FILE__, __LINE__, #test); \
    printf(message"\n"); \
    FLUSH_STDOUT; \
    ERROR_HANDLER(message);\
}

/* ========================================================================== */

#include <system/plugin/Plugin.h>
#include <system/runtime/Exception.h>
#include <lib/lib.h>

/* ========================================================================= */

#endif // PINOCCHIO_H
