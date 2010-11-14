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
    Array PArray18582 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray18583 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18586 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_18588 = new_String(L"");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_18588_Const = new_Constant((Optr)string_18588);
    // =. 
    Send PSend18589 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_18588_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18593 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode18592 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18593, (Optr)&t_block_return);
    Block PBlock18591 = new_Block_with(empty_Array, empty_Array, PThreadedCode18592, 1, PSend18593);
    // ifTrue:. 
    Send PSend18590 = new_Send((Optr)PSend18589, SMB_ifTrue_, 1, (Optr)PBlock18591);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend18599 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18598 = new_Send((Optr)PSend18599, SMB_selector, 0);
    // perform:. 
    Send PSend18597 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend18598);
    Assign PAssign18596 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend18597);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18600 = new_Send((Optr)slot_Shell_Shell_history, SMB_add_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18595 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18596, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18599, (Optr)&t_send0, (Optr)PSend18598, (Optr)&t_send1, (Optr)PSend18597, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_block_return);
    Block PBlock18594 = new_Block_with(empty_Array, empty_Array, PThreadedCode18595, 3, PAssign18596, PSend18600, VAR_value_0_1);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18602 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    // exceptions. 
    Send PSend18604 = new_Send((Optr)self, SMB_exceptions, 0);
    // add:. 
    Send PSend18605 = new_Send((Optr)PSend18604, SMB_add_, 1, (Optr)VAR_ex_2_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend18606 = new_Send((Optr)slot_Shell_Shell_error, SMB_yellow, 0);
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    // printStacktraceOn:. 
    Send PSend18607 = new_Send((Optr)VAR_ex_2_0, SMB_printStacktraceOn_, 1, (Optr)slot_Shell_Shell_error);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray18609 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18611 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend18612 = new_Send((Optr)VAR__receiver__3_0, SMB_red, 0);
    Array PThreadedCode18610 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18611, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18612, (Optr)&t_method_return);
    Block PBlock18608 = new_Block_with(PArray18609, empty_Array, PThreadedCode18610, 2, PSend18611, PSend18612);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18613 = new_Send((Optr)PBlock18608, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend18614 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)slot_Shell_Shell_error);
    Array PArray18616 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18618 = new_Send((Optr)VAR__receiver__3_0, SMB_clear, 0);
    // lf. 
    Send PSend18619 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Array PThreadedCode18617 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18618, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18619, (Optr)&t_method_return);
    Block PBlock18615 = new_Block_with(PArray18616, empty_Array, PThreadedCode18617, 2, PSend18618, PSend18619);
    // value:. 
    Send PSend18620 = new_Send((Optr)PBlock18615, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Array PThreadedCode18603 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18604, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend18605, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send0, (Optr)PSend18606, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18607, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18608, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18613, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18614, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18615, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18620, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock18601 = new_Block_with(PArray18602, empty_Array, PThreadedCode18603, 7, PSend18605, PSend18606, PSend18607, PSend18613, PSend18614, PSend18620, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18621 = new_Send((Optr)PBlock18594, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock18601);
    Array PThreadedCode18587 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_18588, (Optr)&t_send1, (Optr)PSend18589, (Optr)&t_send_ifTrue_, (Optr)PSend18590, (Optr)PBlock18591, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18594, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock18601, (Optr)&t_send2, (Optr)PSend18621, (Optr)&t_method_return);
    Block PBlock18585 = new_Block_with(PArray18586, empty_Array, PThreadedCode18587, 2, PSend18590, PSend18621);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18622 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18585);
    Array PThreadedCode18584 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18585, (Optr)&t_send1, (Optr)PSend18622, (Optr)&t_method_return);
    Method PMethod18581 = new_Method_with(PArray18582, PArray18583, empty_Array, PThreadedCode18584, 1, PSend18622);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod18581, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Variable VAR_readline_0_1 = new_Variable_named(L"readline", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray18624 = new_Array_with(3, (Optr)VAR_inspector_0_0, (Optr)VAR_readline_0_1, (Optr)VAR_result_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18627 = new_Send((Optr)PStreamInspector_classReference, SMB_on_, 1, (Optr)slot_Shell_Shell_output);
    Assign PAssign18626 = new_Assign((Optr)VAR_inspector_0_0, (Optr)PSend18627);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    // from:to:for:. 
    Send PSend18629 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)slot_Shell_Shell_input, (Optr)slot_Shell_Shell_output, (Optr)self);
    Assign PAssign18628 = new_Assign((Optr)VAR_readline_0_1, (Optr)PSend18629);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend18632 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend18635 = new_Send((Optr)VAR_readline_0_1, SMB_readLine, 0);
    // interpret:. 
    Send PSend18634 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend18635);
    Assign PAssign18633 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18634);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18636 = new_Send((Optr)VAR_result_0_2, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend18640 = new_Send((Optr)VAR_inspector_0_0, SMB_inspect_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18641 = new_Send((Optr)slot_Shell_Shell_output, SMB_lf, 0);
    Array PThreadedCode18639 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18640, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send0, (Optr)PSend18641, (Optr)&t_block_return);
    Block PBlock18638 = new_Block_with(empty_Array, empty_Array, PThreadedCode18639, 2, PSend18640, PSend18641);
    // ifFalse:. 
    Send PSend18637 = new_Send((Optr)PSend18636, SMB_ifFalse_, 1, (Optr)PBlock18638);
    Array PThreadedCode18631 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18632, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18633, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_1, (Optr)&t_send0, (Optr)PSend18635, (Optr)&t_send1, (Optr)PSend18634, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18636, (Optr)&t_send_ifFalse_, (Optr)PSend18637, (Optr)PBlock18638, (Optr)&t_block_return);
    Block PBlock18630 = new_Block_with(empty_Array, empty_Array, PThreadedCode18631, 3, PSend18632, PAssign18633, PSend18637);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend18642 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock18630);
    Array PThreadedCode18625 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign18626, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send1, (Optr)PSend18627, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18628, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_input, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend18629, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock18630, (Optr)&t_send1, (Optr)PSend18642, (Optr)&t_method_return);
    Method PMethod18623 = new_Method_with(empty_Array, PArray18624, empty_Array, PThreadedCode18625, 3, PAssign18626, PAssign18628, PSend18642);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod18623, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18644 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18647 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18651 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18652 = new_Send((Optr)PSend18651, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18650 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18651, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18652, (Optr)&t_block_return);
    Block PBlock18649 = new_Block_with(empty_Array, empty_Array, PThreadedCode18650, 1, PSend18652);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18654 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18656 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18657 = new_Send((Optr)PSend18656, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend18658 = new_Send((Optr)PSend18657, SMB_not, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18659 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18658);
    Array PThreadedCode18655 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18656, (Optr)&t_send0, (Optr)PSend18657, (Optr)&t_send0, (Optr)PSend18658, (Optr)&t_send1, (Optr)PSend18659, (Optr)&t_method_return);
    Block PBlock18653 = new_Block_with(PArray18654, empty_Array, PThreadedCode18655, 1, PSend18659);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18660 = new_Send((Optr)PBlock18649, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18653);
    Array PThreadedCode18648 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18649, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18653, (Optr)&t_send2, (Optr)PSend18660, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18646 = new_Block_with(PArray18647, empty_Array, PThreadedCode18648, 2, PSend18660, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18661 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18646);
    Array PThreadedCode18645 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18646, (Optr)&t_send1, (Optr)PSend18661, (Optr)&t_method_return);
    Method PMethod18643 = new_Method_with(PArray18644, empty_Array, empty_Array, PThreadedCode18645, 1, PSend18661);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod18643, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    String string_18664 = new_String(L"> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18664_Const = new_Constant((Optr)string_18664);
    // <<. 
    Send PSend18665 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18664_Const);
    Array PThreadedCode18663 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18664, (Optr)&t_send1, (Optr)PSend18665, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18663, 2, PSend18665, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod18662, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_exceptions() {
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    Array PThreadedCode18667 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_exceptions, (Optr)&t_method_return);
    Method PMethod18666 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18667, 1, slot_Shell_Shell_exceptions);
    
    MethodClosure MC_SMB_exceptions = new_MethodClosure((Method)PMethod18666, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_exceptions, MC_SMB_exceptions);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18669 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18672 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18676 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18677 = new_Send((Optr)PSend18676, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18675 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18676, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18677, (Optr)&t_block_return);
    Block PBlock18674 = new_Block_with(empty_Array, empty_Array, PThreadedCode18675, 1, PSend18677);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18679 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18681 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18682 = new_Send((Optr)PSend18681, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend18686 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18687 = new_Send((Optr)PSend18686, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18688 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18687);
    Array PThreadedCode18685 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18686, (Optr)&t_send0, (Optr)PSend18687, (Optr)&t_send1, (Optr)PSend18688, (Optr)&t_block_return);
    Block PBlock18684 = new_Block_with(empty_Array, empty_Array, PThreadedCode18685, 1, PSend18688);
    // ifFalse:. 
    Send PSend18683 = new_Send((Optr)PSend18682, SMB_ifFalse_, 1, (Optr)PBlock18684);
    Array PThreadedCode18680 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18681, (Optr)&t_send0, (Optr)PSend18682, (Optr)&t_send_ifFalse_, (Optr)PSend18683, (Optr)PBlock18684, (Optr)&t_method_return);
    Block PBlock18678 = new_Block_with(PArray18679, empty_Array, PThreadedCode18680, 1, PSend18683);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18689 = new_Send((Optr)PBlock18674, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18678);
    Array PThreadedCode18673 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18674, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18678, (Optr)&t_send2, (Optr)PSend18689, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock18671 = new_Block_with(PArray18672, empty_Array, PThreadedCode18673, 2, PSend18689, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18690 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18671);
    Array PThreadedCode18670 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18671, (Optr)&t_send1, (Optr)PSend18690, (Optr)&t_method_return);
    Method PMethod18668 = new_Method_with(PArray18669, empty_Array, empty_Array, PThreadedCode18670, 1, PSend18690);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod18668, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode18692 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18691 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18692, 1, self);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod18691, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_layout, MC_SMB_layout);
}


static void init_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Array PThreadedCode18694 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_method_return);
    Method PMethod18693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18694, 1, slot_Shell_Shell_history);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod18693, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_history, MC_SMB_history);
}


static void init_SMB_runWith_() {
    /*
    runWith: anInterpreter
// 	^ super basicNew runWith: anInterpreter
    */
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18696 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18699 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign18698 = new_Assign((Optr)slot_Shell_Shell_scope, (Optr)PSend18699);
    // new. 
    Send PSend18701 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18700 = new_Assign((Optr)slot_Shell_Shell_exceptions, (Optr)PSend18701);
    // new. 
    Send PSend18703 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18702 = new_Assign((Optr)slot_Shell_Shell_history, (Optr)PSend18703);
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend18705 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Assign PAssign18704 = new_Assign((Optr)slot_Shell_Shell_input, (Optr)PSend18705);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend18707 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Assign PAssign18706 = new_Assign((Optr)slot_Shell_Shell_output, (Optr)PSend18707);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend18709 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Assign PAssign18708 = new_Assign((Optr)slot_Shell_Shell_error, (Optr)PSend18709);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18710 = new_Send((Optr)self, SMB_class, 0);
    String string_18711 = new_String(L"demoImport self package import: Interpretation. self package import: Demo");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Constant string_18711_Const = new_Constant((Optr)string_18711);
    // compile:. 
    Send PSend18712 = new_Send((Optr)PSend18710, SMB_compile_, 1, (Optr)string_18711_Const);
    Symbol SMB_demoImport = new_Symbol(L"demoImport");
    // demoImport. 
    Send PSend18713 = new_Send((Optr)self, SMB_demoImport, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend18714 = new_Send((Optr)self, SMB_shell, 0);
    Array PThreadedCode18697 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign18698, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend18699, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18700, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18701, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18702, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18703, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18704, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend18705, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18706, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18707, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18708, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18709, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18710, (Optr)&t_push1, (Optr)string_18711, (Optr)&t_send1, (Optr)PSend18712, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18713, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18714, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18695 = new_Method_with(PArray18696, empty_Array, empty_Array, PThreadedCode18697, 10, PAssign18698, PAssign18700, PAssign18702, PAssign18704, PAssign18706, PAssign18708, PSend18712, PSend18713, PSend18714, self);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18695, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_runWith_, MC_SMB_runWith_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray18716 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18719 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend18721 = new_Send((Optr)VAR_name_0_0, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend18722 = new_Send((Optr)PSend18721, SMB_isUppercase, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18726 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18727 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18726);
    Array PThreadedCode18725 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend18726, (Optr)&t_send1, (Optr)PSend18727, (Optr)&t_block_return);
    Block PBlock18724 = new_Block_with(empty_Array, empty_Array, PThreadedCode18725, 1, PSend18727);
    // ifTrue:. 
    Send PSend18723 = new_Send((Optr)PSend18722, SMB_ifTrue_, 1, (Optr)PBlock18724);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18732 = new_Send((Optr)PDirectVariable_classReference, SMB_named_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18733 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)PSend18732);
    Array PThreadedCode18731 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_class_reference, (Optr)PDirectVariable_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend18732, (Optr)&t_send2, (Optr)PSend18733, (Optr)&t_block_return);
    Block PBlock18730 = new_Block_with(empty_Array, empty_Array, PThreadedCode18731, 1, PSend18733);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend18734 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18730);
    Array PThreadedCode18729 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18730, (Optr)&t_send2, (Optr)PSend18734, (Optr)&t_block_return);
    Block PBlock18728 = new_Block_with(empty_Array, empty_Array, PThreadedCode18729, 1, PSend18734);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend18735 = new_Send((Optr)PRootScope_classReference, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18728);
    Array PThreadedCode18720 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send0, (Optr)PSend18721, (Optr)&t_send0, (Optr)PSend18722, (Optr)&t_send_ifTrue_, (Optr)PSend18723, (Optr)PBlock18724, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18728, (Optr)&t_send2, (Optr)PSend18735, (Optr)&t_method_return);
    Block PBlock18718 = new_Block_with(PArray18719, empty_Array, PThreadedCode18720, 2, PSend18723, PSend18735);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18736 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18718);
    Array PThreadedCode18717 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18718, (Optr)&t_send1, (Optr)PSend18736, (Optr)&t_method_return);
    Method PMethod18715 = new_Method_with(PArray18716, empty_Array, empty_Array, PThreadedCode18717, 1, PSend18736);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod18715, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18738 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray18739 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_18745 = new_String(L"DoIt ^[");
    Constant string_18745_Const = new_Constant((Optr)string_18745);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18746 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend18744 = new_Send((Optr)string_18745_Const, SMB__append_, 1, (Optr)PSend18746);
    // ,. 
    Send PSend18743 = new_Send((Optr)PSend18744, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_18747 = new_String(L"] value");
    Constant string_18747_Const = new_Constant((Optr)string_18747);
    // ,. 
    Send PSend18742 = new_Send((Optr)PSend18743, SMB__append_, 1, (Optr)string_18747_Const);
    Assign PAssign18741 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend18742);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend18749 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)self);
    Assign PAssign18748 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend18749);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18750 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend18751 = new_Send((Optr)PSend18750, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18752 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18753 = new_Send((Optr)PSend18751, SMB_at_put_, 2, (Optr)PSend18752, (Optr)VAR_method_0_2);
    Array PThreadedCode18740 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign18741, (Optr)&t_push1, (Optr)string_18745, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend18746, (Optr)&t_send1, (Optr)PSend18744, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18743, (Optr)&t_push1, (Optr)string_18747, (Optr)&t_send1, (Optr)PSend18742, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18748, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend18749, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18750, (Optr)&t_send0, (Optr)PSend18751, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend18752, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend18753, (Optr)&t_method_return);
    Method PMethod18737 = new_Method_with(PArray18738, PArray18739, empty_Array, PThreadedCode18740, 3, PAssign18741, PAssign18748, PSend18753);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod18737, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18756 = new_Send((Optr)self, SMB_class, 0);
    // package. 
    Send PSend18757 = new_Send((Optr)PSend18756, SMB_package, 0);
    Array PThreadedCode18755 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18756, (Optr)&t_send0, (Optr)PSend18757, (Optr)&t_method_return);
    Method PMethod18754 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18755, 1, PSend18757);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod18754, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_continueLine() {
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    String string_18760 = new_String(L"| ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18760_Const = new_Constant((Optr)string_18760);
    // <<. 
    Send PSend18761 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18760_Const);
    Array PThreadedCode18759 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18760, (Optr)&t_send1, (Optr)PSend18761, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18758 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18759, 2, PSend18761, self);
    
    MethodClosure MC_SMB_continueLine = new_MethodClosure((Method)PMethod18758, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_continueLine, MC_SMB_continueLine);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_18764 = new_String(L"Shell");
    Array PThreadedCode18763 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_18764, (Optr)&t_method_return);
    Constant string_18764_Const = new_Constant((Optr)string_18764);
    Method PMethod18762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18763, 1, string_18764_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod18762, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_runWith_() {
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18766 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18768 = new_Super(SMB_basicNew, 0);
    // runWith:. 
    Send PSend18769 = new_Send((Optr)PSuper18768, SMB_runWith_, 1, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode18767 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18768, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send1, (Optr)PSend18769, (Optr)&t_method_return);
    Method PMethod18765 = new_Method_with(PArray18766, empty_Array, empty_Array, PThreadedCode18767, 1, PSend18769);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18765, HEADER(Shell_Shell_Class));
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