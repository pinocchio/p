#ifndef INTERPRETATION_THREADED
#define INTERPRETATION_THREADED

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ======================================================================== */

extern threaded* pc;

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
#define set_env(env) (tset(_ENV_, (env)))

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

T_CODE(push_context)

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

T_CODE(block_return)
T_CODE(block_return_true)
T_CODE(block_return_false)
T_CODE(block_return_nil)
T_CODE(block_return_self)
T_CODE(block_return_0)
T_CODE(block_return_1)
T_CODE(block_return_2)
T_CODE(block_return_next)

T_CODE(method_return)
T_CODE(method_return_true)
T_CODE(method_return_false)
T_CODE(method_return_nil)
T_CODE(method_return_self) 
T_CODE(method_return_0)
T_CODE(method_return_1)
T_CODE(method_return_2)
T_CODE(method_return_next)   

T_CODE(send0)
T_CODE(send1)
T_CODE(send2)
T_CODE(send3)
T_CODE(send4)
T_CODE(send5)
T_CODE(sendn)

T_CODE(send_to_do_)
T_CODE(continue_to_do_)
T_CODE(send_ifFalse_)
T_CODE(send_ifTrue_)
T_CODE(send_ifTrue_ifFalse_)
T_CODE(send_ifFalse_ifTrue_)

T_CODE(super0)
T_CODE(super1)
T_CODE(super2)
T_CODE(super3)
T_CODE(super4)
T_CODE(super5)
T_CODE(supern)

T_CODE(assign)
T_CODE(dup)
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

// ============================================================================

T_CODE(class_cache_invoke)
T_CODE(class_invoke)
T_CODE(class_lookup)

T_CODE(string_concat)
T_CODE(string_concat_asString)


T_CODE(bucket_rehash)
T_CODE(dict_grow)
T_CODE(push_hash)
T_CODE(dictionary_bucket)
T_CODE(bucket_lookup)
T_CODE(return_null)
T_CODE(return_nil)
T_CODE(dictionary_ifAbsent_)
T_CODE(pop_return)
T_CODE(dictionary_store)
T_CODE(bucket_store)
T_CODE(dictionary_check_grow)

#endif //INTERPRETATION_THREADED
