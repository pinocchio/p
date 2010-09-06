#ifndef PINOCCHIO_H
#define PINOCCHIO_H

#include <stdlib.h>
#include <setjmp.h>
#include <errno.h>
#include <stdio.h>
#include <wchar.h>

#ifdef DTRACE
    #include <probes.h>
    #define DT(name, args...) if (PINOCCHIO_##name##_ENABLED()) {\
        PINOCCHIO_##name(args);\
    }
#else // DTRACE
    #define DT(name, args...)
#endif // DTRACE

/* ========================================================================= */

extern jmp_buf         Eval_Continue;

typedef enum BOOL { FALSE , TRUE } BOOL;
typedef void** Optr;
typedef void(*threaded)();
typedef unsigned long uns_int;

/* ========================================================================= */

#ifdef NOGC
    #define PALLOC malloc
#else
    #include <gc/gc.h>
    #ifdef GC_MALLOC
        #define PALLOC GC_MALLOC
    #else 
        #define PALLOC malloc
    #endif // GC_MALLOC
#endif // NOGC

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
		printf("Invalid argument size! Expected %lu but was %lu\n", size_value, argc));

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


extern void printf0(const char * string, ...);
extern uns_int nrsends();

#ifdef DEBUG
    #define LOGFUN LOG(__FUNCTION__); fwprintf(stderr, L"\n");
    #define LOG(args...) _indent_(stderr, nrsends()); fwprintf(stderr, L""args);
    #define LOG_AST_INFO(print, info) fwprintf(stderr, L""print); print_Info(info); fwprintf(stderr, L"\n");
#else
    #define LOGFUN
    #define LOG printf0
    #define LOG_AST_INFO(print, info)
#endif

/* ========================================================================= */

typedef unsigned int    bool;
typedef struct Nil{} Nil;   

/* ========================================================================= */

#define STACK_SIZE 1024*1024
#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 1023

extern void CNT_continue_eval();
extern void CNT_abort_eval();
extern void CNT_exit_eval();

/* ========================================================================= */

#define TYPE(name) typedef struct name##_##t * name;
#include <pinocchioType.hi>

typedef void(*native)(Optr self, Class class, uns_int argc);

/* ========================================================================= */

#include <thread.h>

/* ========================================================================= */

extern IdentityDictionary _NATIVES_;

/* ========================================================================= */

#include <system/interpretation/Threaded.h>
#include <pinocchioTypeInclude.hi>

/* ========================================================================= */

extern void CNT_exit_error();
extern Optr Eval(Optr code);
extern Optr Eval_Send0(Optr self, Symbol symbol);
extern Optr Eval_Send1(Optr self, Symbol symbol, Optr arg);
extern Optr Eval_Send2(Optr self, Symbol symbol, Optr arg1,  Optr arg2);
extern void pinocchio_post_init();
extern bool isInstance(Optr object, Optr class);
extern void store_method(Class class, Symbol symbol, MethodClosure method);

/* ========================================================================= */

#include <signal.h>
#include <setjmp.h>

#define NYI assert1(NULL, "NYI");

#ifdef NO_EXCEPTION
	#define ERROR_HANDLER(arg) printf(arg); raise(SIGABRT)
#else // NO_ERROR
	#define ERROR_HANDLER handle_assert
#endif // NO_ERROR

#ifdef __linux
    #include <stdio_ext.h>
    #define FLUSH_STDOUT __fpurge(stdout);
#endif
#ifdef __APPLE__
    #define FLUSH_STDOUT fpurge(stdout);
#endif

/* Convenience macros for inserting debug info into strings */
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define AT __FILE__ ":" TOSTRING(__LINE__)

#define assert(test, message) \
if (!(test)) {\
    message; \
    FLUSH_STDOUT; \
    ERROR_HANDLER(AT": "#test);\
}

#define assert0(test)\
if (!(test)) {\
    ERROR_HANDLER(AT": "#test);\
}

#define assert1(test, message)  \
if (!(test)) { \
    ERROR_HANDLER(AT": "message" ("#test")");\
}

/* ========================================================================== */

#include <system/plugin/Plugin.h>
#include <system/runtime/Exception.h>
#include <lib/lib.h>

/* ========================================================================= */

#endif // PINOCCHIO_H
