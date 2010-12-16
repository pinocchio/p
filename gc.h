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

#define NEW_OBJECT(class)\
    class result   = PALLOC(sizeof(struct class));\
    result->header = (Behavior)class##_class;

#define NEW_ARRAYED(class, end)\
    class result   = PALLOC(sizeof(struct class) + sizeof(end));\
    result->header = (Behavior)class##_class;

/* ======================================================================= */

#endif // GC_H
