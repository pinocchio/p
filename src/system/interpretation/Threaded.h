#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ======================================================================== */

#ifdef DEBUG
    #define THREADED(name) threaded* t_##name(threaded* pc) {\
        fwprintf(stderr, L"         : "#name"\n");
#else //DEBUG
    #define THREADED(name) threaded* t_##name(threaded* pc) {
#endif // DEBUG

#define BREAK (threaded*)-1

/* ========================================================================= */

extern void CNT_eval_threaded();
extern void CNT_restore_env();

typedef void*(*threaded)(void* pc);
#define T_CODE(name) extern threaded* t_##name(threaded* fp);

extern threaded* push_code(Array code);
extern void post_init_Threaded();
/* ======================================================================== */

T_CODE(jump_back)
T_CODE(jump_back2)
T_CODE(jump_back3)
T_CODE(jump_back4)
T_CODE(jump_back5)

/* ======================================================================== */

T_CODE(push_nil)
T_CODE(push_0)
T_CODE(push_1)
T_CODE(push_2)
T_CODE(push_true)
T_CODE(push_false)
T_CODE(push_self)

T_CODE(push1)
T_CODE(push2)
T_CODE(push3)
T_CODE(push4)
T_CODE(push5)
T_CODE(pushn)

T_CODE(push_variable)
T_CODE(push_closure)
T_CODE(push_class_reference)
T_CODE(push_slot)

T_CODE(zap)
T_CODE(zap1)
T_CODE(zap2)
T_CODE(zap3)
T_CODE(zap4)
T_CODE(zap5)

T_CODE(return)
T_CODE(return_true)
T_CODE(return_false)
T_CODE(return_nil)
T_CODE(return_self)
T_CODE(return_0)
T_CODE(return_1)
T_CODE(return_next)

T_CODE(send0)
T_CODE(send1)
T_CODE(send2)
T_CODE(send3)
T_CODE(send4)
T_CODE(send5)
T_CODE(sendn)

T_CODE(send_value)
T_CODE(send_hash)
T_CODE(send_to_do_)
T_CODE(continue_to_do_)
T_CODE(send_ifFalse_)
T_CODE(send_ifTrue_)
T_CODE(send_ifTrue_ifFalse_)

T_CODE(super0)
T_CODE(super1)
T_CODE(super2)
T_CODE(super3)
T_CODE(super4)
T_CODE(super5)
T_CODE(supern)

T_CODE(assign)
T_CODE(dup)
T_CODE(send_value)
T_CODE(restart)

T_CODE(peek1)
T_CODE(peek2)
T_CODE(peek3)
T_CODE(peek4)
T_CODE(peek5)

T_CODE(check1)
T_CODE(check2)
T_CODE(check3)
T_CODE(check4)
T_CODE(check5)

#endif //INTERPRETATION_THREADED
