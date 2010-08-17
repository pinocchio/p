#ifndef THREAD_H
#define THREAD_H

#include <pinocchio.h>

#ifdef THREAD
    #include <pthread.h>
    typedef pthread_key_t THREAD_OBJECT;
#else // THREAD
    typedef Thread THREAD_OBJECT;
    extern Thread _scheduler_thread_;
    extern Array _threads_;
#endif // THREAD

extern THREAD_OBJECT _thread_;

#define tget_buf(key) *(jmp_buf*)tget(key)

#ifdef THREAD
    #define tget(key) (((Thread)pthread_getspecific(_thread_))->key)
    #define tset(key, value) (((Thread)pthread_getspecific(_thread_))->key = (value))
    #define tkey(key_t, deconstructor) pthread_key_create(&key_t, deconstructor)
#else // THREAD    
    #define tget(key) (_thread_->key)
    #define tset(key, value) ((_thread_->key) = (value))
    #define tkey(key_t, deconstructor) 
#endif // THREAD


#define current_env() ((BlockContext)tget(_ENV_))

extern void _push_EXP(Optr e);
extern Optr pop_EXP();

#define PUSH_EXP(e)             _push_EXP((Optr)e);
#define CLAIM_EXP(value)		tset(_EXP_, tget(_EXP_)+(value))
#define PEEK_EXP(depth)         (*(tget(_EXP_) - (depth)))
#define POKE_EXP(depth, value)  (*(tget(_EXP_) - (depth)) = ((Optr)(value)))
#define ZAPN_EXP(n)             tset(_EXP_, tget(_EXP_)-(n))
#define ZAP_EXP()               ZAPN_EXP(1)
#define EXP_SIZE()              (tget(_EXP_) - &tget(Double_Stack)[-1])
#define EMPTY_EXP()             (EXP_SIZE() == 0) 

extern void _push_CNT(threaded* e);
#define PUSH_CNT(value)         _push_CNT((threaded*)(value))
#define PEEK_CNT()              (*tget(_CNT_))
#define ZAP_CNT()               tset(_CNT_, tget(_CNT_)+1)
#define POKE_CNT(value)         (*tget(_CNT_) = ((threaded*)(value)))
#define EMPTY_CNT()             ((Optr*)tget(_CNT_) == &(tget(Double_Stack)[STACK_SIZE]))
#define CNT_SIZE()              ((&tget(Double_Stack)[STACK_SIZE]) - (Optr *)tget(_CNT_))

extern void pinocchio_main(int argc, const char ** argv);
extern void init_Error_Handler();

extern Array get_args(int argc, const char ** argv);

#endif // THREAD_H
