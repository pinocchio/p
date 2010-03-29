#ifndef THREAD_H
#define THREAD_H

#include <pthread.h>
#include <pinocchio.h>

extern pthread_key_t Double_Stack;
extern pthread_key_t _EXP_;
extern pthread_key_t _CNT_;

extern pthread_key_t _ISS_;
extern pthread_key_t Eval_Exit;
extern pthread_key_t Eval_Continue;
extern pthread_key_t Eval_Abort;

#define tget_buf(key) *(jmp_buf*)tget(key)
#define tget(key) ((Object *)pthread_getspecific((key)))
#define tset(key, value) pthread_setspecific((key), (value))
#define tkey(key_t, deconstructor) pthread_key_create(&key_t, deconstructor)

extern void _push_EXP(Object e);
extern Object pop_EXP();
#define push_EXP(e)             _push_EXP((Object)e);
#define claim_EXP(value)		tset(_EXP_, tget(_EXP_)+(value))
#define peek_EXP(depth)         (*(tget(_EXP_) - (depth)))
#define poke_EXP(depth, value)  (*(tget(_EXP_) - (depth)) = ((Object)(value)))
#define zap_EXP()               tset(_EXP_, tget(_EXP_)-1)
#define zapn_EXP(n)             tset(_EXP_, tget(_EXP_)-(n))
#define EXP_size()              (tget(_EXP_) - &tget(Double_Stack)[-1])
#define empty_EXP()             (EXP_size() == 0) 

extern void _push_CNT(cont e);
#define push_CNT(value)         _push_CNT((cont)(CNT_##value))
#define peek_CNT()              (*(cont*)tget(_CNT_))
#define zap_CNT()               tset(_CNT_, ((cont*)tget(_CNT_))+1)
#define poke_CNT(value)         (*(cont*)tget(_CNT_) = ((cont)(CNT_##value)))
#define empty_CNT()             ((Object*)tget(_CNT_) == &(tget(Double_Stack)[STACK_SIZE]))

extern void pinocchio_main(int argc, const char ** argv);

#endif // THREAD_H
