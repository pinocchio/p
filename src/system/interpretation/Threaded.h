#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ======================================================================== */

extern threaded* pc;
extern Optr      rv;

#ifdef THREADED // -----------------------------------------------------------
    #ifdef TDEBUG
        #define OPCODE(name) label_##name:\
            DT(OPCODE, ""#name) \
            fwprintf(stderr, L"         : "#name"\n");
    #else // DEBUG
        #define OPCODE(name) label_##name:\
            DT(OPCODE, ""#name) 
    #endif // DEBUG
    
    #define RETURN_OPCODE return;
    #define END_OPCODE goto  &&(pc++);
    #define T_CODE(name) extern void * t_##name;
    #define BREAK (threaded*)-1

#else // THREADED ------------------------------------------------------------

    #ifdef TDEBUG
        #define OPCODE(name) void t_##name() {\
            DT(OPCODE, ""#name) \
            fwprintf(stderr, L"         : "#name"\n");
    #else // DEBUG
        #define OPCODE(name) void t_##name() {\
            DT(OPCODE, ""#name) 
    #endif // DEBUG
    
    #define RETURN_OPCODE return;
    #define END_OPCODE }
    #define T_CODE(name) extern void t_##name();
    #define BREAK (threaded*)-1

#endif // THREADED -----------------------------------------------------------


#define NNATIVE(name, size, ...) \
    Array T_##name;\
    Array TG_##name()\
    {\
        return new_Array_with(size, __VA_ARGS__);\
    }

#define INIT_NATIVE(name) T_##name = TG_##name()



/* ========================================================================= */

extern void post_init_Threaded();

extern Optr get_code(threaded* idx);
extern void push_code(Array code);
extern void pop_code();
#define SET_CONTEXT(env) (tset(_ENV_, (Optr)alive_env((BlockContext)(env))))

/* ======================================================================== */

T_CODE(return_constant)
T_CODE(return_reference)
T_CODE(return_self)
T_CODE(return_slot)
T_CODE(return_variable)

T_CODE(nonlocalreturn_constant)
T_CODE(nonlocalreturn_reference)
T_CODE(nonlocalreturn_self)
T_CODE(nonlocalreturn_slot)
T_CODE(nonlocalreturn_variable)

T_CODE(send0)
T_CODE(send1)
T_CODE(send2)
T_CODE(send3)
T_CODE(send4)
T_CODE(send5)
T_CODE(send6)
T_CODE(sendn)

T_CODE(super0)
T_CODE(super1)
T_CODE(super2)
T_CODE(super3)
T_CODE(super4)
T_CODE(super5)
T_CODE(super6)
T_CODE(supern)

T_CODE(copy_variable_variable)
T_CODE(copy_constant_variable)
T_CODE(copy_variable_slot)
T_CODE(copy_slot_variable)
T_CODE(copy_self_variable)

T_CODE(capture)

/* ======================================================================== */

#endif //INTERPRETATION_THREADED
