#include <lib/class/Shell/Shell.h>


Optr layout_Shell_Shell_Class_class;
Optr slot_Shell_Shell_input;
Optr slot_Shell_Shell_output;
Optr slot_Shell_Shell_error;
Optr slot_Shell_Shell_exceptions;
Optr slot_Shell_Shell_scope;
Optr slot_Shell_Shell_history;
Optr layout_Shell_Shell;


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18711 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray18712 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18715 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_18717 = new_String(L"");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_18717_Const = new_Constant((Optr)string_18717);
    // =. 
    Send PSend18718 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_18717_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18722 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode18721 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18722, (Optr)&t_block_return);
    Block PBlock18720 = new_Block_with(empty_Array, empty_Array, PThreadedCode18721, 1, PSend18722);
    // ifTrue:. 
    Send PSend18719 = new_Send((Optr)PSend18718, SMB_ifTrue_, 1, (Optr)PBlock18720);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend18728 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18727 = new_Send((Optr)PSend18728, SMB_selector, 0);
    // perform:. 
    Send PSend18726 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend18727);
    Assign PAssign18725 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend18726);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18729 = new_Send((Optr)slot_Shell_Shell_history, SMB_add_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18724 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18725, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18728, (Optr)&t_send0, (Optr)PSend18727, (Optr)&t_send1, (Optr)PSend18726, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18729, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_block_return);
    Block PBlock18723 = new_Block_with(empty_Array, empty_Array, PThreadedCode18724, 3, PAssign18725, PSend18729, VAR_value_0_1);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18731 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    // exceptions. 
    Send PSend18733 = new_Send((Optr)self, SMB_exceptions, 0);
    // add:. 
    Send PSend18734 = new_Send((Optr)PSend18733, SMB_add_, 1, (Optr)VAR_ex_2_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend18735 = new_Send((Optr)slot_Shell_Shell_error, SMB_yellow, 0);
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    // printStacktraceOn:. 
    Send PSend18736 = new_Send((Optr)VAR_ex_2_0, SMB_printStacktraceOn_, 1, (Optr)slot_Shell_Shell_error);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray18738 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18740 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend18741 = new_Send((Optr)VAR__receiver__3_0, SMB_red, 0);
    Array PThreadedCode18739 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18740, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18741, (Optr)&t_method_return);
    Block PBlock18737 = new_Block_with(PArray18738, empty_Array, PThreadedCode18739, 2, PSend18740, PSend18741);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18742 = new_Send((Optr)PBlock18737, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend18743 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)slot_Shell_Shell_error);
    Array PArray18745 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18747 = new_Send((Optr)VAR__receiver__3_0, SMB_clear, 0);
    // lf. 
    Send PSend18748 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Array PThreadedCode18746 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18747, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18748, (Optr)&t_method_return);
    Block PBlock18744 = new_Block_with(PArray18745, empty_Array, PThreadedCode18746, 2, PSend18747, PSend18748);
    // value:. 
    Send PSend18749 = new_Send((Optr)PBlock18744, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Array PThreadedCode18732 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18733, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend18734, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send0, (Optr)PSend18735, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18736, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18737, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18742, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18743, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18744, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18749, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock18730 = new_Block_with(PArray18731, empty_Array, PThreadedCode18732, 7, PSend18734, PSend18735, PSend18736, PSend18742, PSend18743, PSend18749, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18750 = new_Send((Optr)PBlock18723, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock18730);
    Array PThreadedCode18716 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_18717, (Optr)&t_send1, (Optr)PSend18718, (Optr)&t_send_ifTrue_, (Optr)PSend18719, (Optr)PBlock18720, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18723, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock18730, (Optr)&t_send2, (Optr)PSend18750, (Optr)&t_method_return);
    Block PBlock18714 = new_Block_with(PArray18715, empty_Array, PThreadedCode18716, 2, PSend18719, PSend18750);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18751 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18714);
    Array PThreadedCode18713 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18714, (Optr)&t_send1, (Optr)PSend18751, (Optr)&t_method_return);
    Method PMethod18710 = new_Method_with(PArray18711, PArray18712, empty_Array, PThreadedCode18713, 1, PSend18751);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod18710, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Variable VAR_readline_0_1 = new_Variable_named(L"readline", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray18753 = new_Array_with(3, (Optr)VAR_inspector_0_0, (Optr)VAR_readline_0_1, (Optr)VAR_result_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18756 = new_Send((Optr)PStreamInspector_classReference, SMB_on_, 1, (Optr)slot_Shell_Shell_output);
    Assign PAssign18755 = new_Assign((Optr)VAR_inspector_0_0, (Optr)PSend18756);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    // from:to:for:. 
    Send PSend18758 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)slot_Shell_Shell_input, (Optr)slot_Shell_Shell_output, (Optr)self);
    Assign PAssign18757 = new_Assign((Optr)VAR_readline_0_1, (Optr)PSend18758);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend18761 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend18764 = new_Send((Optr)VAR_readline_0_1, SMB_readLine, 0);
    // interpret:. 
    Send PSend18763 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend18764);
    Assign PAssign18762 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18763);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18765 = new_Send((Optr)VAR_result_0_2, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend18769 = new_Send((Optr)VAR_inspector_0_0, SMB_inspect_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18770 = new_Send((Optr)slot_Shell_Shell_output, SMB_lf, 0);
    Array PThreadedCode18768 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18769, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send0, (Optr)PSend18770, (Optr)&t_block_return);
    Block PBlock18767 = new_Block_with(empty_Array, empty_Array, PThreadedCode18768, 2, PSend18769, PSend18770);
    // ifFalse:. 
    Send PSend18766 = new_Send((Optr)PSend18765, SMB_ifFalse_, 1, (Optr)PBlock18767);
    Array PThreadedCode18760 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18761, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18762, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_1, (Optr)&t_send0, (Optr)PSend18764, (Optr)&t_send1, (Optr)PSend18763, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18765, (Optr)&t_send_ifFalse_, (Optr)PSend18766, (Optr)PBlock18767, (Optr)&t_block_return);
    Block PBlock18759 = new_Block_with(empty_Array, empty_Array, PThreadedCode18760, 3, PSend18761, PAssign18762, PSend18766);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend18771 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock18759);
    Array PThreadedCode18754 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign18755, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send1, (Optr)PSend18756, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18757, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_input, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend18758, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock18759, (Optr)&t_send1, (Optr)PSend18771, (Optr)&t_method_return);
    Method PMethod18752 = new_Method_with(empty_Array, PArray18753, empty_Array, PThreadedCode18754, 3, PAssign18755, PAssign18757, PSend18771);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod18752, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18773 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18776 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18780 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18781 = new_Send((Optr)PSend18780, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18779 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18780, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18781, (Optr)&t_block_return);
    Block PBlock18778 = new_Block_with(empty_Array, empty_Array, PThreadedCode18779, 1, PSend18781);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18783 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18785 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18786 = new_Send((Optr)PSend18785, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend18787 = new_Send((Optr)PSend18786, SMB_not, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18788 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18787);
    Array PThreadedCode18784 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18785, (Optr)&t_send0, (Optr)PSend18786, (Optr)&t_send0, (Optr)PSend18787, (Optr)&t_send1, (Optr)PSend18788, (Optr)&t_method_return);
    Block PBlock18782 = new_Block_with(PArray18783, empty_Array, PThreadedCode18784, 1, PSend18788);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18789 = new_Send((Optr)PBlock18778, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18782);
    Array PThreadedCode18777 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18778, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18782, (Optr)&t_send2, (Optr)PSend18789, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18775 = new_Block_with(PArray18776, empty_Array, PThreadedCode18777, 2, PSend18789, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18790 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18775);
    Array PThreadedCode18774 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18775, (Optr)&t_send1, (Optr)PSend18790, (Optr)&t_method_return);
    Method PMethod18772 = new_Method_with(PArray18773, empty_Array, empty_Array, PThreadedCode18774, 1, PSend18790);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod18772, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    String string_18793 = new_String(L"> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18793_Const = new_Constant((Optr)string_18793);
    // <<. 
    Send PSend18794 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18793_Const);
    Array PThreadedCode18792 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18793, (Optr)&t_send1, (Optr)PSend18794, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18791 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18792, 2, PSend18794, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod18791, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_exceptions() {
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    Array PThreadedCode18796 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_exceptions, (Optr)&t_method_return);
    Method PMethod18795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18796, 1, slot_Shell_Shell_exceptions);
    
    MethodClosure MC_SMB_exceptions = new_MethodClosure((Method)PMethod18795, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_exceptions, MC_SMB_exceptions);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18798 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18801 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18805 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18806 = new_Send((Optr)PSend18805, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18804 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18805, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18806, (Optr)&t_block_return);
    Block PBlock18803 = new_Block_with(empty_Array, empty_Array, PThreadedCode18804, 1, PSend18806);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18808 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18810 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18811 = new_Send((Optr)PSend18810, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend18815 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18816 = new_Send((Optr)PSend18815, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18817 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18816);
    Array PThreadedCode18814 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18815, (Optr)&t_send0, (Optr)PSend18816, (Optr)&t_send1, (Optr)PSend18817, (Optr)&t_block_return);
    Block PBlock18813 = new_Block_with(empty_Array, empty_Array, PThreadedCode18814, 1, PSend18817);
    // ifFalse:. 
    Send PSend18812 = new_Send((Optr)PSend18811, SMB_ifFalse_, 1, (Optr)PBlock18813);
    Array PThreadedCode18809 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18810, (Optr)&t_send0, (Optr)PSend18811, (Optr)&t_send_ifFalse_, (Optr)PSend18812, (Optr)PBlock18813, (Optr)&t_method_return);
    Block PBlock18807 = new_Block_with(PArray18808, empty_Array, PThreadedCode18809, 1, PSend18812);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18818 = new_Send((Optr)PBlock18803, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18807);
    Array PThreadedCode18802 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18803, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18807, (Optr)&t_send2, (Optr)PSend18818, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock18800 = new_Block_with(PArray18801, empty_Array, PThreadedCode18802, 2, PSend18818, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18819 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18800);
    Array PThreadedCode18799 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18800, (Optr)&t_send1, (Optr)PSend18819, (Optr)&t_method_return);
    Method PMethod18797 = new_Method_with(PArray18798, empty_Array, empty_Array, PThreadedCode18799, 1, PSend18819);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod18797, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode18821 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18820 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18821, 1, self);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod18820, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_layout, MC_SMB_layout);
}


static void init_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Array PThreadedCode18823 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_method_return);
    Method PMethod18822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18823, 1, slot_Shell_Shell_history);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod18822, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_history, MC_SMB_history);
}


static void init_SMB_runWith_() {
    /*
    runWith: anInterpreter
// 	^ super basicNew runWith: anInterpreter
    */
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18825 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18828 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign18827 = new_Assign((Optr)slot_Shell_Shell_scope, (Optr)PSend18828);
    // new. 
    Send PSend18830 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18829 = new_Assign((Optr)slot_Shell_Shell_exceptions, (Optr)PSend18830);
    // new. 
    Send PSend18832 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18831 = new_Assign((Optr)slot_Shell_Shell_history, (Optr)PSend18832);
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend18834 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Assign PAssign18833 = new_Assign((Optr)slot_Shell_Shell_input, (Optr)PSend18834);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend18836 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Assign PAssign18835 = new_Assign((Optr)slot_Shell_Shell_output, (Optr)PSend18836);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend18838 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Assign PAssign18837 = new_Assign((Optr)slot_Shell_Shell_error, (Optr)PSend18838);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18839 = new_Send((Optr)self, SMB_class, 0);
    String string_18840 = new_String(L"demoImport self package import: Interpretation. self package import: Demo");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Constant string_18840_Const = new_Constant((Optr)string_18840);
    // compile:. 
    Send PSend18841 = new_Send((Optr)PSend18839, SMB_compile_, 1, (Optr)string_18840_Const);
    Symbol SMB_demoImport = new_Symbol(L"demoImport");
    // demoImport. 
    Send PSend18842 = new_Send((Optr)self, SMB_demoImport, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend18843 = new_Send((Optr)self, SMB_shell, 0);
    Array PThreadedCode18826 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign18827, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend18828, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18829, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18830, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18831, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18832, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18833, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend18834, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18835, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18836, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18837, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18838, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18839, (Optr)&t_push1, (Optr)string_18840, (Optr)&t_send1, (Optr)PSend18841, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18842, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18843, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18824 = new_Method_with(PArray18825, empty_Array, empty_Array, PThreadedCode18826, 10, PAssign18827, PAssign18829, PAssign18831, PAssign18833, PAssign18835, PAssign18837, PSend18841, PSend18842, PSend18843, self);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18824, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_runWith_, MC_SMB_runWith_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray18845 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18848 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend18850 = new_Send((Optr)VAR_name_0_0, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend18851 = new_Send((Optr)PSend18850, SMB_isUppercase, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18855 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18856 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18855);
    Array PThreadedCode18854 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend18855, (Optr)&t_send1, (Optr)PSend18856, (Optr)&t_block_return);
    Block PBlock18853 = new_Block_with(empty_Array, empty_Array, PThreadedCode18854, 1, PSend18856);
    // ifTrue:. 
    Send PSend18852 = new_Send((Optr)PSend18851, SMB_ifTrue_, 1, (Optr)PBlock18853);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18861 = new_Send((Optr)PDirectVariable_classReference, SMB_named_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18862 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)PSend18861);
    Array PThreadedCode18860 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_class_reference, (Optr)PDirectVariable_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend18861, (Optr)&t_send2, (Optr)PSend18862, (Optr)&t_block_return);
    Block PBlock18859 = new_Block_with(empty_Array, empty_Array, PThreadedCode18860, 1, PSend18862);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend18863 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18859);
    Array PThreadedCode18858 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18859, (Optr)&t_send2, (Optr)PSend18863, (Optr)&t_block_return);
    Block PBlock18857 = new_Block_with(empty_Array, empty_Array, PThreadedCode18858, 1, PSend18863);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend18864 = new_Send((Optr)PRootScope_classReference, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18857);
    Array PThreadedCode18849 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send0, (Optr)PSend18850, (Optr)&t_send0, (Optr)PSend18851, (Optr)&t_send_ifTrue_, (Optr)PSend18852, (Optr)PBlock18853, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18857, (Optr)&t_send2, (Optr)PSend18864, (Optr)&t_method_return);
    Block PBlock18847 = new_Block_with(PArray18848, empty_Array, PThreadedCode18849, 2, PSend18852, PSend18864);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18865 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18847);
    Array PThreadedCode18846 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18847, (Optr)&t_send1, (Optr)PSend18865, (Optr)&t_method_return);
    Method PMethod18844 = new_Method_with(PArray18845, empty_Array, empty_Array, PThreadedCode18846, 1, PSend18865);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod18844, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18867 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray18868 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_18874 = new_String(L"DoIt ^[");
    Constant string_18874_Const = new_Constant((Optr)string_18874);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18875 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend18873 = new_Send((Optr)string_18874_Const, SMB__append_, 1, (Optr)PSend18875);
    // ,. 
    Send PSend18872 = new_Send((Optr)PSend18873, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_18876 = new_String(L"] value");
    Constant string_18876_Const = new_Constant((Optr)string_18876);
    // ,. 
    Send PSend18871 = new_Send((Optr)PSend18872, SMB__append_, 1, (Optr)string_18876_Const);
    Assign PAssign18870 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend18871);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend18878 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)self);
    Assign PAssign18877 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend18878);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18879 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend18880 = new_Send((Optr)PSend18879, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18881 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18882 = new_Send((Optr)PSend18880, SMB_at_put_, 2, (Optr)PSend18881, (Optr)VAR_method_0_2);
    Array PThreadedCode18869 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign18870, (Optr)&t_push1, (Optr)string_18874, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend18875, (Optr)&t_send1, (Optr)PSend18873, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18872, (Optr)&t_push1, (Optr)string_18876, (Optr)&t_send1, (Optr)PSend18871, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18877, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend18878, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18879, (Optr)&t_send0, (Optr)PSend18880, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend18881, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend18882, (Optr)&t_method_return);
    Method PMethod18866 = new_Method_with(PArray18867, PArray18868, empty_Array, PThreadedCode18869, 3, PAssign18870, PAssign18877, PSend18882);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod18866, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18885 = new_Send((Optr)self, SMB_class, 0);
    // package. 
    Send PSend18886 = new_Send((Optr)PSend18885, SMB_package, 0);
    Array PThreadedCode18884 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18885, (Optr)&t_send0, (Optr)PSend18886, (Optr)&t_method_return);
    Method PMethod18883 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18884, 1, PSend18886);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod18883, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_continueLine() {
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    String string_18889 = new_String(L"| ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18889_Const = new_Constant((Optr)string_18889);
    // <<. 
    Send PSend18890 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18889_Const);
    Array PThreadedCode18888 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18889, (Optr)&t_send1, (Optr)PSend18890, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18887 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18888, 2, PSend18890, self);
    
    MethodClosure MC_SMB_continueLine = new_MethodClosure((Method)PMethod18887, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_continueLine, MC_SMB_continueLine);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_18893 = new_String(L"Shell");
    Array PThreadedCode18892 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_18893, (Optr)&t_method_return);
    Constant string_18893_Const = new_Constant((Optr)string_18893);
    Method PMethod18891 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18892, 1, string_18893_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod18891, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_runWith_() {
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18895 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18897 = new_Super(SMB_basicNew, 0);
    // runWith:. 
    Send PSend18898 = new_Send((Optr)PSuper18897, SMB_runWith_, 1, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode18896 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18897, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send1, (Optr)PSend18898, (Optr)&t_method_return);
    Method PMethod18894 = new_Method_with(PArray18895, empty_Array, empty_Array, PThreadedCode18896, 1, PSend18898);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18894, HEADER(Shell_Shell_Class));
    store_method(HEADER(Shell_Shell_Class), SMB_runWith_, MC_SMB_runWith_);
}

void init_Shell_PShell_layout() {
    layout_Shell_Shell_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_Shell_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_Shell_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_Shell_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_Shell_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_Shell_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Shell = new_Symbol(L"Shell");
    slot_Shell_Shell_input = (Optr)new_Slot(0, L"input");
    slot_Shell_Shell_output = (Optr)new_Slot(1, L"output");
    slot_Shell_Shell_error = (Optr)new_Slot(2, L"error");
    slot_Shell_Shell_exceptions = (Optr)new_Slot(3, L"exceptions");
    slot_Shell_Shell_scope = (Optr)new_Slot(4, L"scope");
    slot_Shell_Shell_history = (Optr)new_Slot(5, L"history");
    layout_Shell_Shell = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Shell_Shell)->values[0] = slot_Shell_Shell_input; // input 
    ((Array)layout_Shell_Shell)->values[1] = slot_Shell_Shell_output; // output 
    ((Array)layout_Shell_Shell)->values[2] = slot_Shell_Shell_error; // error 
    ((Array)layout_Shell_Shell)->values[3] = slot_Shell_Shell_exceptions; // exceptions 
    ((Array)layout_Shell_Shell)->values[4] = slot_Shell_Shell_scope; // scope 
    ((Array)layout_Shell_Shell)->values[5] = slot_Shell_Shell_history; // history 
    Shell_Shell_Class = (Class)new_Class(Object_Class, layout_Shell_Shell_Class_class);
    Shell_Shell_Class->layout = layout_Shell_Shell;
    Shell_Shell_Class->name = SMB_Shell;
    
}

void init_Shell_PShell_methods() {
    init_SMB_interpret_();
    init_SMB_shell();
    init_SMB_isReady_();
    init_SMB_displayPrompt();
    init_SMB_exceptions();
    init_SMB_parsesUntil_();
    init_SMB_layout();
    init_SMB_history();
    init_SMB_runWith_();
    init_SMB_slotAt_ifAbsent_();
    init_SMB_compile_();
    init_SMB_package();
    init_SMB_continueLine();
    init_SMB_name();
    init_class_SMB_runWith_();
    
}