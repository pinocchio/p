#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ======================================================================== */

extern void CNT_eval_threaded();

typedef long(*threaded)(long pc);

extern void post_init_Threaded();
/* ======================================================================== */

extern void set_pc(long pc);
extern void inc_pc(long pc);
extern long t_branch_gt_long(long pc);
extern long t_branch_bool(long pc);
extern long t_jump_1(long pc);

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

extern long t_pop(long pc);

extern long t_return(long pc);
extern long t_return_true(long pc);
extern long t_return_false(long pc);
extern long t_return_nil(long pc);
extern long t_return_0(long pc);
extern long t_return_1(long pc);
extern long t_return_next(long pc);
extern long t_return_self(long pc);
 
extern long t_send0(long pc);
extern long t_send1(long pc);
extern long t_send2(long pc);
extern long t_send3(long pc);
extern long t_send4(long pc);
extern long t_send5(long pc);
extern long t_sendn(long pc);

extern long t_super0(long pc);
extern long t_super1(long pc);
extern long t_super2(long pc);
extern long t_super3(long pc);
extern long t_super4(long pc);
extern long t_super5(long pc);
extern long t_supern(long pc);

extern long t_assign(long pc);

#endif //INTERPRETATION_THREADED
