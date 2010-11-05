#include <lib/class/Interpretation/ParallelDebugger.h>


Optr layout_Interpretation_ParallelDebugger_Class_class;
Optr slot_Interpretation_ParallelDebugger_localIndent;
Optr slot_Interpretation_ParallelDebugger_threads;
Optr slot_Interpretation_ParallelDebugger_states;
Optr layout_Interpretation_ParallelDebugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16392 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16395 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16401 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16400 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16401, (Optr)&t_block_return);
    Block PBlock16399 = new_Block_with(empty_Array, empty_Array, PThreadedCode16400, 1, PSend16401);
    // ifNil:. 
    Send PSend16398 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16399);
    Assign PAssign16397 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16398);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16405 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16404 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16405);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16406 = new_Send((Optr)PAssign16404, SMB_isNil, 0);
    Array PThreadedCode16403 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16404, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16405, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16406, (Optr)&t_block_return);
    Block PBlock16402 = new_Block_with(empty_Array, empty_Array, PThreadedCode16403, 1, PSend16406);
    String string_16409 = new_String(L"  ");
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Constant string_16409_Const = new_Constant((Optr)string_16409);
    // stderr:. 
    Send PSend16410 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16409_Const);
    Array PThreadedCode16408 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16409, (Optr)&t_send1, (Optr)PSend16410, (Optr)&t_block_return);
    Block PBlock16407 = new_Block_with(empty_Array, empty_Array, PThreadedCode16408, 1, PSend16410);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16411 = new_Send((Optr)PBlock16402, SMB_whileFalse_, 1, (Optr)PBlock16407);
    String string_16414 = new_String(L"  ");
    Constant string_16414_Const = new_Constant((Optr)string_16414);
    // stderr:. 
    Send PSend16415 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16414_Const);
    Array PThreadedCode16413 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16414, (Optr)&t_send1, (Optr)PSend16415, (Optr)&t_block_return);
    Block PBlock16412 = new_Block_with(empty_Array, empty_Array, PThreadedCode16413, 1, PSend16415);
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    // doTimes:. 
    Send PSend16416 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB_doTimes_, 1, (Optr)PBlock16412);
    Array PThreadedCode16396 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16397, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16399, (Optr)&t_send1, (Optr)PSend16398, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16402, (Optr)&t_push_closure, (Optr)PBlock16407, (Optr)&t_send1, (Optr)PSend16411, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_closure, (Optr)PBlock16412, (Optr)&t_send1, (Optr)PSend16416, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16394 = new_Block_with(PArray16395, empty_Array, PThreadedCode16396, 4, PAssign16397, PSend16411, PSend16416, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16417 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16394);
    Array PThreadedCode16393 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16394, (Optr)&t_send1, (Optr)PSend16417, (Optr)&t_method_return);
    Method PMethod16391 = new_Method_with(empty_Array, PArray16392, empty_Array, PThreadedCode16393, 1, PSend16417);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16391, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_closures_0_0 = new_Variable_named(L"closures", 0);
    Array PArray16419 = new_Array_with(1, (Optr)VAR_closures_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16422 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16424 = new_Send((Optr)VAR_closures_0_0, SMB_size, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend16425 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend16424);
    Variable VAR_aClosure_2_0 = new_Variable_named(L"aClosure", 2);
    Array PArray16427 = new_Array_with(1, (Optr)VAR_aClosure_2_0);
    Variable VAR_startNext_3_0 = new_Variable_named(L"startNext", 3);
    Array PArray16430 = new_Array_with(1, (Optr)VAR_startNext_3_0);
    Variable VAR_thread_4_0 = new_Variable_named(L"thread", 4);
    Array PArray16433 = new_Array_with(1, (Optr)VAR_thread_4_0);
    Variable VAR__receiver__5_0 = new_Variable_named(L"_receiver_", 5);
    Array PArray16436 = new_Array_with(1, (Optr)VAR__receiver__5_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16438 = new_Send((Optr)VAR__receiver__5_0, SMB_continuation_, 1, (Optr)VAR_startNext_3_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16439 = new_Send((Optr)VAR__receiver__5_0, SMB_context_, 1, (Optr)nil_Const);
    Array PThreadedCode16437 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_variable, (Optr)VAR_startNext_3_0, (Optr)&t_send1, (Optr)PSend16438, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16439, (Optr)&t_method_return);
    Block PBlock16435 = new_Block_with(PArray16436, empty_Array, PThreadedCode16437, 2, PSend16438, PSend16439);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16440 = new_Send((Optr)PBlock16435, SMB_value_, 1, (Optr)VAR_thread_4_0);
    Array PThreadedCode16434 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock16435, (Optr)&t_push_variable, (Optr)VAR_thread_4_0, (Optr)&t_send1, (Optr)PSend16440, (Optr)&t_method_return);
    Block PBlock16432 = new_Block_with(PArray16433, empty_Array, PThreadedCode16434, 1, PSend16440);
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    // ifHasNext:. 
    Send PSend16441 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifHasNext_, 1, (Optr)PBlock16432);
    Super PSuper16442 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16443 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper16442);
    Array PThreadedCode16431 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16432, (Optr)&t_send1, (Optr)PSend16441, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_2_0, (Optr)&t_super1, (Optr)PSuper16442, (Optr)&t_send1, (Optr)PSend16443, (Optr)&t_method_return);
    Block PBlock16429 = new_Block_with(PArray16430, empty_Array, PThreadedCode16431, 2, PSend16441, PSend16443);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16444 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16429);
    Array PThreadedCode16428 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16429, (Optr)&t_send1, (Optr)PSend16444, (Optr)&t_method_return);
    Block PBlock16426 = new_Block_with(PArray16427, empty_Array, PThreadedCode16428, 1, PSend16444);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16445 = new_Send((Optr)VAR_closures_0_0, SMB_do_, 1, (Optr)PBlock16426);
    Array PThreadedCode16423 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_send0, (Optr)PSend16424, (Optr)&t_send1, (Optr)PSend16425, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_push_closure, (Optr)PBlock16426, (Optr)&t_send1, (Optr)PSend16445, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16421 = new_Block_with(PArray16422, empty_Array, PThreadedCode16423, 3, PSend16425, PSend16445, self);
    // on:. 
    Send PSend16446 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16421);
    Array PThreadedCode16420 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16421, (Optr)&t_send1, (Optr)PSend16446, (Optr)&t_method_return);
    Method PMethod16418 = new_Method_with(PArray16419, empty_Array, empty_Array, PThreadedCode16420, 1, PSend16446);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16418, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray16448 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16451 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16450 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)PSend16451);
    // new:. 
    Send PSend16453 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16452 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_states, (Optr)PSend16453);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray16455 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16457 = new_Send((Optr)PFakeThread_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16458 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend16457);
    Array PThreadedCode16456 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_class_reference, (Optr)PFakeThread_classReference, (Optr)&t_send0, (Optr)PSend16457, (Optr)&t_send2, (Optr)PSend16458, (Optr)&t_method_return);
    Block PBlock16454 = new_Block_with(PArray16455, empty_Array, PThreadedCode16456, 1, PSend16458);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend16459 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock16454);
    Array PThreadedCode16449 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16450, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16452, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16453, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock16454, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend16459, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16447 = new_Method_with(PArray16448, empty_Array, empty_Array, PThreadedCode16449, 4, PAssign16450, PAssign16452, PSend16459, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod16447, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16463 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend16465 = new_Send((Optr)VAR_receiver_1_0, SMB__at_, 1, (Optr)VAR_class_1_1);
    // @. 
    Send PSend16466 = new_Send((Optr)PSend16465, SMB__at_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_put_ = new_Symbol(L"put:");
    // put:. 
    Send PSend16467 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16466);
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    // showInvocation. 
    Send PSend16468 = new_Send((Optr)self, SMB_showInvocation, 0);
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    // switchThread. 
    Send PSend16469 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16470 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    // put:. 
    Send PSend16471 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16470);
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    // showReturn. 
    Send PSend16472 = new_Send((Optr)self, SMB_showReturn, 0);
    // switchThread. 
    Send PSend16473 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16474 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Array PThreadedCode16464 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_send1, (Optr)PSend16465, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16466, (Optr)&t_send1, (Optr)PSend16467, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16468, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16469, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16470, (Optr)&t_send1, (Optr)PSend16471, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16472, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16473, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16474, (Optr)&t_method_return);
    Block PBlock16462 = new_Block_with(PArray16463, empty_Array, PThreadedCode16464, 7, PSend16467, PSend16468, PSend16469, PSend16471, PSend16472, PSend16473, PSend16474);
    Array PThreadedCode16461 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16462, (Optr)&t_method_return);
    Method PMethod16460 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16461, 1, PBlock16462);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16460, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16477 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16478 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)int_0_Const);
    Array PThreadedCode16476 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16477, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16478, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16475 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16476, 3, PSuper16477, PAssign16478, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16475, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_showReturn() {
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16480 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16483 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16482 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16483);
    String string_16484 = new_String(L"--> ");
    Constant string_16484_Const = new_Constant((Optr)string_16484);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16485 = new_Send((Optr)string_16484_Const, SMB__append_, 1, (Optr)VAR_current_0_0);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16486 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16485);
    Array PThreadedCode16481 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16482, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16483, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16484, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send1, (Optr)PSend16485, (Optr)&t_send1, (Optr)PSend16486, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16479 = new_Method_with(empty_Array, PArray16480, empty_Array, PThreadedCode16481, 3, PAssign16482, PSend16486, self);
    
    MethodClosure MC_SMB_showReturn = new_MethodClosure((Method)PMethod16479, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showReturn, MC_SMB_showReturn);
}


static void init_SMB_switchThread() {
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    Variable VAR_thread_0_0 = new_Variable_named(L"thread", 0);
    Array PArray16488 = new_Array_with(1, (Optr)VAR_thread_0_0);
    Variable VAR_aContinuation_1_0 = new_Variable_named(L"aContinuation", 1);
    Array PArray16491 = new_Array_with(1, (Optr)VAR_aContinuation_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16494 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16496 = new_Send((Optr)VAR__receiver__2_0, SMB_continuation_, 1, (Optr)VAR_aContinuation_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16497 = new_Send((Optr)VAR__receiver__2_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16495 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aContinuation_1_0, (Optr)&t_send1, (Optr)PSend16496, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16497, (Optr)&t_method_return);
    Block PBlock16493 = new_Block_with(PArray16494, empty_Array, PThreadedCode16495, 2, PSend16496, PSend16497);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16498 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_current, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16499 = new_Send((Optr)PBlock16493, SMB_value_, 1, (Optr)PSend16498);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend16500 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_next, 0);
    // next. 
    Send PSend16502 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_next, 0);
    Assign PAssign16501 = new_Assign((Optr)VAR_thread_0_0, (Optr)PSend16502);
    Variable VAR_aState_2_0 = new_Variable_named(L"aState", 2);
    Array PArray16506 = new_Array_with(1, (Optr)VAR_aState_2_0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16508 = new_Send((Optr)VAR_aState_2_0, SMB_should, 0);
    // current. 
    Send PSend16509 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend16510 = new_Send((Optr)PSend16508, SMB_be_, 1, (Optr)PSend16509);
    Array PThreadedCode16507 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aState_2_0, (Optr)&t_send0, (Optr)PSend16508, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16509, (Optr)&t_send1, (Optr)PSend16510, (Optr)&t_method_return);
    Block PBlock16505 = new_Block_with(PArray16506, empty_Array, PThreadedCode16507, 1, PSend16510);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16511 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_do_, 1, (Optr)PBlock16505);
    Array PThreadedCode16504 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_closure, (Optr)PBlock16505, (Optr)&t_send1, (Optr)PSend16511, (Optr)&t_block_return);
    Block PBlock16503 = new_Block_with(empty_Array, empty_Array, PThreadedCode16504, 1, PSend16511);
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    // ifAtFirst:. 
    Send PSend16512 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifAtFirst_, 1, (Optr)PBlock16503);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16514 = new_Send((Optr)VAR_thread_0_0, SMB_context, 0);
    Assign PAssign16513 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16514);
    Symbol SMB_continuation = new_Symbol(L"continuation");
    // continuation. 
    Send PSend16515 = new_Send((Optr)VAR_thread_0_0, SMB_continuation, 0);
    Symbol SMB_continue = new_Symbol(L"continue");
    // continue. 
    Send PSend16516 = new_Send((Optr)PSend16515, SMB_continue, 0);
    Array PThreadedCode16492 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_closure, (Optr)PBlock16493, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16498, (Optr)&t_send1, (Optr)PSend16499, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16500, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16501, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16502, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16503, (Optr)&t_send1, (Optr)PSend16512, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16513, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16514, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16515, (Optr)&t_send0, (Optr)PSend16516, (Optr)&t_method_return);
    Block PBlock16490 = new_Block_with(PArray16491, empty_Array, PThreadedCode16492, 6, PSend16499, PSend16500, PAssign16501, PSend16512, PAssign16513, PSend16516);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16517 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16490);
    Array PThreadedCode16489 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16490, (Optr)&t_send1, (Optr)PSend16517, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16487 = new_Method_with(empty_Array, PArray16488, empty_Array, PThreadedCode16489, 2, PSend16517, self);
    
    MethodClosure MC_SMB_switchThread = new_MethodClosure((Method)PMethod16487, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_switchThread, MC_SMB_switchThread);
}


static void init_SMB_showInvocation() {
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16519 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16522 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16521 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16522);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend16523 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    // x. 
    Send PSend16524 = new_Send((Optr)PSend16523, SMB_x, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16525 = new_Send((Optr)PSend16524, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16526 = new_Send((Optr)PSend16525, SMB_name, 0);
    String string_16527 = new_String(L"@");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16527_Const = new_Constant((Optr)string_16527);
    // ,. 
    Send PSend16528 = new_Send((Optr)PSend16526, SMB__append_, 1, (Optr)string_16527_Const);
    // x. 
    Send PSend16529 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend16530 = new_Send((Optr)PSend16529, SMB_y, 0);
    // name. 
    Send PSend16531 = new_Send((Optr)PSend16530, SMB_name, 0);
    // ,. 
    Send PSend16532 = new_Send((Optr)PSend16528, SMB__append_, 1, (Optr)PSend16531);
    String string_16533 = new_String(L">>");
    Constant string_16533_Const = new_Constant((Optr)string_16533);
    // ,. 
    Send PSend16534 = new_Send((Optr)PSend16532, SMB__append_, 1, (Optr)string_16533_Const);
    // y. 
    Send PSend16535 = new_Send((Optr)VAR_current_0_0, SMB_y, 0);
    // ,. 
    Send PSend16536 = new_Send((Optr)PSend16534, SMB__append_, 1, (Optr)PSend16535);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16537 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16536);
    Array PThreadedCode16520 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign16521, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16522, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16523, (Optr)&t_send0, (Optr)PSend16524, (Optr)&t_send0, (Optr)PSend16525, (Optr)&t_send0, (Optr)PSend16526, (Optr)&t_push1, (Optr)string_16527, (Optr)&t_send1, (Optr)PSend16528, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16529, (Optr)&t_send0, (Optr)PSend16530, (Optr)&t_send0, (Optr)PSend16531, (Optr)&t_send1, (Optr)PSend16532, (Optr)&t_push1, (Optr)string_16533, (Optr)&t_send1, (Optr)PSend16534, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16535, (Optr)&t_send1, (Optr)PSend16536, (Optr)&t_send1, (Optr)PSend16537, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16518 = new_Method_with(empty_Array, PArray16519, empty_Array, PThreadedCode16520, 3, PAssign16521, PSend16537, self);
    
    MethodClosure MC_SMB_showInvocation = new_MethodClosure((Method)PMethod16518, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showInvocation, MC_SMB_showInvocation);
}


static void init_SMB_show_() {
    Symbol SMB_show_ = new_Symbol(L"show:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16539 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16541 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16543 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16545 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16546 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16544 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16545, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16546, (Optr)&t_method_return);
    Block PBlock16542 = new_Block_with(PArray16543, empty_Array, PThreadedCode16544, 2, PSend16545, PSend16546);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16547 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16548 = new_Send((Optr)PBlock16542, SMB_value_, 1, (Optr)PSend16547);
    Array PThreadedCode16540 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16541, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16542, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16547, (Optr)&t_send1, (Optr)PSend16548, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16538 = new_Method_with(PArray16539, empty_Array, empty_Array, PThreadedCode16540, 3, PSend16541, PSend16548, self);
    
    MethodClosure MC_SMB_show_ = new_MethodClosure((Method)PMethod16538, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_show_, MC_SMB_show_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16550 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16551 = new_Array_with(1, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16554 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16556 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend16557 = new_Send((Optr)PSend16556, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend16562 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16561 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16562);
    Super PSuper16564 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Assign PAssign16563 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16564);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend16566 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign16565 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16566);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16567 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_1);
    Array PThreadedCode16560 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16561, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16562, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16563, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16564, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16565, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16566, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16567, (Optr)&t_block_return);
    Block PBlock16559 = new_Block_with(empty_Array, empty_Array, PThreadedCode16560, 4, PAssign16561, PAssign16563, PAssign16565, PSend16567);
    // ifTrue:. 
    Send PSend16558 = new_Send((Optr)PSend16557, SMB_ifTrue_, 1, (Optr)PBlock16559);
    Super PSuper16568 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16555 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16556, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16557, (Optr)&t_send_ifTrue_, (Optr)PSend16558, (Optr)PBlock16559, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16568, (Optr)&t_method_return);
    Block PBlock16553 = new_Block_with(PArray16554, empty_Array, PThreadedCode16555, 2, PSend16558, PSuper16568);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16569 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16553);
    Array PThreadedCode16552 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16553, (Optr)&t_send1, (Optr)PSend16569, (Optr)&t_method_return);
    Method PMethod16549 = new_Method_with(PArray16550, PArray16551, empty_Array, PThreadedCode16552, 1, PSend16569);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16549, Interpretation_ParallelDebugger_Class);
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