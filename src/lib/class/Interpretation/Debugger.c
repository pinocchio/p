#include <lib/class/Interpretation/Debugger.h>


Optr layout_Interpretation_Debugger_Class_class;
Optr slot_Interpretation_Debugger_escapeShell;
Optr layout_Interpretation_Debugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16712 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16715 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16721 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16720 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16721, (Optr)&t_block_return);
    Block PBlock16719 = new_Block_with(empty_Array, empty_Array, PThreadedCode16720, 1, PSend16721);
    // ifNil:. 
    Send PSend16718 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16719);
    Assign PAssign16717 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16718);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16725 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16724 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16725);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16726 = new_Send((Optr)PAssign16724, SMB_isNil, 0);
    Array PThreadedCode16723 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16724, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16725, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16726, (Optr)&t_block_return);
    Block PBlock16722 = new_Block_with(empty_Array, empty_Array, PThreadedCode16723, 1, PSend16726);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16729 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    String string_16730 = new_String(L"  ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16730_Const = new_Constant((Optr)string_16730);
    // <<. 
    Send PSend16731 = new_Send((Optr)PSend16729, SMB__shiftLeft_, 1, (Optr)string_16730_Const);
    Array PThreadedCode16728 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16729, (Optr)&t_push1, (Optr)string_16730, (Optr)&t_send1, (Optr)PSend16731, (Optr)&t_block_return);
    Block PBlock16727 = new_Block_with(empty_Array, empty_Array, PThreadedCode16728, 1, PSend16731);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16732 = new_Send((Optr)PBlock16722, SMB_whileFalse_, 1, (Optr)PBlock16727);
    Array PThreadedCode16716 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16717, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16719, (Optr)&t_send1, (Optr)PSend16718, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16722, (Optr)&t_push_closure, (Optr)PBlock16727, (Optr)&t_send1, (Optr)PSend16732, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16714 = new_Block_with(PArray16715, empty_Array, PThreadedCode16716, 3, PAssign16717, PSend16732, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16733 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16714);
    Array PThreadedCode16713 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16714, (Optr)&t_send1, (Optr)PSend16733, (Optr)&t_method_return);
    Method PMethod16711 = new_Method_with(empty_Array, PArray16712, empty_Array, PThreadedCode16713, 1, PSend16733);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16711, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16737 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_input_2_0 = new_Variable_named(L"input", 2);
    Array PArray16741 = new_Array_with(1, (Optr)VAR_input_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16743 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_input_2_0);
    Array PThreadedCode16742 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_input_2_0, (Optr)&t_send1, (Optr)PSend16743, (Optr)&t_method_return);
    Block PBlock16740 = new_Block_with(PArray16741, empty_Array, PThreadedCode16742, 1, PSend16743);
    Assign PAssign16739 = new_Assign((Optr)slot_Interpretation_Debugger_escapeShell, (Optr)PBlock16740);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend16746 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    // interpretFromStdin. 
    Send PSend16747 = new_Send((Optr)self, SMB_interpretFromStdin, 0);
    Array PThreadedCode16745 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16746, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16747, (Optr)&t_block_return);
    Block PBlock16744 = new_Block_with(empty_Array, empty_Array, PThreadedCode16745, 2, PSend16746, PSend16747);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16748 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock16744);
    Array PThreadedCode16738 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign16739, (Optr)&t_push_closure, (Optr)PBlock16740, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock16744, (Optr)&t_send1, (Optr)PSend16748, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16736 = new_Block_with(PArray16737, empty_Array, PThreadedCode16738, 3, PAssign16739, PSend16748, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16749 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16736);
    Array PThreadedCode16735 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16736, (Optr)&t_send1, (Optr)PSend16749, (Optr)&t_method_return);
    Method PMethod16734 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16735, 1, PSend16749);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod16734, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16751 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend16753 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16754 = new_Send((Optr)self, SMB_printStacktrace, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16755 = new_Send((Optr)self, SMB_shell, 0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend16756 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode16752 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16753, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16754, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16755, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16756, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16750 = new_Method_with(PArray16751, empty_Array, empty_Array, PThreadedCode16752, 5, PSend16753, PSend16754, PSend16755, PSend16756, self);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod16750, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16758 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16760 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16762 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16764 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16765 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16763 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16764, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16765, (Optr)&t_method_return);
    Block PBlock16761 = new_Block_with(PArray16762, empty_Array, PThreadedCode16763, 2, PSend16764, PSend16765);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16766 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16767 = new_Send((Optr)PBlock16761, SMB_value_, 1, (Optr)PSend16766);
    Array PThreadedCode16759 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16760, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16761, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16766, (Optr)&t_send1, (Optr)PSend16767, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16757 = new_Method_with(PArray16758, empty_Array, empty_Array, PThreadedCode16759, 3, PSend16760, PSend16767, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod16757, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16769 = new_Array_with(1, (Optr)VAR_code_0_0);
    Array PThreadedCode16770 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16768 = new_Method_with(PArray16769, empty_Array, empty_Array, PThreadedCode16770, 1, true_Const);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod16768, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16773 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    String string_16774 = new_String(L"pidb> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16774_Const = new_Constant((Optr)string_16774);
    // <<. 
    Send PSend16775 = new_Send((Optr)PSend16773, SMB__shiftLeft_, 1, (Optr)string_16774_Const);
    Array PThreadedCode16772 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16773, (Optr)&t_push1, (Optr)string_16774, (Optr)&t_send1, (Optr)PSend16775, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16772, 2, PSend16775, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod16771, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_executeAction_() {
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16777 = new_Array_with(1, (Optr)VAR_action_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16779 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Array PThreadedCode16778 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16779, (Optr)&t_method_return);
    Method PMethod16776 = new_Method_with(PArray16777, empty_Array, empty_Array, PThreadedCode16778, 1, PSend16779);
    
    MethodClosure MC_SMB_executeAction_ = new_MethodClosure((Method)PMethod16776, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_executeAction_, MC_SMB_executeAction_);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16781 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16784 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend16788 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend16789 = new_Send((Optr)PSend16788, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode16787 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend16788, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16789, (Optr)&t_block_return);
    Block PBlock16786 = new_Block_with(empty_Array, empty_Array, PThreadedCode16787, 1, PSend16789);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray16791 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend16793 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend16794 = new_Send((Optr)PSend16793, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend16798 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16799 = new_Send((Optr)PSend16798, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16800 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16799);
    Array PThreadedCode16797 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16798, (Optr)&t_send0, (Optr)PSend16799, (Optr)&t_send1, (Optr)PSend16800, (Optr)&t_block_return);
    Block PBlock16796 = new_Block_with(empty_Array, empty_Array, PThreadedCode16797, 1, PSend16800);
    // ifFalse:. 
    Send PSend16795 = new_Send((Optr)PSend16794, SMB_ifFalse_, 1, (Optr)PBlock16796);
    Array PThreadedCode16792 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16793, (Optr)&t_send0, (Optr)PSend16794, (Optr)&t_send_ifFalse_, (Optr)PSend16795, (Optr)PBlock16796, (Optr)&t_method_return);
    Block PBlock16790 = new_Block_with(PArray16791, empty_Array, PThreadedCode16792, 1, PSend16795);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16801 = new_Send((Optr)PBlock16786, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock16790);
    Array PThreadedCode16785 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock16786, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock16790, (Optr)&t_send2, (Optr)PSend16801, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16783 = new_Block_with(PArray16784, empty_Array, PThreadedCode16785, 2, PSend16801, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16802 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16783);
    Array PThreadedCode16782 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16783, (Optr)&t_send1, (Optr)PSend16802, (Optr)&t_method_return);
    Method PMethod16780 = new_Method_with(PArray16781, empty_Array, empty_Array, PThreadedCode16782, 1, PSend16802);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod16780, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_skipStepBlock() {
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16806 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16808 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16807 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16808, (Optr)&t_method_return);
    Block PBlock16805 = new_Block_with(PArray16806, empty_Array, PThreadedCode16807, 1, PSend16808);
    Array PThreadedCode16804 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16805, (Optr)&t_method_return);
    Method PMethod16803 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16804, 1, PBlock16805);
    
    MethodClosure MC_SMB_skipStepBlock = new_MethodClosure((Method)PMethod16803, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipStepBlock, MC_SMB_skipStepBlock);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16812 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16814 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16815 = new_Send((Optr)PSend16814, SMB_name, 0);
    String string_16816 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16816_Const = new_Constant((Optr)string_16816);
    // ,. 
    Send PSend16817 = new_Send((Optr)PSend16815, SMB__append_, 1, (Optr)string_16816_Const);
    // ,. 
    Send PSend16818 = new_Send((Optr)PSend16817, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend16819 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend16818);
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    // debugShellWithAction:. 
    Send PSend16820 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16813 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend16814, (Optr)&t_send0, (Optr)PSend16815, (Optr)&t_push1, (Optr)string_16816, (Optr)&t_send1, (Optr)PSend16817, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16818, (Optr)&t_send1, (Optr)PSend16819, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16820, (Optr)&t_method_return);
    Block PBlock16811 = new_Block_with(PArray16812, empty_Array, PThreadedCode16813, 2, PSend16819, PSend16820);
    Array PThreadedCode16810 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16811, (Optr)&t_method_return);
    Method PMethod16809 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16810, 1, PBlock16811);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16809, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_debugShellWithAction_() {
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16822 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_input_0_1 = new_Variable_named(L"input", 0);
    Array PArray16823 = new_Array_with(1, (Optr)VAR_input_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16826 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16829 = new_Send((Optr)self, SMB_shell, 0);
    Assign PAssign16828 = new_Assign((Optr)VAR_input_0_1, (Optr)PSend16829);
    String string_16830 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16830_Const = new_Constant((Optr)string_16830);
    // =. 
    Send PSend16831 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16830_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16835 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16836 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16835);
    Array PThreadedCode16834 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16835, (Optr)&t_send1, (Optr)PSend16836, (Optr)&t_block_return);
    Block PBlock16833 = new_Block_with(empty_Array, empty_Array, PThreadedCode16834, 1, PSend16836);
    // ifTrue:. 
    Send PSend16832 = new_Send((Optr)PSend16831, SMB_ifTrue_, 1, (Optr)PBlock16833);
    String string_16837 = new_String(L"o");
    Constant string_16837_Const = new_Constant((Optr)string_16837);
    // =. 
    Send PSend16838 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16837_Const);
    Variable VAR_oldBlock_2_0 = new_Variable_named(L"oldBlock", 2);
    Variable VAR_result_2_1 = new_Variable_named(L"result", 2);
    Array PArray16840 = new_Array_with(2, (Optr)VAR_oldBlock_2_0, (Optr)VAR_result_2_1);
    Assign PAssign16842 = new_Assign((Optr)VAR_oldBlock_2_0, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock);
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    // skipStepBlock. 
    Send PSend16844 = new_Send((Optr)self, SMB_skipStepBlock, 0);
    Assign PAssign16843 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16844);
    // value. 
    Send PSend16846 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Assign PAssign16845 = new_Assign((Optr)VAR_result_2_1, (Optr)PSend16846);
    Assign PAssign16847 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_oldBlock_2_0);
    // escape:. 
    Send PSend16848 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_2_1);
    Array PThreadedCode16841 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16842, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16843, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16844, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16845, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16846, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16847, (Optr)&t_push_variable, (Optr)VAR_oldBlock_2_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_2_1, (Optr)&t_send1, (Optr)PSend16848, (Optr)&t_method_return);
    Block PBlock16839 = new_Block_with(empty_Array, PArray16840, PThreadedCode16841, 5, PAssign16842, PAssign16843, PAssign16845, PAssign16847, PSend16848);
    // ifTrue:. 
    Send PSend16849 = new_Send((Optr)PSend16838, SMB_ifTrue_, 1, (Optr)PBlock16839);
    String string_16850 = new_String(L"i");
    Constant string_16850_Const = new_Constant((Optr)string_16850);
    // =. 
    Send PSend16851 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16850_Const);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16855 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend16856 = new_Send((Optr)PSend16855, SMB_inspect, 0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16857 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16858 = new_Send((Optr)PSend16857, SMB_lf, 0);
    // debugShellWithAction:. 
    Send PSend16859 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend16860 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16859);
    Array PThreadedCode16854 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16855, (Optr)&t_send0, (Optr)PSend16856, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16857, (Optr)&t_send0, (Optr)PSend16858, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend16859, (Optr)&t_send1, (Optr)PSend16860, (Optr)&t_block_return);
    Block PBlock16853 = new_Block_with(empty_Array, empty_Array, PThreadedCode16854, 3, PSend16856, PSend16858, PSend16860);
    // ifTrue:. 
    Send PSend16852 = new_Send((Optr)PSend16851, SMB_ifTrue_, 1, (Optr)PBlock16853);
    String string_16861 = new_String(L"j");
    Constant string_16861_Const = new_Constant((Optr)string_16861);
    // =. 
    Send PSend16862 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16861_Const);
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skipBlock:. 
    Send PSend16867 = new_Send((Optr)self, SMB_skipBlock_, 1, (Optr)int_2_Const);
    Assign PAssign16866 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16867);
    // value. 
    Send PSend16868 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    // escape:. 
    Send PSend16869 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16868);
    Array PThreadedCode16865 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16866, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend16867, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16868, (Optr)&t_send1, (Optr)PSend16869, (Optr)&t_block_return);
    Block PBlock16864 = new_Block_with(empty_Array, empty_Array, PThreadedCode16865, 2, PAssign16866, PSend16869);
    // ifTrue:. 
    Send PSend16863 = new_Send((Optr)PSend16862, SMB_ifTrue_, 1, (Optr)PBlock16864);
    Array PThreadedCode16827 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16828, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16829, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16830, (Optr)&t_send1, (Optr)PSend16831, (Optr)&t_send_ifTrue_, (Optr)PSend16832, (Optr)PBlock16833, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16837, (Optr)&t_send1, (Optr)PSend16838, (Optr)&t_push_closure, (Optr)PBlock16839, (Optr)&t_send1, (Optr)PSend16849, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16850, (Optr)&t_send1, (Optr)PSend16851, (Optr)&t_send_ifTrue_, (Optr)PSend16852, (Optr)PBlock16853, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16861, (Optr)&t_send1, (Optr)PSend16862, (Optr)&t_send_ifTrue_, (Optr)PSend16863, (Optr)PBlock16864, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16825 = new_Block_with(PArray16826, empty_Array, PThreadedCode16827, 6, PAssign16828, PSend16832, PSend16849, PSend16852, PSend16863, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16870 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16825);
    Array PThreadedCode16824 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16825, (Optr)&t_send1, (Optr)PSend16870, (Optr)&t_method_return);
    Method PMethod16821 = new_Method_with(PArray16822, PArray16823, empty_Array, PThreadedCode16824, 1, PSend16870);
    
    MethodClosure MC_SMB_debugShellWithAction_ = new_MethodClosure((Method)PMethod16821, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_debugShellWithAction_, MC_SMB_debugShellWithAction_);
}


static void init_SMB_interpretFromStdin() {
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    Variable VAR_readline_0_0 = new_Variable_named(L"readline", 0);
    Array PArray16872 = new_Array_with(1, (Optr)VAR_readline_0_0);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend16876 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16877 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    // from:to:for:. 
    Send PSend16875 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)PSend16876, (Optr)PSend16877, (Optr)self);
    Assign PAssign16874 = new_Assign((Optr)VAR_readline_0_0, (Optr)PSend16875);
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend16878 = new_Send((Optr)VAR_readline_0_0, SMB_readLine, 0);
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    // interpretLine:. 
    Send PSend16879 = new_Send((Optr)self, SMB_interpretLine_, 1, (Optr)PSend16878);
    Array PThreadedCode16873 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16874, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16876, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16877, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend16875, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_0, (Optr)&t_send0, (Optr)PSend16878, (Optr)&t_send1, (Optr)PSend16879, (Optr)&t_method_return);
    Method PMethod16871 = new_Method_with(empty_Array, PArray16872, empty_Array, PThreadedCode16873, 2, PAssign16874, PSend16879);
    
    MethodClosure MC_SMB_interpretFromStdin = new_MethodClosure((Method)PMethod16871, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretFromStdin, MC_SMB_interpretFromStdin);
}


static void init_SMB_interpretLine_() {
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16881 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16884 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_16886 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16886_Const = new_Constant((Optr)string_16886);
    // =. 
    Send PSend16887 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16886_Const);
    String string_16890 = new_String(L"o");
    Constant string_16890_Const = new_Constant((Optr)string_16890);
    // =. 
    Send PSend16891 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16890_Const);
    String string_16894 = new_String(L"i");
    Constant string_16894_Const = new_Constant((Optr)string_16894);
    // =. 
    Send PSend16895 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16894_Const);
    String string_16898 = new_String(L"j");
    Constant string_16898_Const = new_Constant((Optr)string_16898);
    // =. 
    Send PSend16899 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16898_Const);
    Array PThreadedCode16897 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16898, (Optr)&t_send1, (Optr)PSend16899, (Optr)&t_block_return);
    Block PBlock16896 = new_Block_with(empty_Array, empty_Array, PThreadedCode16897, 1, PSend16899);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend16900 = new_Send((Optr)PSend16895, SMB_or_, 1, (Optr)PBlock16896);
    Array PThreadedCode16893 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16894, (Optr)&t_send1, (Optr)PSend16895, (Optr)&t_push_closure, (Optr)PBlock16896, (Optr)&t_send1, (Optr)PSend16900, (Optr)&t_block_return);
    Block PBlock16892 = new_Block_with(empty_Array, empty_Array, PThreadedCode16893, 1, PSend16900);
    // or:. 
    Send PSend16901 = new_Send((Optr)PSend16891, SMB_or_, 1, (Optr)PBlock16892);
    Array PThreadedCode16889 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16890, (Optr)&t_send1, (Optr)PSend16891, (Optr)&t_push_closure, (Optr)PBlock16892, (Optr)&t_send1, (Optr)PSend16901, (Optr)&t_block_return);
    Block PBlock16888 = new_Block_with(empty_Array, empty_Array, PThreadedCode16889, 1, PSend16901);
    // or:. 
    Send PSend16902 = new_Send((Optr)PSend16887, SMB_or_, 1, (Optr)PBlock16888);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16906 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16907 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16906);
    Array PThreadedCode16905 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16906, (Optr)&t_send1, (Optr)PSend16907, (Optr)&t_block_return);
    Block PBlock16904 = new_Block_with(empty_Array, empty_Array, PThreadedCode16905, 1, PSend16907);
    // ifTrue:. 
    Send PSend16903 = new_Send((Optr)PSend16902, SMB_ifTrue_, 1, (Optr)PBlock16904);
    String string_16908 = new_String(L"");
    Constant string_16908_Const = new_Constant((Optr)string_16908);
    // =. 
    Send PSend16909 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16908_Const);
    String string_16913 = new_String(L"s");
    Constant string_16913_Const = new_Constant((Optr)string_16913);
    // value:. 
    Send PSend16914 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)string_16913_Const);
    // escape:. 
    Send PSend16915 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16914);
    Array PThreadedCode16912 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push1, (Optr)string_16913, (Optr)&t_send1, (Optr)PSend16914, (Optr)&t_send1, (Optr)PSend16915, (Optr)&t_block_return);
    Block PBlock16911 = new_Block_with(empty_Array, empty_Array, PThreadedCode16912, 1, PSend16915);
    // ifTrue:. 
    Send PSend16910 = new_Send((Optr)PSend16909, SMB_ifTrue_, 1, (Optr)PBlock16911);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16916 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16917 = new_Send((Optr)PSend16916, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16918 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16917);
    Array PThreadedCode16885 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16886, (Optr)&t_send1, (Optr)PSend16887, (Optr)&t_push_closure, (Optr)PBlock16888, (Optr)&t_send1, (Optr)PSend16902, (Optr)&t_send_ifTrue_, (Optr)PSend16903, (Optr)PBlock16904, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16908, (Optr)&t_send1, (Optr)PSend16909, (Optr)&t_send_ifTrue_, (Optr)PSend16910, (Optr)PBlock16911, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16916, (Optr)&t_send0, (Optr)PSend16917, (Optr)&t_send1, (Optr)PSend16918, (Optr)&t_method_return);
    Block PBlock16883 = new_Block_with(PArray16884, empty_Array, PThreadedCode16885, 3, PSend16903, PSend16910, PSend16918);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16919 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16883);
    Array PThreadedCode16882 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16883, (Optr)&t_send1, (Optr)PSend16919, (Optr)&t_method_return);
    Method PMethod16880 = new_Method_with(PArray16881, empty_Array, empty_Array, PThreadedCode16882, 1, PSend16919);
    
    MethodClosure MC_SMB_interpretLine_ = new_MethodClosure((Method)PMethod16880, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretLine_, MC_SMB_interpretLine_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16921 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray16922 = new_Array_with(1, (Optr)VAR_method_0_1);
    String string_16927 = new_String(L"method");
    Constant string_16927_Const = new_Constant((Optr)string_16927);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16928 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend16926 = new_Send((Optr)string_16927_Const, SMB__append_, 1, (Optr)PSend16928);
    // ,. 
    Send PSend16925 = new_Send((Optr)PSend16926, SMB__append_, 1, (Optr)VAR_code_0_0);
    Assign PAssign16924 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend16925);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16929 = new_Send((Optr)self, SMB_class, 0);
    // compile:. 
    Send PSend16930 = new_Send((Optr)PSend16929, SMB_compile_, 1, (Optr)VAR_method_0_1);
    Array PThreadedCode16923 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign16924, (Optr)&t_push1, (Optr)string_16927, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend16928, (Optr)&t_send1, (Optr)PSend16926, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16929, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send1, (Optr)PSend16930, (Optr)&t_method_return);
    Method PMethod16920 = new_Method_with(PArray16921, PArray16922, empty_Array, PThreadedCode16923, 2, PAssign16924, PSend16930);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16920, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_printStacktrace() {
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16933 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_printStacktrace, 0);
    Array PThreadedCode16932 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16933, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16932, 2, PSend16933, self);
    
    MethodClosure MC_SMB_printStacktrace = new_MethodClosure((Method)PMethod16931, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_printStacktrace, MC_SMB_printStacktrace);
}


static void init_SMB_skipBlock_() {
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    Variable VAR_count_0_0 = new_Variable_named(L"count", 0);
    Array PArray16935 = new_Array_with(1, (Optr)VAR_count_0_0);
    Variable VAR_skips_0_1 = new_Variable_named(L"skips", 0);
    Variable VAR_previousBlock_0_2 = new_Variable_named(L"previousBlock", 0);
    Array PArray16936 = new_Array_with(2, (Optr)VAR_skips_0_1, (Optr)VAR_previousBlock_0_2);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16938 = new_Assign((Optr)VAR_skips_0_1, (Optr)int_0_Const);
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    // stepBlock. 
    Send PSend16940 = new_Send((Optr)self, SMB_stepBlock, 0);
    Assign PAssign16939 = new_Assign((Optr)VAR_previousBlock_0_2, (Optr)PSend16940);
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16942 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16945 = new_Send((Optr)VAR_skips_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16944 = new_Assign((Optr)VAR_skips_0_1, (Optr)PSend16945);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend16946 = new_Send((Optr)VAR_skips_0_1, SMB__gt__equals_, 1, (Optr)VAR_count_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    // stepBlock:. 
    Send PSend16950 = new_Send((Optr)self, SMB_stepBlock_, 1, (Optr)VAR_previousBlock_0_2);
    Array PThreadedCode16949 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_previousBlock_0_2, (Optr)&t_send1, (Optr)PSend16950, (Optr)&t_block_return);
    Block PBlock16948 = new_Block_with(empty_Array, empty_Array, PThreadedCode16949, 1, PSend16950);
    // ifTrue:. 
    Send PSend16947 = new_Send((Optr)PSend16946, SMB_ifTrue_, 1, (Optr)PBlock16948);
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    // executeAction:. 
    Send PSend16951 = new_Send((Optr)self, SMB_executeAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16943 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16944, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16945, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_variable, (Optr)VAR_count_0_0, (Optr)&t_send1, (Optr)PSend16946, (Optr)&t_send_ifTrue_, (Optr)PSend16947, (Optr)PBlock16948, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16951, (Optr)&t_method_return);
    Block PBlock16941 = new_Block_with(PArray16942, empty_Array, PThreadedCode16943, 3, PAssign16944, PSend16947, PSend16951);
    Array PThreadedCode16937 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16938, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16939, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16940, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16941, (Optr)&t_method_return);
    Method PMethod16934 = new_Method_with(PArray16935, PArray16936, empty_Array, PThreadedCode16937, 3, PAssign16938, PAssign16939, PBlock16941);
    
    MethodClosure MC_SMB_skipBlock_ = new_MethodClosure((Method)PMethod16934, Interpretation_Debugger_Class);
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