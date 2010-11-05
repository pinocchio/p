#include <lib/class/Interpretation/ParallelDebugger.h>


Optr layout_Interpretation_ParallelDebugger_Class_class;
Optr slot_Interpretation_ParallelDebugger_localIndent;
Optr slot_Interpretation_ParallelDebugger_threads;
Optr slot_Interpretation_ParallelDebugger_states;
Optr layout_Interpretation_ParallelDebugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16449 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16452 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16458 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16457 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16458, (Optr)&t_block_return);
    Block PBlock16456 = new_Block_with(empty_Array, empty_Array, PThreadedCode16457, 1, PSend16458);
    // ifNil:. 
    Send PSend16455 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16456);
    Assign PAssign16454 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16455);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16462 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16461 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16462);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16463 = new_Send((Optr)PAssign16461, SMB_isNil, 0);
    Array PThreadedCode16460 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16461, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16462, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16463, (Optr)&t_block_return);
    Block PBlock16459 = new_Block_with(empty_Array, empty_Array, PThreadedCode16460, 1, PSend16463);
    String string_16466 = new_String(L"  ");
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Constant string_16466_Const = new_Constant((Optr)string_16466);
    // stderr:. 
    Send PSend16467 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16466_Const);
    Array PThreadedCode16465 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16466, (Optr)&t_send1, (Optr)PSend16467, (Optr)&t_block_return);
    Block PBlock16464 = new_Block_with(empty_Array, empty_Array, PThreadedCode16465, 1, PSend16467);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16468 = new_Send((Optr)PBlock16459, SMB_whileFalse_, 1, (Optr)PBlock16464);
    String string_16471 = new_String(L"  ");
    Constant string_16471_Const = new_Constant((Optr)string_16471);
    // stderr:. 
    Send PSend16472 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16471_Const);
    Array PThreadedCode16470 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16471, (Optr)&t_send1, (Optr)PSend16472, (Optr)&t_block_return);
    Block PBlock16469 = new_Block_with(empty_Array, empty_Array, PThreadedCode16470, 1, PSend16472);
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    // doTimes:. 
    Send PSend16473 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB_doTimes_, 1, (Optr)PBlock16469);
    Array PThreadedCode16453 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16454, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16456, (Optr)&t_send1, (Optr)PSend16455, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16459, (Optr)&t_push_closure, (Optr)PBlock16464, (Optr)&t_send1, (Optr)PSend16468, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_closure, (Optr)PBlock16469, (Optr)&t_send1, (Optr)PSend16473, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16451 = new_Block_with(PArray16452, empty_Array, PThreadedCode16453, 4, PAssign16454, PSend16468, PSend16473, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16474 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16451);
    Array PThreadedCode16450 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16451, (Optr)&t_send1, (Optr)PSend16474, (Optr)&t_method_return);
    Method PMethod16448 = new_Method_with(empty_Array, PArray16449, empty_Array, PThreadedCode16450, 1, PSend16474);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16448, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_closures_0_0 = new_Variable_named(L"closures", 0);
    Array PArray16476 = new_Array_with(1, (Optr)VAR_closures_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16479 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16481 = new_Send((Optr)VAR_closures_0_0, SMB_size, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend16482 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend16481);
    Variable VAR_aClosure_2_0 = new_Variable_named(L"aClosure", 2);
    Array PArray16484 = new_Array_with(1, (Optr)VAR_aClosure_2_0);
    Variable VAR_startNext_3_0 = new_Variable_named(L"startNext", 3);
    Array PArray16487 = new_Array_with(1, (Optr)VAR_startNext_3_0);
    Variable VAR_thread_4_0 = new_Variable_named(L"thread", 4);
    Array PArray16490 = new_Array_with(1, (Optr)VAR_thread_4_0);
    Variable VAR__receiver__5_0 = new_Variable_named(L"_receiver_", 5);
    Array PArray16493 = new_Array_with(1, (Optr)VAR__receiver__5_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16495 = new_Send((Optr)VAR__receiver__5_0, SMB_continuation_, 1, (Optr)VAR_startNext_3_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16496 = new_Send((Optr)VAR__receiver__5_0, SMB_context_, 1, (Optr)nil_Const);
    Array PThreadedCode16494 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_variable, (Optr)VAR_startNext_3_0, (Optr)&t_send1, (Optr)PSend16495, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16496, (Optr)&t_method_return);
    Block PBlock16492 = new_Block_with(PArray16493, empty_Array, PThreadedCode16494, 2, PSend16495, PSend16496);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16497 = new_Send((Optr)PBlock16492, SMB_value_, 1, (Optr)VAR_thread_4_0);
    Array PThreadedCode16491 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock16492, (Optr)&t_push_variable, (Optr)VAR_thread_4_0, (Optr)&t_send1, (Optr)PSend16497, (Optr)&t_method_return);
    Block PBlock16489 = new_Block_with(PArray16490, empty_Array, PThreadedCode16491, 1, PSend16497);
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    // ifHasNext:. 
    Send PSend16498 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifHasNext_, 1, (Optr)PBlock16489);
    Super PSuper16499 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16500 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper16499);
    Array PThreadedCode16488 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16489, (Optr)&t_send1, (Optr)PSend16498, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_2_0, (Optr)&t_super1, (Optr)PSuper16499, (Optr)&t_send1, (Optr)PSend16500, (Optr)&t_method_return);
    Block PBlock16486 = new_Block_with(PArray16487, empty_Array, PThreadedCode16488, 2, PSend16498, PSend16500);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16501 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16486);
    Array PThreadedCode16485 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16486, (Optr)&t_send1, (Optr)PSend16501, (Optr)&t_method_return);
    Block PBlock16483 = new_Block_with(PArray16484, empty_Array, PThreadedCode16485, 1, PSend16501);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16502 = new_Send((Optr)VAR_closures_0_0, SMB_do_, 1, (Optr)PBlock16483);
    Array PThreadedCode16480 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_send0, (Optr)PSend16481, (Optr)&t_send1, (Optr)PSend16482, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_push_closure, (Optr)PBlock16483, (Optr)&t_send1, (Optr)PSend16502, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16478 = new_Block_with(PArray16479, empty_Array, PThreadedCode16480, 3, PSend16482, PSend16502, self);
    // on:. 
    Send PSend16503 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16478);
    Array PThreadedCode16477 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16478, (Optr)&t_send1, (Optr)PSend16503, (Optr)&t_method_return);
    Method PMethod16475 = new_Method_with(PArray16476, empty_Array, empty_Array, PThreadedCode16477, 1, PSend16503);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16475, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray16505 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16508 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16507 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)PSend16508);
    // new:. 
    Send PSend16510 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16509 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_states, (Optr)PSend16510);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray16512 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16514 = new_Send((Optr)PFakeThread_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16515 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend16514);
    Array PThreadedCode16513 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_class_reference, (Optr)PFakeThread_classReference, (Optr)&t_send0, (Optr)PSend16514, (Optr)&t_send2, (Optr)PSend16515, (Optr)&t_method_return);
    Block PBlock16511 = new_Block_with(PArray16512, empty_Array, PThreadedCode16513, 1, PSend16515);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend16516 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock16511);
    Array PThreadedCode16506 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16507, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16508, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16509, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16510, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock16511, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend16516, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16504 = new_Method_with(PArray16505, empty_Array, empty_Array, PThreadedCode16506, 4, PAssign16507, PAssign16509, PSend16516, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod16504, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16520 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend16522 = new_Send((Optr)VAR_receiver_1_0, SMB__at_, 1, (Optr)VAR_class_1_1);
    // @. 
    Send PSend16523 = new_Send((Optr)PSend16522, SMB__at_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_put_ = new_Symbol(L"put:");
    // put:. 
    Send PSend16524 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16523);
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    // showInvocation. 
    Send PSend16525 = new_Send((Optr)self, SMB_showInvocation, 0);
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    // switchThread. 
    Send PSend16526 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16527 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    // put:. 
    Send PSend16528 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16527);
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    // showReturn. 
    Send PSend16529 = new_Send((Optr)self, SMB_showReturn, 0);
    // switchThread. 
    Send PSend16530 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16531 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Array PThreadedCode16521 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_send1, (Optr)PSend16522, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16523, (Optr)&t_send1, (Optr)PSend16524, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16525, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16526, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16527, (Optr)&t_send1, (Optr)PSend16528, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16529, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16530, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16531, (Optr)&t_method_return);
    Block PBlock16519 = new_Block_with(PArray16520, empty_Array, PThreadedCode16521, 7, PSend16524, PSend16525, PSend16526, PSend16528, PSend16529, PSend16530, PSend16531);
    Array PThreadedCode16518 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16519, (Optr)&t_method_return);
    Method PMethod16517 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16518, 1, PBlock16519);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16517, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16534 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16535 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)int_0_Const);
    Array PThreadedCode16533 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16534, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16535, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16532 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16533, 3, PSuper16534, PAssign16535, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16532, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_showReturn() {
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16537 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16540 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16539 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16540);
    String string_16541 = new_String(L"--> ");
    Constant string_16541_Const = new_Constant((Optr)string_16541);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16542 = new_Send((Optr)string_16541_Const, SMB__append_, 1, (Optr)VAR_current_0_0);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16543 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16542);
    Array PThreadedCode16538 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16539, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16540, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16541, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send1, (Optr)PSend16542, (Optr)&t_send1, (Optr)PSend16543, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16536 = new_Method_with(empty_Array, PArray16537, empty_Array, PThreadedCode16538, 3, PAssign16539, PSend16543, self);
    
    MethodClosure MC_SMB_showReturn = new_MethodClosure((Method)PMethod16536, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showReturn, MC_SMB_showReturn);
}


static void init_SMB_switchThread() {
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    Variable VAR_thread_0_0 = new_Variable_named(L"thread", 0);
    Array PArray16545 = new_Array_with(1, (Optr)VAR_thread_0_0);
    Variable VAR_aContinuation_1_0 = new_Variable_named(L"aContinuation", 1);
    Array PArray16548 = new_Array_with(1, (Optr)VAR_aContinuation_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16551 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16553 = new_Send((Optr)VAR__receiver__2_0, SMB_continuation_, 1, (Optr)VAR_aContinuation_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16554 = new_Send((Optr)VAR__receiver__2_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16552 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aContinuation_1_0, (Optr)&t_send1, (Optr)PSend16553, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16554, (Optr)&t_method_return);
    Block PBlock16550 = new_Block_with(PArray16551, empty_Array, PThreadedCode16552, 2, PSend16553, PSend16554);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16555 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_current, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16556 = new_Send((Optr)PBlock16550, SMB_value_, 1, (Optr)PSend16555);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend16557 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_next, 0);
    // next. 
    Send PSend16559 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_next, 0);
    Assign PAssign16558 = new_Assign((Optr)VAR_thread_0_0, (Optr)PSend16559);
    Variable VAR_aState_2_0 = new_Variable_named(L"aState", 2);
    Array PArray16563 = new_Array_with(1, (Optr)VAR_aState_2_0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16565 = new_Send((Optr)VAR_aState_2_0, SMB_should, 0);
    // current. 
    Send PSend16566 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend16567 = new_Send((Optr)PSend16565, SMB_be_, 1, (Optr)PSend16566);
    Array PThreadedCode16564 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aState_2_0, (Optr)&t_send0, (Optr)PSend16565, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16566, (Optr)&t_send1, (Optr)PSend16567, (Optr)&t_method_return);
    Block PBlock16562 = new_Block_with(PArray16563, empty_Array, PThreadedCode16564, 1, PSend16567);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16568 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_do_, 1, (Optr)PBlock16562);
    Array PThreadedCode16561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_closure, (Optr)PBlock16562, (Optr)&t_send1, (Optr)PSend16568, (Optr)&t_block_return);
    Block PBlock16560 = new_Block_with(empty_Array, empty_Array, PThreadedCode16561, 1, PSend16568);
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    // ifAtFirst:. 
    Send PSend16569 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifAtFirst_, 1, (Optr)PBlock16560);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16571 = new_Send((Optr)VAR_thread_0_0, SMB_context, 0);
    Assign PAssign16570 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16571);
    Symbol SMB_continuation = new_Symbol(L"continuation");
    // continuation. 
    Send PSend16572 = new_Send((Optr)VAR_thread_0_0, SMB_continuation, 0);
    Symbol SMB_continue = new_Symbol(L"continue");
    // continue. 
    Send PSend16573 = new_Send((Optr)PSend16572, SMB_continue, 0);
    Array PThreadedCode16549 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_closure, (Optr)PBlock16550, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16555, (Optr)&t_send1, (Optr)PSend16556, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16557, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16558, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16559, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16560, (Optr)&t_send1, (Optr)PSend16569, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16570, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16571, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16572, (Optr)&t_send0, (Optr)PSend16573, (Optr)&t_method_return);
    Block PBlock16547 = new_Block_with(PArray16548, empty_Array, PThreadedCode16549, 6, PSend16556, PSend16557, PAssign16558, PSend16569, PAssign16570, PSend16573);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16574 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16547);
    Array PThreadedCode16546 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16547, (Optr)&t_send1, (Optr)PSend16574, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16544 = new_Method_with(empty_Array, PArray16545, empty_Array, PThreadedCode16546, 2, PSend16574, self);
    
    MethodClosure MC_SMB_switchThread = new_MethodClosure((Method)PMethod16544, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_switchThread, MC_SMB_switchThread);
}


static void init_SMB_showInvocation() {
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16576 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16579 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16578 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16579);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend16580 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    // x. 
    Send PSend16581 = new_Send((Optr)PSend16580, SMB_x, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16582 = new_Send((Optr)PSend16581, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16583 = new_Send((Optr)PSend16582, SMB_name, 0);
    String string_16584 = new_String(L"@");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16584_Const = new_Constant((Optr)string_16584);
    // ,. 
    Send PSend16585 = new_Send((Optr)PSend16583, SMB__append_, 1, (Optr)string_16584_Const);
    // x. 
    Send PSend16586 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend16587 = new_Send((Optr)PSend16586, SMB_y, 0);
    // name. 
    Send PSend16588 = new_Send((Optr)PSend16587, SMB_name, 0);
    // ,. 
    Send PSend16589 = new_Send((Optr)PSend16585, SMB__append_, 1, (Optr)PSend16588);
    String string_16590 = new_String(L">>");
    Constant string_16590_Const = new_Constant((Optr)string_16590);
    // ,. 
    Send PSend16591 = new_Send((Optr)PSend16589, SMB__append_, 1, (Optr)string_16590_Const);
    // y. 
    Send PSend16592 = new_Send((Optr)VAR_current_0_0, SMB_y, 0);
    // ,. 
    Send PSend16593 = new_Send((Optr)PSend16591, SMB__append_, 1, (Optr)PSend16592);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16594 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16593);
    Array PThreadedCode16577 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign16578, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16579, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16580, (Optr)&t_send0, (Optr)PSend16581, (Optr)&t_send0, (Optr)PSend16582, (Optr)&t_send0, (Optr)PSend16583, (Optr)&t_push1, (Optr)string_16584, (Optr)&t_send1, (Optr)PSend16585, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16586, (Optr)&t_send0, (Optr)PSend16587, (Optr)&t_send0, (Optr)PSend16588, (Optr)&t_send1, (Optr)PSend16589, (Optr)&t_push1, (Optr)string_16590, (Optr)&t_send1, (Optr)PSend16591, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16592, (Optr)&t_send1, (Optr)PSend16593, (Optr)&t_send1, (Optr)PSend16594, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16575 = new_Method_with(empty_Array, PArray16576, empty_Array, PThreadedCode16577, 3, PAssign16578, PSend16594, self);
    
    MethodClosure MC_SMB_showInvocation = new_MethodClosure((Method)PMethod16575, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showInvocation, MC_SMB_showInvocation);
}


static void init_SMB_show_() {
    Symbol SMB_show_ = new_Symbol(L"show:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16596 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16598 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16600 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16602 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16603 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16601 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16602, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16603, (Optr)&t_method_return);
    Block PBlock16599 = new_Block_with(PArray16600, empty_Array, PThreadedCode16601, 2, PSend16602, PSend16603);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16604 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16605 = new_Send((Optr)PBlock16599, SMB_value_, 1, (Optr)PSend16604);
    Array PThreadedCode16597 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16598, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16599, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16604, (Optr)&t_send1, (Optr)PSend16605, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16595 = new_Method_with(PArray16596, empty_Array, empty_Array, PThreadedCode16597, 3, PSend16598, PSend16605, self);
    
    MethodClosure MC_SMB_show_ = new_MethodClosure((Method)PMethod16595, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_show_, MC_SMB_show_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16607 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16608 = new_Array_with(1, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16611 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16613 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend16614 = new_Send((Optr)PSend16613, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend16619 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16618 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16619);
    Super PSuper16621 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Assign PAssign16620 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16621);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend16623 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign16622 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16623);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16624 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_1);
    Array PThreadedCode16617 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16618, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16619, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16620, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16621, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16622, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16623, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16624, (Optr)&t_block_return);
    Block PBlock16616 = new_Block_with(empty_Array, empty_Array, PThreadedCode16617, 4, PAssign16618, PAssign16620, PAssign16622, PSend16624);
    // ifTrue:. 
    Send PSend16615 = new_Send((Optr)PSend16614, SMB_ifTrue_, 1, (Optr)PBlock16616);
    Super PSuper16625 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16612 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16613, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16614, (Optr)&t_send_ifTrue_, (Optr)PSend16615, (Optr)PBlock16616, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16625, (Optr)&t_method_return);
    Block PBlock16610 = new_Block_with(PArray16611, empty_Array, PThreadedCode16612, 2, PSend16615, PSuper16625);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16626 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16610);
    Array PThreadedCode16609 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16610, (Optr)&t_send1, (Optr)PSend16626, (Optr)&t_method_return);
    Method PMethod16606 = new_Method_with(PArray16607, PArray16608, empty_Array, PThreadedCode16609, 1, PSend16626);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16606, Interpretation_ParallelDebugger_Class);
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