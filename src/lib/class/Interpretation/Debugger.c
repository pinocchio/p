#include <lib/class/Interpretation/Debugger.h>


Optr layout_Interpretation_Debugger_Class_class;
Optr slot_Interpretation_Debugger_escapeShell;
Optr layout_Interpretation_Debugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16737 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16740 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16746 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16745 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16746, (Optr)&t_block_return);
    Block PBlock16744 = new_Block_with(empty_Array, empty_Array, PThreadedCode16745, 1, PSend16746);
    // ifNil:. 
    Send PSend16743 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16744);
    Assign PAssign16742 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16743);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16750 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16749 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16750);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16751 = new_Send((Optr)PAssign16749, SMB_isNil, 0);
    Array PThreadedCode16748 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16749, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16750, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16751, (Optr)&t_block_return);
    Block PBlock16747 = new_Block_with(empty_Array, empty_Array, PThreadedCode16748, 1, PSend16751);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16754 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    String string_16755 = new_String(L"  ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16755_Const = new_Constant((Optr)string_16755);
    // <<. 
    Send PSend16756 = new_Send((Optr)PSend16754, SMB__shiftLeft_, 1, (Optr)string_16755_Const);
    Array PThreadedCode16753 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16754, (Optr)&t_push1, (Optr)string_16755, (Optr)&t_send1, (Optr)PSend16756, (Optr)&t_block_return);
    Block PBlock16752 = new_Block_with(empty_Array, empty_Array, PThreadedCode16753, 1, PSend16756);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16757 = new_Send((Optr)PBlock16747, SMB_whileFalse_, 1, (Optr)PBlock16752);
    Array PThreadedCode16741 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16742, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16744, (Optr)&t_send1, (Optr)PSend16743, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16747, (Optr)&t_push_closure, (Optr)PBlock16752, (Optr)&t_send1, (Optr)PSend16757, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16739 = new_Block_with(PArray16740, empty_Array, PThreadedCode16741, 3, PAssign16742, PSend16757, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16758 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16739);
    Array PThreadedCode16738 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16739, (Optr)&t_send1, (Optr)PSend16758, (Optr)&t_method_return);
    Method PMethod16736 = new_Method_with(empty_Array, PArray16737, empty_Array, PThreadedCode16738, 1, PSend16758);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16736, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16762 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_input_2_0 = new_Variable_named(L"input", 2);
    Array PArray16766 = new_Array_with(1, (Optr)VAR_input_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16768 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_input_2_0);
    Array PThreadedCode16767 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_input_2_0, (Optr)&t_send1, (Optr)PSend16768, (Optr)&t_method_return);
    Block PBlock16765 = new_Block_with(PArray16766, empty_Array, PThreadedCode16767, 1, PSend16768);
    Assign PAssign16764 = new_Assign((Optr)slot_Interpretation_Debugger_escapeShell, (Optr)PBlock16765);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend16771 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    // interpretFromStdin. 
    Send PSend16772 = new_Send((Optr)self, SMB_interpretFromStdin, 0);
    Array PThreadedCode16770 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16771, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16772, (Optr)&t_block_return);
    Block PBlock16769 = new_Block_with(empty_Array, empty_Array, PThreadedCode16770, 2, PSend16771, PSend16772);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16773 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock16769);
    Array PThreadedCode16763 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign16764, (Optr)&t_push_closure, (Optr)PBlock16765, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock16769, (Optr)&t_send1, (Optr)PSend16773, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16761 = new_Block_with(PArray16762, empty_Array, PThreadedCode16763, 3, PAssign16764, PSend16773, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16774 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16761);
    Array PThreadedCode16760 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16761, (Optr)&t_send1, (Optr)PSend16774, (Optr)&t_method_return);
    Method PMethod16759 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16760, 1, PSend16774);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod16759, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16776 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend16778 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16779 = new_Send((Optr)self, SMB_printStacktrace, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16780 = new_Send((Optr)self, SMB_shell, 0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend16781 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode16777 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16778, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16779, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16780, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16781, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16775 = new_Method_with(PArray16776, empty_Array, empty_Array, PThreadedCode16777, 5, PSend16778, PSend16779, PSend16780, PSend16781, self);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod16775, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16783 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16785 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16787 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16789 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16790 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16788 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16789, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16790, (Optr)&t_method_return);
    Block PBlock16786 = new_Block_with(PArray16787, empty_Array, PThreadedCode16788, 2, PSend16789, PSend16790);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16791 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16792 = new_Send((Optr)PBlock16786, SMB_value_, 1, (Optr)PSend16791);
    Array PThreadedCode16784 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16785, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16786, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16791, (Optr)&t_send1, (Optr)PSend16792, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16782 = new_Method_with(PArray16783, empty_Array, empty_Array, PThreadedCode16784, 3, PSend16785, PSend16792, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod16782, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16794 = new_Array_with(1, (Optr)VAR_code_0_0);
    Array PThreadedCode16795 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16793 = new_Method_with(PArray16794, empty_Array, empty_Array, PThreadedCode16795, 1, true_Const);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod16793, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16798 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    String string_16799 = new_String(L"pidb> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16799_Const = new_Constant((Optr)string_16799);
    // <<. 
    Send PSend16800 = new_Send((Optr)PSend16798, SMB__shiftLeft_, 1, (Optr)string_16799_Const);
    Array PThreadedCode16797 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16798, (Optr)&t_push1, (Optr)string_16799, (Optr)&t_send1, (Optr)PSend16800, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16796 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16797, 2, PSend16800, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod16796, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_executeAction_() {
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16802 = new_Array_with(1, (Optr)VAR_action_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16804 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Array PThreadedCode16803 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16804, (Optr)&t_method_return);
    Method PMethod16801 = new_Method_with(PArray16802, empty_Array, empty_Array, PThreadedCode16803, 1, PSend16804);
    
    MethodClosure MC_SMB_executeAction_ = new_MethodClosure((Method)PMethod16801, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_executeAction_, MC_SMB_executeAction_);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16806 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16809 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend16813 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend16814 = new_Send((Optr)PSend16813, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode16812 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend16813, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16814, (Optr)&t_block_return);
    Block PBlock16811 = new_Block_with(empty_Array, empty_Array, PThreadedCode16812, 1, PSend16814);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray16816 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend16818 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend16819 = new_Send((Optr)PSend16818, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend16823 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16824 = new_Send((Optr)PSend16823, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16825 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16824);
    Array PThreadedCode16822 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16823, (Optr)&t_send0, (Optr)PSend16824, (Optr)&t_send1, (Optr)PSend16825, (Optr)&t_block_return);
    Block PBlock16821 = new_Block_with(empty_Array, empty_Array, PThreadedCode16822, 1, PSend16825);
    // ifFalse:. 
    Send PSend16820 = new_Send((Optr)PSend16819, SMB_ifFalse_, 1, (Optr)PBlock16821);
    Array PThreadedCode16817 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16818, (Optr)&t_send0, (Optr)PSend16819, (Optr)&t_send_ifFalse_, (Optr)PSend16820, (Optr)PBlock16821, (Optr)&t_method_return);
    Block PBlock16815 = new_Block_with(PArray16816, empty_Array, PThreadedCode16817, 1, PSend16820);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16826 = new_Send((Optr)PBlock16811, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock16815);
    Array PThreadedCode16810 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock16811, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock16815, (Optr)&t_send2, (Optr)PSend16826, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16808 = new_Block_with(PArray16809, empty_Array, PThreadedCode16810, 2, PSend16826, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16827 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16808);
    Array PThreadedCode16807 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16808, (Optr)&t_send1, (Optr)PSend16827, (Optr)&t_method_return);
    Method PMethod16805 = new_Method_with(PArray16806, empty_Array, empty_Array, PThreadedCode16807, 1, PSend16827);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod16805, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_skipStepBlock() {
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16831 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16833 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16832 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16833, (Optr)&t_method_return);
    Block PBlock16830 = new_Block_with(PArray16831, empty_Array, PThreadedCode16832, 1, PSend16833);
    Array PThreadedCode16829 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16830, (Optr)&t_method_return);
    Method PMethod16828 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16829, 1, PBlock16830);
    
    MethodClosure MC_SMB_skipStepBlock = new_MethodClosure((Method)PMethod16828, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipStepBlock, MC_SMB_skipStepBlock);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16837 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16839 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16840 = new_Send((Optr)PSend16839, SMB_name, 0);
    String string_16841 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16841_Const = new_Constant((Optr)string_16841);
    // ,. 
    Send PSend16842 = new_Send((Optr)PSend16840, SMB__append_, 1, (Optr)string_16841_Const);
    // ,. 
    Send PSend16843 = new_Send((Optr)PSend16842, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend16844 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend16843);
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    // debugShellWithAction:. 
    Send PSend16845 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16838 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend16839, (Optr)&t_send0, (Optr)PSend16840, (Optr)&t_push1, (Optr)string_16841, (Optr)&t_send1, (Optr)PSend16842, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16843, (Optr)&t_send1, (Optr)PSend16844, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16845, (Optr)&t_method_return);
    Block PBlock16836 = new_Block_with(PArray16837, empty_Array, PThreadedCode16838, 2, PSend16844, PSend16845);
    Array PThreadedCode16835 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16836, (Optr)&t_method_return);
    Method PMethod16834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16835, 1, PBlock16836);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16834, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_debugShellWithAction_() {
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16847 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_input_0_1 = new_Variable_named(L"input", 0);
    Array PArray16848 = new_Array_with(1, (Optr)VAR_input_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16851 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16854 = new_Send((Optr)self, SMB_shell, 0);
    Assign PAssign16853 = new_Assign((Optr)VAR_input_0_1, (Optr)PSend16854);
    String string_16855 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16855_Const = new_Constant((Optr)string_16855);
    // =. 
    Send PSend16856 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16855_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16860 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16861 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16860);
    Array PThreadedCode16859 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16860, (Optr)&t_send1, (Optr)PSend16861, (Optr)&t_block_return);
    Block PBlock16858 = new_Block_with(empty_Array, empty_Array, PThreadedCode16859, 1, PSend16861);
    // ifTrue:. 
    Send PSend16857 = new_Send((Optr)PSend16856, SMB_ifTrue_, 1, (Optr)PBlock16858);
    String string_16862 = new_String(L"o");
    Constant string_16862_Const = new_Constant((Optr)string_16862);
    // =. 
    Send PSend16863 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16862_Const);
    Variable VAR_oldBlock_2_0 = new_Variable_named(L"oldBlock", 2);
    Variable VAR_result_2_1 = new_Variable_named(L"result", 2);
    Array PArray16865 = new_Array_with(2, (Optr)VAR_oldBlock_2_0, (Optr)VAR_result_2_1);
    Assign PAssign16867 = new_Assign((Optr)VAR_oldBlock_2_0, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock);
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    // skipStepBlock. 
    Send PSend16869 = new_Send((Optr)self, SMB_skipStepBlock, 0);
    Assign PAssign16868 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16869);
    // value. 
    Send PSend16871 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Assign PAssign16870 = new_Assign((Optr)VAR_result_2_1, (Optr)PSend16871);
    Assign PAssign16872 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_oldBlock_2_0);
    // escape:. 
    Send PSend16873 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_2_1);
    Array PThreadedCode16866 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16867, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16868, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16869, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16870, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16871, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16872, (Optr)&t_push_variable, (Optr)VAR_oldBlock_2_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_2_1, (Optr)&t_send1, (Optr)PSend16873, (Optr)&t_method_return);
    Block PBlock16864 = new_Block_with(empty_Array, PArray16865, PThreadedCode16866, 5, PAssign16867, PAssign16868, PAssign16870, PAssign16872, PSend16873);
    // ifTrue:. 
    Send PSend16874 = new_Send((Optr)PSend16863, SMB_ifTrue_, 1, (Optr)PBlock16864);
    String string_16875 = new_String(L"i");
    Constant string_16875_Const = new_Constant((Optr)string_16875);
    // =. 
    Send PSend16876 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16875_Const);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16880 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend16881 = new_Send((Optr)PSend16880, SMB_inspect, 0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16882 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16883 = new_Send((Optr)PSend16882, SMB_lf, 0);
    // debugShellWithAction:. 
    Send PSend16884 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend16885 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16884);
    Array PThreadedCode16879 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16880, (Optr)&t_send0, (Optr)PSend16881, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16882, (Optr)&t_send0, (Optr)PSend16883, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend16884, (Optr)&t_send1, (Optr)PSend16885, (Optr)&t_block_return);
    Block PBlock16878 = new_Block_with(empty_Array, empty_Array, PThreadedCode16879, 3, PSend16881, PSend16883, PSend16885);
    // ifTrue:. 
    Send PSend16877 = new_Send((Optr)PSend16876, SMB_ifTrue_, 1, (Optr)PBlock16878);
    String string_16886 = new_String(L"j");
    Constant string_16886_Const = new_Constant((Optr)string_16886);
    // =. 
    Send PSend16887 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16886_Const);
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skipBlock:. 
    Send PSend16892 = new_Send((Optr)self, SMB_skipBlock_, 1, (Optr)int_2_Const);
    Assign PAssign16891 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16892);
    // value. 
    Send PSend16893 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    // escape:. 
    Send PSend16894 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16893);
    Array PThreadedCode16890 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16891, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend16892, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16893, (Optr)&t_send1, (Optr)PSend16894, (Optr)&t_block_return);
    Block PBlock16889 = new_Block_with(empty_Array, empty_Array, PThreadedCode16890, 2, PAssign16891, PSend16894);
    // ifTrue:. 
    Send PSend16888 = new_Send((Optr)PSend16887, SMB_ifTrue_, 1, (Optr)PBlock16889);
    Array PThreadedCode16852 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16853, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16854, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16855, (Optr)&t_send1, (Optr)PSend16856, (Optr)&t_send_ifTrue_, (Optr)PSend16857, (Optr)PBlock16858, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16862, (Optr)&t_send1, (Optr)PSend16863, (Optr)&t_push_closure, (Optr)PBlock16864, (Optr)&t_send1, (Optr)PSend16874, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16875, (Optr)&t_send1, (Optr)PSend16876, (Optr)&t_send_ifTrue_, (Optr)PSend16877, (Optr)PBlock16878, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16886, (Optr)&t_send1, (Optr)PSend16887, (Optr)&t_send_ifTrue_, (Optr)PSend16888, (Optr)PBlock16889, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16850 = new_Block_with(PArray16851, empty_Array, PThreadedCode16852, 6, PAssign16853, PSend16857, PSend16874, PSend16877, PSend16888, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16895 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16850);
    Array PThreadedCode16849 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16850, (Optr)&t_send1, (Optr)PSend16895, (Optr)&t_method_return);
    Method PMethod16846 = new_Method_with(PArray16847, PArray16848, empty_Array, PThreadedCode16849, 1, PSend16895);
    
    MethodClosure MC_SMB_debugShellWithAction_ = new_MethodClosure((Method)PMethod16846, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_debugShellWithAction_, MC_SMB_debugShellWithAction_);
}


static void init_SMB_interpretFromStdin() {
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    Variable VAR_readline_0_0 = new_Variable_named(L"readline", 0);
    Array PArray16897 = new_Array_with(1, (Optr)VAR_readline_0_0);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend16901 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16902 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    // from:to:for:. 
    Send PSend16900 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)PSend16901, (Optr)PSend16902, (Optr)self);
    Assign PAssign16899 = new_Assign((Optr)VAR_readline_0_0, (Optr)PSend16900);
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend16903 = new_Send((Optr)VAR_readline_0_0, SMB_readLine, 0);
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    // interpretLine:. 
    Send PSend16904 = new_Send((Optr)self, SMB_interpretLine_, 1, (Optr)PSend16903);
    Array PThreadedCode16898 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16899, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16901, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16902, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend16900, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_0, (Optr)&t_send0, (Optr)PSend16903, (Optr)&t_send1, (Optr)PSend16904, (Optr)&t_method_return);
    Method PMethod16896 = new_Method_with(empty_Array, PArray16897, empty_Array, PThreadedCode16898, 2, PAssign16899, PSend16904);
    
    MethodClosure MC_SMB_interpretFromStdin = new_MethodClosure((Method)PMethod16896, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretFromStdin, MC_SMB_interpretFromStdin);
}


static void init_SMB_interpretLine_() {
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16906 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16909 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_16911 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16911_Const = new_Constant((Optr)string_16911);
    // =. 
    Send PSend16912 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16911_Const);
    String string_16915 = new_String(L"o");
    Constant string_16915_Const = new_Constant((Optr)string_16915);
    // =. 
    Send PSend16916 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16915_Const);
    String string_16919 = new_String(L"i");
    Constant string_16919_Const = new_Constant((Optr)string_16919);
    // =. 
    Send PSend16920 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16919_Const);
    String string_16923 = new_String(L"j");
    Constant string_16923_Const = new_Constant((Optr)string_16923);
    // =. 
    Send PSend16924 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16923_Const);
    Array PThreadedCode16922 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16923, (Optr)&t_send1, (Optr)PSend16924, (Optr)&t_block_return);
    Block PBlock16921 = new_Block_with(empty_Array, empty_Array, PThreadedCode16922, 1, PSend16924);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend16925 = new_Send((Optr)PSend16920, SMB_or_, 1, (Optr)PBlock16921);
    Array PThreadedCode16918 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16919, (Optr)&t_send1, (Optr)PSend16920, (Optr)&t_push_closure, (Optr)PBlock16921, (Optr)&t_send1, (Optr)PSend16925, (Optr)&t_block_return);
    Block PBlock16917 = new_Block_with(empty_Array, empty_Array, PThreadedCode16918, 1, PSend16925);
    // or:. 
    Send PSend16926 = new_Send((Optr)PSend16916, SMB_or_, 1, (Optr)PBlock16917);
    Array PThreadedCode16914 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16915, (Optr)&t_send1, (Optr)PSend16916, (Optr)&t_push_closure, (Optr)PBlock16917, (Optr)&t_send1, (Optr)PSend16926, (Optr)&t_block_return);
    Block PBlock16913 = new_Block_with(empty_Array, empty_Array, PThreadedCode16914, 1, PSend16926);
    // or:. 
    Send PSend16927 = new_Send((Optr)PSend16912, SMB_or_, 1, (Optr)PBlock16913);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16931 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16932 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16931);
    Array PThreadedCode16930 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16931, (Optr)&t_send1, (Optr)PSend16932, (Optr)&t_block_return);
    Block PBlock16929 = new_Block_with(empty_Array, empty_Array, PThreadedCode16930, 1, PSend16932);
    // ifTrue:. 
    Send PSend16928 = new_Send((Optr)PSend16927, SMB_ifTrue_, 1, (Optr)PBlock16929);
    String string_16933 = new_String(L"");
    Constant string_16933_Const = new_Constant((Optr)string_16933);
    // =. 
    Send PSend16934 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16933_Const);
    String string_16938 = new_String(L"s");
    Constant string_16938_Const = new_Constant((Optr)string_16938);
    // value:. 
    Send PSend16939 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)string_16938_Const);
    // escape:. 
    Send PSend16940 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16939);
    Array PThreadedCode16937 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push1, (Optr)string_16938, (Optr)&t_send1, (Optr)PSend16939, (Optr)&t_send1, (Optr)PSend16940, (Optr)&t_block_return);
    Block PBlock16936 = new_Block_with(empty_Array, empty_Array, PThreadedCode16937, 1, PSend16940);
    // ifTrue:. 
    Send PSend16935 = new_Send((Optr)PSend16934, SMB_ifTrue_, 1, (Optr)PBlock16936);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16941 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16942 = new_Send((Optr)PSend16941, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16943 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16942);
    Array PThreadedCode16910 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16911, (Optr)&t_send1, (Optr)PSend16912, (Optr)&t_push_closure, (Optr)PBlock16913, (Optr)&t_send1, (Optr)PSend16927, (Optr)&t_send_ifTrue_, (Optr)PSend16928, (Optr)PBlock16929, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16933, (Optr)&t_send1, (Optr)PSend16934, (Optr)&t_send_ifTrue_, (Optr)PSend16935, (Optr)PBlock16936, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16941, (Optr)&t_send0, (Optr)PSend16942, (Optr)&t_send1, (Optr)PSend16943, (Optr)&t_method_return);
    Block PBlock16908 = new_Block_with(PArray16909, empty_Array, PThreadedCode16910, 3, PSend16928, PSend16935, PSend16943);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16944 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16908);
    Array PThreadedCode16907 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16908, (Optr)&t_send1, (Optr)PSend16944, (Optr)&t_method_return);
    Method PMethod16905 = new_Method_with(PArray16906, empty_Array, empty_Array, PThreadedCode16907, 1, PSend16944);
    
    MethodClosure MC_SMB_interpretLine_ = new_MethodClosure((Method)PMethod16905, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretLine_, MC_SMB_interpretLine_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16946 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray16947 = new_Array_with(1, (Optr)VAR_method_0_1);
    String string_16952 = new_String(L"method");
    Constant string_16952_Const = new_Constant((Optr)string_16952);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16953 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend16951 = new_Send((Optr)string_16952_Const, SMB__append_, 1, (Optr)PSend16953);
    // ,. 
    Send PSend16950 = new_Send((Optr)PSend16951, SMB__append_, 1, (Optr)VAR_code_0_0);
    Assign PAssign16949 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend16950);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16954 = new_Send((Optr)self, SMB_class, 0);
    // compile:. 
    Send PSend16955 = new_Send((Optr)PSend16954, SMB_compile_, 1, (Optr)VAR_method_0_1);
    Array PThreadedCode16948 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign16949, (Optr)&t_push1, (Optr)string_16952, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend16953, (Optr)&t_send1, (Optr)PSend16951, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16950, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16954, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send1, (Optr)PSend16955, (Optr)&t_method_return);
    Method PMethod16945 = new_Method_with(PArray16946, PArray16947, empty_Array, PThreadedCode16948, 2, PAssign16949, PSend16955);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16945, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_printStacktrace() {
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16958 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_printStacktrace, 0);
    Array PThreadedCode16957 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16958, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16956 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16957, 2, PSend16958, self);
    
    MethodClosure MC_SMB_printStacktrace = new_MethodClosure((Method)PMethod16956, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_printStacktrace, MC_SMB_printStacktrace);
}


static void init_SMB_skipBlock_() {
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    Variable VAR_count_0_0 = new_Variable_named(L"count", 0);
    Array PArray16960 = new_Array_with(1, (Optr)VAR_count_0_0);
    Variable VAR_skips_0_1 = new_Variable_named(L"skips", 0);
    Variable VAR_previousBlock_0_2 = new_Variable_named(L"previousBlock", 0);
    Array PArray16961 = new_Array_with(2, (Optr)VAR_skips_0_1, (Optr)VAR_previousBlock_0_2);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16963 = new_Assign((Optr)VAR_skips_0_1, (Optr)int_0_Const);
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    // stepBlock. 
    Send PSend16965 = new_Send((Optr)self, SMB_stepBlock, 0);
    Assign PAssign16964 = new_Assign((Optr)VAR_previousBlock_0_2, (Optr)PSend16965);
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16967 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16970 = new_Send((Optr)VAR_skips_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16969 = new_Assign((Optr)VAR_skips_0_1, (Optr)PSend16970);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend16971 = new_Send((Optr)VAR_skips_0_1, SMB__gt__equals_, 1, (Optr)VAR_count_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    // stepBlock:. 
    Send PSend16975 = new_Send((Optr)self, SMB_stepBlock_, 1, (Optr)VAR_previousBlock_0_2);
    Array PThreadedCode16974 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_previousBlock_0_2, (Optr)&t_send1, (Optr)PSend16975, (Optr)&t_block_return);
    Block PBlock16973 = new_Block_with(empty_Array, empty_Array, PThreadedCode16974, 1, PSend16975);
    // ifTrue:. 
    Send PSend16972 = new_Send((Optr)PSend16971, SMB_ifTrue_, 1, (Optr)PBlock16973);
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    // executeAction:. 
    Send PSend16976 = new_Send((Optr)self, SMB_executeAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16968 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16969, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16970, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_variable, (Optr)VAR_count_0_0, (Optr)&t_send1, (Optr)PSend16971, (Optr)&t_send_ifTrue_, (Optr)PSend16972, (Optr)PBlock16973, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16976, (Optr)&t_method_return);
    Block PBlock16966 = new_Block_with(PArray16967, empty_Array, PThreadedCode16968, 3, PAssign16969, PSend16972, PSend16976);
    Array PThreadedCode16962 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16963, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16964, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16965, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16966, (Optr)&t_method_return);
    Method PMethod16959 = new_Method_with(PArray16960, PArray16961, empty_Array, PThreadedCode16962, 3, PAssign16963, PAssign16964, PBlock16966);
    
    MethodClosure MC_SMB_skipBlock_ = new_MethodClosure((Method)PMethod16959, Interpretation_Debugger_Class);
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