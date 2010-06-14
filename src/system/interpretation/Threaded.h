#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ======================================================================== */

#define THREADED(name) threaded* t_##name(threaded* pc) {
//    fwprintf(stderr, L"         : "#name"\n");

#define BREAK (threaded*)-1

#define NNATIVE(name, size, ...) \
Array T_##name;\
Array TG_##name()\
{\
    return new_Array_with(size, __VA_ARGS__);\
}

#define INIT_NATIVE(name) T_##name = TG_##name()

/* ========================================================================= */

extern void CNT_eval_threaded();
extern void CNT_restore_env();

typedef void*(*threaded)(void* pc);
#define T_CODE(name) extern threaded* t_##name(threaded* fp);

extern threaded* push_code(Array code);
extern void post_init_Threaded();
/* ======================================================================== */

extern threaded* t_jump_back(threaded* fp);
extern threaded* t_jump_back2(threaded* fp);
extern threaded* t_jump_back3(threaded* fp);
extern threaded* t_jump_back4(threaded* fp);
extern threaded* t_jump_back5(threaded* fp);

/* ======================================================================== */

extern threaded* t_push_nil(threaded* fp);
extern threaded* t_push_0(threaded* fp);
extern threaded* t_push_1(threaded* fp);
extern threaded* t_push_2(threaded* fp);
extern threaded* t_push_true(threaded* fp);
extern threaded* t_push_false(threaded* fp);
extern threaded* t_push_self(threaded* fp);

extern threaded* t_push1(threaded* fp);
extern threaded* t_push2(threaded* fp);
extern threaded* t_push3(threaded* fp);
extern threaded* t_push4(threaded* fp);
extern threaded* t_push5(threaded* fp);
extern threaded* t_pushn(threaded* fp);

extern threaded* t_push_variable(threaded* fp);
extern threaded* t_push_closure(threaded* fp);
extern threaded* t_push_class_reference(threaded* fp);
extern threaded* t_push_slot(threaded* fp);

extern threaded* t_zap(threaded* fp);
extern threaded* t_zap1(threaded* fp);
extern threaded* t_zap2(threaded* fp);
extern threaded* t_zap3(threaded* fp);
extern threaded* t_zap4(threaded* fp);
extern threaded* t_zap5(threaded* fp);

extern threaded* t_return(threaded* fp);
extern threaded* t_return_true(threaded* fp);
extern threaded* t_return_false(threaded* fp);
extern threaded* t_return_nil(threaded* fp);
extern threaded* t_return_self(threaded* fp);
extern threaded* t_return_0(threaded* fp);
extern threaded* t_return_1(threaded* fp);
extern threaded* t_return_next(threaded* fp);

extern threaded* t_send0(threaded* fp);
extern threaded* t_send1(threaded* fp);
extern threaded* t_send2(threaded* fp);
extern threaded* t_send3(threaded* fp);
extern threaded* t_send4(threaded* fp);
extern threaded* t_send5(threaded* fp);
extern threaded* t_sendn(threaded* fp);

extern threaded* t_send_value(threaded* fp);
extern threaded* t_send_hash(threaded* fp);
extern threaded* t_send_to_do_(threaded* fp);
extern threaded* t_continue_to_do_(threaded* fp);
extern threaded* t_send_ifFalse_(threaded* fp);
extern threaded* t_send_ifTrue_(threaded* fp);
extern threaded* t_send_ifTrue_ifFalse_(threaded* fp);

extern threaded* t_super0(threaded* fp);
extern threaded* t_super1(threaded* fp);
extern threaded* t_super2(threaded* fp);
extern threaded* t_super3(threaded* fp);
extern threaded* t_super4(threaded* fp);
extern threaded* t_super5(threaded* fp);
extern threaded* t_supern(threaded* fp);

extern threaded* t_assign(threaded* fp);
extern threaded* t_dup(threaded* fp);
extern threaded* t_send_value(threaded* fp);
extern threaded* t_restart(threaded* fp);

extern threaded* t_peek1(threaded* fp);
extern threaded* t_peek2(threaded* fp);
extern threaded* t_peek3(threaded* fp);
extern threaded* t_peek4(threaded* fp);
extern threaded* t_peek5(threaded* fp);

extern threaded* t_check1(threaded* fp);
extern threaded* t_check2(threaded* fp);
extern threaded* t_check3(threaded* fp);
extern threaded* t_check4(threaded* fp);
extern threaded* t_check5(threaded* fp);

#endif //INTERPRETATION_THREADED
