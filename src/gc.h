#ifndef GC_H
#define GC_H

// get the boehm garbage collector at:
//      http://www.hpl.hp.com/personal/Hans_Boehm/gc/gc_source/
// make sure to disable thread support on OS X
//      ./configure --disable-threads
#include <gc/gc.h>
#define PALLOC GC_MALLOC

#endif // GC_H
