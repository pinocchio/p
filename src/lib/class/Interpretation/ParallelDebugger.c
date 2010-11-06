#include <lib/class/Interpretation/ParallelDebugger.h>


Optr layout_Interpretation_ParallelDebugger_Class_class;
Optr slot_Interpretation_ParallelDebugger_localIndent;
Optr slot_Interpretation_ParallelDebugger_threads;
Optr slot_Interpretation_ParallelDebugger_states;
Optr layout_Interpretation_ParallelDebugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16533 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16536 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16542 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16541 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16542, (Optr)&t_block_return);
    Block PBlock16540 = new_Block_with(empty_Array, empty_Array, PThreadedCode16541, 1, PSend16542);
    // ifNil:. 
    Send PSend16539 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16540);
    Assign PAssign16538 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16539);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16546 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16545 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16546);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16547 = new_Send((Optr)PAssign16545, SMB_isNil, 0);
    Array PThreadedCode16544 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16545, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16546, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16547, (Optr)&t_block_return);
    Block PBlock16543 = new_Block_with(empty_Array, empty_Array, PThreadedCode16544, 1, PSend16547);
    String string_16550 = new_String(L"  ");
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Constant string_16550_Const = new_Constant((Optr)string_16550);
    // stderr:. 
    Send PSend16551 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16550_Const);
    Array PThreadedCode16549 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16550, (Optr)&t_send1, (Optr)PSend16551, (Optr)&t_block_return);
    Block PBlock16548 = new_Block_with(empty_Array, empty_Array, PThreadedCode16549, 1, PSend16551);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16552 = new_Send((Optr)PBlock16543, SMB_whileFalse_, 1, (Optr)PBlock16548);
    String string_16555 = new_String(L"  ");
    Constant string_16555_Const = new_Constant((Optr)string_16555);
    // stderr:. 
    Send PSend16556 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16555_Const);
    Array PThreadedCode16554 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16555, (Optr)&t_send1, (Optr)PSend16556, (Optr)&t_block_return);
    Block PBlock16553 = new_Block_with(empty_Array, empty_Array, PThreadedCode16554, 1, PSend16556);
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    // doTimes:. 
    Send PSend16557 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB_doTimes_, 1, (Optr)PBlock16553);
    Array PThreadedCode16537 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16538, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16540, (Optr)&t_send1, (Optr)PSend16539, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16543, (Optr)&t_push_closure, (Optr)PBlock16548, (Optr)&t_send1, (Optr)PSend16552, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_closure, (Optr)PBlock16553, (Optr)&t_send1, (Optr)PSend16557, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16535 = new_Block_with(PArray16536, empty_Array, PThreadedCode16537, 4, PAssign16538, PSend16552, PSend16557, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16558 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16535);
    Array PThreadedCode16534 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16535, (Optr)&t_send1, (Optr)PSend16558, (Optr)&t_method_return);
    Method PMethod16532 = new_Method_with(empty_Array, PArray16533, empty_Array, PThreadedCode16534, 1, PSend16558);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16532, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_closures_0_0 = new_Variable_named(L"closures", 0);
    Array PArray16560 = new_Array_with(1, (Optr)VAR_closures_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16563 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16565 = new_Send((Optr)VAR_closures_0_0, SMB_size, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend16566 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend16565);
    Variable VAR_aClosure_2_0 = new_Variable_named(L"aClosure", 2);
    Array PArray16568 = new_Array_with(1, (Optr)VAR_aClosure_2_0);
    Variable VAR_startNext_3_0 = new_Variable_named(L"startNext", 3);
    Array PArray16571 = new_Array_with(1, (Optr)VAR_startNext_3_0);
    Variable VAR_thread_4_0 = new_Variable_named(L"thread", 4);
    Array PArray16574 = new_Array_with(1, (Optr)VAR_thread_4_0);
    Variable VAR__receiver__5_0 = new_Variable_named(L"_receiver_", 5);
    Array PArray16577 = new_Array_with(1, (Optr)VAR__receiver__5_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16579 = new_Send((Optr)VAR__receiver__5_0, SMB_continuation_, 1, (Optr)VAR_startNext_3_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16580 = new_Send((Optr)VAR__receiver__5_0, SMB_context_, 1, (Optr)nil_Const);
    Array PThreadedCode16578 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_variable, (Optr)VAR_startNext_3_0, (Optr)&t_send1, (Optr)PSend16579, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16580, (Optr)&t_method_return);
    Block PBlock16576 = new_Block_with(PArray16577, empty_Array, PThreadedCode16578, 2, PSend16579, PSend16580);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16581 = new_Send((Optr)PBlock16576, SMB_value_, 1, (Optr)VAR_thread_4_0);
    Array PThreadedCode16575 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock16576, (Optr)&t_push_variable, (Optr)VAR_thread_4_0, (Optr)&t_send1, (Optr)PSend16581, (Optr)&t_method_return);
    Block PBlock16573 = new_Block_with(PArray16574, empty_Array, PThreadedCode16575, 1, PSend16581);
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    // ifHasNext:. 
    Send PSend16582 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifHasNext_, 1, (Optr)PBlock16573);
    Super PSuper16583 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16584 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper16583);
    Array PThreadedCode16572 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16573, (Optr)&t_send1, (Optr)PSend16582, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_2_0, (Optr)&t_super1, (Optr)PSuper16583, (Optr)&t_send1, (Optr)PSend16584, (Optr)&t_method_return);
    Block PBlock16570 = new_Block_with(PArray16571, empty_Array, PThreadedCode16572, 2, PSend16582, PSend16584);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16585 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16570);
    Array PThreadedCode16569 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16570, (Optr)&t_send1, (Optr)PSend16585, (Optr)&t_method_return);
    Block PBlock16567 = new_Block_with(PArray16568, empty_Array, PThreadedCode16569, 1, PSend16585);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16586 = new_Send((Optr)VAR_closures_0_0, SMB_do_, 1, (Optr)PBlock16567);
    Array PThreadedCode16564 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_send0, (Optr)PSend16565, (Optr)&t_send1, (Optr)PSend16566, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_push_closure, (Optr)PBlock16567, (Optr)&t_send1, (Optr)PSend16586, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16562 = new_Block_with(PArray16563, empty_Array, PThreadedCode16564, 3, PSend16566, PSend16586, self);
    // on:. 
    Send PSend16587 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16562);
    Array PThreadedCode16561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16562, (Optr)&t_send1, (Optr)PSend16587, (Optr)&t_method_return);
    Method PMethod16559 = new_Method_with(PArray16560, empty_Array, empty_Array, PThreadedCode16561, 1, PSend16587);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16559, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray16589 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16592 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16591 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)PSend16592);
    // new:. 
    Send PSend16594 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16593 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_states, (Optr)PSend16594);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray16596 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16598 = new_Send((Optr)PFakeThread_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16599 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend16598);
    Array PThreadedCode16597 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_class_reference, (Optr)PFakeThread_classReference, (Optr)&t_send0, (Optr)PSend16598, (Optr)&t_send2, (Optr)PSend16599, (Optr)&t_method_return);
    Block PBlock16595 = new_Block_with(PArray16596, empty_Array, PThreadedCode16597, 1, PSend16599);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend16600 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock16595);
    Array PThreadedCode16590 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16591, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16592, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16593, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16594, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock16595, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend16600, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16588 = new_Method_with(PArray16589, empty_Array, empty_Array, PThreadedCode16590, 4, PAssign16591, PAssign16593, PSend16600, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod16588, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16604 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend16606 = new_Send((Optr)VAR_receiver_1_0, SMB__at_, 1, (Optr)VAR_class_1_1);
    // @. 
    Send PSend16607 = new_Send((Optr)PSend16606, SMB__at_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_put_ = new_Symbol(L"put:");
    // put:. 
    Send PSend16608 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16607);
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    // showInvocation. 
    Send PSend16609 = new_Send((Optr)self, SMB_showInvocation, 0);
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    // switchThread. 
    Send PSend16610 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16611 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    // put:. 
    Send PSend16612 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16611);
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    // showReturn. 
    Send PSend16613 = new_Send((Optr)self, SMB_showReturn, 0);
    // switchThread. 
    Send PSend16614 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16615 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Array PThreadedCode16605 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_send1, (Optr)PSend16606, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16607, (Optr)&t_send1, (Optr)PSend16608, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16609, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16610, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16611, (Optr)&t_send1, (Optr)PSend16612, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16613, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16614, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16615, (Optr)&t_method_return);
    Block PBlock16603 = new_Block_with(PArray16604, empty_Array, PThreadedCode16605, 7, PSend16608, PSend16609, PSend16610, PSend16612, PSend16613, PSend16614, PSend16615);
    Array PThreadedCode16602 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16603, (Optr)&t_method_return);
    Method PMethod16601 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16602, 1, PBlock16603);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16601, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16618 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16619 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)int_0_Const);
    Array PThreadedCode16617 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16618, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16619, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16616 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16617, 3, PSuper16618, PAssign16619, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16616, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_showReturn() {
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16621 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16624 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16623 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16624);
    String string_16625 = new_String(L"--> ");
    Constant string_16625_Const = new_Constant((Optr)string_16625);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16626 = new_Send((Optr)string_16625_Const, SMB__append_, 1, (Optr)VAR_current_0_0);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16627 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16626);
    Array PThreadedCode16622 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16623, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16624, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16625, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send1, (Optr)PSend16626, (Optr)&t_send1, (Optr)PSend16627, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16620 = new_Method_with(empty_Array, PArray16621, empty_Array, PThreadedCode16622, 3, PAssign16623, PSend16627, self);
    
    MethodClosure MC_SMB_showReturn = new_MethodClosure((Method)PMethod16620, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showReturn, MC_SMB_showReturn);
}


static void init_SMB_switchThread() {
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    Variable VAR_thread_0_0 = new_Variable_named(L"thread", 0);
    Array PArray16629 = new_Array_with(1, (Optr)VAR_thread_0_0);
    Variable VAR_aContinuation_1_0 = new_Variable_named(L"aContinuation", 1);
    Array PArray16632 = new_Array_with(1, (Optr)VAR_aContinuation_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16635 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16637 = new_Send((Optr)VAR__receiver__2_0, SMB_continuation_, 1, (Optr)VAR_aContinuation_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16638 = new_Send((Optr)VAR__receiver__2_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16636 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aContinuation_1_0, (Optr)&t_send1, (Optr)PSend16637, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16638, (Optr)&t_method_return);
    Block PBlock16634 = new_Block_with(PArray16635, empty_Array, PThreadedCode16636, 2, PSend16637, PSend16638);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16639 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_current, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16640 = new_Send((Optr)PBlock16634, SMB_value_, 1, (Optr)PSend16639);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend16641 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_next, 0);
    // next. 
    Send PSend16643 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_next, 0);
    Assign PAssign16642 = new_Assign((Optr)VAR_thread_0_0, (Optr)PSend16643);
    Variable VAR_aState_2_0 = new_Variable_named(L"aState", 2);
    Array PArray16647 = new_Array_with(1, (Optr)VAR_aState_2_0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16649 = new_Send((Optr)VAR_aState_2_0, SMB_should, 0);
    // current. 
    Send PSend16650 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend16651 = new_Send((Optr)PSend16649, SMB_be_, 1, (Optr)PSend16650);
    Array PThreadedCode16648 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aState_2_0, (Optr)&t_send0, (Optr)PSend16649, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16650, (Optr)&t_send1, (Optr)PSend16651, (Optr)&t_method_return);
    Block PBlock16646 = new_Block_with(PArray16647, empty_Array, PThreadedCode16648, 1, PSend16651);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16652 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_do_, 1, (Optr)PBlock16646);
    Array PThreadedCode16645 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_closure, (Optr)PBlock16646, (Optr)&t_send1, (Optr)PSend16652, (Optr)&t_block_return);
    Block PBlock16644 = new_Block_with(empty_Array, empty_Array, PThreadedCode16645, 1, PSend16652);
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    // ifAtFirst:. 
    Send PSend16653 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifAtFirst_, 1, (Optr)PBlock16644);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16655 = new_Send((Optr)VAR_thread_0_0, SMB_context, 0);
    Assign PAssign16654 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16655);
    Symbol SMB_continuation = new_Symbol(L"continuation");
    // continuation. 
    Send PSend16656 = new_Send((Optr)VAR_thread_0_0, SMB_continuation, 0);
    Symbol SMB_continue = new_Symbol(L"continue");
    // continue. 
    Send PSend16657 = new_Send((Optr)PSend16656, SMB_continue, 0);
    Array PThreadedCode16633 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_closure, (Optr)PBlock16634, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16639, (Optr)&t_send1, (Optr)PSend16640, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16641, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16642, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16643, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16644, (Optr)&t_send1, (Optr)PSend16653, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16654, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16655, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16656, (Optr)&t_send0, (Optr)PSend16657, (Optr)&t_method_return);
    Block PBlock16631 = new_Block_with(PArray16632, empty_Array, PThreadedCode16633, 6, PSend16640, PSend16641, PAssign16642, PSend16653, PAssign16654, PSend16657);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16658 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16631);
    Array PThreadedCode16630 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16631, (Optr)&t_send1, (Optr)PSend16658, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16628 = new_Method_with(empty_Array, PArray16629, empty_Array, PThreadedCode16630, 2, PSend16658, self);
    
    MethodClosure MC_SMB_switchThread = new_MethodClosure((Method)PMethod16628, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_switchThread, MC_SMB_switchThread);
}


static void init_SMB_showInvocation() {
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16660 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16663 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16662 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16663);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend16664 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    // x. 
    Send PSend16665 = new_Send((Optr)PSend16664, SMB_x, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16666 = new_Send((Optr)PSend16665, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16667 = new_Send((Optr)PSend16666, SMB_name, 0);
    String string_16668 = new_String(L"@");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16668_Const = new_Constant((Optr)string_16668);
    // ,. 
    Send PSend16669 = new_Send((Optr)PSend16667, SMB__append_, 1, (Optr)string_16668_Const);
    // x. 
    Send PSend16670 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend16671 = new_Send((Optr)PSend16670, SMB_y, 0);
    // name. 
    Send PSend16672 = new_Send((Optr)PSend16671, SMB_name, 0);
    // ,. 
    Send PSend16673 = new_Send((Optr)PSend16669, SMB__append_, 1, (Optr)PSend16672);
    String string_16674 = new_String(L">>");
    Constant string_16674_Const = new_Constant((Optr)string_16674);
    // ,. 
    Send PSend16675 = new_Send((Optr)PSend16673, SMB__append_, 1, (Optr)string_16674_Const);
    // y. 
    Send PSend16676 = new_Send((Optr)VAR_current_0_0, SMB_y, 0);
    // ,. 
    Send PSend16677 = new_Send((Optr)PSend16675, SMB__append_, 1, (Optr)PSend16676);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16678 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16677);
    Array PThreadedCode16661 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign16662, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16663, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16664, (Optr)&t_send0, (Optr)PSend16665, (Optr)&t_send0, (Optr)PSend16666, (Optr)&t_send0, (Optr)PSend16667, (Optr)&t_push1, (Optr)string_16668, (Optr)&t_send1, (Optr)PSend16669, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16670, (Optr)&t_send0, (Optr)PSend16671, (Optr)&t_send0, (Optr)PSend16672, (Optr)&t_send1, (Optr)PSend16673, (Optr)&t_push1, (Optr)string_16674, (Optr)&t_send1, (Optr)PSend16675, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16676, (Optr)&t_send1, (Optr)PSend16677, (Optr)&t_send1, (Optr)PSend16678, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16659 = new_Method_with(empty_Array, PArray16660, empty_Array, PThreadedCode16661, 3, PAssign16662, PSend16678, self);
    
    MethodClosure MC_SMB_showInvocation = new_MethodClosure((Method)PMethod16659, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showInvocation, MC_SMB_showInvocation);
}


static void init_SMB_show_() {
    Symbol SMB_show_ = new_Symbol(L"show:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16680 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16682 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16684 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16686 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16687 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16685 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16686, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16687, (Optr)&t_method_return);
    Block PBlock16683 = new_Block_with(PArray16684, empty_Array, PThreadedCode16685, 2, PSend16686, PSend16687);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16688 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16689 = new_Send((Optr)PBlock16683, SMB_value_, 1, (Optr)PSend16688);
    Array PThreadedCode16681 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16682, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16683, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16688, (Optr)&t_send1, (Optr)PSend16689, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16679 = new_Method_with(PArray16680, empty_Array, empty_Array, PThreadedCode16681, 3, PSend16682, PSend16689, self);
    
    MethodClosure MC_SMB_show_ = new_MethodClosure((Method)PMethod16679, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_show_, MC_SMB_show_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16691 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16692 = new_Array_with(1, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16695 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16697 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend16698 = new_Send((Optr)PSend16697, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend16703 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16702 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16703);
    Super PSuper16705 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Assign PAssign16704 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16705);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend16707 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign16706 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16707);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16708 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_1);
    Array PThreadedCode16701 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16702, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16703, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16704, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16705, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16706, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16707, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16708, (Optr)&t_block_return);
    Block PBlock16700 = new_Block_with(empty_Array, empty_Array, PThreadedCode16701, 4, PAssign16702, PAssign16704, PAssign16706, PSend16708);
    // ifTrue:. 
    Send PSend16699 = new_Send((Optr)PSend16698, SMB_ifTrue_, 1, (Optr)PBlock16700);
    Super PSuper16709 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16696 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16697, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16698, (Optr)&t_send_ifTrue_, (Optr)PSend16699, (Optr)PBlock16700, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16709, (Optr)&t_method_return);
    Block PBlock16694 = new_Block_with(PArray16695, empty_Array, PThreadedCode16696, 2, PSend16699, PSuper16709);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16710 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16694);
    Array PThreadedCode16693 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16694, (Optr)&t_send1, (Optr)PSend16710, (Optr)&t_method_return);
    Method PMethod16690 = new_Method_with(PArray16691, PArray16692, empty_Array, PThreadedCode16693, 1, PSend16710);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16690, Interpretation_ParallelDebugger_Class);
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