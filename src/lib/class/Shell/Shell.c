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
    Array PArray18614 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray18615 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18618 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_18620 = new_String(L"");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_18620_Const = new_Constant((Optr)string_18620);
    // =. 
    Send PSend18621 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_18620_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18625 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode18624 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18625, (Optr)&t_block_return);
    Block PBlock18623 = new_Block_with(empty_Array, empty_Array, PThreadedCode18624, 1, PSend18625);
    // ifTrue:. 
    Send PSend18622 = new_Send((Optr)PSend18621, SMB_ifTrue_, 1, (Optr)PBlock18623);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend18631 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18630 = new_Send((Optr)PSend18631, SMB_selector, 0);
    // perform:. 
    Send PSend18629 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend18630);
    Assign PAssign18628 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend18629);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18632 = new_Send((Optr)slot_Shell_Shell_history, SMB_add_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18627 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18628, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18631, (Optr)&t_send0, (Optr)PSend18630, (Optr)&t_send1, (Optr)PSend18629, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_block_return);
    Block PBlock18626 = new_Block_with(empty_Array, empty_Array, PThreadedCode18627, 3, PAssign18628, PSend18632, VAR_value_0_1);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18634 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    // exceptions. 
    Send PSend18636 = new_Send((Optr)self, SMB_exceptions, 0);
    // add:. 
    Send PSend18637 = new_Send((Optr)PSend18636, SMB_add_, 1, (Optr)VAR_ex_2_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend18638 = new_Send((Optr)slot_Shell_Shell_error, SMB_yellow, 0);
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    // printStacktraceOn:. 
    Send PSend18639 = new_Send((Optr)VAR_ex_2_0, SMB_printStacktraceOn_, 1, (Optr)slot_Shell_Shell_error);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray18641 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18643 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend18644 = new_Send((Optr)VAR__receiver__3_0, SMB_red, 0);
    Array PThreadedCode18642 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18643, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18644, (Optr)&t_method_return);
    Block PBlock18640 = new_Block_with(PArray18641, empty_Array, PThreadedCode18642, 2, PSend18643, PSend18644);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18645 = new_Send((Optr)PBlock18640, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend18646 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)slot_Shell_Shell_error);
    Array PArray18648 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18650 = new_Send((Optr)VAR__receiver__3_0, SMB_clear, 0);
    // lf. 
    Send PSend18651 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Array PThreadedCode18649 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18650, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18651, (Optr)&t_method_return);
    Block PBlock18647 = new_Block_with(PArray18648, empty_Array, PThreadedCode18649, 2, PSend18650, PSend18651);
    // value:. 
    Send PSend18652 = new_Send((Optr)PBlock18647, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Array PThreadedCode18635 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18636, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend18637, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send0, (Optr)PSend18638, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18639, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18640, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18645, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18646, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18647, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18652, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock18633 = new_Block_with(PArray18634, empty_Array, PThreadedCode18635, 7, PSend18637, PSend18638, PSend18639, PSend18645, PSend18646, PSend18652, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18653 = new_Send((Optr)PBlock18626, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock18633);
    Array PThreadedCode18619 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_18620, (Optr)&t_send1, (Optr)PSend18621, (Optr)&t_send_ifTrue_, (Optr)PSend18622, (Optr)PBlock18623, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18626, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock18633, (Optr)&t_send2, (Optr)PSend18653, (Optr)&t_method_return);
    Block PBlock18617 = new_Block_with(PArray18618, empty_Array, PThreadedCode18619, 2, PSend18622, PSend18653);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18654 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18617);
    Array PThreadedCode18616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18617, (Optr)&t_send1, (Optr)PSend18654, (Optr)&t_method_return);
    Method PMethod18613 = new_Method_with(PArray18614, PArray18615, empty_Array, PThreadedCode18616, 1, PSend18654);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod18613, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Variable VAR_readline_0_1 = new_Variable_named(L"readline", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray18656 = new_Array_with(3, (Optr)VAR_inspector_0_0, (Optr)VAR_readline_0_1, (Optr)VAR_result_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18659 = new_Send((Optr)PStreamInspector_classReference, SMB_on_, 1, (Optr)slot_Shell_Shell_output);
    Assign PAssign18658 = new_Assign((Optr)VAR_inspector_0_0, (Optr)PSend18659);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    // from:to:for:. 
    Send PSend18661 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)slot_Shell_Shell_input, (Optr)slot_Shell_Shell_output, (Optr)self);
    Assign PAssign18660 = new_Assign((Optr)VAR_readline_0_1, (Optr)PSend18661);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend18664 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend18667 = new_Send((Optr)VAR_readline_0_1, SMB_readLine, 0);
    // interpret:. 
    Send PSend18666 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend18667);
    Assign PAssign18665 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18666);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18668 = new_Send((Optr)VAR_result_0_2, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend18672 = new_Send((Optr)VAR_inspector_0_0, SMB_inspect_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18673 = new_Send((Optr)slot_Shell_Shell_output, SMB_lf, 0);
    Array PThreadedCode18671 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18672, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send0, (Optr)PSend18673, (Optr)&t_block_return);
    Block PBlock18670 = new_Block_with(empty_Array, empty_Array, PThreadedCode18671, 2, PSend18672, PSend18673);
    // ifFalse:. 
    Send PSend18669 = new_Send((Optr)PSend18668, SMB_ifFalse_, 1, (Optr)PBlock18670);
    Array PThreadedCode18663 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18664, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18665, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_1, (Optr)&t_send0, (Optr)PSend18667, (Optr)&t_send1, (Optr)PSend18666, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18668, (Optr)&t_send_ifFalse_, (Optr)PSend18669, (Optr)PBlock18670, (Optr)&t_block_return);
    Block PBlock18662 = new_Block_with(empty_Array, empty_Array, PThreadedCode18663, 3, PSend18664, PAssign18665, PSend18669);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend18674 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock18662);
    Array PThreadedCode18657 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign18658, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send1, (Optr)PSend18659, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18660, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_input, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend18661, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock18662, (Optr)&t_send1, (Optr)PSend18674, (Optr)&t_method_return);
    Method PMethod18655 = new_Method_with(empty_Array, PArray18656, empty_Array, PThreadedCode18657, 3, PAssign18658, PAssign18660, PSend18674);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod18655, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18676 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18679 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18683 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18684 = new_Send((Optr)PSend18683, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18682 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18683, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18684, (Optr)&t_block_return);
    Block PBlock18681 = new_Block_with(empty_Array, empty_Array, PThreadedCode18682, 1, PSend18684);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18686 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18688 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18689 = new_Send((Optr)PSend18688, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend18690 = new_Send((Optr)PSend18689, SMB_not, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18691 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18690);
    Array PThreadedCode18687 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18688, (Optr)&t_send0, (Optr)PSend18689, (Optr)&t_send0, (Optr)PSend18690, (Optr)&t_send1, (Optr)PSend18691, (Optr)&t_method_return);
    Block PBlock18685 = new_Block_with(PArray18686, empty_Array, PThreadedCode18687, 1, PSend18691);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18692 = new_Send((Optr)PBlock18681, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18685);
    Array PThreadedCode18680 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18681, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18685, (Optr)&t_send2, (Optr)PSend18692, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18678 = new_Block_with(PArray18679, empty_Array, PThreadedCode18680, 2, PSend18692, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18693 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18678);
    Array PThreadedCode18677 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18678, (Optr)&t_send1, (Optr)PSend18693, (Optr)&t_method_return);
    Method PMethod18675 = new_Method_with(PArray18676, empty_Array, empty_Array, PThreadedCode18677, 1, PSend18693);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod18675, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    String string_18696 = new_String(L"> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18696_Const = new_Constant((Optr)string_18696);
    // <<. 
    Send PSend18697 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18696_Const);
    Array PThreadedCode18695 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18696, (Optr)&t_send1, (Optr)PSend18697, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18695, 2, PSend18697, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod18694, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_exceptions() {
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    Array PThreadedCode18699 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_exceptions, (Optr)&t_method_return);
    Method PMethod18698 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18699, 1, slot_Shell_Shell_exceptions);
    
    MethodClosure MC_SMB_exceptions = new_MethodClosure((Method)PMethod18698, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_exceptions, MC_SMB_exceptions);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18701 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18704 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18708 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18709 = new_Send((Optr)PSend18708, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18707 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18708, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18709, (Optr)&t_block_return);
    Block PBlock18706 = new_Block_with(empty_Array, empty_Array, PThreadedCode18707, 1, PSend18709);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18711 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18713 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18714 = new_Send((Optr)PSend18713, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend18718 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18719 = new_Send((Optr)PSend18718, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18720 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18719);
    Array PThreadedCode18717 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18718, (Optr)&t_send0, (Optr)PSend18719, (Optr)&t_send1, (Optr)PSend18720, (Optr)&t_block_return);
    Block PBlock18716 = new_Block_with(empty_Array, empty_Array, PThreadedCode18717, 1, PSend18720);
    // ifFalse:. 
    Send PSend18715 = new_Send((Optr)PSend18714, SMB_ifFalse_, 1, (Optr)PBlock18716);
    Array PThreadedCode18712 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18713, (Optr)&t_send0, (Optr)PSend18714, (Optr)&t_send_ifFalse_, (Optr)PSend18715, (Optr)PBlock18716, (Optr)&t_method_return);
    Block PBlock18710 = new_Block_with(PArray18711, empty_Array, PThreadedCode18712, 1, PSend18715);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18721 = new_Send((Optr)PBlock18706, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18710);
    Array PThreadedCode18705 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18706, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18710, (Optr)&t_send2, (Optr)PSend18721, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock18703 = new_Block_with(PArray18704, empty_Array, PThreadedCode18705, 2, PSend18721, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18722 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18703);
    Array PThreadedCode18702 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18703, (Optr)&t_send1, (Optr)PSend18722, (Optr)&t_method_return);
    Method PMethod18700 = new_Method_with(PArray18701, empty_Array, empty_Array, PThreadedCode18702, 1, PSend18722);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod18700, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode18724 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18723 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18724, 1, self);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod18723, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_layout, MC_SMB_layout);
}


static void init_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Array PThreadedCode18726 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_method_return);
    Method PMethod18725 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18726, 1, slot_Shell_Shell_history);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod18725, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_history, MC_SMB_history);
}


static void init_SMB_runWith_() {
    /*
    runWith: anInterpreter
// 	^ super basicNew runWith: anInterpreter
    */
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18728 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18731 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign18730 = new_Assign((Optr)slot_Shell_Shell_scope, (Optr)PSend18731);
    // new. 
    Send PSend18733 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18732 = new_Assign((Optr)slot_Shell_Shell_exceptions, (Optr)PSend18733);
    // new. 
    Send PSend18735 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18734 = new_Assign((Optr)slot_Shell_Shell_history, (Optr)PSend18735);
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend18737 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Assign PAssign18736 = new_Assign((Optr)slot_Shell_Shell_input, (Optr)PSend18737);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend18739 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Assign PAssign18738 = new_Assign((Optr)slot_Shell_Shell_output, (Optr)PSend18739);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend18741 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Assign PAssign18740 = new_Assign((Optr)slot_Shell_Shell_error, (Optr)PSend18741);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18742 = new_Send((Optr)self, SMB_class, 0);
    String string_18743 = new_String(L"demoImport self package import: Interpretation. self package import: Demo");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Constant string_18743_Const = new_Constant((Optr)string_18743);
    // compile:. 
    Send PSend18744 = new_Send((Optr)PSend18742, SMB_compile_, 1, (Optr)string_18743_Const);
    Symbol SMB_demoImport = new_Symbol(L"demoImport");
    // demoImport. 
    Send PSend18745 = new_Send((Optr)self, SMB_demoImport, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend18746 = new_Send((Optr)self, SMB_shell, 0);
    Array PThreadedCode18729 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign18730, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend18731, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18732, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18733, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18734, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18735, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18736, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend18737, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18738, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18739, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18740, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18741, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18742, (Optr)&t_push1, (Optr)string_18743, (Optr)&t_send1, (Optr)PSend18744, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18745, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18746, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18727 = new_Method_with(PArray18728, empty_Array, empty_Array, PThreadedCode18729, 10, PAssign18730, PAssign18732, PAssign18734, PAssign18736, PAssign18738, PAssign18740, PSend18744, PSend18745, PSend18746, self);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18727, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_runWith_, MC_SMB_runWith_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray18748 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18751 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend18753 = new_Send((Optr)VAR_name_0_0, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend18754 = new_Send((Optr)PSend18753, SMB_isUppercase, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18758 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18759 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18758);
    Array PThreadedCode18757 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend18758, (Optr)&t_send1, (Optr)PSend18759, (Optr)&t_block_return);
    Block PBlock18756 = new_Block_with(empty_Array, empty_Array, PThreadedCode18757, 1, PSend18759);
    // ifTrue:. 
    Send PSend18755 = new_Send((Optr)PSend18754, SMB_ifTrue_, 1, (Optr)PBlock18756);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18764 = new_Send((Optr)PDirectVariable_classReference, SMB_named_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18765 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)PSend18764);
    Array PThreadedCode18763 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_class_reference, (Optr)PDirectVariable_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend18764, (Optr)&t_send2, (Optr)PSend18765, (Optr)&t_block_return);
    Block PBlock18762 = new_Block_with(empty_Array, empty_Array, PThreadedCode18763, 1, PSend18765);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend18766 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18762);
    Array PThreadedCode18761 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18762, (Optr)&t_send2, (Optr)PSend18766, (Optr)&t_block_return);
    Block PBlock18760 = new_Block_with(empty_Array, empty_Array, PThreadedCode18761, 1, PSend18766);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend18767 = new_Send((Optr)PRootScope_classReference, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18760);
    Array PThreadedCode18752 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send0, (Optr)PSend18753, (Optr)&t_send0, (Optr)PSend18754, (Optr)&t_send_ifTrue_, (Optr)PSend18755, (Optr)PBlock18756, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18760, (Optr)&t_send2, (Optr)PSend18767, (Optr)&t_method_return);
    Block PBlock18750 = new_Block_with(PArray18751, empty_Array, PThreadedCode18752, 2, PSend18755, PSend18767);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18768 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18750);
    Array PThreadedCode18749 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18750, (Optr)&t_send1, (Optr)PSend18768, (Optr)&t_method_return);
    Method PMethod18747 = new_Method_with(PArray18748, empty_Array, empty_Array, PThreadedCode18749, 1, PSend18768);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod18747, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18770 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray18771 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_18777 = new_String(L"DoIt ^[");
    Constant string_18777_Const = new_Constant((Optr)string_18777);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18778 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend18776 = new_Send((Optr)string_18777_Const, SMB__append_, 1, (Optr)PSend18778);
    // ,. 
    Send PSend18775 = new_Send((Optr)PSend18776, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_18779 = new_String(L"] value");
    Constant string_18779_Const = new_Constant((Optr)string_18779);
    // ,. 
    Send PSend18774 = new_Send((Optr)PSend18775, SMB__append_, 1, (Optr)string_18779_Const);
    Assign PAssign18773 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend18774);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend18781 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)self);
    Assign PAssign18780 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend18781);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18782 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend18783 = new_Send((Optr)PSend18782, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18784 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18785 = new_Send((Optr)PSend18783, SMB_at_put_, 2, (Optr)PSend18784, (Optr)VAR_method_0_2);
    Array PThreadedCode18772 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign18773, (Optr)&t_push1, (Optr)string_18777, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend18778, (Optr)&t_send1, (Optr)PSend18776, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18775, (Optr)&t_push1, (Optr)string_18779, (Optr)&t_send1, (Optr)PSend18774, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18780, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend18781, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18782, (Optr)&t_send0, (Optr)PSend18783, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend18784, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend18785, (Optr)&t_method_return);
    Method PMethod18769 = new_Method_with(PArray18770, PArray18771, empty_Array, PThreadedCode18772, 3, PAssign18773, PAssign18780, PSend18785);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod18769, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18788 = new_Send((Optr)self, SMB_class, 0);
    // package. 
    Send PSend18789 = new_Send((Optr)PSend18788, SMB_package, 0);
    Array PThreadedCode18787 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18788, (Optr)&t_send0, (Optr)PSend18789, (Optr)&t_method_return);
    Method PMethod18786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18787, 1, PSend18789);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod18786, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_continueLine() {
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    String string_18792 = new_String(L"| ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18792_Const = new_Constant((Optr)string_18792);
    // <<. 
    Send PSend18793 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18792_Const);
    Array PThreadedCode18791 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18792, (Optr)&t_send1, (Optr)PSend18793, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18790 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18791, 2, PSend18793, self);
    
    MethodClosure MC_SMB_continueLine = new_MethodClosure((Method)PMethod18790, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_continueLine, MC_SMB_continueLine);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_18796 = new_String(L"Shell");
    Array PThreadedCode18795 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_18796, (Optr)&t_method_return);
    Constant string_18796_Const = new_Constant((Optr)string_18796);
    Method PMethod18794 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18795, 1, string_18796_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod18794, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_runWith_() {
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18798 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18800 = new_Super(SMB_basicNew, 0);
    // runWith:. 
    Send PSend18801 = new_Send((Optr)PSuper18800, SMB_runWith_, 1, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode18799 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18800, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send1, (Optr)PSend18801, (Optr)&t_method_return);
    Method PMethod18797 = new_Method_with(PArray18798, empty_Array, empty_Array, PThreadedCode18799, 1, PSend18801);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18797, HEADER(Shell_Shell_Class));
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