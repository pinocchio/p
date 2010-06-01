#ifndef INTERPRETATION_THREADED_H
#define INTERPRETATION_THREADED_H
#include <pinocchio.h>

/* ========================================================================= */

extern void CNT_eval_threaded();

typedef (int)(*threaded)(int pc);

extern void test_threaded();


#endif //INTERPRETATION_THREADED_H
