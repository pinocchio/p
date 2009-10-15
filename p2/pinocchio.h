#ifndef PINOCCHIO_H
#define PINOCCHIO_H

#include <stdlib.h>
#include <setjmp.h>

/* ========================================================================= */

#include <gc/gc.h>
#ifdef GC_MALLOC
#define PALLOC GC_MALLOC
#else 
#define PALLOC malloc
#endif
#undef PALLOC
#define PALLOC malloc

/* ========================================================================= */

#define M64
#ifdef M32
typedef unsigned int uns_int;
#endif 
#ifdef M64
typedef unsigned long int uns_int;
#endif

/* ========================================================================= */

#define HEADER_SIZE (sizeof(Object))
#define POINTER_INC(p) (((Object) (p)) + 1) 
#define POINTER_DEC(p) (((Object) (p)) - 1)

#define HEADER(o) (*(Object*)POINTER_DEC(o))

/* ========================================================================= */

#define NEW(layout)\
    NEW_ARRAYED(layout, Object[0])

#define NEW_t(name) NEW(struct name##_t)

#define NEW_OBJECT(class) \
    class result = NEW_t(class);\
    HEADER(result) = (Object)class##_Class;

#define NEW_ARRAYED(base, end) \
   (base *)(POINTER_INC(PALLOC(HEADER_SIZE + sizeof(base) + sizeof(end))))


#define CREATE_INITIALIZERS(class) \
extern void pre_init##_##class(); \
extern void post_init##_##class(); \
extern Type_Class class##_Class;

/* ========================================================================= */

#define ASSERT_ARG_SIZE(raw_size) \
	int size_value = (raw_size); \
    assert((args->size->value <= size_value && args->size->value >= 0), \
		printf("Invalid argument size! Expected %i but was %i\n", size_value, args->size->value));

// TODO make sure we do a proper class lookup here
#define ASSERT_TYPE(expression, class) \
    assert(HEADER(expression)==((Object)(class)), \
        printf("Invalid type of arguments given.\n");\
        printf("Expected %ls but got %ls.", \
                ((Type_Class)HEADER(expression))->name->value, \
                ((Type_Class)(class))->name->value));

#define ASSERT_INSTANCE_OF(expression, class)\
    assert(isInstance((expression), (Object)(class)), \
        printf("Invalid argument type.\n"); \
        printf("Expected %ls but got %ls.", \
                ((Type_Class)HEADER(expression))->name->value, \
                ((Type_Class)(class))->name->value));
    
#define ASSERT_ARG_TYPE(index, class) \
    assert(HEADER(args->values[index])==((Object)(class)), \
        printf("Invalid argument given at %i.\n", index);\
        printf("Expected \"%ls\" but got \"%ls\"", \
               ((Type_Class)HEADER(args->values[index]))->name->value, \
               ((Type_Class)(class))->name->value));

// TODO make sure this is not done via c stack
#define ASSERT_EQUALS(exp1, exp2) \
    assert(Eval_Send((Object)(exp1), SMB_equals_, \
        new_Type_Array_With(1, (Object)(exp2))) == (Object)True);

/* ========================================================================= */

#define push_EXP(value)         (*(_EXP_++) = ((Object)value));
/*                               printf("    Pushing[%li] Object with ", (_EXP_-Double_Stack));\
                               (print_Class((Object)value));
*/
                                
#define pop_EXP()               (*(--_EXP_));
/*                               printf("    Popping[%li] Object with ", (_EXP_-Double_Stack));\
                               print_Class(*_EXP_);
*/
                                
#define peek_EXP(depth)         (*(_EXP_ - depth))
#define poke_EXP(depth, value)  (*(_EXP_ - depth) = ((Object)value));
/*                               printf("    Peeking[%li] Object with ", (_EXP_-Double_Stack-depth));\
                               (print_Class((Object)value));
*/
                                
#define zap_EXP()               (_EXP_--);

#define push_CNT(value)         (*(_CNT_--) = ((cont)CNT_##value));
#define pop_CNT()               (*(++_CNT_))
#define peek_CNT(depth)         (*(_CNT_ + depth))
#define poke_CNT(depth, value)  (*(_CNT_ + depth) = ((cont)value));
#define zap_CNT()               (_CNT_++);

#define CNT(name) void CNT_##name() {\
    LOGFUN;\
    zap_CNT();

/* ========================================================================= */

#if TEST
#define DEBUG
#endif

#ifdef DEBUG
    #define LOGFUN LOG(__FUNCTION__); printf("\n");
    #define LOG printf
    #define LOG_AST_INFO(print, info) printf(print); print_AST_Info(info); printf("\n");
#else
    #define LOGFUN
    #define LOG
    #define LOG_AST_INFO(print, info)
#endif

#define RESET_LOG() printf("\n");

/* ========================================================================= */

typedef void**          Object;
typedef unsigned int    bool;
typedef void(*cont)();
typedef struct Type_Nil{} Type_Nil;   

/* ========================================================================= */

#define STACK_SIZE 1024*1024
#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 127

extern Object * Double_Stack;
extern Object * _EXP_;
extern cont   * _CNT_;

extern void CNT_continue_eval();
extern void CNT_abort_eval();
extern void CNT_exit_eval();

/* ========================================================================= */

#define TYPE(name) typedef struct name##_##t * name;

#include <pinocchioType.hi>

typedef void(*native)(Object self, Object class, Type_Array args);
typedef struct InlineCache {
    Object          type;
    Object          method;
} InlineCache;

/* ========================================================================= */

extern int IN_EVAL;

/* ========================================================================= */

#include <pinocchioTypeInclude.hi>

/* ========================================================================= */

extern void CNT_send_Eval();
extern Object Eval(Object code);


/* ========================================================================= */

#include <pinocchioHelper.hi>

/* ========================================================================= */

#endif // PINOCCHIO_H
