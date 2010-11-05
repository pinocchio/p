#include <lib/class/Interpretation/ParallelDebugger.h>


Optr layout_Interpretation_ParallelDebugger_Class_class;
Optr slot_Interpretation_ParallelDebugger_localIndent;
Optr slot_Interpretation_ParallelDebugger_threads;
Optr slot_Interpretation_ParallelDebugger_states;
Optr layout_Interpretation_ParallelDebugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16522 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16525 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16531 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16530 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16531, (Optr)&t_block_return);
    Block PBlock16529 = new_Block_with(empty_Array, empty_Array, PThreadedCode16530, 1, PSend16531);
    // ifNil:. 
    Send PSend16528 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16529);
    Assign PAssign16527 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16528);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16535 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16534 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16535);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16536 = new_Send((Optr)PAssign16534, SMB_isNil, 0);
    Array PThreadedCode16533 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16534, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16535, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16536, (Optr)&t_block_return);
    Block PBlock16532 = new_Block_with(empty_Array, empty_Array, PThreadedCode16533, 1, PSend16536);
    String string_16539 = new_String(L"  ");
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Constant string_16539_Const = new_Constant((Optr)string_16539);
    // stderr:. 
    Send PSend16540 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16539_Const);
    Array PThreadedCode16538 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16539, (Optr)&t_send1, (Optr)PSend16540, (Optr)&t_block_return);
    Block PBlock16537 = new_Block_with(empty_Array, empty_Array, PThreadedCode16538, 1, PSend16540);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16541 = new_Send((Optr)PBlock16532, SMB_whileFalse_, 1, (Optr)PBlock16537);
    String string_16544 = new_String(L"  ");
    Constant string_16544_Const = new_Constant((Optr)string_16544);
    // stderr:. 
    Send PSend16545 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16544_Const);
    Array PThreadedCode16543 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16544, (Optr)&t_send1, (Optr)PSend16545, (Optr)&t_block_return);
    Block PBlock16542 = new_Block_with(empty_Array, empty_Array, PThreadedCode16543, 1, PSend16545);
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    // doTimes:. 
    Send PSend16546 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB_doTimes_, 1, (Optr)PBlock16542);
    Array PThreadedCode16526 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16527, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16529, (Optr)&t_send1, (Optr)PSend16528, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16532, (Optr)&t_push_closure, (Optr)PBlock16537, (Optr)&t_send1, (Optr)PSend16541, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_closure, (Optr)PBlock16542, (Optr)&t_send1, (Optr)PSend16546, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16524 = new_Block_with(PArray16525, empty_Array, PThreadedCode16526, 4, PAssign16527, PSend16541, PSend16546, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16547 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16524);
    Array PThreadedCode16523 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16524, (Optr)&t_send1, (Optr)PSend16547, (Optr)&t_method_return);
    Method PMethod16521 = new_Method_with(empty_Array, PArray16522, empty_Array, PThreadedCode16523, 1, PSend16547);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16521, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_closures_0_0 = new_Variable_named(L"closures", 0);
    Array PArray16549 = new_Array_with(1, (Optr)VAR_closures_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16552 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16554 = new_Send((Optr)VAR_closures_0_0, SMB_size, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend16555 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend16554);
    Variable VAR_aClosure_2_0 = new_Variable_named(L"aClosure", 2);
    Array PArray16557 = new_Array_with(1, (Optr)VAR_aClosure_2_0);
    Variable VAR_startNext_3_0 = new_Variable_named(L"startNext", 3);
    Array PArray16560 = new_Array_with(1, (Optr)VAR_startNext_3_0);
    Variable VAR_thread_4_0 = new_Variable_named(L"thread", 4);
    Array PArray16563 = new_Array_with(1, (Optr)VAR_thread_4_0);
    Variable VAR__receiver__5_0 = new_Variable_named(L"_receiver_", 5);
    Array PArray16566 = new_Array_with(1, (Optr)VAR__receiver__5_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16568 = new_Send((Optr)VAR__receiver__5_0, SMB_continuation_, 1, (Optr)VAR_startNext_3_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16569 = new_Send((Optr)VAR__receiver__5_0, SMB_context_, 1, (Optr)nil_Const);
    Array PThreadedCode16567 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_variable, (Optr)VAR_startNext_3_0, (Optr)&t_send1, (Optr)PSend16568, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16569, (Optr)&t_method_return);
    Block PBlock16565 = new_Block_with(PArray16566, empty_Array, PThreadedCode16567, 2, PSend16568, PSend16569);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16570 = new_Send((Optr)PBlock16565, SMB_value_, 1, (Optr)VAR_thread_4_0);
    Array PThreadedCode16564 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock16565, (Optr)&t_push_variable, (Optr)VAR_thread_4_0, (Optr)&t_send1, (Optr)PSend16570, (Optr)&t_method_return);
    Block PBlock16562 = new_Block_with(PArray16563, empty_Array, PThreadedCode16564, 1, PSend16570);
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    // ifHasNext:. 
    Send PSend16571 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifHasNext_, 1, (Optr)PBlock16562);
    Super PSuper16572 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16573 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper16572);
    Array PThreadedCode16561 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16562, (Optr)&t_send1, (Optr)PSend16571, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_2_0, (Optr)&t_super1, (Optr)PSuper16572, (Optr)&t_send1, (Optr)PSend16573, (Optr)&t_method_return);
    Block PBlock16559 = new_Block_with(PArray16560, empty_Array, PThreadedCode16561, 2, PSend16571, PSend16573);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16574 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16559);
    Array PThreadedCode16558 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16559, (Optr)&t_send1, (Optr)PSend16574, (Optr)&t_method_return);
    Block PBlock16556 = new_Block_with(PArray16557, empty_Array, PThreadedCode16558, 1, PSend16574);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16575 = new_Send((Optr)VAR_closures_0_0, SMB_do_, 1, (Optr)PBlock16556);
    Array PThreadedCode16553 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_send0, (Optr)PSend16554, (Optr)&t_send1, (Optr)PSend16555, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_push_closure, (Optr)PBlock16556, (Optr)&t_send1, (Optr)PSend16575, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16551 = new_Block_with(PArray16552, empty_Array, PThreadedCode16553, 3, PSend16555, PSend16575, self);
    // on:. 
    Send PSend16576 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16551);
    Array PThreadedCode16550 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16551, (Optr)&t_send1, (Optr)PSend16576, (Optr)&t_method_return);
    Method PMethod16548 = new_Method_with(PArray16549, empty_Array, empty_Array, PThreadedCode16550, 1, PSend16576);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16548, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray16578 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16581 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16580 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)PSend16581);
    // new:. 
    Send PSend16583 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16582 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_states, (Optr)PSend16583);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray16585 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16587 = new_Send((Optr)PFakeThread_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16588 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend16587);
    Array PThreadedCode16586 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_class_reference, (Optr)PFakeThread_classReference, (Optr)&t_send0, (Optr)PSend16587, (Optr)&t_send2, (Optr)PSend16588, (Optr)&t_method_return);
    Block PBlock16584 = new_Block_with(PArray16585, empty_Array, PThreadedCode16586, 1, PSend16588);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend16589 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock16584);
    Array PThreadedCode16579 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16580, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16581, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16582, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16583, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock16584, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend16589, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16577 = new_Method_with(PArray16578, empty_Array, empty_Array, PThreadedCode16579, 4, PAssign16580, PAssign16582, PSend16589, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod16577, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16593 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend16595 = new_Send((Optr)VAR_receiver_1_0, SMB__at_, 1, (Optr)VAR_class_1_1);
    // @. 
    Send PSend16596 = new_Send((Optr)PSend16595, SMB__at_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_put_ = new_Symbol(L"put:");
    // put:. 
    Send PSend16597 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16596);
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    // showInvocation. 
    Send PSend16598 = new_Send((Optr)self, SMB_showInvocation, 0);
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    // switchThread. 
    Send PSend16599 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16600 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    // put:. 
    Send PSend16601 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16600);
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    // showReturn. 
    Send PSend16602 = new_Send((Optr)self, SMB_showReturn, 0);
    // switchThread. 
    Send PSend16603 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16604 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Array PThreadedCode16594 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_send1, (Optr)PSend16595, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16596, (Optr)&t_send1, (Optr)PSend16597, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16598, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16599, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16600, (Optr)&t_send1, (Optr)PSend16601, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16602, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16603, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16604, (Optr)&t_method_return);
    Block PBlock16592 = new_Block_with(PArray16593, empty_Array, PThreadedCode16594, 7, PSend16597, PSend16598, PSend16599, PSend16601, PSend16602, PSend16603, PSend16604);
    Array PThreadedCode16591 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16592, (Optr)&t_method_return);
    Method PMethod16590 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16591, 1, PBlock16592);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16590, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16607 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16608 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)int_0_Const);
    Array PThreadedCode16606 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16607, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16608, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16605 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16606, 3, PSuper16607, PAssign16608, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16605, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_showReturn() {
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16610 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16613 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16612 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16613);
    String string_16614 = new_String(L"--> ");
    Constant string_16614_Const = new_Constant((Optr)string_16614);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16615 = new_Send((Optr)string_16614_Const, SMB__append_, 1, (Optr)VAR_current_0_0);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16616 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16615);
    Array PThreadedCode16611 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16612, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16613, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16614, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send1, (Optr)PSend16615, (Optr)&t_send1, (Optr)PSend16616, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16609 = new_Method_with(empty_Array, PArray16610, empty_Array, PThreadedCode16611, 3, PAssign16612, PSend16616, self);
    
    MethodClosure MC_SMB_showReturn = new_MethodClosure((Method)PMethod16609, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showReturn, MC_SMB_showReturn);
}


static void init_SMB_switchThread() {
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    Variable VAR_thread_0_0 = new_Variable_named(L"thread", 0);
    Array PArray16618 = new_Array_with(1, (Optr)VAR_thread_0_0);
    Variable VAR_aContinuation_1_0 = new_Variable_named(L"aContinuation", 1);
    Array PArray16621 = new_Array_with(1, (Optr)VAR_aContinuation_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16624 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16626 = new_Send((Optr)VAR__receiver__2_0, SMB_continuation_, 1, (Optr)VAR_aContinuation_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16627 = new_Send((Optr)VAR__receiver__2_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16625 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aContinuation_1_0, (Optr)&t_send1, (Optr)PSend16626, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16627, (Optr)&t_method_return);
    Block PBlock16623 = new_Block_with(PArray16624, empty_Array, PThreadedCode16625, 2, PSend16626, PSend16627);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16628 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_current, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16629 = new_Send((Optr)PBlock16623, SMB_value_, 1, (Optr)PSend16628);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend16630 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_next, 0);
    // next. 
    Send PSend16632 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_next, 0);
    Assign PAssign16631 = new_Assign((Optr)VAR_thread_0_0, (Optr)PSend16632);
    Variable VAR_aState_2_0 = new_Variable_named(L"aState", 2);
    Array PArray16636 = new_Array_with(1, (Optr)VAR_aState_2_0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16638 = new_Send((Optr)VAR_aState_2_0, SMB_should, 0);
    // current. 
    Send PSend16639 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend16640 = new_Send((Optr)PSend16638, SMB_be_, 1, (Optr)PSend16639);
    Array PThreadedCode16637 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aState_2_0, (Optr)&t_send0, (Optr)PSend16638, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16639, (Optr)&t_send1, (Optr)PSend16640, (Optr)&t_method_return);
    Block PBlock16635 = new_Block_with(PArray16636, empty_Array, PThreadedCode16637, 1, PSend16640);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16641 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_do_, 1, (Optr)PBlock16635);
    Array PThreadedCode16634 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_closure, (Optr)PBlock16635, (Optr)&t_send1, (Optr)PSend16641, (Optr)&t_block_return);
    Block PBlock16633 = new_Block_with(empty_Array, empty_Array, PThreadedCode16634, 1, PSend16641);
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    // ifAtFirst:. 
    Send PSend16642 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifAtFirst_, 1, (Optr)PBlock16633);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16644 = new_Send((Optr)VAR_thread_0_0, SMB_context, 0);
    Assign PAssign16643 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16644);
    Symbol SMB_continuation = new_Symbol(L"continuation");
    // continuation. 
    Send PSend16645 = new_Send((Optr)VAR_thread_0_0, SMB_continuation, 0);
    Symbol SMB_continue = new_Symbol(L"continue");
    // continue. 
    Send PSend16646 = new_Send((Optr)PSend16645, SMB_continue, 0);
    Array PThreadedCode16622 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_closure, (Optr)PBlock16623, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16628, (Optr)&t_send1, (Optr)PSend16629, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16630, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16631, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16632, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16633, (Optr)&t_send1, (Optr)PSend16642, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16643, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16644, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16645, (Optr)&t_send0, (Optr)PSend16646, (Optr)&t_method_return);
    Block PBlock16620 = new_Block_with(PArray16621, empty_Array, PThreadedCode16622, 6, PSend16629, PSend16630, PAssign16631, PSend16642, PAssign16643, PSend16646);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16647 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16620);
    Array PThreadedCode16619 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16620, (Optr)&t_send1, (Optr)PSend16647, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16617 = new_Method_with(empty_Array, PArray16618, empty_Array, PThreadedCode16619, 2, PSend16647, self);
    
    MethodClosure MC_SMB_switchThread = new_MethodClosure((Method)PMethod16617, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_switchThread, MC_SMB_switchThread);
}


static void init_SMB_showInvocation() {
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16649 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16652 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16651 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16652);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend16653 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    // x. 
    Send PSend16654 = new_Send((Optr)PSend16653, SMB_x, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16655 = new_Send((Optr)PSend16654, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16656 = new_Send((Optr)PSend16655, SMB_name, 0);
    String string_16657 = new_String(L"@");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16657_Const = new_Constant((Optr)string_16657);
    // ,. 
    Send PSend16658 = new_Send((Optr)PSend16656, SMB__append_, 1, (Optr)string_16657_Const);
    // x. 
    Send PSend16659 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend16660 = new_Send((Optr)PSend16659, SMB_y, 0);
    // name. 
    Send PSend16661 = new_Send((Optr)PSend16660, SMB_name, 0);
    // ,. 
    Send PSend16662 = new_Send((Optr)PSend16658, SMB__append_, 1, (Optr)PSend16661);
    String string_16663 = new_String(L">>");
    Constant string_16663_Const = new_Constant((Optr)string_16663);
    // ,. 
    Send PSend16664 = new_Send((Optr)PSend16662, SMB__append_, 1, (Optr)string_16663_Const);
    // y. 
    Send PSend16665 = new_Send((Optr)VAR_current_0_0, SMB_y, 0);
    // ,. 
    Send PSend16666 = new_Send((Optr)PSend16664, SMB__append_, 1, (Optr)PSend16665);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16667 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16666);
    Array PThreadedCode16650 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign16651, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16652, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16653, (Optr)&t_send0, (Optr)PSend16654, (Optr)&t_send0, (Optr)PSend16655, (Optr)&t_send0, (Optr)PSend16656, (Optr)&t_push1, (Optr)string_16657, (Optr)&t_send1, (Optr)PSend16658, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16659, (Optr)&t_send0, (Optr)PSend16660, (Optr)&t_send0, (Optr)PSend16661, (Optr)&t_send1, (Optr)PSend16662, (Optr)&t_push1, (Optr)string_16663, (Optr)&t_send1, (Optr)PSend16664, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16665, (Optr)&t_send1, (Optr)PSend16666, (Optr)&t_send1, (Optr)PSend16667, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16648 = new_Method_with(empty_Array, PArray16649, empty_Array, PThreadedCode16650, 3, PAssign16651, PSend16667, self);
    
    MethodClosure MC_SMB_showInvocation = new_MethodClosure((Method)PMethod16648, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showInvocation, MC_SMB_showInvocation);
}


static void init_SMB_show_() {
    Symbol SMB_show_ = new_Symbol(L"show:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16669 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16671 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16673 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16675 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16676 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16674 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16675, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16676, (Optr)&t_method_return);
    Block PBlock16672 = new_Block_with(PArray16673, empty_Array, PThreadedCode16674, 2, PSend16675, PSend16676);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16677 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16678 = new_Send((Optr)PBlock16672, SMB_value_, 1, (Optr)PSend16677);
    Array PThreadedCode16670 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16671, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16672, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16677, (Optr)&t_send1, (Optr)PSend16678, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16668 = new_Method_with(PArray16669, empty_Array, empty_Array, PThreadedCode16670, 3, PSend16671, PSend16678, self);
    
    MethodClosure MC_SMB_show_ = new_MethodClosure((Method)PMethod16668, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_show_, MC_SMB_show_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16680 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16681 = new_Array_with(1, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16684 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16686 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend16687 = new_Send((Optr)PSend16686, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend16692 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16691 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16692);
    Super PSuper16694 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Assign PAssign16693 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16694);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend16696 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign16695 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16696);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16697 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_1);
    Array PThreadedCode16690 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16691, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16692, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16693, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16694, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16695, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16696, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16697, (Optr)&t_block_return);
    Block PBlock16689 = new_Block_with(empty_Array, empty_Array, PThreadedCode16690, 4, PAssign16691, PAssign16693, PAssign16695, PSend16697);
    // ifTrue:. 
    Send PSend16688 = new_Send((Optr)PSend16687, SMB_ifTrue_, 1, (Optr)PBlock16689);
    Super PSuper16698 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16685 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16686, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16687, (Optr)&t_send_ifTrue_, (Optr)PSend16688, (Optr)PBlock16689, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16698, (Optr)&t_method_return);
    Block PBlock16683 = new_Block_with(PArray16684, empty_Array, PThreadedCode16685, 2, PSend16688, PSuper16698);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16699 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16683);
    Array PThreadedCode16682 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16683, (Optr)&t_send1, (Optr)PSend16699, (Optr)&t_method_return);
    Method PMethod16679 = new_Method_with(PArray16680, PArray16681, empty_Array, PThreadedCode16682, 1, PSend16699);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16679, Interpretation_ParallelDebugger_Class);
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