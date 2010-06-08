#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ======================================================================== */

extern void CNT_eval_threaded();

typedef void(*threaded)(int pc);

/* ======================================================================== */

extern void set_pc(int pc);
extern void inc_pc(int pc);
extern void t_branch_gt_int(int pc);
extern void t_branch_bool(int pc);
extern void t_jump_1(int pc);

extern void t_push_nil(int pc);
extern void t_push_0(int pc);
extern void t_push_1(int pc);
extern void t_push_true(int pc);
extern void t_push_false(int pc);
extern void t_push_next(int pc);
extern void t_push_self(int pc);
extern void t_push_variable(int pc);
extern void t_push_closure(int pc);

 
extern void t_return(int pc);
extern void t_return_true(int pc);
extern void t_return_false(int pc);
extern void t_return_nil(int pc);
extern void t_return_0(int pc);
extern void t_return_1(int pc);
extern void t_return_next(int pc);
extern void t_return_self(int pc);
 
extern void send0(int pc);
extern void send1(int pc);
extern void send2(int pc);
extern void send3(int pc);
extern void send4(int pc);
extern void send5(int pc);
extern void sendn(int pc);


#endif //INTERPRETATION_THREADED
