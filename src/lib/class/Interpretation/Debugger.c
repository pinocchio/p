#include <lib/class/Interpretation/Debugger.h>


Optr layout_Interpretation_Debugger_Class_class;
Optr slot_Interpretation_Debugger_escapeShell;
Optr layout_Interpretation_Debugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16701 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16704 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16710 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16709 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16710, (Optr)&t_block_return);
    Block PBlock16708 = new_Block_with(empty_Array, empty_Array, PThreadedCode16709, 1, PSend16710);
    // ifNil:. 
    Send PSend16707 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16708);
    Assign PAssign16706 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16707);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16714 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16713 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16714);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16715 = new_Send((Optr)PAssign16713, SMB_isNil, 0);
    Array PThreadedCode16712 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16713, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16714, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16715, (Optr)&t_block_return);
    Block PBlock16711 = new_Block_with(empty_Array, empty_Array, PThreadedCode16712, 1, PSend16715);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16718 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    String string_16719 = new_String(L"  ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16719_Const = new_Constant((Optr)string_16719);
    // <<. 
    Send PSend16720 = new_Send((Optr)PSend16718, SMB__shiftLeft_, 1, (Optr)string_16719_Const);
    Array PThreadedCode16717 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16718, (Optr)&t_push1, (Optr)string_16719, (Optr)&t_send1, (Optr)PSend16720, (Optr)&t_block_return);
    Block PBlock16716 = new_Block_with(empty_Array, empty_Array, PThreadedCode16717, 1, PSend16720);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16721 = new_Send((Optr)PBlock16711, SMB_whileFalse_, 1, (Optr)PBlock16716);
    Array PThreadedCode16705 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16706, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16708, (Optr)&t_send1, (Optr)PSend16707, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16711, (Optr)&t_push_closure, (Optr)PBlock16716, (Optr)&t_send1, (Optr)PSend16721, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16703 = new_Block_with(PArray16704, empty_Array, PThreadedCode16705, 3, PAssign16706, PSend16721, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16722 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16703);
    Array PThreadedCode16702 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16703, (Optr)&t_send1, (Optr)PSend16722, (Optr)&t_method_return);
    Method PMethod16700 = new_Method_with(empty_Array, PArray16701, empty_Array, PThreadedCode16702, 1, PSend16722);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16700, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16726 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_input_2_0 = new_Variable_named(L"input", 2);
    Array PArray16730 = new_Array_with(1, (Optr)VAR_input_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16732 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_input_2_0);
    Array PThreadedCode16731 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_input_2_0, (Optr)&t_send1, (Optr)PSend16732, (Optr)&t_method_return);
    Block PBlock16729 = new_Block_with(PArray16730, empty_Array, PThreadedCode16731, 1, PSend16732);
    Assign PAssign16728 = new_Assign((Optr)slot_Interpretation_Debugger_escapeShell, (Optr)PBlock16729);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend16735 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    // interpretFromStdin. 
    Send PSend16736 = new_Send((Optr)self, SMB_interpretFromStdin, 0);
    Array PThreadedCode16734 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16735, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16736, (Optr)&t_block_return);
    Block PBlock16733 = new_Block_with(empty_Array, empty_Array, PThreadedCode16734, 2, PSend16735, PSend16736);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16737 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock16733);
    Array PThreadedCode16727 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign16728, (Optr)&t_push_closure, (Optr)PBlock16729, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock16733, (Optr)&t_send1, (Optr)PSend16737, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16725 = new_Block_with(PArray16726, empty_Array, PThreadedCode16727, 3, PAssign16728, PSend16737, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16738 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16725);
    Array PThreadedCode16724 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16725, (Optr)&t_send1, (Optr)PSend16738, (Optr)&t_method_return);
    Method PMethod16723 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16724, 1, PSend16738);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod16723, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16740 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend16742 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16743 = new_Send((Optr)self, SMB_printStacktrace, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16744 = new_Send((Optr)self, SMB_shell, 0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend16745 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode16741 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16742, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16743, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16744, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16745, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16739 = new_Method_with(PArray16740, empty_Array, empty_Array, PThreadedCode16741, 5, PSend16742, PSend16743, PSend16744, PSend16745, self);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod16739, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16747 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16749 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16751 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16753 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16754 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16752 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16753, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16754, (Optr)&t_method_return);
    Block PBlock16750 = new_Block_with(PArray16751, empty_Array, PThreadedCode16752, 2, PSend16753, PSend16754);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16755 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16756 = new_Send((Optr)PBlock16750, SMB_value_, 1, (Optr)PSend16755);
    Array PThreadedCode16748 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16749, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16750, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16755, (Optr)&t_send1, (Optr)PSend16756, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16746 = new_Method_with(PArray16747, empty_Array, empty_Array, PThreadedCode16748, 3, PSend16749, PSend16756, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod16746, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16758 = new_Array_with(1, (Optr)VAR_code_0_0);
    Array PThreadedCode16759 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16757 = new_Method_with(PArray16758, empty_Array, empty_Array, PThreadedCode16759, 1, true_Const);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod16757, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16762 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    String string_16763 = new_String(L"pidb> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16763_Const = new_Constant((Optr)string_16763);
    // <<. 
    Send PSend16764 = new_Send((Optr)PSend16762, SMB__shiftLeft_, 1, (Optr)string_16763_Const);
    Array PThreadedCode16761 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16762, (Optr)&t_push1, (Optr)string_16763, (Optr)&t_send1, (Optr)PSend16764, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16761, 2, PSend16764, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod16760, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_executeAction_() {
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16766 = new_Array_with(1, (Optr)VAR_action_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16768 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Array PThreadedCode16767 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16768, (Optr)&t_method_return);
    Method PMethod16765 = new_Method_with(PArray16766, empty_Array, empty_Array, PThreadedCode16767, 1, PSend16768);
    
    MethodClosure MC_SMB_executeAction_ = new_MethodClosure((Method)PMethod16765, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_executeAction_, MC_SMB_executeAction_);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16770 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16773 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend16777 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend16778 = new_Send((Optr)PSend16777, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode16776 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend16777, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16778, (Optr)&t_block_return);
    Block PBlock16775 = new_Block_with(empty_Array, empty_Array, PThreadedCode16776, 1, PSend16778);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray16780 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend16782 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend16783 = new_Send((Optr)PSend16782, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend16787 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16788 = new_Send((Optr)PSend16787, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16789 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16788);
    Array PThreadedCode16786 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16787, (Optr)&t_send0, (Optr)PSend16788, (Optr)&t_send1, (Optr)PSend16789, (Optr)&t_block_return);
    Block PBlock16785 = new_Block_with(empty_Array, empty_Array, PThreadedCode16786, 1, PSend16789);
    // ifFalse:. 
    Send PSend16784 = new_Send((Optr)PSend16783, SMB_ifFalse_, 1, (Optr)PBlock16785);
    Array PThreadedCode16781 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16782, (Optr)&t_send0, (Optr)PSend16783, (Optr)&t_send_ifFalse_, (Optr)PSend16784, (Optr)PBlock16785, (Optr)&t_method_return);
    Block PBlock16779 = new_Block_with(PArray16780, empty_Array, PThreadedCode16781, 1, PSend16784);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16790 = new_Send((Optr)PBlock16775, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock16779);
    Array PThreadedCode16774 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock16775, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock16779, (Optr)&t_send2, (Optr)PSend16790, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16772 = new_Block_with(PArray16773, empty_Array, PThreadedCode16774, 2, PSend16790, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16791 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16772);
    Array PThreadedCode16771 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16772, (Optr)&t_send1, (Optr)PSend16791, (Optr)&t_method_return);
    Method PMethod16769 = new_Method_with(PArray16770, empty_Array, empty_Array, PThreadedCode16771, 1, PSend16791);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod16769, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_skipStepBlock() {
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16795 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16797 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16796 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16797, (Optr)&t_method_return);
    Block PBlock16794 = new_Block_with(PArray16795, empty_Array, PThreadedCode16796, 1, PSend16797);
    Array PThreadedCode16793 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16794, (Optr)&t_method_return);
    Method PMethod16792 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16793, 1, PBlock16794);
    
    MethodClosure MC_SMB_skipStepBlock = new_MethodClosure((Method)PMethod16792, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipStepBlock, MC_SMB_skipStepBlock);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16801 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16803 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16804 = new_Send((Optr)PSend16803, SMB_name, 0);
    String string_16805 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16805_Const = new_Constant((Optr)string_16805);
    // ,. 
    Send PSend16806 = new_Send((Optr)PSend16804, SMB__append_, 1, (Optr)string_16805_Const);
    // ,. 
    Send PSend16807 = new_Send((Optr)PSend16806, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend16808 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend16807);
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    // debugShellWithAction:. 
    Send PSend16809 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16802 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend16803, (Optr)&t_send0, (Optr)PSend16804, (Optr)&t_push1, (Optr)string_16805, (Optr)&t_send1, (Optr)PSend16806, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16807, (Optr)&t_send1, (Optr)PSend16808, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16809, (Optr)&t_method_return);
    Block PBlock16800 = new_Block_with(PArray16801, empty_Array, PThreadedCode16802, 2, PSend16808, PSend16809);
    Array PThreadedCode16799 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16800, (Optr)&t_method_return);
    Method PMethod16798 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16799, 1, PBlock16800);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16798, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_debugShellWithAction_() {
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16811 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_input_0_1 = new_Variable_named(L"input", 0);
    Array PArray16812 = new_Array_with(1, (Optr)VAR_input_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16815 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16818 = new_Send((Optr)self, SMB_shell, 0);
    Assign PAssign16817 = new_Assign((Optr)VAR_input_0_1, (Optr)PSend16818);
    String string_16819 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16819_Const = new_Constant((Optr)string_16819);
    // =. 
    Send PSend16820 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16819_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16824 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16825 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16824);
    Array PThreadedCode16823 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16824, (Optr)&t_send1, (Optr)PSend16825, (Optr)&t_block_return);
    Block PBlock16822 = new_Block_with(empty_Array, empty_Array, PThreadedCode16823, 1, PSend16825);
    // ifTrue:. 
    Send PSend16821 = new_Send((Optr)PSend16820, SMB_ifTrue_, 1, (Optr)PBlock16822);
    String string_16826 = new_String(L"o");
    Constant string_16826_Const = new_Constant((Optr)string_16826);
    // =. 
    Send PSend16827 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16826_Const);
    Variable VAR_oldBlock_2_0 = new_Variable_named(L"oldBlock", 2);
    Variable VAR_result_2_1 = new_Variable_named(L"result", 2);
    Array PArray16829 = new_Array_with(2, (Optr)VAR_oldBlock_2_0, (Optr)VAR_result_2_1);
    Assign PAssign16831 = new_Assign((Optr)VAR_oldBlock_2_0, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock);
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    // skipStepBlock. 
    Send PSend16833 = new_Send((Optr)self, SMB_skipStepBlock, 0);
    Assign PAssign16832 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16833);
    // value. 
    Send PSend16835 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Assign PAssign16834 = new_Assign((Optr)VAR_result_2_1, (Optr)PSend16835);
    Assign PAssign16836 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_oldBlock_2_0);
    // escape:. 
    Send PSend16837 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_2_1);
    Array PThreadedCode16830 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16831, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16832, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16833, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16834, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16835, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16836, (Optr)&t_push_variable, (Optr)VAR_oldBlock_2_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_2_1, (Optr)&t_send1, (Optr)PSend16837, (Optr)&t_method_return);
    Block PBlock16828 = new_Block_with(empty_Array, PArray16829, PThreadedCode16830, 5, PAssign16831, PAssign16832, PAssign16834, PAssign16836, PSend16837);
    // ifTrue:. 
    Send PSend16838 = new_Send((Optr)PSend16827, SMB_ifTrue_, 1, (Optr)PBlock16828);
    String string_16839 = new_String(L"i");
    Constant string_16839_Const = new_Constant((Optr)string_16839);
    // =. 
    Send PSend16840 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16839_Const);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16844 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend16845 = new_Send((Optr)PSend16844, SMB_inspect, 0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16846 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16847 = new_Send((Optr)PSend16846, SMB_lf, 0);
    // debugShellWithAction:. 
    Send PSend16848 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend16849 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16848);
    Array PThreadedCode16843 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16844, (Optr)&t_send0, (Optr)PSend16845, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16846, (Optr)&t_send0, (Optr)PSend16847, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend16848, (Optr)&t_send1, (Optr)PSend16849, (Optr)&t_block_return);
    Block PBlock16842 = new_Block_with(empty_Array, empty_Array, PThreadedCode16843, 3, PSend16845, PSend16847, PSend16849);
    // ifTrue:. 
    Send PSend16841 = new_Send((Optr)PSend16840, SMB_ifTrue_, 1, (Optr)PBlock16842);
    String string_16850 = new_String(L"j");
    Constant string_16850_Const = new_Constant((Optr)string_16850);
    // =. 
    Send PSend16851 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16850_Const);
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skipBlock:. 
    Send PSend16856 = new_Send((Optr)self, SMB_skipBlock_, 1, (Optr)int_2_Const);
    Assign PAssign16855 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16856);
    // value. 
    Send PSend16857 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    // escape:. 
    Send PSend16858 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16857);
    Array PThreadedCode16854 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16855, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend16856, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16857, (Optr)&t_send1, (Optr)PSend16858, (Optr)&t_block_return);
    Block PBlock16853 = new_Block_with(empty_Array, empty_Array, PThreadedCode16854, 2, PAssign16855, PSend16858);
    // ifTrue:. 
    Send PSend16852 = new_Send((Optr)PSend16851, SMB_ifTrue_, 1, (Optr)PBlock16853);
    Array PThreadedCode16816 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16817, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16818, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16819, (Optr)&t_send1, (Optr)PSend16820, (Optr)&t_send_ifTrue_, (Optr)PSend16821, (Optr)PBlock16822, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16826, (Optr)&t_send1, (Optr)PSend16827, (Optr)&t_push_closure, (Optr)PBlock16828, (Optr)&t_send1, (Optr)PSend16838, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16839, (Optr)&t_send1, (Optr)PSend16840, (Optr)&t_send_ifTrue_, (Optr)PSend16841, (Optr)PBlock16842, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16850, (Optr)&t_send1, (Optr)PSend16851, (Optr)&t_send_ifTrue_, (Optr)PSend16852, (Optr)PBlock16853, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16814 = new_Block_with(PArray16815, empty_Array, PThreadedCode16816, 6, PAssign16817, PSend16821, PSend16838, PSend16841, PSend16852, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16859 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16814);
    Array PThreadedCode16813 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16814, (Optr)&t_send1, (Optr)PSend16859, (Optr)&t_method_return);
    Method PMethod16810 = new_Method_with(PArray16811, PArray16812, empty_Array, PThreadedCode16813, 1, PSend16859);
    
    MethodClosure MC_SMB_debugShellWithAction_ = new_MethodClosure((Method)PMethod16810, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_debugShellWithAction_, MC_SMB_debugShellWithAction_);
}


static void init_SMB_interpretFromStdin() {
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    Variable VAR_readline_0_0 = new_Variable_named(L"readline", 0);
    Array PArray16861 = new_Array_with(1, (Optr)VAR_readline_0_0);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend16865 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16866 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    // from:to:for:. 
    Send PSend16864 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)PSend16865, (Optr)PSend16866, (Optr)self);
    Assign PAssign16863 = new_Assign((Optr)VAR_readline_0_0, (Optr)PSend16864);
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend16867 = new_Send((Optr)VAR_readline_0_0, SMB_readLine, 0);
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    // interpretLine:. 
    Send PSend16868 = new_Send((Optr)self, SMB_interpretLine_, 1, (Optr)PSend16867);
    Array PThreadedCode16862 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16863, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16865, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16866, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend16864, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_0, (Optr)&t_send0, (Optr)PSend16867, (Optr)&t_send1, (Optr)PSend16868, (Optr)&t_method_return);
    Method PMethod16860 = new_Method_with(empty_Array, PArray16861, empty_Array, PThreadedCode16862, 2, PAssign16863, PSend16868);
    
    MethodClosure MC_SMB_interpretFromStdin = new_MethodClosure((Method)PMethod16860, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretFromStdin, MC_SMB_interpretFromStdin);
}


static void init_SMB_interpretLine_() {
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16870 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16873 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_16875 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16875_Const = new_Constant((Optr)string_16875);
    // =. 
    Send PSend16876 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16875_Const);
    String string_16879 = new_String(L"o");
    Constant string_16879_Const = new_Constant((Optr)string_16879);
    // =. 
    Send PSend16880 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16879_Const);
    String string_16883 = new_String(L"i");
    Constant string_16883_Const = new_Constant((Optr)string_16883);
    // =. 
    Send PSend16884 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16883_Const);
    String string_16887 = new_String(L"j");
    Constant string_16887_Const = new_Constant((Optr)string_16887);
    // =. 
    Send PSend16888 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16887_Const);
    Array PThreadedCode16886 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16887, (Optr)&t_send1, (Optr)PSend16888, (Optr)&t_block_return);
    Block PBlock16885 = new_Block_with(empty_Array, empty_Array, PThreadedCode16886, 1, PSend16888);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend16889 = new_Send((Optr)PSend16884, SMB_or_, 1, (Optr)PBlock16885);
    Array PThreadedCode16882 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16883, (Optr)&t_send1, (Optr)PSend16884, (Optr)&t_push_closure, (Optr)PBlock16885, (Optr)&t_send1, (Optr)PSend16889, (Optr)&t_block_return);
    Block PBlock16881 = new_Block_with(empty_Array, empty_Array, PThreadedCode16882, 1, PSend16889);
    // or:. 
    Send PSend16890 = new_Send((Optr)PSend16880, SMB_or_, 1, (Optr)PBlock16881);
    Array PThreadedCode16878 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16879, (Optr)&t_send1, (Optr)PSend16880, (Optr)&t_push_closure, (Optr)PBlock16881, (Optr)&t_send1, (Optr)PSend16890, (Optr)&t_block_return);
    Block PBlock16877 = new_Block_with(empty_Array, empty_Array, PThreadedCode16878, 1, PSend16890);
    // or:. 
    Send PSend16891 = new_Send((Optr)PSend16876, SMB_or_, 1, (Optr)PBlock16877);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16895 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16896 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16895);
    Array PThreadedCode16894 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16895, (Optr)&t_send1, (Optr)PSend16896, (Optr)&t_block_return);
    Block PBlock16893 = new_Block_with(empty_Array, empty_Array, PThreadedCode16894, 1, PSend16896);
    // ifTrue:. 
    Send PSend16892 = new_Send((Optr)PSend16891, SMB_ifTrue_, 1, (Optr)PBlock16893);
    String string_16897 = new_String(L"");
    Constant string_16897_Const = new_Constant((Optr)string_16897);
    // =. 
    Send PSend16898 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16897_Const);
    String string_16902 = new_String(L"s");
    Constant string_16902_Const = new_Constant((Optr)string_16902);
    // value:. 
    Send PSend16903 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)string_16902_Const);
    // escape:. 
    Send PSend16904 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16903);
    Array PThreadedCode16901 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push1, (Optr)string_16902, (Optr)&t_send1, (Optr)PSend16903, (Optr)&t_send1, (Optr)PSend16904, (Optr)&t_block_return);
    Block PBlock16900 = new_Block_with(empty_Array, empty_Array, PThreadedCode16901, 1, PSend16904);
    // ifTrue:. 
    Send PSend16899 = new_Send((Optr)PSend16898, SMB_ifTrue_, 1, (Optr)PBlock16900);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16905 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16906 = new_Send((Optr)PSend16905, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16907 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16906);
    Array PThreadedCode16874 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16875, (Optr)&t_send1, (Optr)PSend16876, (Optr)&t_push_closure, (Optr)PBlock16877, (Optr)&t_send1, (Optr)PSend16891, (Optr)&t_send_ifTrue_, (Optr)PSend16892, (Optr)PBlock16893, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16897, (Optr)&t_send1, (Optr)PSend16898, (Optr)&t_send_ifTrue_, (Optr)PSend16899, (Optr)PBlock16900, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16905, (Optr)&t_send0, (Optr)PSend16906, (Optr)&t_send1, (Optr)PSend16907, (Optr)&t_method_return);
    Block PBlock16872 = new_Block_with(PArray16873, empty_Array, PThreadedCode16874, 3, PSend16892, PSend16899, PSend16907);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16908 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16872);
    Array PThreadedCode16871 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16872, (Optr)&t_send1, (Optr)PSend16908, (Optr)&t_method_return);
    Method PMethod16869 = new_Method_with(PArray16870, empty_Array, empty_Array, PThreadedCode16871, 1, PSend16908);
    
    MethodClosure MC_SMB_interpretLine_ = new_MethodClosure((Method)PMethod16869, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretLine_, MC_SMB_interpretLine_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16910 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray16911 = new_Array_with(1, (Optr)VAR_method_0_1);
    String string_16916 = new_String(L"method");
    Constant string_16916_Const = new_Constant((Optr)string_16916);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16917 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend16915 = new_Send((Optr)string_16916_Const, SMB__append_, 1, (Optr)PSend16917);
    // ,. 
    Send PSend16914 = new_Send((Optr)PSend16915, SMB__append_, 1, (Optr)VAR_code_0_0);
    Assign PAssign16913 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend16914);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16918 = new_Send((Optr)self, SMB_class, 0);
    // compile:. 
    Send PSend16919 = new_Send((Optr)PSend16918, SMB_compile_, 1, (Optr)VAR_method_0_1);
    Array PThreadedCode16912 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign16913, (Optr)&t_push1, (Optr)string_16916, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend16917, (Optr)&t_send1, (Optr)PSend16915, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16914, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16918, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send1, (Optr)PSend16919, (Optr)&t_method_return);
    Method PMethod16909 = new_Method_with(PArray16910, PArray16911, empty_Array, PThreadedCode16912, 2, PAssign16913, PSend16919);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16909, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_printStacktrace() {
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16922 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_printStacktrace, 0);
    Array PThreadedCode16921 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16922, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16920 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16921, 2, PSend16922, self);
    
    MethodClosure MC_SMB_printStacktrace = new_MethodClosure((Method)PMethod16920, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_printStacktrace, MC_SMB_printStacktrace);
}


static void init_SMB_skipBlock_() {
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    Variable VAR_count_0_0 = new_Variable_named(L"count", 0);
    Array PArray16924 = new_Array_with(1, (Optr)VAR_count_0_0);
    Variable VAR_skips_0_1 = new_Variable_named(L"skips", 0);
    Variable VAR_previousBlock_0_2 = new_Variable_named(L"previousBlock", 0);
    Array PArray16925 = new_Array_with(2, (Optr)VAR_skips_0_1, (Optr)VAR_previousBlock_0_2);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16927 = new_Assign((Optr)VAR_skips_0_1, (Optr)int_0_Const);
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    // stepBlock. 
    Send PSend16929 = new_Send((Optr)self, SMB_stepBlock, 0);
    Assign PAssign16928 = new_Assign((Optr)VAR_previousBlock_0_2, (Optr)PSend16929);
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16931 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16934 = new_Send((Optr)VAR_skips_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16933 = new_Assign((Optr)VAR_skips_0_1, (Optr)PSend16934);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend16935 = new_Send((Optr)VAR_skips_0_1, SMB__gt__equals_, 1, (Optr)VAR_count_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    // stepBlock:. 
    Send PSend16939 = new_Send((Optr)self, SMB_stepBlock_, 1, (Optr)VAR_previousBlock_0_2);
    Array PThreadedCode16938 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_previousBlock_0_2, (Optr)&t_send1, (Optr)PSend16939, (Optr)&t_block_return);
    Block PBlock16937 = new_Block_with(empty_Array, empty_Array, PThreadedCode16938, 1, PSend16939);
    // ifTrue:. 
    Send PSend16936 = new_Send((Optr)PSend16935, SMB_ifTrue_, 1, (Optr)PBlock16937);
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    // executeAction:. 
    Send PSend16940 = new_Send((Optr)self, SMB_executeAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16932 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16933, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16934, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_variable, (Optr)VAR_count_0_0, (Optr)&t_send1, (Optr)PSend16935, (Optr)&t_send_ifTrue_, (Optr)PSend16936, (Optr)PBlock16937, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16940, (Optr)&t_method_return);
    Block PBlock16930 = new_Block_with(PArray16931, empty_Array, PThreadedCode16932, 3, PAssign16933, PSend16936, PSend16940);
    Array PThreadedCode16926 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16927, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16928, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16929, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16930, (Optr)&t_method_return);
    Method PMethod16923 = new_Method_with(PArray16924, PArray16925, empty_Array, PThreadedCode16926, 3, PAssign16927, PAssign16928, PBlock16930);
    
    MethodClosure MC_SMB_skipBlock_ = new_MethodClosure((Method)PMethod16923, Interpretation_Debugger_Class);
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