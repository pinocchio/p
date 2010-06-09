#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ======================================================================== */

extern void CNT_eval_threaded();

typedef void(*threaded)(long pc);

extern void post_init_Threaded();
/* ======================================================================== */

extern void set_pc(long pc);
extern void inc_pc(long pc);
extern void t_branch_gt_long(long pc);
extern void t_branch_bool(long pc);
extern void t_jump_1(long pc);

extern void t_push_nil(long pc);
extern void t_push_0(long pc);
extern void t_push_1(long pc);
extern void t_push_2(long pc);
extern void t_push_true(long pc);
extern void t_push_false(long pc);
extern void t_push_self(long pc);

extern void t_push1(long pc);
extern void t_push2(long pc);
extern void t_push3(long pc);
extern void t_push4(long pc);
extern void t_push5(long pc);
extern void t_pushn(long pc);

extern void t_push_variable(long pc);
extern void t_push_closure(long pc);
extern void t_push_class_reference(long pc);
extern void t_push_slot(long pc);

extern void t_pop(long pc);

extern void t_return(long pc);
extern void t_return_true(long pc);
extern void t_return_false(long pc);
extern void t_return_nil(long pc);
extern void t_return_0(long pc);
extern void t_return_1(long pc);
extern void t_return_next(long pc);
extern void t_return_self(long pc);
 
extern void t_send0(long pc);
extern void t_send1(long pc);
extern void t_send2(long pc);
extern void t_send3(long pc);
extern void t_send4(long pc);
extern void t_send5(long pc);
extern void t_sendn(long pc);

extern void t_super0(long pc);
extern void t_super1(long pc);
extern void t_super2(long pc);
extern void t_super3(long pc);
extern void t_super4(long pc);
extern void t_super5(long pc);
extern void t_supern(long pc);

extern void t_assign(long pc);

#endif //INTERPRETATION_THREADED
