#ifndef GC_H
#define GC_H

/* ======================================================================= */

#ifndef NOGC
    #include <gc/gc.h>
    #ifdef GC_MALLOC
        #define PALLOC GC_MALLOC
    #endif // GC_MALLOC
#endif // NOGC

#ifndef PALLOC
    #define PALLOC malloc
#endif // PALLOC

#define NEW_OBJECT_NAMED_WITH_CLASS(result, type, class)\
    type result   = PALLOC(sizeof(struct type));\
    result->header = (Behavior)class;

#define NEW_OBJECT_NAMED(result, class)\
    NEW_OBJECT_NAMED_WITH_CLASS(result, class, class##_class)

#define NEW_OBJECT(class) NEW_OBJECT_NAMED(result, class)

#define NEW_ARRAYED(class, end)\
    class result   = PALLOC(sizeof(struct class) + sizeof(end));\
    result->header = (Behavior)class##_class;

/* ======================================================================= */

#endif // GC_H
