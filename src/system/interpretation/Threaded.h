#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>


extern void CNT_eval_threaded();

typedef void(*threaded)(int pc);

#endif //INTERPRETATION_THREADED
