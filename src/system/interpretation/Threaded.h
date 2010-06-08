#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ======================================================================== */

extern void CNT_eval_threaded();

typedef void(*threaded)(long pc);

/* ======================================================================== */

extern void set_pc(long pc);
extern void inc_pc(long pc);
extern void t_branch_gt_long(long pc);
extern void t_branch_bool(long pc);
extern void t_jump_1(long pc);

extern void t_push_nil(long pc);
extern void t_push_0(long pc);
extern void t_push_1(long pc);
extern void t_push_true(long pc);
extern void t_push_false(long pc);
extern void t_push_next(long pc);
extern void t_push_self(long pc);
extern void t_push_variable(long pc);
extern void t_push_closure(long pc);

extern void t_return(long pc);
extern void t_return_true(long pc);
extern void t_return_false(long pc);
extern void t_return_nil(long pc);
extern void t_return_0(long pc);
extern void t_return_1(long pc);
extern void t_return_next(long pc);
extern void t_return_self(long pc);
 
extern void send0(long pc);
extern void send1(long pc);
extern void send2(long pc);
extern void send3(long pc);
extern void send4(long pc);
extern void send5(long pc);
extern void sendn(long pc);


#endif //INTERPRETATION_THREADED
