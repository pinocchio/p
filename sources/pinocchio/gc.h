#ifndef GC_H
#define GC_H

#ifdef __APPLE__
    #define FOOLS_ALLOC malloc
#else
    #include <gc/gc.h>
    #define FOOLS_ALLOC GC_MALLOC
#endif

#endif // GC_H
