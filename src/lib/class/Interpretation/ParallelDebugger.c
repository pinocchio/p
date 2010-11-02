#include <lib/class/Interpretation/ParallelDebugger.h>


Optr layout_Interpretation_ParallelDebugger_Class_class;
Optr slot_Interpretation_ParallelDebugger_localIndent;
Optr slot_Interpretation_ParallelDebugger_threads;
Optr slot_Interpretation_ParallelDebugger_states;
Optr layout_Interpretation_ParallelDebugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16362 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16365 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16371 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16370 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16371, (Optr)&t_block_return);
    Block PBlock16369 = new_Block_with(empty_Array, empty_Array, PThreadedCode16370, 1, PSend16371);
    // ifNil:. 
    Send PSend16368 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16369);
    Assign PAssign16367 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16368);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16375 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16374 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16375);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16376 = new_Send((Optr)PAssign16374, SMB_isNil, 0);
    Array PThreadedCode16373 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16374, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16375, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16376, (Optr)&t_block_return);
    Block PBlock16372 = new_Block_with(empty_Array, empty_Array, PThreadedCode16373, 1, PSend16376);
    String string_16379 = new_String(L"  ");
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Constant string_16379_Const = new_Constant((Optr)string_16379);
    // stderr:. 
    Send PSend16380 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16379_Const);
    Array PThreadedCode16378 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16379, (Optr)&t_send1, (Optr)PSend16380, (Optr)&t_block_return);
    Block PBlock16377 = new_Block_with(empty_Array, empty_Array, PThreadedCode16378, 1, PSend16380);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16381 = new_Send((Optr)PBlock16372, SMB_whileFalse_, 1, (Optr)PBlock16377);
    String string_16384 = new_String(L"  ");
    Constant string_16384_Const = new_Constant((Optr)string_16384);
    // stderr:. 
    Send PSend16385 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16384_Const);
    Array PThreadedCode16383 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16384, (Optr)&t_send1, (Optr)PSend16385, (Optr)&t_block_return);
    Block PBlock16382 = new_Block_with(empty_Array, empty_Array, PThreadedCode16383, 1, PSend16385);
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    // doTimes:. 
    Send PSend16386 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB_doTimes_, 1, (Optr)PBlock16382);
    Array PThreadedCode16366 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16367, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16369, (Optr)&t_send1, (Optr)PSend16368, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16372, (Optr)&t_push_closure, (Optr)PBlock16377, (Optr)&t_send1, (Optr)PSend16381, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_closure, (Optr)PBlock16382, (Optr)&t_send1, (Optr)PSend16386, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16364 = new_Block_with(PArray16365, empty_Array, PThreadedCode16366, 4, PAssign16367, PSend16381, PSend16386, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16387 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16364);
    Array PThreadedCode16363 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16364, (Optr)&t_send1, (Optr)PSend16387, (Optr)&t_method_return);
    Method PMethod16361 = new_Method_with(empty_Array, PArray16362, empty_Array, PThreadedCode16363, 1, PSend16387);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16361, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_closures_0_0 = new_Variable_named(L"closures", 0);
    Array PArray16389 = new_Array_with(1, (Optr)VAR_closures_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16392 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16394 = new_Send((Optr)VAR_closures_0_0, SMB_size, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend16395 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend16394);
    Variable VAR_aClosure_2_0 = new_Variable_named(L"aClosure", 2);
    Array PArray16397 = new_Array_with(1, (Optr)VAR_aClosure_2_0);
    Variable VAR_startNext_3_0 = new_Variable_named(L"startNext", 3);
    Array PArray16400 = new_Array_with(1, (Optr)VAR_startNext_3_0);
    Variable VAR_thread_4_0 = new_Variable_named(L"thread", 4);
    Array PArray16403 = new_Array_with(1, (Optr)VAR_thread_4_0);
    Variable VAR__receiver__5_0 = new_Variable_named(L"_receiver_", 5);
    Array PArray16406 = new_Array_with(1, (Optr)VAR__receiver__5_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16408 = new_Send((Optr)VAR__receiver__5_0, SMB_continuation_, 1, (Optr)VAR_startNext_3_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16409 = new_Send((Optr)VAR__receiver__5_0, SMB_context_, 1, (Optr)nil_Const);
    Array PThreadedCode16407 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_variable, (Optr)VAR_startNext_3_0, (Optr)&t_send1, (Optr)PSend16408, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16409, (Optr)&t_method_return);
    Block PBlock16405 = new_Block_with(PArray16406, empty_Array, PThreadedCode16407, 2, PSend16408, PSend16409);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16410 = new_Send((Optr)PBlock16405, SMB_value_, 1, (Optr)VAR_thread_4_0);
    Array PThreadedCode16404 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock16405, (Optr)&t_push_variable, (Optr)VAR_thread_4_0, (Optr)&t_send1, (Optr)PSend16410, (Optr)&t_method_return);
    Block PBlock16402 = new_Block_with(PArray16403, empty_Array, PThreadedCode16404, 1, PSend16410);
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    // ifHasNext:. 
    Send PSend16411 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifHasNext_, 1, (Optr)PBlock16402);
    Super PSuper16412 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16413 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper16412);
    Array PThreadedCode16401 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16402, (Optr)&t_send1, (Optr)PSend16411, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_2_0, (Optr)&t_super1, (Optr)PSuper16412, (Optr)&t_send1, (Optr)PSend16413, (Optr)&t_method_return);
    Block PBlock16399 = new_Block_with(PArray16400, empty_Array, PThreadedCode16401, 2, PSend16411, PSend16413);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16414 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16399);
    Array PThreadedCode16398 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16399, (Optr)&t_send1, (Optr)PSend16414, (Optr)&t_method_return);
    Block PBlock16396 = new_Block_with(PArray16397, empty_Array, PThreadedCode16398, 1, PSend16414);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16415 = new_Send((Optr)VAR_closures_0_0, SMB_do_, 1, (Optr)PBlock16396);
    Array PThreadedCode16393 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_send0, (Optr)PSend16394, (Optr)&t_send1, (Optr)PSend16395, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_push_closure, (Optr)PBlock16396, (Optr)&t_send1, (Optr)PSend16415, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16391 = new_Block_with(PArray16392, empty_Array, PThreadedCode16393, 3, PSend16395, PSend16415, self);
    // on:. 
    Send PSend16416 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16391);
    Array PThreadedCode16390 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16391, (Optr)&t_send1, (Optr)PSend16416, (Optr)&t_method_return);
    Method PMethod16388 = new_Method_with(PArray16389, empty_Array, empty_Array, PThreadedCode16390, 1, PSend16416);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16388, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray16418 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16421 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16420 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)PSend16421);
    // new:. 
    Send PSend16423 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16422 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_states, (Optr)PSend16423);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray16425 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16427 = new_Send((Optr)PFakeThread_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16428 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend16427);
    Array PThreadedCode16426 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_class_reference, (Optr)PFakeThread_classReference, (Optr)&t_send0, (Optr)PSend16427, (Optr)&t_send2, (Optr)PSend16428, (Optr)&t_method_return);
    Block PBlock16424 = new_Block_with(PArray16425, empty_Array, PThreadedCode16426, 1, PSend16428);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend16429 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock16424);
    Array PThreadedCode16419 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16420, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16421, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16422, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16423, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock16424, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend16429, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16417 = new_Method_with(PArray16418, empty_Array, empty_Array, PThreadedCode16419, 4, PAssign16420, PAssign16422, PSend16429, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod16417, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16433 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend16435 = new_Send((Optr)VAR_receiver_1_0, SMB__at_, 1, (Optr)VAR_class_1_1);
    // @. 
    Send PSend16436 = new_Send((Optr)PSend16435, SMB__at_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_put_ = new_Symbol(L"put:");
    // put:. 
    Send PSend16437 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16436);
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    // showInvocation. 
    Send PSend16438 = new_Send((Optr)self, SMB_showInvocation, 0);
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    // switchThread. 
    Send PSend16439 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16440 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    // put:. 
    Send PSend16441 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16440);
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    // showReturn. 
    Send PSend16442 = new_Send((Optr)self, SMB_showReturn, 0);
    // switchThread. 
    Send PSend16443 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16444 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Array PThreadedCode16434 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_send1, (Optr)PSend16435, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16436, (Optr)&t_send1, (Optr)PSend16437, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16438, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16439, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16440, (Optr)&t_send1, (Optr)PSend16441, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16442, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16443, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16444, (Optr)&t_method_return);
    Block PBlock16432 = new_Block_with(PArray16433, empty_Array, PThreadedCode16434, 7, PSend16437, PSend16438, PSend16439, PSend16441, PSend16442, PSend16443, PSend16444);
    Array PThreadedCode16431 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16432, (Optr)&t_method_return);
    Method PMethod16430 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16431, 1, PBlock16432);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16430, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16447 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16448 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)int_0_Const);
    Array PThreadedCode16446 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16447, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16448, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16445 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16446, 3, PSuper16447, PAssign16448, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16445, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_showReturn() {
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16450 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16453 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16452 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16453);
    String string_16454 = new_String(L"--> ");
    Constant string_16454_Const = new_Constant((Optr)string_16454);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16455 = new_Send((Optr)string_16454_Const, SMB__append_, 1, (Optr)VAR_current_0_0);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16456 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16455);
    Array PThreadedCode16451 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16452, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16453, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16454, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send1, (Optr)PSend16455, (Optr)&t_send1, (Optr)PSend16456, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16449 = new_Method_with(empty_Array, PArray16450, empty_Array, PThreadedCode16451, 3, PAssign16452, PSend16456, self);
    
    MethodClosure MC_SMB_showReturn = new_MethodClosure((Method)PMethod16449, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showReturn, MC_SMB_showReturn);
}


static void init_SMB_switchThread() {
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    Variable VAR_thread_0_0 = new_Variable_named(L"thread", 0);
    Array PArray16458 = new_Array_with(1, (Optr)VAR_thread_0_0);
    Variable VAR_aContinuation_1_0 = new_Variable_named(L"aContinuation", 1);
    Array PArray16461 = new_Array_with(1, (Optr)VAR_aContinuation_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16464 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16466 = new_Send((Optr)VAR__receiver__2_0, SMB_continuation_, 1, (Optr)VAR_aContinuation_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16467 = new_Send((Optr)VAR__receiver__2_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16465 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aContinuation_1_0, (Optr)&t_send1, (Optr)PSend16466, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16467, (Optr)&t_method_return);
    Block PBlock16463 = new_Block_with(PArray16464, empty_Array, PThreadedCode16465, 2, PSend16466, PSend16467);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16468 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_current, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16469 = new_Send((Optr)PBlock16463, SMB_value_, 1, (Optr)PSend16468);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend16470 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_next, 0);
    // next. 
    Send PSend16472 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_next, 0);
    Assign PAssign16471 = new_Assign((Optr)VAR_thread_0_0, (Optr)PSend16472);
    Variable VAR_aState_2_0 = new_Variable_named(L"aState", 2);
    Array PArray16476 = new_Array_with(1, (Optr)VAR_aState_2_0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16478 = new_Send((Optr)VAR_aState_2_0, SMB_should, 0);
    // current. 
    Send PSend16479 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend16480 = new_Send((Optr)PSend16478, SMB_be_, 1, (Optr)PSend16479);
    Array PThreadedCode16477 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aState_2_0, (Optr)&t_send0, (Optr)PSend16478, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16479, (Optr)&t_send1, (Optr)PSend16480, (Optr)&t_method_return);
    Block PBlock16475 = new_Block_with(PArray16476, empty_Array, PThreadedCode16477, 1, PSend16480);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16481 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_do_, 1, (Optr)PBlock16475);
    Array PThreadedCode16474 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_closure, (Optr)PBlock16475, (Optr)&t_send1, (Optr)PSend16481, (Optr)&t_block_return);
    Block PBlock16473 = new_Block_with(empty_Array, empty_Array, PThreadedCode16474, 1, PSend16481);
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    // ifAtFirst:. 
    Send PSend16482 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifAtFirst_, 1, (Optr)PBlock16473);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16484 = new_Send((Optr)VAR_thread_0_0, SMB_context, 0);
    Assign PAssign16483 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16484);
    Symbol SMB_continuation = new_Symbol(L"continuation");
    // continuation. 
    Send PSend16485 = new_Send((Optr)VAR_thread_0_0, SMB_continuation, 0);
    Symbol SMB_continue = new_Symbol(L"continue");
    // continue. 
    Send PSend16486 = new_Send((Optr)PSend16485, SMB_continue, 0);
    Array PThreadedCode16462 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_closure, (Optr)PBlock16463, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16468, (Optr)&t_send1, (Optr)PSend16469, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16470, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16471, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16472, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16473, (Optr)&t_send1, (Optr)PSend16482, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16483, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16484, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16485, (Optr)&t_send0, (Optr)PSend16486, (Optr)&t_method_return);
    Block PBlock16460 = new_Block_with(PArray16461, empty_Array, PThreadedCode16462, 6, PSend16469, PSend16470, PAssign16471, PSend16482, PAssign16483, PSend16486);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16487 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16460);
    Array PThreadedCode16459 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16460, (Optr)&t_send1, (Optr)PSend16487, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16457 = new_Method_with(empty_Array, PArray16458, empty_Array, PThreadedCode16459, 2, PSend16487, self);
    
    MethodClosure MC_SMB_switchThread = new_MethodClosure((Method)PMethod16457, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_switchThread, MC_SMB_switchThread);
}


static void init_SMB_showInvocation() {
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16489 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16492 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16491 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16492);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend16493 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    // x. 
    Send PSend16494 = new_Send((Optr)PSend16493, SMB_x, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16495 = new_Send((Optr)PSend16494, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16496 = new_Send((Optr)PSend16495, SMB_name, 0);
    String string_16497 = new_String(L"@");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16497_Const = new_Constant((Optr)string_16497);
    // ,. 
    Send PSend16498 = new_Send((Optr)PSend16496, SMB__append_, 1, (Optr)string_16497_Const);
    // x. 
    Send PSend16499 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend16500 = new_Send((Optr)PSend16499, SMB_y, 0);
    // name. 
    Send PSend16501 = new_Send((Optr)PSend16500, SMB_name, 0);
    // ,. 
    Send PSend16502 = new_Send((Optr)PSend16498, SMB__append_, 1, (Optr)PSend16501);
    String string_16503 = new_String(L">>");
    Constant string_16503_Const = new_Constant((Optr)string_16503);
    // ,. 
    Send PSend16504 = new_Send((Optr)PSend16502, SMB__append_, 1, (Optr)string_16503_Const);
    // y. 
    Send PSend16505 = new_Send((Optr)VAR_current_0_0, SMB_y, 0);
    // ,. 
    Send PSend16506 = new_Send((Optr)PSend16504, SMB__append_, 1, (Optr)PSend16505);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16507 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16506);
    Array PThreadedCode16490 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign16491, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16492, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16493, (Optr)&t_send0, (Optr)PSend16494, (Optr)&t_send0, (Optr)PSend16495, (Optr)&t_send0, (Optr)PSend16496, (Optr)&t_push1, (Optr)string_16497, (Optr)&t_send1, (Optr)PSend16498, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16499, (Optr)&t_send0, (Optr)PSend16500, (Optr)&t_send0, (Optr)PSend16501, (Optr)&t_send1, (Optr)PSend16502, (Optr)&t_push1, (Optr)string_16503, (Optr)&t_send1, (Optr)PSend16504, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16505, (Optr)&t_send1, (Optr)PSend16506, (Optr)&t_send1, (Optr)PSend16507, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16488 = new_Method_with(empty_Array, PArray16489, empty_Array, PThreadedCode16490, 3, PAssign16491, PSend16507, self);
    
    MethodClosure MC_SMB_showInvocation = new_MethodClosure((Method)PMethod16488, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showInvocation, MC_SMB_showInvocation);
}


static void init_SMB_show_() {
    Symbol SMB_show_ = new_Symbol(L"show:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16509 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16511 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16513 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16515 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16516 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16514 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16515, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16516, (Optr)&t_method_return);
    Block PBlock16512 = new_Block_with(PArray16513, empty_Array, PThreadedCode16514, 2, PSend16515, PSend16516);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16517 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16518 = new_Send((Optr)PBlock16512, SMB_value_, 1, (Optr)PSend16517);
    Array PThreadedCode16510 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16511, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16512, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16517, (Optr)&t_send1, (Optr)PSend16518, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16508 = new_Method_with(PArray16509, empty_Array, empty_Array, PThreadedCode16510, 3, PSend16511, PSend16518, self);
    
    MethodClosure MC_SMB_show_ = new_MethodClosure((Method)PMethod16508, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_show_, MC_SMB_show_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16520 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16521 = new_Array_with(1, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16524 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16526 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend16527 = new_Send((Optr)PSend16526, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend16532 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16531 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16532);
    Super PSuper16534 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Assign PAssign16533 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16534);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend16536 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign16535 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16536);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16537 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_1);
    Array PThreadedCode16530 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16531, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16532, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16533, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16534, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16535, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16536, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16537, (Optr)&t_block_return);
    Block PBlock16529 = new_Block_with(empty_Array, empty_Array, PThreadedCode16530, 4, PAssign16531, PAssign16533, PAssign16535, PSend16537);
    // ifTrue:. 
    Send PSend16528 = new_Send((Optr)PSend16527, SMB_ifTrue_, 1, (Optr)PBlock16529);
    Super PSuper16538 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16525 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16526, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16527, (Optr)&t_send_ifTrue_, (Optr)PSend16528, (Optr)PBlock16529, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16538, (Optr)&t_method_return);
    Block PBlock16523 = new_Block_with(PArray16524, empty_Array, PThreadedCode16525, 2, PSend16528, PSuper16538);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16539 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16523);
    Array PThreadedCode16522 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16523, (Optr)&t_send1, (Optr)PSend16539, (Optr)&t_method_return);
    Method PMethod16519 = new_Method_with(PArray16520, PArray16521, empty_Array, PThreadedCode16522, 1, PSend16539);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16519, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_visitSend_, MC_SMB_visitSend_);
}

void init_Interpretation_PParallelDebugger_layout() {
    layout_Interpretation_ParallelDebugger_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_ParallelDebugger_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_ParallelDebugger_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_ParallelDebugger_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_ParallelDebugger_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_ParallelDebugger_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ParallelDebugger = new_Symbol(L"ParallelDebugger");
    slot_Interpretation_ParallelDebugger_localIndent = (Optr)new_Slot(3, L"localIndent");
    slot_Interpretation_ParallelDebugger_threads = (Optr)new_Slot(4, L"threads");
    slot_Interpretation_ParallelDebugger_states = (Optr)new_Slot(5, L"states");
    layout_Interpretation_ParallelDebugger = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Interpretation_ParallelDebugger)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_ParallelDebugger)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    ((Array)layout_Interpretation_ParallelDebugger)->values[2] = slot_Interpretation_SteppingInterpreter_stepBlock; // stepBlock 
    ((Array)layout_Interpretation_ParallelDebugger)->values[3] = slot_Interpretation_ParallelDebugger_localIndent; // localIndent 
    ((Array)layout_Interpretation_ParallelDebugger)->values[4] = slot_Interpretation_ParallelDebugger_threads; // threads 
    ((Array)layout_Interpretation_ParallelDebugger)->values[5] = slot_Interpretation_ParallelDebugger_states; // states 
    Interpretation_ParallelDebugger_Class = (Class)new_Class(Interpretation_SteppingInterpreter_Class, layout_Interpretation_ParallelDebugger_Class_class);
    Interpretation_ParallelDebugger_Class->layout = layout_Interpretation_ParallelDebugger;
    Interpretation_ParallelDebugger_Class->name = SMB_ParallelDebugger;
    
}

void init_Interpretation_PParallelDebugger_methods() {
    init_SMB_indent();
    init_SMB_interpret_();
    init_SMB_initialize_();
    init_SMB_defaultStepBlock();
    init_SMB_initialize();
    init_SMB_showReturn();
    init_SMB_switchThread();
    init_SMB_showInvocation();
    init_SMB_show_();
    init_SMB_visitSend_();
    
}