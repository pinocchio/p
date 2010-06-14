#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ======================================================================== */

#define THREADED(name) long t_##name(long pc) {
//    fwprintf(stderr, L"         : "#name"\n");

/* ========================================================================= */

extern void CNT_eval_threaded();
extern void CNT_restore_env();

typedef long(*threaded)(long pc);

extern long push_code(Array code);
extern void post_init_Threaded();
/* ======================================================================== */

extern long t_push_nil(long pc);
extern long t_push_0(long pc);
extern long t_push_1(long pc);
extern long t_push_2(long pc);
extern long t_push_true(long pc);
extern long t_push_false(long pc);
extern long t_push_self(long pc);

extern long t_push1(long pc);
extern long t_push2(long pc);
extern long t_push3(long pc);
extern long t_push4(long pc);
extern long t_push5(long pc);
extern long t_pushn(long pc);

extern long t_push_variable(long pc);
extern long t_push_closure(long pc);
extern long t_push_class_reference(long pc);
extern long t_push_slot(long pc);

extern long t_zap(long pc);
extern long t_zap1(long pc);
extern long t_zap2(long pc);
extern long t_zap3(long pc);
extern long t_zap4(long pc);
extern long t_zap5(long pc);

extern long t_return(long pc);
extern long t_return_true(long pc);
extern long t_return_false(long pc);
extern long t_return_nil(long pc);
extern long t_return_self(long pc);
extern long t_return_0(long pc);
extern long t_return_1(long pc);
extern long t_return_next(long pc);

extern long t_send0(long pc);
extern long t_send1(long pc);
extern long t_send2(long pc);
extern long t_send3(long pc);
extern long t_send4(long pc);
extern long t_send5(long pc);
extern long t_sendn(long pc);

extern long t_send_to_do_(long pc);
extern long t_send_ifFalse_(long pc);
extern long t_send_ifTrue_(long pc);
extern long t_send_ifTrue_ifFalse_(long pc);
extern long t_send_hash(long pc);
extern long t_send_value(long pc);

extern long t_super0(long pc);
extern long t_super1(long pc);
extern long t_super2(long pc);
extern long t_super3(long pc);
extern long t_super4(long pc);
extern long t_super5(long pc);
extern long t_supern(long pc);

extern long t_assign(long pc);
extern long t_dup(long pc);
extern long t_send_value(long pc);
extern long t_restart(long pc);

extern long t_peek1(long pc);
extern long t_peek2(long pc);
extern long t_peek3(long pc);
extern long t_peek4(long pc);
extern long t_peek5(long pc);

extern long t_check1(long pc);
extern long t_check2(long pc);
extern long t_check3(long pc);
extern long t_check4(long pc);
extern long t_check5(long pc);

#endif //INTERPRETATION_THREADED
