#ifndef THREAD_H
#define THREAD_H

#include <pthread.h>
#include <pinocchio.h>

#define tget(key) ((Object *)pthread_getspecific((key)))
#define tset(key, value) pthread_setspecific((key), (value))
#define tkey(key_t, deconstructor) pthread_key_create(&key_t, deconstructor)

extern void _push_EXP(Object e);
extern Object pop_EXP();
extern void pinocchio_main(int argc, const char ** argv);

#define push_EXP(e)             _push_EXP((Object)e);
#define claim_EXP(value)		tset(_EXP_, tget(_EXP_)+(value))
#define peek_EXP(depth)         (*(tget(_EXP_) - (depth)))
#define poke_EXP(depth, value)  (*(tget(_EXP_) - (depth)) = ((Object)(value)))
#define zap_EXP()               tset(_EXP_, tget(_EXP_)-1)
#define zapn_EXP(n)             tset(_EXP_, tget(_EXP_)-(n))
#define EXP_size()              (tget(_EXP_) - &tget(Double_Stack)[-1])
#define empty_EXP()             (EXP_size() == 0) 

#define push_CNT(value)         (*(--_CNT_) = ((cont)(CNT_##value)))
#define pop_CNT()               (*(_CNT_++))
#define peek_CNT()              (*(_CNT_))
#define zap_CNT()               (_CNT_++);
#define poke_CNT(value)         (*(_CNT_) = ((cont)(CNT_##value)))
#define empty_CNT()             ((Object*)_CNT_ == &(tget(Double_Stack)[STACK_SIZE]))

#endif // THREAD_H
