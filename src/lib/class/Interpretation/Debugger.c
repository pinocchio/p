#include <lib/class/Interpretation/Debugger.h>


Optr layout_Interpretation_Debugger_Class_class;
Optr slot_Interpretation_Debugger_escapeShell;
Optr layout_Interpretation_Debugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16628 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16631 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16637 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16636 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16637, (Optr)&t_block_return);
    Block PBlock16635 = new_Block_with(empty_Array, empty_Array, PThreadedCode16636, 1, PSend16637);
    // ifNil:. 
    Send PSend16634 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16635);
    Assign PAssign16633 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16634);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16641 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16640 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16641);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16642 = new_Send((Optr)PAssign16640, SMB_isNil, 0);
    Array PThreadedCode16639 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16640, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16641, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16642, (Optr)&t_block_return);
    Block PBlock16638 = new_Block_with(empty_Array, empty_Array, PThreadedCode16639, 1, PSend16642);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16645 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    String string_16646 = new_String(L"  ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16646_Const = new_Constant((Optr)string_16646);
    // <<. 
    Send PSend16647 = new_Send((Optr)PSend16645, SMB__shiftLeft_, 1, (Optr)string_16646_Const);
    Array PThreadedCode16644 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16645, (Optr)&t_push1, (Optr)string_16646, (Optr)&t_send1, (Optr)PSend16647, (Optr)&t_block_return);
    Block PBlock16643 = new_Block_with(empty_Array, empty_Array, PThreadedCode16644, 1, PSend16647);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16648 = new_Send((Optr)PBlock16638, SMB_whileFalse_, 1, (Optr)PBlock16643);
    Array PThreadedCode16632 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16633, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16635, (Optr)&t_send1, (Optr)PSend16634, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16638, (Optr)&t_push_closure, (Optr)PBlock16643, (Optr)&t_send1, (Optr)PSend16648, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16630 = new_Block_with(PArray16631, empty_Array, PThreadedCode16632, 3, PAssign16633, PSend16648, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16649 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16630);
    Array PThreadedCode16629 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16630, (Optr)&t_send1, (Optr)PSend16649, (Optr)&t_method_return);
    Method PMethod16627 = new_Method_with(empty_Array, PArray16628, empty_Array, PThreadedCode16629, 1, PSend16649);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16627, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16653 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_input_2_0 = new_Variable_named(L"input", 2);
    Array PArray16657 = new_Array_with(1, (Optr)VAR_input_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16659 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_input_2_0);
    Array PThreadedCode16658 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_input_2_0, (Optr)&t_send1, (Optr)PSend16659, (Optr)&t_method_return);
    Block PBlock16656 = new_Block_with(PArray16657, empty_Array, PThreadedCode16658, 1, PSend16659);
    Assign PAssign16655 = new_Assign((Optr)slot_Interpretation_Debugger_escapeShell, (Optr)PBlock16656);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend16662 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    // interpretFromStdin. 
    Send PSend16663 = new_Send((Optr)self, SMB_interpretFromStdin, 0);
    Array PThreadedCode16661 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16662, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16663, (Optr)&t_block_return);
    Block PBlock16660 = new_Block_with(empty_Array, empty_Array, PThreadedCode16661, 2, PSend16662, PSend16663);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16664 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock16660);
    Array PThreadedCode16654 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign16655, (Optr)&t_push_closure, (Optr)PBlock16656, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock16660, (Optr)&t_send1, (Optr)PSend16664, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16652 = new_Block_with(PArray16653, empty_Array, PThreadedCode16654, 3, PAssign16655, PSend16664, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16665 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16652);
    Array PThreadedCode16651 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16652, (Optr)&t_send1, (Optr)PSend16665, (Optr)&t_method_return);
    Method PMethod16650 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16651, 1, PSend16665);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod16650, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16667 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend16669 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16670 = new_Send((Optr)self, SMB_printStacktrace, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16671 = new_Send((Optr)self, SMB_shell, 0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend16672 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode16668 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16669, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16670, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16671, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16672, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16666 = new_Method_with(PArray16667, empty_Array, empty_Array, PThreadedCode16668, 5, PSend16669, PSend16670, PSend16671, PSend16672, self);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod16666, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16674 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16676 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16678 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16680 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16681 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16679 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16680, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16681, (Optr)&t_method_return);
    Block PBlock16677 = new_Block_with(PArray16678, empty_Array, PThreadedCode16679, 2, PSend16680, PSend16681);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16682 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16683 = new_Send((Optr)PBlock16677, SMB_value_, 1, (Optr)PSend16682);
    Array PThreadedCode16675 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16676, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16677, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16682, (Optr)&t_send1, (Optr)PSend16683, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16673 = new_Method_with(PArray16674, empty_Array, empty_Array, PThreadedCode16675, 3, PSend16676, PSend16683, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod16673, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16685 = new_Array_with(1, (Optr)VAR_code_0_0);
    Array PThreadedCode16686 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16684 = new_Method_with(PArray16685, empty_Array, empty_Array, PThreadedCode16686, 1, true_Const);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod16684, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16689 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    String string_16690 = new_String(L"pidb> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16690_Const = new_Constant((Optr)string_16690);
    // <<. 
    Send PSend16691 = new_Send((Optr)PSend16689, SMB__shiftLeft_, 1, (Optr)string_16690_Const);
    Array PThreadedCode16688 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16689, (Optr)&t_push1, (Optr)string_16690, (Optr)&t_send1, (Optr)PSend16691, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16687 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16688, 2, PSend16691, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod16687, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_executeAction_() {
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16693 = new_Array_with(1, (Optr)VAR_action_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16695 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Array PThreadedCode16694 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16695, (Optr)&t_method_return);
    Method PMethod16692 = new_Method_with(PArray16693, empty_Array, empty_Array, PThreadedCode16694, 1, PSend16695);
    
    MethodClosure MC_SMB_executeAction_ = new_MethodClosure((Method)PMethod16692, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_executeAction_, MC_SMB_executeAction_);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16697 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16700 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend16704 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend16705 = new_Send((Optr)PSend16704, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode16703 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend16704, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16705, (Optr)&t_block_return);
    Block PBlock16702 = new_Block_with(empty_Array, empty_Array, PThreadedCode16703, 1, PSend16705);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray16707 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend16709 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend16710 = new_Send((Optr)PSend16709, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend16714 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16715 = new_Send((Optr)PSend16714, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16716 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16715);
    Array PThreadedCode16713 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16714, (Optr)&t_send0, (Optr)PSend16715, (Optr)&t_send1, (Optr)PSend16716, (Optr)&t_block_return);
    Block PBlock16712 = new_Block_with(empty_Array, empty_Array, PThreadedCode16713, 1, PSend16716);
    // ifFalse:. 
    Send PSend16711 = new_Send((Optr)PSend16710, SMB_ifFalse_, 1, (Optr)PBlock16712);
    Array PThreadedCode16708 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16709, (Optr)&t_send0, (Optr)PSend16710, (Optr)&t_send_ifFalse_, (Optr)PSend16711, (Optr)PBlock16712, (Optr)&t_method_return);
    Block PBlock16706 = new_Block_with(PArray16707, empty_Array, PThreadedCode16708, 1, PSend16711);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16717 = new_Send((Optr)PBlock16702, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock16706);
    Array PThreadedCode16701 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock16702, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock16706, (Optr)&t_send2, (Optr)PSend16717, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16699 = new_Block_with(PArray16700, empty_Array, PThreadedCode16701, 2, PSend16717, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16718 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16699);
    Array PThreadedCode16698 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16699, (Optr)&t_send1, (Optr)PSend16718, (Optr)&t_method_return);
    Method PMethod16696 = new_Method_with(PArray16697, empty_Array, empty_Array, PThreadedCode16698, 1, PSend16718);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod16696, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_skipStepBlock() {
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16722 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16724 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16723 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16724, (Optr)&t_method_return);
    Block PBlock16721 = new_Block_with(PArray16722, empty_Array, PThreadedCode16723, 1, PSend16724);
    Array PThreadedCode16720 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16721, (Optr)&t_method_return);
    Method PMethod16719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16720, 1, PBlock16721);
    
    MethodClosure MC_SMB_skipStepBlock = new_MethodClosure((Method)PMethod16719, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipStepBlock, MC_SMB_skipStepBlock);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16728 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16730 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16731 = new_Send((Optr)PSend16730, SMB_name, 0);
    String string_16732 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16732_Const = new_Constant((Optr)string_16732);
    // ,. 
    Send PSend16733 = new_Send((Optr)PSend16731, SMB__append_, 1, (Optr)string_16732_Const);
    // ,. 
    Send PSend16734 = new_Send((Optr)PSend16733, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend16735 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend16734);
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    // debugShellWithAction:. 
    Send PSend16736 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16729 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend16730, (Optr)&t_send0, (Optr)PSend16731, (Optr)&t_push1, (Optr)string_16732, (Optr)&t_send1, (Optr)PSend16733, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16734, (Optr)&t_send1, (Optr)PSend16735, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16736, (Optr)&t_method_return);
    Block PBlock16727 = new_Block_with(PArray16728, empty_Array, PThreadedCode16729, 2, PSend16735, PSend16736);
    Array PThreadedCode16726 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16727, (Optr)&t_method_return);
    Method PMethod16725 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16726, 1, PBlock16727);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16725, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_debugShellWithAction_() {
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16738 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_input_0_1 = new_Variable_named(L"input", 0);
    Array PArray16739 = new_Array_with(1, (Optr)VAR_input_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16742 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16745 = new_Send((Optr)self, SMB_shell, 0);
    Assign PAssign16744 = new_Assign((Optr)VAR_input_0_1, (Optr)PSend16745);
    String string_16746 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16746_Const = new_Constant((Optr)string_16746);
    // =. 
    Send PSend16747 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16746_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16751 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16752 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16751);
    Array PThreadedCode16750 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16751, (Optr)&t_send1, (Optr)PSend16752, (Optr)&t_block_return);
    Block PBlock16749 = new_Block_with(empty_Array, empty_Array, PThreadedCode16750, 1, PSend16752);
    // ifTrue:. 
    Send PSend16748 = new_Send((Optr)PSend16747, SMB_ifTrue_, 1, (Optr)PBlock16749);
    String string_16753 = new_String(L"o");
    Constant string_16753_Const = new_Constant((Optr)string_16753);
    // =. 
    Send PSend16754 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16753_Const);
    Variable VAR_oldBlock_2_0 = new_Variable_named(L"oldBlock", 2);
    Variable VAR_result_2_1 = new_Variable_named(L"result", 2);
    Array PArray16756 = new_Array_with(2, (Optr)VAR_oldBlock_2_0, (Optr)VAR_result_2_1);
    Assign PAssign16758 = new_Assign((Optr)VAR_oldBlock_2_0, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock);
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    // skipStepBlock. 
    Send PSend16760 = new_Send((Optr)self, SMB_skipStepBlock, 0);
    Assign PAssign16759 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16760);
    // value. 
    Send PSend16762 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Assign PAssign16761 = new_Assign((Optr)VAR_result_2_1, (Optr)PSend16762);
    Assign PAssign16763 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_oldBlock_2_0);
    // escape:. 
    Send PSend16764 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_2_1);
    Array PThreadedCode16757 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16758, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16759, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16760, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16761, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16762, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16763, (Optr)&t_push_variable, (Optr)VAR_oldBlock_2_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_2_1, (Optr)&t_send1, (Optr)PSend16764, (Optr)&t_method_return);
    Block PBlock16755 = new_Block_with(empty_Array, PArray16756, PThreadedCode16757, 5, PAssign16758, PAssign16759, PAssign16761, PAssign16763, PSend16764);
    // ifTrue:. 
    Send PSend16765 = new_Send((Optr)PSend16754, SMB_ifTrue_, 1, (Optr)PBlock16755);
    String string_16766 = new_String(L"i");
    Constant string_16766_Const = new_Constant((Optr)string_16766);
    // =. 
    Send PSend16767 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16766_Const);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16771 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend16772 = new_Send((Optr)PSend16771, SMB_inspect, 0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16773 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16774 = new_Send((Optr)PSend16773, SMB_lf, 0);
    // debugShellWithAction:. 
    Send PSend16775 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend16776 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16775);
    Array PThreadedCode16770 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16771, (Optr)&t_send0, (Optr)PSend16772, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16773, (Optr)&t_send0, (Optr)PSend16774, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend16775, (Optr)&t_send1, (Optr)PSend16776, (Optr)&t_block_return);
    Block PBlock16769 = new_Block_with(empty_Array, empty_Array, PThreadedCode16770, 3, PSend16772, PSend16774, PSend16776);
    // ifTrue:. 
    Send PSend16768 = new_Send((Optr)PSend16767, SMB_ifTrue_, 1, (Optr)PBlock16769);
    String string_16777 = new_String(L"j");
    Constant string_16777_Const = new_Constant((Optr)string_16777);
    // =. 
    Send PSend16778 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16777_Const);
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skipBlock:. 
    Send PSend16783 = new_Send((Optr)self, SMB_skipBlock_, 1, (Optr)int_2_Const);
    Assign PAssign16782 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16783);
    // value. 
    Send PSend16784 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    // escape:. 
    Send PSend16785 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16784);
    Array PThreadedCode16781 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16782, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend16783, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16784, (Optr)&t_send1, (Optr)PSend16785, (Optr)&t_block_return);
    Block PBlock16780 = new_Block_with(empty_Array, empty_Array, PThreadedCode16781, 2, PAssign16782, PSend16785);
    // ifTrue:. 
    Send PSend16779 = new_Send((Optr)PSend16778, SMB_ifTrue_, 1, (Optr)PBlock16780);
    Array PThreadedCode16743 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16744, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16745, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16746, (Optr)&t_send1, (Optr)PSend16747, (Optr)&t_send_ifTrue_, (Optr)PSend16748, (Optr)PBlock16749, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16753, (Optr)&t_send1, (Optr)PSend16754, (Optr)&t_push_closure, (Optr)PBlock16755, (Optr)&t_send1, (Optr)PSend16765, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16766, (Optr)&t_send1, (Optr)PSend16767, (Optr)&t_send_ifTrue_, (Optr)PSend16768, (Optr)PBlock16769, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16777, (Optr)&t_send1, (Optr)PSend16778, (Optr)&t_send_ifTrue_, (Optr)PSend16779, (Optr)PBlock16780, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16741 = new_Block_with(PArray16742, empty_Array, PThreadedCode16743, 6, PAssign16744, PSend16748, PSend16765, PSend16768, PSend16779, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16786 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16741);
    Array PThreadedCode16740 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16741, (Optr)&t_send1, (Optr)PSend16786, (Optr)&t_method_return);
    Method PMethod16737 = new_Method_with(PArray16738, PArray16739, empty_Array, PThreadedCode16740, 1, PSend16786);
    
    MethodClosure MC_SMB_debugShellWithAction_ = new_MethodClosure((Method)PMethod16737, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_debugShellWithAction_, MC_SMB_debugShellWithAction_);
}


static void init_SMB_interpretFromStdin() {
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    Variable VAR_readline_0_0 = new_Variable_named(L"readline", 0);
    Array PArray16788 = new_Array_with(1, (Optr)VAR_readline_0_0);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend16792 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16793 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    // from:to:for:. 
    Send PSend16791 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)PSend16792, (Optr)PSend16793, (Optr)self);
    Assign PAssign16790 = new_Assign((Optr)VAR_readline_0_0, (Optr)PSend16791);
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend16794 = new_Send((Optr)VAR_readline_0_0, SMB_readLine, 0);
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    // interpretLine:. 
    Send PSend16795 = new_Send((Optr)self, SMB_interpretLine_, 1, (Optr)PSend16794);
    Array PThreadedCode16789 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16790, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16792, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16793, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend16791, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_0, (Optr)&t_send0, (Optr)PSend16794, (Optr)&t_send1, (Optr)PSend16795, (Optr)&t_method_return);
    Method PMethod16787 = new_Method_with(empty_Array, PArray16788, empty_Array, PThreadedCode16789, 2, PAssign16790, PSend16795);
    
    MethodClosure MC_SMB_interpretFromStdin = new_MethodClosure((Method)PMethod16787, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretFromStdin, MC_SMB_interpretFromStdin);
}


static void init_SMB_interpretLine_() {
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16797 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16800 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_16802 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16802_Const = new_Constant((Optr)string_16802);
    // =. 
    Send PSend16803 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16802_Const);
    String string_16806 = new_String(L"o");
    Constant string_16806_Const = new_Constant((Optr)string_16806);
    // =. 
    Send PSend16807 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16806_Const);
    String string_16810 = new_String(L"i");
    Constant string_16810_Const = new_Constant((Optr)string_16810);
    // =. 
    Send PSend16811 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16810_Const);
    String string_16814 = new_String(L"j");
    Constant string_16814_Const = new_Constant((Optr)string_16814);
    // =. 
    Send PSend16815 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16814_Const);
    Array PThreadedCode16813 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16814, (Optr)&t_send1, (Optr)PSend16815, (Optr)&t_block_return);
    Block PBlock16812 = new_Block_with(empty_Array, empty_Array, PThreadedCode16813, 1, PSend16815);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend16816 = new_Send((Optr)PSend16811, SMB_or_, 1, (Optr)PBlock16812);
    Array PThreadedCode16809 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16810, (Optr)&t_send1, (Optr)PSend16811, (Optr)&t_push_closure, (Optr)PBlock16812, (Optr)&t_send1, (Optr)PSend16816, (Optr)&t_block_return);
    Block PBlock16808 = new_Block_with(empty_Array, empty_Array, PThreadedCode16809, 1, PSend16816);
    // or:. 
    Send PSend16817 = new_Send((Optr)PSend16807, SMB_or_, 1, (Optr)PBlock16808);
    Array PThreadedCode16805 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16806, (Optr)&t_send1, (Optr)PSend16807, (Optr)&t_push_closure, (Optr)PBlock16808, (Optr)&t_send1, (Optr)PSend16817, (Optr)&t_block_return);
    Block PBlock16804 = new_Block_with(empty_Array, empty_Array, PThreadedCode16805, 1, PSend16817);
    // or:. 
    Send PSend16818 = new_Send((Optr)PSend16803, SMB_or_, 1, (Optr)PBlock16804);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16822 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16823 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16822);
    Array PThreadedCode16821 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16822, (Optr)&t_send1, (Optr)PSend16823, (Optr)&t_block_return);
    Block PBlock16820 = new_Block_with(empty_Array, empty_Array, PThreadedCode16821, 1, PSend16823);
    // ifTrue:. 
    Send PSend16819 = new_Send((Optr)PSend16818, SMB_ifTrue_, 1, (Optr)PBlock16820);
    String string_16824 = new_String(L"");
    Constant string_16824_Const = new_Constant((Optr)string_16824);
    // =. 
    Send PSend16825 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16824_Const);
    String string_16829 = new_String(L"s");
    Constant string_16829_Const = new_Constant((Optr)string_16829);
    // value:. 
    Send PSend16830 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)string_16829_Const);
    // escape:. 
    Send PSend16831 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16830);
    Array PThreadedCode16828 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push1, (Optr)string_16829, (Optr)&t_send1, (Optr)PSend16830, (Optr)&t_send1, (Optr)PSend16831, (Optr)&t_block_return);
    Block PBlock16827 = new_Block_with(empty_Array, empty_Array, PThreadedCode16828, 1, PSend16831);
    // ifTrue:. 
    Send PSend16826 = new_Send((Optr)PSend16825, SMB_ifTrue_, 1, (Optr)PBlock16827);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16832 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16833 = new_Send((Optr)PSend16832, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16834 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16833);
    Array PThreadedCode16801 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16802, (Optr)&t_send1, (Optr)PSend16803, (Optr)&t_push_closure, (Optr)PBlock16804, (Optr)&t_send1, (Optr)PSend16818, (Optr)&t_send_ifTrue_, (Optr)PSend16819, (Optr)PBlock16820, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16824, (Optr)&t_send1, (Optr)PSend16825, (Optr)&t_send_ifTrue_, (Optr)PSend16826, (Optr)PBlock16827, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16832, (Optr)&t_send0, (Optr)PSend16833, (Optr)&t_send1, (Optr)PSend16834, (Optr)&t_method_return);
    Block PBlock16799 = new_Block_with(PArray16800, empty_Array, PThreadedCode16801, 3, PSend16819, PSend16826, PSend16834);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16835 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16799);
    Array PThreadedCode16798 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16799, (Optr)&t_send1, (Optr)PSend16835, (Optr)&t_method_return);
    Method PMethod16796 = new_Method_with(PArray16797, empty_Array, empty_Array, PThreadedCode16798, 1, PSend16835);
    
    MethodClosure MC_SMB_interpretLine_ = new_MethodClosure((Method)PMethod16796, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretLine_, MC_SMB_interpretLine_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16837 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray16838 = new_Array_with(1, (Optr)VAR_method_0_1);
    String string_16843 = new_String(L"method");
    Constant string_16843_Const = new_Constant((Optr)string_16843);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16844 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend16842 = new_Send((Optr)string_16843_Const, SMB__append_, 1, (Optr)PSend16844);
    // ,. 
    Send PSend16841 = new_Send((Optr)PSend16842, SMB__append_, 1, (Optr)VAR_code_0_0);
    Assign PAssign16840 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend16841);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16845 = new_Send((Optr)self, SMB_class, 0);
    // compile:. 
    Send PSend16846 = new_Send((Optr)PSend16845, SMB_compile_, 1, (Optr)VAR_method_0_1);
    Array PThreadedCode16839 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign16840, (Optr)&t_push1, (Optr)string_16843, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend16844, (Optr)&t_send1, (Optr)PSend16842, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16841, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16845, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send1, (Optr)PSend16846, (Optr)&t_method_return);
    Method PMethod16836 = new_Method_with(PArray16837, PArray16838, empty_Array, PThreadedCode16839, 2, PAssign16840, PSend16846);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16836, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_printStacktrace() {
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16849 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_printStacktrace, 0);
    Array PThreadedCode16848 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16849, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16847 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16848, 2, PSend16849, self);
    
    MethodClosure MC_SMB_printStacktrace = new_MethodClosure((Method)PMethod16847, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_printStacktrace, MC_SMB_printStacktrace);
}


static void init_SMB_skipBlock_() {
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    Variable VAR_count_0_0 = new_Variable_named(L"count", 0);
    Array PArray16851 = new_Array_with(1, (Optr)VAR_count_0_0);
    Variable VAR_skips_0_1 = new_Variable_named(L"skips", 0);
    Variable VAR_previousBlock_0_2 = new_Variable_named(L"previousBlock", 0);
    Array PArray16852 = new_Array_with(2, (Optr)VAR_skips_0_1, (Optr)VAR_previousBlock_0_2);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16854 = new_Assign((Optr)VAR_skips_0_1, (Optr)int_0_Const);
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    // stepBlock. 
    Send PSend16856 = new_Send((Optr)self, SMB_stepBlock, 0);
    Assign PAssign16855 = new_Assign((Optr)VAR_previousBlock_0_2, (Optr)PSend16856);
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16858 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16861 = new_Send((Optr)VAR_skips_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16860 = new_Assign((Optr)VAR_skips_0_1, (Optr)PSend16861);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend16862 = new_Send((Optr)VAR_skips_0_1, SMB__gt__equals_, 1, (Optr)VAR_count_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    // stepBlock:. 
    Send PSend16866 = new_Send((Optr)self, SMB_stepBlock_, 1, (Optr)VAR_previousBlock_0_2);
    Array PThreadedCode16865 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_previousBlock_0_2, (Optr)&t_send1, (Optr)PSend16866, (Optr)&t_block_return);
    Block PBlock16864 = new_Block_with(empty_Array, empty_Array, PThreadedCode16865, 1, PSend16866);
    // ifTrue:. 
    Send PSend16863 = new_Send((Optr)PSend16862, SMB_ifTrue_, 1, (Optr)PBlock16864);
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    // executeAction:. 
    Send PSend16867 = new_Send((Optr)self, SMB_executeAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16859 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16860, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16861, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_variable, (Optr)VAR_count_0_0, (Optr)&t_send1, (Optr)PSend16862, (Optr)&t_send_ifTrue_, (Optr)PSend16863, (Optr)PBlock16864, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16867, (Optr)&t_method_return);
    Block PBlock16857 = new_Block_with(PArray16858, empty_Array, PThreadedCode16859, 3, PAssign16860, PSend16863, PSend16867);
    Array PThreadedCode16853 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16854, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16855, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16856, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16857, (Optr)&t_method_return);
    Method PMethod16850 = new_Method_with(PArray16851, PArray16852, empty_Array, PThreadedCode16853, 3, PAssign16854, PAssign16855, PBlock16857);
    
    MethodClosure MC_SMB_skipBlock_ = new_MethodClosure((Method)PMethod16850, Interpretation_Debugger_Class);
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