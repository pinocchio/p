#ifndef PINOCCHIO_H
#define PINOCCHIO_H

#include <stdlib.h>
#include <setjmp.h>

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
#define POINTER_INC(p) (((Object) (p)) + 1) 
#define POINTER_DEC(p) (((Object) (p)) - 1)

#define NEW(layout)\
    NEW_ARRAYED(layout, Object[0])

#define NEW_t(name) NEW(struct name##_##t)

#define NEW_ARRAYED(base, end) \
   (base *)(POINTER_INC(PALLOC(HEADER_SIZE + sizeof(base) + sizeof(end))))

#define HEADER(o) (*(Object*)POINTER_DEC(o))

/* ======================================================================== */

#define CREATE_INITIALIZERS(class) \
extern void pre_initialize##_##class(); \
extern void post_initialize##_##class(); \
extern Type_Class class##_Class;

#define ASSERT_ARG_SIZE(raw_size) int size_value = (raw_size);\
    if(args->size->value < size_value || args->size->value > size_value) {\
        printf("Invalid argument size! Expected %i but was %i", size_value, args->size->value);\
        assert(args->size->value > size_value && args->size->value < size_value);\
    }

// TODO make sure we do a proper class lookup here
#define ASSERT_TYPE(expression, class) assert(HEADER(expression)==((Object)(class)));
#define ASSERT_ARG_TYPE(index, class) assert(HEADER(args->values[index])==((Object)(class)));

#define ASSERT_EQUALS(exp1, exp2) \
assert(EvalSend((Object)(exp1),SMB_equals_, new_Array_With(1, (Object)(exp2))) == (Object)True);

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

typedef void**          Object;
typedef unsigned int    bool;
typedef void(*cont)();
typedef struct Type_Nil{} Type_Nil;   

/* ======================================================================== */

#define STACK_SIZE 1024*1024
#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 127

extern Object Double_Stack[STACK_SIZE];
extern Object * _EXP_;
extern cont   * _CNT_;

extern jmp_buf Eval_Exit;
extern jmp_buf Eval_Continue;

/* ======================================================================== */

#define TYPE(name) typedef struct name##_##t * name;

#include <pinocchioType.hi>

typedef Type_Symbol Type_String;
typedef void(*native)(Object self, Object class, Type_Array args);
typedef struct InlineCache {
    Object          type;
    Object          method;
} InlineCache;

/* ======================================================================== */

extern Type_Class Object_Class;

/* ======================================================================== */

#include <system/type/Nil.h>

#include <system/type/Character.h>
#include <system/type/String.h>
#include <system/type/Array.h>
#include <system/type/Dictionary.h>
#include <system/type/Class.h>
#include <system/type/Object.h>
#include <system/type/SmallInt.h>
#include <system/type/Boolean.h>
#include <system/type/Symbol.h>

#include <system/io/File.h>

#include <system/ast/Self.h>
#include <system/ast/Super.h>
#include <system/ast/Constant.h>
#include <system/ast/Variable.h>
#include <system/ast/Assign.h>
#include <system/ast/Send.h>
#include <system/ast/Block.h>
#include <system/ast/Method.h>
#include <system/ast/NativeMethod.h>
#include <system/ast/Continue.h>
#include <system/ast/Callec.h>

#include <system/runtime/Env.h>

/* ======================================================================== */

extern void CNT_send_Eval();

extern void store_native_method(Type_Class class, Object symbol, native code);
extern void store_method(Type_Class class, Object symbol, Object method);

/* ======================================================================== */

#endif // PINOCCHIO_H
