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
    Array PArray18580 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray18581 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18584 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_18586 = new_String(L"");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_18586_Const = new_Constant((Optr)string_18586);
    // =. 
    Send PSend18587 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_18586_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18591 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode18590 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18591, (Optr)&t_block_return);
    Block PBlock18589 = new_Block_with(empty_Array, empty_Array, PThreadedCode18590, 1, PSend18591);
    // ifTrue:. 
    Send PSend18588 = new_Send((Optr)PSend18587, SMB_ifTrue_, 1, (Optr)PBlock18589);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend18597 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18596 = new_Send((Optr)PSend18597, SMB_selector, 0);
    // perform:. 
    Send PSend18595 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend18596);
    Assign PAssign18594 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend18595);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18598 = new_Send((Optr)slot_Shell_Shell_history, SMB_add_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18593 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18594, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18597, (Optr)&t_send0, (Optr)PSend18596, (Optr)&t_send1, (Optr)PSend18595, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18598, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_block_return);
    Block PBlock18592 = new_Block_with(empty_Array, empty_Array, PThreadedCode18593, 3, PAssign18594, PSend18598, VAR_value_0_1);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18600 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    // exceptions. 
    Send PSend18602 = new_Send((Optr)self, SMB_exceptions, 0);
    // add:. 
    Send PSend18603 = new_Send((Optr)PSend18602, SMB_add_, 1, (Optr)VAR_ex_2_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend18604 = new_Send((Optr)slot_Shell_Shell_error, SMB_yellow, 0);
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    // printStacktraceOn:. 
    Send PSend18605 = new_Send((Optr)VAR_ex_2_0, SMB_printStacktraceOn_, 1, (Optr)slot_Shell_Shell_error);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray18607 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18609 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend18610 = new_Send((Optr)VAR__receiver__3_0, SMB_red, 0);
    Array PThreadedCode18608 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18609, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18610, (Optr)&t_method_return);
    Block PBlock18606 = new_Block_with(PArray18607, empty_Array, PThreadedCode18608, 2, PSend18609, PSend18610);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18611 = new_Send((Optr)PBlock18606, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend18612 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)slot_Shell_Shell_error);
    Array PArray18614 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18616 = new_Send((Optr)VAR__receiver__3_0, SMB_clear, 0);
    // lf. 
    Send PSend18617 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Array PThreadedCode18615 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18617, (Optr)&t_method_return);
    Block PBlock18613 = new_Block_with(PArray18614, empty_Array, PThreadedCode18615, 2, PSend18616, PSend18617);
    // value:. 
    Send PSend18618 = new_Send((Optr)PBlock18613, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Array PThreadedCode18601 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18602, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend18603, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send0, (Optr)PSend18604, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18605, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18606, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18611, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18612, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18613, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18618, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock18599 = new_Block_with(PArray18600, empty_Array, PThreadedCode18601, 7, PSend18603, PSend18604, PSend18605, PSend18611, PSend18612, PSend18618, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18619 = new_Send((Optr)PBlock18592, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock18599);
    Array PThreadedCode18585 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_18586, (Optr)&t_send1, (Optr)PSend18587, (Optr)&t_send_ifTrue_, (Optr)PSend18588, (Optr)PBlock18589, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18592, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock18599, (Optr)&t_send2, (Optr)PSend18619, (Optr)&t_method_return);
    Block PBlock18583 = new_Block_with(PArray18584, empty_Array, PThreadedCode18585, 2, PSend18588, PSend18619);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18620 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18583);
    Array PThreadedCode18582 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18583, (Optr)&t_send1, (Optr)PSend18620, (Optr)&t_method_return);
    Method PMethod18579 = new_Method_with(PArray18580, PArray18581, empty_Array, PThreadedCode18582, 1, PSend18620);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod18579, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Variable VAR_readline_0_1 = new_Variable_named(L"readline", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray18622 = new_Array_with(3, (Optr)VAR_inspector_0_0, (Optr)VAR_readline_0_1, (Optr)VAR_result_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18625 = new_Send((Optr)PStreamInspector_classReference, SMB_on_, 1, (Optr)slot_Shell_Shell_output);
    Assign PAssign18624 = new_Assign((Optr)VAR_inspector_0_0, (Optr)PSend18625);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    // from:to:for:. 
    Send PSend18627 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)slot_Shell_Shell_input, (Optr)slot_Shell_Shell_output, (Optr)self);
    Assign PAssign18626 = new_Assign((Optr)VAR_readline_0_1, (Optr)PSend18627);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend18630 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend18633 = new_Send((Optr)VAR_readline_0_1, SMB_readLine, 0);
    // interpret:. 
    Send PSend18632 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend18633);
    Assign PAssign18631 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18632);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18634 = new_Send((Optr)VAR_result_0_2, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend18638 = new_Send((Optr)VAR_inspector_0_0, SMB_inspect_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18639 = new_Send((Optr)slot_Shell_Shell_output, SMB_lf, 0);
    Array PThreadedCode18637 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18638, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send0, (Optr)PSend18639, (Optr)&t_block_return);
    Block PBlock18636 = new_Block_with(empty_Array, empty_Array, PThreadedCode18637, 2, PSend18638, PSend18639);
    // ifFalse:. 
    Send PSend18635 = new_Send((Optr)PSend18634, SMB_ifFalse_, 1, (Optr)PBlock18636);
    Array PThreadedCode18629 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18630, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18631, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_1, (Optr)&t_send0, (Optr)PSend18633, (Optr)&t_send1, (Optr)PSend18632, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18634, (Optr)&t_send_ifFalse_, (Optr)PSend18635, (Optr)PBlock18636, (Optr)&t_block_return);
    Block PBlock18628 = new_Block_with(empty_Array, empty_Array, PThreadedCode18629, 3, PSend18630, PAssign18631, PSend18635);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend18640 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock18628);
    Array PThreadedCode18623 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign18624, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send1, (Optr)PSend18625, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18626, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_input, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend18627, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock18628, (Optr)&t_send1, (Optr)PSend18640, (Optr)&t_method_return);
    Method PMethod18621 = new_Method_with(empty_Array, PArray18622, empty_Array, PThreadedCode18623, 3, PAssign18624, PAssign18626, PSend18640);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod18621, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18642 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18645 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18649 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18650 = new_Send((Optr)PSend18649, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18648 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18649, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18650, (Optr)&t_block_return);
    Block PBlock18647 = new_Block_with(empty_Array, empty_Array, PThreadedCode18648, 1, PSend18650);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18652 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18654 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18655 = new_Send((Optr)PSend18654, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend18656 = new_Send((Optr)PSend18655, SMB_not, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18657 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18656);
    Array PThreadedCode18653 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18654, (Optr)&t_send0, (Optr)PSend18655, (Optr)&t_send0, (Optr)PSend18656, (Optr)&t_send1, (Optr)PSend18657, (Optr)&t_method_return);
    Block PBlock18651 = new_Block_with(PArray18652, empty_Array, PThreadedCode18653, 1, PSend18657);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18658 = new_Send((Optr)PBlock18647, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18651);
    Array PThreadedCode18646 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18647, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18651, (Optr)&t_send2, (Optr)PSend18658, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18644 = new_Block_with(PArray18645, empty_Array, PThreadedCode18646, 2, PSend18658, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18659 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18644);
    Array PThreadedCode18643 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18644, (Optr)&t_send1, (Optr)PSend18659, (Optr)&t_method_return);
    Method PMethod18641 = new_Method_with(PArray18642, empty_Array, empty_Array, PThreadedCode18643, 1, PSend18659);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod18641, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    String string_18662 = new_String(L"> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18662_Const = new_Constant((Optr)string_18662);
    // <<. 
    Send PSend18663 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18662_Const);
    Array PThreadedCode18661 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18662, (Optr)&t_send1, (Optr)PSend18663, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18660 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18661, 2, PSend18663, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod18660, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_exceptions() {
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    Array PThreadedCode18665 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_exceptions, (Optr)&t_method_return);
    Method PMethod18664 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18665, 1, slot_Shell_Shell_exceptions);
    
    MethodClosure MC_SMB_exceptions = new_MethodClosure((Method)PMethod18664, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_exceptions, MC_SMB_exceptions);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18667 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18670 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18674 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18675 = new_Send((Optr)PSend18674, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18673 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18674, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18675, (Optr)&t_block_return);
    Block PBlock18672 = new_Block_with(empty_Array, empty_Array, PThreadedCode18673, 1, PSend18675);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18677 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18679 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18680 = new_Send((Optr)PSend18679, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend18684 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18685 = new_Send((Optr)PSend18684, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18686 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18685);
    Array PThreadedCode18683 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18684, (Optr)&t_send0, (Optr)PSend18685, (Optr)&t_send1, (Optr)PSend18686, (Optr)&t_block_return);
    Block PBlock18682 = new_Block_with(empty_Array, empty_Array, PThreadedCode18683, 1, PSend18686);
    // ifFalse:. 
    Send PSend18681 = new_Send((Optr)PSend18680, SMB_ifFalse_, 1, (Optr)PBlock18682);
    Array PThreadedCode18678 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18679, (Optr)&t_send0, (Optr)PSend18680, (Optr)&t_send_ifFalse_, (Optr)PSend18681, (Optr)PBlock18682, (Optr)&t_method_return);
    Block PBlock18676 = new_Block_with(PArray18677, empty_Array, PThreadedCode18678, 1, PSend18681);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18687 = new_Send((Optr)PBlock18672, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18676);
    Array PThreadedCode18671 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18672, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18676, (Optr)&t_send2, (Optr)PSend18687, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock18669 = new_Block_with(PArray18670, empty_Array, PThreadedCode18671, 2, PSend18687, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18688 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18669);
    Array PThreadedCode18668 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18669, (Optr)&t_send1, (Optr)PSend18688, (Optr)&t_method_return);
    Method PMethod18666 = new_Method_with(PArray18667, empty_Array, empty_Array, PThreadedCode18668, 1, PSend18688);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod18666, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode18690 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18689 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18690, 1, self);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod18689, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_layout, MC_SMB_layout);
}


static void init_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Array PThreadedCode18692 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_method_return);
    Method PMethod18691 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18692, 1, slot_Shell_Shell_history);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod18691, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_history, MC_SMB_history);
}


static void init_SMB_runWith_() {
    /*
    runWith: anInterpreter
// 	^ super basicNew runWith: anInterpreter
    */
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18694 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18697 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign18696 = new_Assign((Optr)slot_Shell_Shell_scope, (Optr)PSend18697);
    // new. 
    Send PSend18699 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18698 = new_Assign((Optr)slot_Shell_Shell_exceptions, (Optr)PSend18699);
    // new. 
    Send PSend18701 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18700 = new_Assign((Optr)slot_Shell_Shell_history, (Optr)PSend18701);
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend18703 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Assign PAssign18702 = new_Assign((Optr)slot_Shell_Shell_input, (Optr)PSend18703);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend18705 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Assign PAssign18704 = new_Assign((Optr)slot_Shell_Shell_output, (Optr)PSend18705);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend18707 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Assign PAssign18706 = new_Assign((Optr)slot_Shell_Shell_error, (Optr)PSend18707);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18708 = new_Send((Optr)self, SMB_class, 0);
    String string_18709 = new_String(L"demoImport self package import: Interpretation. self package import: Demo");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Constant string_18709_Const = new_Constant((Optr)string_18709);
    // compile:. 
    Send PSend18710 = new_Send((Optr)PSend18708, SMB_compile_, 1, (Optr)string_18709_Const);
    Symbol SMB_demoImport = new_Symbol(L"demoImport");
    // demoImport. 
    Send PSend18711 = new_Send((Optr)self, SMB_demoImport, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend18712 = new_Send((Optr)self, SMB_shell, 0);
    Array PThreadedCode18695 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign18696, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend18697, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18698, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18699, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18700, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18701, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18702, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend18703, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18704, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18705, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18706, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18707, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18708, (Optr)&t_push1, (Optr)string_18709, (Optr)&t_send1, (Optr)PSend18710, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18711, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18712, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18693 = new_Method_with(PArray18694, empty_Array, empty_Array, PThreadedCode18695, 10, PAssign18696, PAssign18698, PAssign18700, PAssign18702, PAssign18704, PAssign18706, PSend18710, PSend18711, PSend18712, self);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18693, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_runWith_, MC_SMB_runWith_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray18714 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18717 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend18719 = new_Send((Optr)VAR_name_0_0, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend18720 = new_Send((Optr)PSend18719, SMB_isUppercase, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18724 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18725 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18724);
    Array PThreadedCode18723 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend18724, (Optr)&t_send1, (Optr)PSend18725, (Optr)&t_block_return);
    Block PBlock18722 = new_Block_with(empty_Array, empty_Array, PThreadedCode18723, 1, PSend18725);
    // ifTrue:. 
    Send PSend18721 = new_Send((Optr)PSend18720, SMB_ifTrue_, 1, (Optr)PBlock18722);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18730 = new_Send((Optr)PDirectVariable_classReference, SMB_named_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18731 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)PSend18730);
    Array PThreadedCode18729 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_class_reference, (Optr)PDirectVariable_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend18730, (Optr)&t_send2, (Optr)PSend18731, (Optr)&t_block_return);
    Block PBlock18728 = new_Block_with(empty_Array, empty_Array, PThreadedCode18729, 1, PSend18731);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend18732 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18728);
    Array PThreadedCode18727 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18728, (Optr)&t_send2, (Optr)PSend18732, (Optr)&t_block_return);
    Block PBlock18726 = new_Block_with(empty_Array, empty_Array, PThreadedCode18727, 1, PSend18732);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend18733 = new_Send((Optr)PRootScope_classReference, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18726);
    Array PThreadedCode18718 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send0, (Optr)PSend18719, (Optr)&t_send0, (Optr)PSend18720, (Optr)&t_send_ifTrue_, (Optr)PSend18721, (Optr)PBlock18722, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18726, (Optr)&t_send2, (Optr)PSend18733, (Optr)&t_method_return);
    Block PBlock18716 = new_Block_with(PArray18717, empty_Array, PThreadedCode18718, 2, PSend18721, PSend18733);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18734 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18716);
    Array PThreadedCode18715 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18716, (Optr)&t_send1, (Optr)PSend18734, (Optr)&t_method_return);
    Method PMethod18713 = new_Method_with(PArray18714, empty_Array, empty_Array, PThreadedCode18715, 1, PSend18734);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod18713, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18736 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray18737 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_18743 = new_String(L"DoIt ^[");
    Constant string_18743_Const = new_Constant((Optr)string_18743);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18744 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend18742 = new_Send((Optr)string_18743_Const, SMB__append_, 1, (Optr)PSend18744);
    // ,. 
    Send PSend18741 = new_Send((Optr)PSend18742, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_18745 = new_String(L"] value");
    Constant string_18745_Const = new_Constant((Optr)string_18745);
    // ,. 
    Send PSend18740 = new_Send((Optr)PSend18741, SMB__append_, 1, (Optr)string_18745_Const);
    Assign PAssign18739 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend18740);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend18747 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)self);
    Assign PAssign18746 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend18747);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18748 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend18749 = new_Send((Optr)PSend18748, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18750 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18751 = new_Send((Optr)PSend18749, SMB_at_put_, 2, (Optr)PSend18750, (Optr)VAR_method_0_2);
    Array PThreadedCode18738 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign18739, (Optr)&t_push1, (Optr)string_18743, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend18744, (Optr)&t_send1, (Optr)PSend18742, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18741, (Optr)&t_push1, (Optr)string_18745, (Optr)&t_send1, (Optr)PSend18740, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18746, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend18747, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18748, (Optr)&t_send0, (Optr)PSend18749, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend18750, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend18751, (Optr)&t_method_return);
    Method PMethod18735 = new_Method_with(PArray18736, PArray18737, empty_Array, PThreadedCode18738, 3, PAssign18739, PAssign18746, PSend18751);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod18735, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18754 = new_Send((Optr)self, SMB_class, 0);
    // package. 
    Send PSend18755 = new_Send((Optr)PSend18754, SMB_package, 0);
    Array PThreadedCode18753 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18754, (Optr)&t_send0, (Optr)PSend18755, (Optr)&t_method_return);
    Method PMethod18752 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18753, 1, PSend18755);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod18752, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_continueLine() {
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    String string_18758 = new_String(L"| ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18758_Const = new_Constant((Optr)string_18758);
    // <<. 
    Send PSend18759 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18758_Const);
    Array PThreadedCode18757 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18758, (Optr)&t_send1, (Optr)PSend18759, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18756 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18757, 2, PSend18759, self);
    
    MethodClosure MC_SMB_continueLine = new_MethodClosure((Method)PMethod18756, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_continueLine, MC_SMB_continueLine);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_18762 = new_String(L"Shell");
    Array PThreadedCode18761 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_18762, (Optr)&t_method_return);
    Constant string_18762_Const = new_Constant((Optr)string_18762);
    Method PMethod18760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18761, 1, string_18762_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod18760, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_runWith_() {
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18764 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18766 = new_Super(SMB_basicNew, 0);
    // runWith:. 
    Send PSend18767 = new_Send((Optr)PSuper18766, SMB_runWith_, 1, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode18765 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18766, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send1, (Optr)PSend18767, (Optr)&t_method_return);
    Method PMethod18763 = new_Method_with(PArray18764, empty_Array, empty_Array, PThreadedCode18765, 1, PSend18767);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18763, HEADER(Shell_Shell_Class));
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