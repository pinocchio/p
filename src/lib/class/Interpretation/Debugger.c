#include <lib/class/Interpretation/Debugger.h>


Optr layout_Interpretation_Debugger_Class_class;
Optr slot_Interpretation_Debugger_escapeShell;
Optr layout_Interpretation_Debugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16571 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16574 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16580 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16579 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16580, (Optr)&t_block_return);
    Block PBlock16578 = new_Block_with(empty_Array, empty_Array, PThreadedCode16579, 1, PSend16580);
    // ifNil:. 
    Send PSend16577 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16578);
    Assign PAssign16576 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16577);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16584 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16583 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16584);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16585 = new_Send((Optr)PAssign16583, SMB_isNil, 0);
    Array PThreadedCode16582 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16583, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16584, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16585, (Optr)&t_block_return);
    Block PBlock16581 = new_Block_with(empty_Array, empty_Array, PThreadedCode16582, 1, PSend16585);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16588 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    String string_16589 = new_String(L"  ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16589_Const = new_Constant((Optr)string_16589);
    // <<. 
    Send PSend16590 = new_Send((Optr)PSend16588, SMB__shiftLeft_, 1, (Optr)string_16589_Const);
    Array PThreadedCode16587 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16588, (Optr)&t_push1, (Optr)string_16589, (Optr)&t_send1, (Optr)PSend16590, (Optr)&t_block_return);
    Block PBlock16586 = new_Block_with(empty_Array, empty_Array, PThreadedCode16587, 1, PSend16590);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16591 = new_Send((Optr)PBlock16581, SMB_whileFalse_, 1, (Optr)PBlock16586);
    Array PThreadedCode16575 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16576, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16578, (Optr)&t_send1, (Optr)PSend16577, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16581, (Optr)&t_push_closure, (Optr)PBlock16586, (Optr)&t_send1, (Optr)PSend16591, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16573 = new_Block_with(PArray16574, empty_Array, PThreadedCode16575, 3, PAssign16576, PSend16591, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16592 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16573);
    Array PThreadedCode16572 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16573, (Optr)&t_send1, (Optr)PSend16592, (Optr)&t_method_return);
    Method PMethod16570 = new_Method_with(empty_Array, PArray16571, empty_Array, PThreadedCode16572, 1, PSend16592);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16570, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16596 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_input_2_0 = new_Variable_named(L"input", 2);
    Array PArray16600 = new_Array_with(1, (Optr)VAR_input_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16602 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_input_2_0);
    Array PThreadedCode16601 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_input_2_0, (Optr)&t_send1, (Optr)PSend16602, (Optr)&t_method_return);
    Block PBlock16599 = new_Block_with(PArray16600, empty_Array, PThreadedCode16601, 1, PSend16602);
    Assign PAssign16598 = new_Assign((Optr)slot_Interpretation_Debugger_escapeShell, (Optr)PBlock16599);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend16605 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    // interpretFromStdin. 
    Send PSend16606 = new_Send((Optr)self, SMB_interpretFromStdin, 0);
    Array PThreadedCode16604 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16605, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16606, (Optr)&t_block_return);
    Block PBlock16603 = new_Block_with(empty_Array, empty_Array, PThreadedCode16604, 2, PSend16605, PSend16606);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16607 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock16603);
    Array PThreadedCode16597 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign16598, (Optr)&t_push_closure, (Optr)PBlock16599, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock16603, (Optr)&t_send1, (Optr)PSend16607, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16595 = new_Block_with(PArray16596, empty_Array, PThreadedCode16597, 3, PAssign16598, PSend16607, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16608 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16595);
    Array PThreadedCode16594 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16595, (Optr)&t_send1, (Optr)PSend16608, (Optr)&t_method_return);
    Method PMethod16593 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16594, 1, PSend16608);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod16593, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16610 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend16612 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16613 = new_Send((Optr)self, SMB_printStacktrace, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16614 = new_Send((Optr)self, SMB_shell, 0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend16615 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode16611 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16612, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16613, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16614, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16615, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16609 = new_Method_with(PArray16610, empty_Array, empty_Array, PThreadedCode16611, 5, PSend16612, PSend16613, PSend16614, PSend16615, self);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod16609, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16617 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16619 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16621 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16623 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16624 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16622 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16623, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16624, (Optr)&t_method_return);
    Block PBlock16620 = new_Block_with(PArray16621, empty_Array, PThreadedCode16622, 2, PSend16623, PSend16624);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16625 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16626 = new_Send((Optr)PBlock16620, SMB_value_, 1, (Optr)PSend16625);
    Array PThreadedCode16618 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16619, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16620, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16625, (Optr)&t_send1, (Optr)PSend16626, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16616 = new_Method_with(PArray16617, empty_Array, empty_Array, PThreadedCode16618, 3, PSend16619, PSend16626, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod16616, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16628 = new_Array_with(1, (Optr)VAR_code_0_0);
    Array PThreadedCode16629 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16627 = new_Method_with(PArray16628, empty_Array, empty_Array, PThreadedCode16629, 1, true_Const);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod16627, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16632 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    String string_16633 = new_String(L"pidb> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16633_Const = new_Constant((Optr)string_16633);
    // <<. 
    Send PSend16634 = new_Send((Optr)PSend16632, SMB__shiftLeft_, 1, (Optr)string_16633_Const);
    Array PThreadedCode16631 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16632, (Optr)&t_push1, (Optr)string_16633, (Optr)&t_send1, (Optr)PSend16634, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16631, 2, PSend16634, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod16630, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_executeAction_() {
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16636 = new_Array_with(1, (Optr)VAR_action_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16638 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Array PThreadedCode16637 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16638, (Optr)&t_method_return);
    Method PMethod16635 = new_Method_with(PArray16636, empty_Array, empty_Array, PThreadedCode16637, 1, PSend16638);
    
    MethodClosure MC_SMB_executeAction_ = new_MethodClosure((Method)PMethod16635, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_executeAction_, MC_SMB_executeAction_);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16640 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16643 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend16647 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend16648 = new_Send((Optr)PSend16647, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode16646 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend16647, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16648, (Optr)&t_block_return);
    Block PBlock16645 = new_Block_with(empty_Array, empty_Array, PThreadedCode16646, 1, PSend16648);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray16650 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend16652 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend16653 = new_Send((Optr)PSend16652, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend16657 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16658 = new_Send((Optr)PSend16657, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16659 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16658);
    Array PThreadedCode16656 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16657, (Optr)&t_send0, (Optr)PSend16658, (Optr)&t_send1, (Optr)PSend16659, (Optr)&t_block_return);
    Block PBlock16655 = new_Block_with(empty_Array, empty_Array, PThreadedCode16656, 1, PSend16659);
    // ifFalse:. 
    Send PSend16654 = new_Send((Optr)PSend16653, SMB_ifFalse_, 1, (Optr)PBlock16655);
    Array PThreadedCode16651 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16652, (Optr)&t_send0, (Optr)PSend16653, (Optr)&t_send_ifFalse_, (Optr)PSend16654, (Optr)PBlock16655, (Optr)&t_method_return);
    Block PBlock16649 = new_Block_with(PArray16650, empty_Array, PThreadedCode16651, 1, PSend16654);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16660 = new_Send((Optr)PBlock16645, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock16649);
    Array PThreadedCode16644 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock16645, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock16649, (Optr)&t_send2, (Optr)PSend16660, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16642 = new_Block_with(PArray16643, empty_Array, PThreadedCode16644, 2, PSend16660, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16661 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16642);
    Array PThreadedCode16641 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16642, (Optr)&t_send1, (Optr)PSend16661, (Optr)&t_method_return);
    Method PMethod16639 = new_Method_with(PArray16640, empty_Array, empty_Array, PThreadedCode16641, 1, PSend16661);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod16639, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_skipStepBlock() {
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16665 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16667 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16666 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16667, (Optr)&t_method_return);
    Block PBlock16664 = new_Block_with(PArray16665, empty_Array, PThreadedCode16666, 1, PSend16667);
    Array PThreadedCode16663 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16664, (Optr)&t_method_return);
    Method PMethod16662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16663, 1, PBlock16664);
    
    MethodClosure MC_SMB_skipStepBlock = new_MethodClosure((Method)PMethod16662, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipStepBlock, MC_SMB_skipStepBlock);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16671 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16673 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16674 = new_Send((Optr)PSend16673, SMB_name, 0);
    String string_16675 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16675_Const = new_Constant((Optr)string_16675);
    // ,. 
    Send PSend16676 = new_Send((Optr)PSend16674, SMB__append_, 1, (Optr)string_16675_Const);
    // ,. 
    Send PSend16677 = new_Send((Optr)PSend16676, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend16678 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend16677);
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    // debugShellWithAction:. 
    Send PSend16679 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16672 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend16673, (Optr)&t_send0, (Optr)PSend16674, (Optr)&t_push1, (Optr)string_16675, (Optr)&t_send1, (Optr)PSend16676, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16677, (Optr)&t_send1, (Optr)PSend16678, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16679, (Optr)&t_method_return);
    Block PBlock16670 = new_Block_with(PArray16671, empty_Array, PThreadedCode16672, 2, PSend16678, PSend16679);
    Array PThreadedCode16669 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16670, (Optr)&t_method_return);
    Method PMethod16668 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16669, 1, PBlock16670);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16668, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_debugShellWithAction_() {
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16681 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_input_0_1 = new_Variable_named(L"input", 0);
    Array PArray16682 = new_Array_with(1, (Optr)VAR_input_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16685 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16688 = new_Send((Optr)self, SMB_shell, 0);
    Assign PAssign16687 = new_Assign((Optr)VAR_input_0_1, (Optr)PSend16688);
    String string_16689 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16689_Const = new_Constant((Optr)string_16689);
    // =. 
    Send PSend16690 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16689_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16694 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16695 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16694);
    Array PThreadedCode16693 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16694, (Optr)&t_send1, (Optr)PSend16695, (Optr)&t_block_return);
    Block PBlock16692 = new_Block_with(empty_Array, empty_Array, PThreadedCode16693, 1, PSend16695);
    // ifTrue:. 
    Send PSend16691 = new_Send((Optr)PSend16690, SMB_ifTrue_, 1, (Optr)PBlock16692);
    String string_16696 = new_String(L"o");
    Constant string_16696_Const = new_Constant((Optr)string_16696);
    // =. 
    Send PSend16697 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16696_Const);
    Variable VAR_oldBlock_2_0 = new_Variable_named(L"oldBlock", 2);
    Variable VAR_result_2_1 = new_Variable_named(L"result", 2);
    Array PArray16699 = new_Array_with(2, (Optr)VAR_oldBlock_2_0, (Optr)VAR_result_2_1);
    Assign PAssign16701 = new_Assign((Optr)VAR_oldBlock_2_0, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock);
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    // skipStepBlock. 
    Send PSend16703 = new_Send((Optr)self, SMB_skipStepBlock, 0);
    Assign PAssign16702 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16703);
    // value. 
    Send PSend16705 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Assign PAssign16704 = new_Assign((Optr)VAR_result_2_1, (Optr)PSend16705);
    Assign PAssign16706 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_oldBlock_2_0);
    // escape:. 
    Send PSend16707 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_2_1);
    Array PThreadedCode16700 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16701, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16702, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16703, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16704, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16705, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16706, (Optr)&t_push_variable, (Optr)VAR_oldBlock_2_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_2_1, (Optr)&t_send1, (Optr)PSend16707, (Optr)&t_method_return);
    Block PBlock16698 = new_Block_with(empty_Array, PArray16699, PThreadedCode16700, 5, PAssign16701, PAssign16702, PAssign16704, PAssign16706, PSend16707);
    // ifTrue:. 
    Send PSend16708 = new_Send((Optr)PSend16697, SMB_ifTrue_, 1, (Optr)PBlock16698);
    String string_16709 = new_String(L"i");
    Constant string_16709_Const = new_Constant((Optr)string_16709);
    // =. 
    Send PSend16710 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16709_Const);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16714 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend16715 = new_Send((Optr)PSend16714, SMB_inspect, 0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16716 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16717 = new_Send((Optr)PSend16716, SMB_lf, 0);
    // debugShellWithAction:. 
    Send PSend16718 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend16719 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16718);
    Array PThreadedCode16713 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16714, (Optr)&t_send0, (Optr)PSend16715, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16716, (Optr)&t_send0, (Optr)PSend16717, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend16718, (Optr)&t_send1, (Optr)PSend16719, (Optr)&t_block_return);
    Block PBlock16712 = new_Block_with(empty_Array, empty_Array, PThreadedCode16713, 3, PSend16715, PSend16717, PSend16719);
    // ifTrue:. 
    Send PSend16711 = new_Send((Optr)PSend16710, SMB_ifTrue_, 1, (Optr)PBlock16712);
    String string_16720 = new_String(L"j");
    Constant string_16720_Const = new_Constant((Optr)string_16720);
    // =. 
    Send PSend16721 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16720_Const);
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skipBlock:. 
    Send PSend16726 = new_Send((Optr)self, SMB_skipBlock_, 1, (Optr)int_2_Const);
    Assign PAssign16725 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16726);
    // value. 
    Send PSend16727 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    // escape:. 
    Send PSend16728 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16727);
    Array PThreadedCode16724 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16725, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend16726, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16727, (Optr)&t_send1, (Optr)PSend16728, (Optr)&t_block_return);
    Block PBlock16723 = new_Block_with(empty_Array, empty_Array, PThreadedCode16724, 2, PAssign16725, PSend16728);
    // ifTrue:. 
    Send PSend16722 = new_Send((Optr)PSend16721, SMB_ifTrue_, 1, (Optr)PBlock16723);
    Array PThreadedCode16686 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16687, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16688, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16689, (Optr)&t_send1, (Optr)PSend16690, (Optr)&t_send_ifTrue_, (Optr)PSend16691, (Optr)PBlock16692, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16696, (Optr)&t_send1, (Optr)PSend16697, (Optr)&t_push_closure, (Optr)PBlock16698, (Optr)&t_send1, (Optr)PSend16708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16709, (Optr)&t_send1, (Optr)PSend16710, (Optr)&t_send_ifTrue_, (Optr)PSend16711, (Optr)PBlock16712, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16720, (Optr)&t_send1, (Optr)PSend16721, (Optr)&t_send_ifTrue_, (Optr)PSend16722, (Optr)PBlock16723, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16684 = new_Block_with(PArray16685, empty_Array, PThreadedCode16686, 6, PAssign16687, PSend16691, PSend16708, PSend16711, PSend16722, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16729 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16684);
    Array PThreadedCode16683 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16684, (Optr)&t_send1, (Optr)PSend16729, (Optr)&t_method_return);
    Method PMethod16680 = new_Method_with(PArray16681, PArray16682, empty_Array, PThreadedCode16683, 1, PSend16729);
    
    MethodClosure MC_SMB_debugShellWithAction_ = new_MethodClosure((Method)PMethod16680, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_debugShellWithAction_, MC_SMB_debugShellWithAction_);
}


static void init_SMB_interpretFromStdin() {
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    Variable VAR_readline_0_0 = new_Variable_named(L"readline", 0);
    Array PArray16731 = new_Array_with(1, (Optr)VAR_readline_0_0);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend16735 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16736 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    // from:to:for:. 
    Send PSend16734 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)PSend16735, (Optr)PSend16736, (Optr)self);
    Assign PAssign16733 = new_Assign((Optr)VAR_readline_0_0, (Optr)PSend16734);
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend16737 = new_Send((Optr)VAR_readline_0_0, SMB_readLine, 0);
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    // interpretLine:. 
    Send PSend16738 = new_Send((Optr)self, SMB_interpretLine_, 1, (Optr)PSend16737);
    Array PThreadedCode16732 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16733, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16735, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16736, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend16734, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_0, (Optr)&t_send0, (Optr)PSend16737, (Optr)&t_send1, (Optr)PSend16738, (Optr)&t_method_return);
    Method PMethod16730 = new_Method_with(empty_Array, PArray16731, empty_Array, PThreadedCode16732, 2, PAssign16733, PSend16738);
    
    MethodClosure MC_SMB_interpretFromStdin = new_MethodClosure((Method)PMethod16730, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretFromStdin, MC_SMB_interpretFromStdin);
}


static void init_SMB_interpretLine_() {
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16740 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16743 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_16745 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16745_Const = new_Constant((Optr)string_16745);
    // =. 
    Send PSend16746 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16745_Const);
    String string_16749 = new_String(L"o");
    Constant string_16749_Const = new_Constant((Optr)string_16749);
    // =. 
    Send PSend16750 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16749_Const);
    String string_16753 = new_String(L"i");
    Constant string_16753_Const = new_Constant((Optr)string_16753);
    // =. 
    Send PSend16754 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16753_Const);
    String string_16757 = new_String(L"j");
    Constant string_16757_Const = new_Constant((Optr)string_16757);
    // =. 
    Send PSend16758 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16757_Const);
    Array PThreadedCode16756 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16757, (Optr)&t_send1, (Optr)PSend16758, (Optr)&t_block_return);
    Block PBlock16755 = new_Block_with(empty_Array, empty_Array, PThreadedCode16756, 1, PSend16758);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend16759 = new_Send((Optr)PSend16754, SMB_or_, 1, (Optr)PBlock16755);
    Array PThreadedCode16752 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16753, (Optr)&t_send1, (Optr)PSend16754, (Optr)&t_push_closure, (Optr)PBlock16755, (Optr)&t_send1, (Optr)PSend16759, (Optr)&t_block_return);
    Block PBlock16751 = new_Block_with(empty_Array, empty_Array, PThreadedCode16752, 1, PSend16759);
    // or:. 
    Send PSend16760 = new_Send((Optr)PSend16750, SMB_or_, 1, (Optr)PBlock16751);
    Array PThreadedCode16748 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16749, (Optr)&t_send1, (Optr)PSend16750, (Optr)&t_push_closure, (Optr)PBlock16751, (Optr)&t_send1, (Optr)PSend16760, (Optr)&t_block_return);
    Block PBlock16747 = new_Block_with(empty_Array, empty_Array, PThreadedCode16748, 1, PSend16760);
    // or:. 
    Send PSend16761 = new_Send((Optr)PSend16746, SMB_or_, 1, (Optr)PBlock16747);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16765 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16766 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16765);
    Array PThreadedCode16764 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16765, (Optr)&t_send1, (Optr)PSend16766, (Optr)&t_block_return);
    Block PBlock16763 = new_Block_with(empty_Array, empty_Array, PThreadedCode16764, 1, PSend16766);
    // ifTrue:. 
    Send PSend16762 = new_Send((Optr)PSend16761, SMB_ifTrue_, 1, (Optr)PBlock16763);
    String string_16767 = new_String(L"");
    Constant string_16767_Const = new_Constant((Optr)string_16767);
    // =. 
    Send PSend16768 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16767_Const);
    String string_16772 = new_String(L"s");
    Constant string_16772_Const = new_Constant((Optr)string_16772);
    // value:. 
    Send PSend16773 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)string_16772_Const);
    // escape:. 
    Send PSend16774 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16773);
    Array PThreadedCode16771 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push1, (Optr)string_16772, (Optr)&t_send1, (Optr)PSend16773, (Optr)&t_send1, (Optr)PSend16774, (Optr)&t_block_return);
    Block PBlock16770 = new_Block_with(empty_Array, empty_Array, PThreadedCode16771, 1, PSend16774);
    // ifTrue:. 
    Send PSend16769 = new_Send((Optr)PSend16768, SMB_ifTrue_, 1, (Optr)PBlock16770);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16775 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16776 = new_Send((Optr)PSend16775, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16777 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16776);
    Array PThreadedCode16744 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16745, (Optr)&t_send1, (Optr)PSend16746, (Optr)&t_push_closure, (Optr)PBlock16747, (Optr)&t_send1, (Optr)PSend16761, (Optr)&t_send_ifTrue_, (Optr)PSend16762, (Optr)PBlock16763, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16767, (Optr)&t_send1, (Optr)PSend16768, (Optr)&t_send_ifTrue_, (Optr)PSend16769, (Optr)PBlock16770, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16775, (Optr)&t_send0, (Optr)PSend16776, (Optr)&t_send1, (Optr)PSend16777, (Optr)&t_method_return);
    Block PBlock16742 = new_Block_with(PArray16743, empty_Array, PThreadedCode16744, 3, PSend16762, PSend16769, PSend16777);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16778 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16742);
    Array PThreadedCode16741 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16742, (Optr)&t_send1, (Optr)PSend16778, (Optr)&t_method_return);
    Method PMethod16739 = new_Method_with(PArray16740, empty_Array, empty_Array, PThreadedCode16741, 1, PSend16778);
    
    MethodClosure MC_SMB_interpretLine_ = new_MethodClosure((Method)PMethod16739, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretLine_, MC_SMB_interpretLine_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16780 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray16781 = new_Array_with(1, (Optr)VAR_method_0_1);
    String string_16786 = new_String(L"method");
    Constant string_16786_Const = new_Constant((Optr)string_16786);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16787 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend16785 = new_Send((Optr)string_16786_Const, SMB__append_, 1, (Optr)PSend16787);
    // ,. 
    Send PSend16784 = new_Send((Optr)PSend16785, SMB__append_, 1, (Optr)VAR_code_0_0);
    Assign PAssign16783 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend16784);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16788 = new_Send((Optr)self, SMB_class, 0);
    // compile:. 
    Send PSend16789 = new_Send((Optr)PSend16788, SMB_compile_, 1, (Optr)VAR_method_0_1);
    Array PThreadedCode16782 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign16783, (Optr)&t_push1, (Optr)string_16786, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend16787, (Optr)&t_send1, (Optr)PSend16785, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16784, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16788, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send1, (Optr)PSend16789, (Optr)&t_method_return);
    Method PMethod16779 = new_Method_with(PArray16780, PArray16781, empty_Array, PThreadedCode16782, 2, PAssign16783, PSend16789);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16779, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_printStacktrace() {
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16792 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_printStacktrace, 0);
    Array PThreadedCode16791 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16792, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16790 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16791, 2, PSend16792, self);
    
    MethodClosure MC_SMB_printStacktrace = new_MethodClosure((Method)PMethod16790, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_printStacktrace, MC_SMB_printStacktrace);
}


static void init_SMB_skipBlock_() {
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    Variable VAR_count_0_0 = new_Variable_named(L"count", 0);
    Array PArray16794 = new_Array_with(1, (Optr)VAR_count_0_0);
    Variable VAR_skips_0_1 = new_Variable_named(L"skips", 0);
    Variable VAR_previousBlock_0_2 = new_Variable_named(L"previousBlock", 0);
    Array PArray16795 = new_Array_with(2, (Optr)VAR_skips_0_1, (Optr)VAR_previousBlock_0_2);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16797 = new_Assign((Optr)VAR_skips_0_1, (Optr)int_0_Const);
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    // stepBlock. 
    Send PSend16799 = new_Send((Optr)self, SMB_stepBlock, 0);
    Assign PAssign16798 = new_Assign((Optr)VAR_previousBlock_0_2, (Optr)PSend16799);
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16801 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16804 = new_Send((Optr)VAR_skips_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16803 = new_Assign((Optr)VAR_skips_0_1, (Optr)PSend16804);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend16805 = new_Send((Optr)VAR_skips_0_1, SMB__gt__equals_, 1, (Optr)VAR_count_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    // stepBlock:. 
    Send PSend16809 = new_Send((Optr)self, SMB_stepBlock_, 1, (Optr)VAR_previousBlock_0_2);
    Array PThreadedCode16808 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_previousBlock_0_2, (Optr)&t_send1, (Optr)PSend16809, (Optr)&t_block_return);
    Block PBlock16807 = new_Block_with(empty_Array, empty_Array, PThreadedCode16808, 1, PSend16809);
    // ifTrue:. 
    Send PSend16806 = new_Send((Optr)PSend16805, SMB_ifTrue_, 1, (Optr)PBlock16807);
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    // executeAction:. 
    Send PSend16810 = new_Send((Optr)self, SMB_executeAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16802 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16803, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16804, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_variable, (Optr)VAR_count_0_0, (Optr)&t_send1, (Optr)PSend16805, (Optr)&t_send_ifTrue_, (Optr)PSend16806, (Optr)PBlock16807, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16810, (Optr)&t_method_return);
    Block PBlock16800 = new_Block_with(PArray16801, empty_Array, PThreadedCode16802, 3, PAssign16803, PSend16806, PSend16810);
    Array PThreadedCode16796 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16797, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16798, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16799, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16800, (Optr)&t_method_return);
    Method PMethod16793 = new_Method_with(PArray16794, PArray16795, empty_Array, PThreadedCode16796, 3, PAssign16797, PAssign16798, PBlock16800);
    
    MethodClosure MC_SMB_skipBlock_ = new_MethodClosure((Method)PMethod16793, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipBlock_, MC_SMB_skipBlock_);
}

void init_Interpretation_PDebugger_layout() {
    layout_Interpretation_Debugger_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_Debugger_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_Debugger_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_Debugger_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_Debugger_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_Debugger_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Debugger = new_Symbol(L"Debugger");
    slot_Interpretation_Debugger_escapeShell = (Optr)new_Slot(3, L"escapeShell");
    layout_Interpretation_Debugger = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Interpretation_Debugger)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_Debugger)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    ((Array)layout_Interpretation_Debugger)->values[2] = slot_Interpretation_SteppingInterpreter_stepBlock; // stepBlock 
    ((Array)layout_Interpretation_Debugger)->values[3] = slot_Interpretation_Debugger_escapeShell; // escapeShell 
    Interpretation_Debugger_Class = (Class)new_Class(Interpretation_SteppingInterpreter_Class, layout_Interpretation_Debugger_Class_class);
    Interpretation_Debugger_Class->layout = layout_Interpretation_Debugger;
    Interpretation_Debugger_Class->name = SMB_Debugger;
    
}

void init_Interpretation_PDebugger_methods() {
    init_SMB_indent();
    init_SMB_shell();
    init_SMB_error_();
    init_SMB_print_();
    init_SMB_isReady_();
    init_SMB_displayPrompt();
    init_SMB_executeAction_();
    init_SMB_parsesUntil_();
    init_SMB_skipStepBlock();
    init_SMB_defaultStepBlock();
    init_SMB_debugShellWithAction_();
    init_SMB_interpretFromStdin();
    init_SMB_interpretLine_();
    init_SMB_compile_();
    init_SMB_printStacktrace();
    init_SMB_skipBlock_();
    
}