#include <lib/class/Interpretation/ParallelDebugger.h>


Optr layout_Interpretation_ParallelDebugger_Class_class;
Optr slot_Interpretation_ParallelDebugger_localIndent;
Optr slot_Interpretation_ParallelDebugger_threads;
Optr slot_Interpretation_ParallelDebugger_states;
Optr layout_Interpretation_ParallelDebugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16558 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16561 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16567 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16566 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16567, (Optr)&t_block_return);
    Block PBlock16565 = new_Block_with(empty_Array, empty_Array, PThreadedCode16566, 1, PSend16567);
    // ifNil:. 
    Send PSend16564 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16565);
    Assign PAssign16563 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16564);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16571 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16570 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16571);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16572 = new_Send((Optr)PAssign16570, SMB_isNil, 0);
    Array PThreadedCode16569 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16570, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16571, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16572, (Optr)&t_block_return);
    Block PBlock16568 = new_Block_with(empty_Array, empty_Array, PThreadedCode16569, 1, PSend16572);
    String string_16575 = new_String(L"  ");
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Constant string_16575_Const = new_Constant((Optr)string_16575);
    // stderr:. 
    Send PSend16576 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16575_Const);
    Array PThreadedCode16574 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16575, (Optr)&t_send1, (Optr)PSend16576, (Optr)&t_block_return);
    Block PBlock16573 = new_Block_with(empty_Array, empty_Array, PThreadedCode16574, 1, PSend16576);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16577 = new_Send((Optr)PBlock16568, SMB_whileFalse_, 1, (Optr)PBlock16573);
    String string_16580 = new_String(L"  ");
    Constant string_16580_Const = new_Constant((Optr)string_16580);
    // stderr:. 
    Send PSend16581 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16580_Const);
    Array PThreadedCode16579 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16580, (Optr)&t_send1, (Optr)PSend16581, (Optr)&t_block_return);
    Block PBlock16578 = new_Block_with(empty_Array, empty_Array, PThreadedCode16579, 1, PSend16581);
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    // doTimes:. 
    Send PSend16582 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB_doTimes_, 1, (Optr)PBlock16578);
    Array PThreadedCode16562 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16563, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16565, (Optr)&t_send1, (Optr)PSend16564, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16568, (Optr)&t_push_closure, (Optr)PBlock16573, (Optr)&t_send1, (Optr)PSend16577, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_closure, (Optr)PBlock16578, (Optr)&t_send1, (Optr)PSend16582, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16560 = new_Block_with(PArray16561, empty_Array, PThreadedCode16562, 4, PAssign16563, PSend16577, PSend16582, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16583 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16560);
    Array PThreadedCode16559 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16560, (Optr)&t_send1, (Optr)PSend16583, (Optr)&t_method_return);
    Method PMethod16557 = new_Method_with(empty_Array, PArray16558, empty_Array, PThreadedCode16559, 1, PSend16583);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16557, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_closures_0_0 = new_Variable_named(L"closures", 0);
    Array PArray16585 = new_Array_with(1, (Optr)VAR_closures_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16588 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16590 = new_Send((Optr)VAR_closures_0_0, SMB_size, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend16591 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend16590);
    Variable VAR_aClosure_2_0 = new_Variable_named(L"aClosure", 2);
    Array PArray16593 = new_Array_with(1, (Optr)VAR_aClosure_2_0);
    Variable VAR_startNext_3_0 = new_Variable_named(L"startNext", 3);
    Array PArray16596 = new_Array_with(1, (Optr)VAR_startNext_3_0);
    Variable VAR_thread_4_0 = new_Variable_named(L"thread", 4);
    Array PArray16599 = new_Array_with(1, (Optr)VAR_thread_4_0);
    Variable VAR__receiver__5_0 = new_Variable_named(L"_receiver_", 5);
    Array PArray16602 = new_Array_with(1, (Optr)VAR__receiver__5_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16604 = new_Send((Optr)VAR__receiver__5_0, SMB_continuation_, 1, (Optr)VAR_startNext_3_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16605 = new_Send((Optr)VAR__receiver__5_0, SMB_context_, 1, (Optr)nil_Const);
    Array PThreadedCode16603 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_variable, (Optr)VAR_startNext_3_0, (Optr)&t_send1, (Optr)PSend16604, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16605, (Optr)&t_method_return);
    Block PBlock16601 = new_Block_with(PArray16602, empty_Array, PThreadedCode16603, 2, PSend16604, PSend16605);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16606 = new_Send((Optr)PBlock16601, SMB_value_, 1, (Optr)VAR_thread_4_0);
    Array PThreadedCode16600 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock16601, (Optr)&t_push_variable, (Optr)VAR_thread_4_0, (Optr)&t_send1, (Optr)PSend16606, (Optr)&t_method_return);
    Block PBlock16598 = new_Block_with(PArray16599, empty_Array, PThreadedCode16600, 1, PSend16606);
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    // ifHasNext:. 
    Send PSend16607 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifHasNext_, 1, (Optr)PBlock16598);
    Super PSuper16608 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16609 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper16608);
    Array PThreadedCode16597 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16598, (Optr)&t_send1, (Optr)PSend16607, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_2_0, (Optr)&t_super1, (Optr)PSuper16608, (Optr)&t_send1, (Optr)PSend16609, (Optr)&t_method_return);
    Block PBlock16595 = new_Block_with(PArray16596, empty_Array, PThreadedCode16597, 2, PSend16607, PSend16609);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16610 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16595);
    Array PThreadedCode16594 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16595, (Optr)&t_send1, (Optr)PSend16610, (Optr)&t_method_return);
    Block PBlock16592 = new_Block_with(PArray16593, empty_Array, PThreadedCode16594, 1, PSend16610);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16611 = new_Send((Optr)VAR_closures_0_0, SMB_do_, 1, (Optr)PBlock16592);
    Array PThreadedCode16589 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_send0, (Optr)PSend16590, (Optr)&t_send1, (Optr)PSend16591, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_push_closure, (Optr)PBlock16592, (Optr)&t_send1, (Optr)PSend16611, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16587 = new_Block_with(PArray16588, empty_Array, PThreadedCode16589, 3, PSend16591, PSend16611, self);
    // on:. 
    Send PSend16612 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16587);
    Array PThreadedCode16586 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16587, (Optr)&t_send1, (Optr)PSend16612, (Optr)&t_method_return);
    Method PMethod16584 = new_Method_with(PArray16585, empty_Array, empty_Array, PThreadedCode16586, 1, PSend16612);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16584, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray16614 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16617 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16616 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)PSend16617);
    // new:. 
    Send PSend16619 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16618 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_states, (Optr)PSend16619);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray16621 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16623 = new_Send((Optr)PFakeThread_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16624 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend16623);
    Array PThreadedCode16622 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_class_reference, (Optr)PFakeThread_classReference, (Optr)&t_send0, (Optr)PSend16623, (Optr)&t_send2, (Optr)PSend16624, (Optr)&t_method_return);
    Block PBlock16620 = new_Block_with(PArray16621, empty_Array, PThreadedCode16622, 1, PSend16624);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend16625 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock16620);
    Array PThreadedCode16615 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16616, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16617, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16618, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16619, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock16620, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend16625, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16613 = new_Method_with(PArray16614, empty_Array, empty_Array, PThreadedCode16615, 4, PAssign16616, PAssign16618, PSend16625, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod16613, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16629 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend16631 = new_Send((Optr)VAR_receiver_1_0, SMB__at_, 1, (Optr)VAR_class_1_1);
    // @. 
    Send PSend16632 = new_Send((Optr)PSend16631, SMB__at_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_put_ = new_Symbol(L"put:");
    // put:. 
    Send PSend16633 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16632);
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    // showInvocation. 
    Send PSend16634 = new_Send((Optr)self, SMB_showInvocation, 0);
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    // switchThread. 
    Send PSend16635 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16636 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    // put:. 
    Send PSend16637 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16636);
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    // showReturn. 
    Send PSend16638 = new_Send((Optr)self, SMB_showReturn, 0);
    // switchThread. 
    Send PSend16639 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16640 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Array PThreadedCode16630 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_send1, (Optr)PSend16631, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16632, (Optr)&t_send1, (Optr)PSend16633, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16634, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16635, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16636, (Optr)&t_send1, (Optr)PSend16637, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16638, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16639, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16640, (Optr)&t_method_return);
    Block PBlock16628 = new_Block_with(PArray16629, empty_Array, PThreadedCode16630, 7, PSend16633, PSend16634, PSend16635, PSend16637, PSend16638, PSend16639, PSend16640);
    Array PThreadedCode16627 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16628, (Optr)&t_method_return);
    Method PMethod16626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16627, 1, PBlock16628);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16626, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16643 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16644 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)int_0_Const);
    Array PThreadedCode16642 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16643, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16644, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16642, 3, PSuper16643, PAssign16644, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16641, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_showReturn() {
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16646 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16649 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16648 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16649);
    String string_16650 = new_String(L"--> ");
    Constant string_16650_Const = new_Constant((Optr)string_16650);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16651 = new_Send((Optr)string_16650_Const, SMB__append_, 1, (Optr)VAR_current_0_0);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16652 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16651);
    Array PThreadedCode16647 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16648, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16649, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16650, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send1, (Optr)PSend16651, (Optr)&t_send1, (Optr)PSend16652, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16645 = new_Method_with(empty_Array, PArray16646, empty_Array, PThreadedCode16647, 3, PAssign16648, PSend16652, self);
    
    MethodClosure MC_SMB_showReturn = new_MethodClosure((Method)PMethod16645, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showReturn, MC_SMB_showReturn);
}


static void init_SMB_switchThread() {
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    Variable VAR_thread_0_0 = new_Variable_named(L"thread", 0);
    Array PArray16654 = new_Array_with(1, (Optr)VAR_thread_0_0);
    Variable VAR_aContinuation_1_0 = new_Variable_named(L"aContinuation", 1);
    Array PArray16657 = new_Array_with(1, (Optr)VAR_aContinuation_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16660 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16662 = new_Send((Optr)VAR__receiver__2_0, SMB_continuation_, 1, (Optr)VAR_aContinuation_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16663 = new_Send((Optr)VAR__receiver__2_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16661 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aContinuation_1_0, (Optr)&t_send1, (Optr)PSend16662, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16663, (Optr)&t_method_return);
    Block PBlock16659 = new_Block_with(PArray16660, empty_Array, PThreadedCode16661, 2, PSend16662, PSend16663);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16664 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_current, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16665 = new_Send((Optr)PBlock16659, SMB_value_, 1, (Optr)PSend16664);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend16666 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_next, 0);
    // next. 
    Send PSend16668 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_next, 0);
    Assign PAssign16667 = new_Assign((Optr)VAR_thread_0_0, (Optr)PSend16668);
    Variable VAR_aState_2_0 = new_Variable_named(L"aState", 2);
    Array PArray16672 = new_Array_with(1, (Optr)VAR_aState_2_0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16674 = new_Send((Optr)VAR_aState_2_0, SMB_should, 0);
    // current. 
    Send PSend16675 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend16676 = new_Send((Optr)PSend16674, SMB_be_, 1, (Optr)PSend16675);
    Array PThreadedCode16673 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aState_2_0, (Optr)&t_send0, (Optr)PSend16674, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16675, (Optr)&t_send1, (Optr)PSend16676, (Optr)&t_method_return);
    Block PBlock16671 = new_Block_with(PArray16672, empty_Array, PThreadedCode16673, 1, PSend16676);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16677 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_do_, 1, (Optr)PBlock16671);
    Array PThreadedCode16670 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_closure, (Optr)PBlock16671, (Optr)&t_send1, (Optr)PSend16677, (Optr)&t_block_return);
    Block PBlock16669 = new_Block_with(empty_Array, empty_Array, PThreadedCode16670, 1, PSend16677);
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    // ifAtFirst:. 
    Send PSend16678 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifAtFirst_, 1, (Optr)PBlock16669);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16680 = new_Send((Optr)VAR_thread_0_0, SMB_context, 0);
    Assign PAssign16679 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16680);
    Symbol SMB_continuation = new_Symbol(L"continuation");
    // continuation. 
    Send PSend16681 = new_Send((Optr)VAR_thread_0_0, SMB_continuation, 0);
    Symbol SMB_continue = new_Symbol(L"continue");
    // continue. 
    Send PSend16682 = new_Send((Optr)PSend16681, SMB_continue, 0);
    Array PThreadedCode16658 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_closure, (Optr)PBlock16659, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16664, (Optr)&t_send1, (Optr)PSend16665, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16666, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16667, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16668, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16669, (Optr)&t_send1, (Optr)PSend16678, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16679, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16680, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16681, (Optr)&t_send0, (Optr)PSend16682, (Optr)&t_method_return);
    Block PBlock16656 = new_Block_with(PArray16657, empty_Array, PThreadedCode16658, 6, PSend16665, PSend16666, PAssign16667, PSend16678, PAssign16679, PSend16682);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16683 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16656);
    Array PThreadedCode16655 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16656, (Optr)&t_send1, (Optr)PSend16683, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16653 = new_Method_with(empty_Array, PArray16654, empty_Array, PThreadedCode16655, 2, PSend16683, self);
    
    MethodClosure MC_SMB_switchThread = new_MethodClosure((Method)PMethod16653, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_switchThread, MC_SMB_switchThread);
}


static void init_SMB_showInvocation() {
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16685 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16688 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16687 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16688);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend16689 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    // x. 
    Send PSend16690 = new_Send((Optr)PSend16689, SMB_x, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16691 = new_Send((Optr)PSend16690, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16692 = new_Send((Optr)PSend16691, SMB_name, 0);
    String string_16693 = new_String(L"@");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16693_Const = new_Constant((Optr)string_16693);
    // ,. 
    Send PSend16694 = new_Send((Optr)PSend16692, SMB__append_, 1, (Optr)string_16693_Const);
    // x. 
    Send PSend16695 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend16696 = new_Send((Optr)PSend16695, SMB_y, 0);
    // name. 
    Send PSend16697 = new_Send((Optr)PSend16696, SMB_name, 0);
    // ,. 
    Send PSend16698 = new_Send((Optr)PSend16694, SMB__append_, 1, (Optr)PSend16697);
    String string_16699 = new_String(L">>");
    Constant string_16699_Const = new_Constant((Optr)string_16699);
    // ,. 
    Send PSend16700 = new_Send((Optr)PSend16698, SMB__append_, 1, (Optr)string_16699_Const);
    // y. 
    Send PSend16701 = new_Send((Optr)VAR_current_0_0, SMB_y, 0);
    // ,. 
    Send PSend16702 = new_Send((Optr)PSend16700, SMB__append_, 1, (Optr)PSend16701);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16703 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16702);
    Array PThreadedCode16686 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign16687, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16688, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16689, (Optr)&t_send0, (Optr)PSend16690, (Optr)&t_send0, (Optr)PSend16691, (Optr)&t_send0, (Optr)PSend16692, (Optr)&t_push1, (Optr)string_16693, (Optr)&t_send1, (Optr)PSend16694, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16695, (Optr)&t_send0, (Optr)PSend16696, (Optr)&t_send0, (Optr)PSend16697, (Optr)&t_send1, (Optr)PSend16698, (Optr)&t_push1, (Optr)string_16699, (Optr)&t_send1, (Optr)PSend16700, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16701, (Optr)&t_send1, (Optr)PSend16702, (Optr)&t_send1, (Optr)PSend16703, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16684 = new_Method_with(empty_Array, PArray16685, empty_Array, PThreadedCode16686, 3, PAssign16687, PSend16703, self);
    
    MethodClosure MC_SMB_showInvocation = new_MethodClosure((Method)PMethod16684, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showInvocation, MC_SMB_showInvocation);
}


static void init_SMB_show_() {
    Symbol SMB_show_ = new_Symbol(L"show:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16705 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16707 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16709 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16711 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16712 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16710 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16712, (Optr)&t_method_return);
    Block PBlock16708 = new_Block_with(PArray16709, empty_Array, PThreadedCode16710, 2, PSend16711, PSend16712);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16713 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16714 = new_Send((Optr)PBlock16708, SMB_value_, 1, (Optr)PSend16713);
    Array PThreadedCode16706 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16707, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16708, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16713, (Optr)&t_send1, (Optr)PSend16714, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16704 = new_Method_with(PArray16705, empty_Array, empty_Array, PThreadedCode16706, 3, PSend16707, PSend16714, self);
    
    MethodClosure MC_SMB_show_ = new_MethodClosure((Method)PMethod16704, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_show_, MC_SMB_show_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16716 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16717 = new_Array_with(1, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16720 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16722 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend16723 = new_Send((Optr)PSend16722, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend16728 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16727 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16728);
    Super PSuper16730 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Assign PAssign16729 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16730);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend16732 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign16731 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16732);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16733 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_1);
    Array PThreadedCode16726 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16727, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16728, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16729, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16730, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16731, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16732, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16733, (Optr)&t_block_return);
    Block PBlock16725 = new_Block_with(empty_Array, empty_Array, PThreadedCode16726, 4, PAssign16727, PAssign16729, PAssign16731, PSend16733);
    // ifTrue:. 
    Send PSend16724 = new_Send((Optr)PSend16723, SMB_ifTrue_, 1, (Optr)PBlock16725);
    Super PSuper16734 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16721 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16722, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16723, (Optr)&t_send_ifTrue_, (Optr)PSend16724, (Optr)PBlock16725, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16734, (Optr)&t_method_return);
    Block PBlock16719 = new_Block_with(PArray16720, empty_Array, PThreadedCode16721, 2, PSend16724, PSuper16734);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16735 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16719);
    Array PThreadedCode16718 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16719, (Optr)&t_send1, (Optr)PSend16735, (Optr)&t_method_return);
    Method PMethod16715 = new_Method_with(PArray16716, PArray16717, empty_Array, PThreadedCode16718, 1, PSend16735);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16715, Interpretation_ParallelDebugger_Class);
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