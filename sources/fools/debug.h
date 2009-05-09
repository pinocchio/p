#ifndef DEBUG_H
#define DEBUG_H

#define NDEBUG 1
#define debug if (!NDEBUG) indent(); if (!NDEBUG) printf

#define if_selector(selector, symb, todo)\
    if (selector.pointer == symb.pointer)\
        return todo();

extern void indent();
extern void inline inc();
extern void inline dec();

#endif // DEBUG_H
