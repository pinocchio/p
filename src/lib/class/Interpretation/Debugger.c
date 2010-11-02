#include <lib/class/Interpretation/Debugger.h>


Optr layout_Interpretation_Debugger_Class_class;
Optr slot_Interpretation_Debugger_escapeShell;
Optr layout_Interpretation_Debugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16541 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16544 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16550 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16549 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16550, (Optr)&t_block_return);
    Block PBlock16548 = new_Block_with(empty_Array, empty_Array, PThreadedCode16549, 1, PSend16550);
    // ifNil:. 
    Send PSend16547 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16548);
    Assign PAssign16546 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16547);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16554 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16553 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16554);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16555 = new_Send((Optr)PAssign16553, SMB_isNil, 0);
    Array PThreadedCode16552 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16553, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16554, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16555, (Optr)&t_block_return);
    Block PBlock16551 = new_Block_with(empty_Array, empty_Array, PThreadedCode16552, 1, PSend16555);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16558 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    String string_16559 = new_String(L"  ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16559_Const = new_Constant((Optr)string_16559);
    // <<. 
    Send PSend16560 = new_Send((Optr)PSend16558, SMB__shiftLeft_, 1, (Optr)string_16559_Const);
    Array PThreadedCode16557 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16558, (Optr)&t_push1, (Optr)string_16559, (Optr)&t_send1, (Optr)PSend16560, (Optr)&t_block_return);
    Block PBlock16556 = new_Block_with(empty_Array, empty_Array, PThreadedCode16557, 1, PSend16560);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16561 = new_Send((Optr)PBlock16551, SMB_whileFalse_, 1, (Optr)PBlock16556);
    Array PThreadedCode16545 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16546, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16548, (Optr)&t_send1, (Optr)PSend16547, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16551, (Optr)&t_push_closure, (Optr)PBlock16556, (Optr)&t_send1, (Optr)PSend16561, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16543 = new_Block_with(PArray16544, empty_Array, PThreadedCode16545, 3, PAssign16546, PSend16561, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16562 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16543);
    Array PThreadedCode16542 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16543, (Optr)&t_send1, (Optr)PSend16562, (Optr)&t_method_return);
    Method PMethod16540 = new_Method_with(empty_Array, PArray16541, empty_Array, PThreadedCode16542, 1, PSend16562);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16540, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16566 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_input_2_0 = new_Variable_named(L"input", 2);
    Array PArray16570 = new_Array_with(1, (Optr)VAR_input_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16572 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_input_2_0);
    Array PThreadedCode16571 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_input_2_0, (Optr)&t_send1, (Optr)PSend16572, (Optr)&t_method_return);
    Block PBlock16569 = new_Block_with(PArray16570, empty_Array, PThreadedCode16571, 1, PSend16572);
    Assign PAssign16568 = new_Assign((Optr)slot_Interpretation_Debugger_escapeShell, (Optr)PBlock16569);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend16575 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    // interpretFromStdin. 
    Send PSend16576 = new_Send((Optr)self, SMB_interpretFromStdin, 0);
    Array PThreadedCode16574 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16575, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16576, (Optr)&t_block_return);
    Block PBlock16573 = new_Block_with(empty_Array, empty_Array, PThreadedCode16574, 2, PSend16575, PSend16576);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16577 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock16573);
    Array PThreadedCode16567 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign16568, (Optr)&t_push_closure, (Optr)PBlock16569, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock16573, (Optr)&t_send1, (Optr)PSend16577, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16565 = new_Block_with(PArray16566, empty_Array, PThreadedCode16567, 3, PAssign16568, PSend16577, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16578 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16565);
    Array PThreadedCode16564 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16565, (Optr)&t_send1, (Optr)PSend16578, (Optr)&t_method_return);
    Method PMethod16563 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16564, 1, PSend16578);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod16563, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16580 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend16582 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16583 = new_Send((Optr)self, SMB_printStacktrace, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16584 = new_Send((Optr)self, SMB_shell, 0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend16585 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode16581 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16582, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16583, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16584, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16585, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16579 = new_Method_with(PArray16580, empty_Array, empty_Array, PThreadedCode16581, 5, PSend16582, PSend16583, PSend16584, PSend16585, self);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod16579, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16587 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16589 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16591 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16593 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16594 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16592 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16593, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16594, (Optr)&t_method_return);
    Block PBlock16590 = new_Block_with(PArray16591, empty_Array, PThreadedCode16592, 2, PSend16593, PSend16594);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16595 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16596 = new_Send((Optr)PBlock16590, SMB_value_, 1, (Optr)PSend16595);
    Array PThreadedCode16588 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16589, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16590, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16595, (Optr)&t_send1, (Optr)PSend16596, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16586 = new_Method_with(PArray16587, empty_Array, empty_Array, PThreadedCode16588, 3, PSend16589, PSend16596, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod16586, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16598 = new_Array_with(1, (Optr)VAR_code_0_0);
    Array PThreadedCode16599 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16597 = new_Method_with(PArray16598, empty_Array, empty_Array, PThreadedCode16599, 1, true_Const);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod16597, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16602 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    String string_16603 = new_String(L"pidb> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16603_Const = new_Constant((Optr)string_16603);
    // <<. 
    Send PSend16604 = new_Send((Optr)PSend16602, SMB__shiftLeft_, 1, (Optr)string_16603_Const);
    Array PThreadedCode16601 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16602, (Optr)&t_push1, (Optr)string_16603, (Optr)&t_send1, (Optr)PSend16604, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16600 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16601, 2, PSend16604, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod16600, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_executeAction_() {
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16606 = new_Array_with(1, (Optr)VAR_action_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16608 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Array PThreadedCode16607 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16608, (Optr)&t_method_return);
    Method PMethod16605 = new_Method_with(PArray16606, empty_Array, empty_Array, PThreadedCode16607, 1, PSend16608);
    
    MethodClosure MC_SMB_executeAction_ = new_MethodClosure((Method)PMethod16605, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_executeAction_, MC_SMB_executeAction_);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16610 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16613 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend16617 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend16618 = new_Send((Optr)PSend16617, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode16616 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend16617, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16618, (Optr)&t_block_return);
    Block PBlock16615 = new_Block_with(empty_Array, empty_Array, PThreadedCode16616, 1, PSend16618);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray16620 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend16622 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend16623 = new_Send((Optr)PSend16622, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend16627 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16628 = new_Send((Optr)PSend16627, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16629 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16628);
    Array PThreadedCode16626 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16627, (Optr)&t_send0, (Optr)PSend16628, (Optr)&t_send1, (Optr)PSend16629, (Optr)&t_block_return);
    Block PBlock16625 = new_Block_with(empty_Array, empty_Array, PThreadedCode16626, 1, PSend16629);
    // ifFalse:. 
    Send PSend16624 = new_Send((Optr)PSend16623, SMB_ifFalse_, 1, (Optr)PBlock16625);
    Array PThreadedCode16621 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16622, (Optr)&t_send0, (Optr)PSend16623, (Optr)&t_send_ifFalse_, (Optr)PSend16624, (Optr)PBlock16625, (Optr)&t_method_return);
    Block PBlock16619 = new_Block_with(PArray16620, empty_Array, PThreadedCode16621, 1, PSend16624);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16630 = new_Send((Optr)PBlock16615, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock16619);
    Array PThreadedCode16614 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock16615, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock16619, (Optr)&t_send2, (Optr)PSend16630, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16612 = new_Block_with(PArray16613, empty_Array, PThreadedCode16614, 2, PSend16630, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16631 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16612);
    Array PThreadedCode16611 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16612, (Optr)&t_send1, (Optr)PSend16631, (Optr)&t_method_return);
    Method PMethod16609 = new_Method_with(PArray16610, empty_Array, empty_Array, PThreadedCode16611, 1, PSend16631);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod16609, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_skipStepBlock() {
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16635 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16637 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16636 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16637, (Optr)&t_method_return);
    Block PBlock16634 = new_Block_with(PArray16635, empty_Array, PThreadedCode16636, 1, PSend16637);
    Array PThreadedCode16633 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16634, (Optr)&t_method_return);
    Method PMethod16632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16633, 1, PBlock16634);
    
    MethodClosure MC_SMB_skipStepBlock = new_MethodClosure((Method)PMethod16632, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipStepBlock, MC_SMB_skipStepBlock);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16641 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16643 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16644 = new_Send((Optr)PSend16643, SMB_name, 0);
    String string_16645 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16645_Const = new_Constant((Optr)string_16645);
    // ,. 
    Send PSend16646 = new_Send((Optr)PSend16644, SMB__append_, 1, (Optr)string_16645_Const);
    // ,. 
    Send PSend16647 = new_Send((Optr)PSend16646, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend16648 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend16647);
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    // debugShellWithAction:. 
    Send PSend16649 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16642 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend16643, (Optr)&t_send0, (Optr)PSend16644, (Optr)&t_push1, (Optr)string_16645, (Optr)&t_send1, (Optr)PSend16646, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16647, (Optr)&t_send1, (Optr)PSend16648, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16649, (Optr)&t_method_return);
    Block PBlock16640 = new_Block_with(PArray16641, empty_Array, PThreadedCode16642, 2, PSend16648, PSend16649);
    Array PThreadedCode16639 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16640, (Optr)&t_method_return);
    Method PMethod16638 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16639, 1, PBlock16640);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16638, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_debugShellWithAction_() {
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16651 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_input_0_1 = new_Variable_named(L"input", 0);
    Array PArray16652 = new_Array_with(1, (Optr)VAR_input_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16655 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16658 = new_Send((Optr)self, SMB_shell, 0);
    Assign PAssign16657 = new_Assign((Optr)VAR_input_0_1, (Optr)PSend16658);
    String string_16659 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16659_Const = new_Constant((Optr)string_16659);
    // =. 
    Send PSend16660 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16659_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16664 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16665 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16664);
    Array PThreadedCode16663 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16664, (Optr)&t_send1, (Optr)PSend16665, (Optr)&t_block_return);
    Block PBlock16662 = new_Block_with(empty_Array, empty_Array, PThreadedCode16663, 1, PSend16665);
    // ifTrue:. 
    Send PSend16661 = new_Send((Optr)PSend16660, SMB_ifTrue_, 1, (Optr)PBlock16662);
    String string_16666 = new_String(L"o");
    Constant string_16666_Const = new_Constant((Optr)string_16666);
    // =. 
    Send PSend16667 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16666_Const);
    Variable VAR_oldBlock_2_0 = new_Variable_named(L"oldBlock", 2);
    Variable VAR_result_2_1 = new_Variable_named(L"result", 2);
    Array PArray16669 = new_Array_with(2, (Optr)VAR_oldBlock_2_0, (Optr)VAR_result_2_1);
    Assign PAssign16671 = new_Assign((Optr)VAR_oldBlock_2_0, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock);
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    // skipStepBlock. 
    Send PSend16673 = new_Send((Optr)self, SMB_skipStepBlock, 0);
    Assign PAssign16672 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16673);
    // value. 
    Send PSend16675 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Assign PAssign16674 = new_Assign((Optr)VAR_result_2_1, (Optr)PSend16675);
    Assign PAssign16676 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_oldBlock_2_0);
    // escape:. 
    Send PSend16677 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_2_1);
    Array PThreadedCode16670 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16671, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16672, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16673, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16674, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16675, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16676, (Optr)&t_push_variable, (Optr)VAR_oldBlock_2_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_2_1, (Optr)&t_send1, (Optr)PSend16677, (Optr)&t_method_return);
    Block PBlock16668 = new_Block_with(empty_Array, PArray16669, PThreadedCode16670, 5, PAssign16671, PAssign16672, PAssign16674, PAssign16676, PSend16677);
    // ifTrue:. 
    Send PSend16678 = new_Send((Optr)PSend16667, SMB_ifTrue_, 1, (Optr)PBlock16668);
    String string_16679 = new_String(L"i");
    Constant string_16679_Const = new_Constant((Optr)string_16679);
    // =. 
    Send PSend16680 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16679_Const);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16684 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend16685 = new_Send((Optr)PSend16684, SMB_inspect, 0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16686 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16687 = new_Send((Optr)PSend16686, SMB_lf, 0);
    // debugShellWithAction:. 
    Send PSend16688 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend16689 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16688);
    Array PThreadedCode16683 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16684, (Optr)&t_send0, (Optr)PSend16685, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16686, (Optr)&t_send0, (Optr)PSend16687, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend16688, (Optr)&t_send1, (Optr)PSend16689, (Optr)&t_block_return);
    Block PBlock16682 = new_Block_with(empty_Array, empty_Array, PThreadedCode16683, 3, PSend16685, PSend16687, PSend16689);
    // ifTrue:. 
    Send PSend16681 = new_Send((Optr)PSend16680, SMB_ifTrue_, 1, (Optr)PBlock16682);
    String string_16690 = new_String(L"j");
    Constant string_16690_Const = new_Constant((Optr)string_16690);
    // =. 
    Send PSend16691 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_16690_Const);
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skipBlock:. 
    Send PSend16696 = new_Send((Optr)self, SMB_skipBlock_, 1, (Optr)int_2_Const);
    Assign PAssign16695 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16696);
    // value. 
    Send PSend16697 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    // escape:. 
    Send PSend16698 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16697);
    Array PThreadedCode16694 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16695, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend16696, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16697, (Optr)&t_send1, (Optr)PSend16698, (Optr)&t_block_return);
    Block PBlock16693 = new_Block_with(empty_Array, empty_Array, PThreadedCode16694, 2, PAssign16695, PSend16698);
    // ifTrue:. 
    Send PSend16692 = new_Send((Optr)PSend16691, SMB_ifTrue_, 1, (Optr)PBlock16693);
    Array PThreadedCode16656 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16657, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16658, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16659, (Optr)&t_send1, (Optr)PSend16660, (Optr)&t_send_ifTrue_, (Optr)PSend16661, (Optr)PBlock16662, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16666, (Optr)&t_send1, (Optr)PSend16667, (Optr)&t_push_closure, (Optr)PBlock16668, (Optr)&t_send1, (Optr)PSend16678, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16679, (Optr)&t_send1, (Optr)PSend16680, (Optr)&t_send_ifTrue_, (Optr)PSend16681, (Optr)PBlock16682, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_16690, (Optr)&t_send1, (Optr)PSend16691, (Optr)&t_send_ifTrue_, (Optr)PSend16692, (Optr)PBlock16693, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16654 = new_Block_with(PArray16655, empty_Array, PThreadedCode16656, 6, PAssign16657, PSend16661, PSend16678, PSend16681, PSend16692, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16699 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16654);
    Array PThreadedCode16653 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16654, (Optr)&t_send1, (Optr)PSend16699, (Optr)&t_method_return);
    Method PMethod16650 = new_Method_with(PArray16651, PArray16652, empty_Array, PThreadedCode16653, 1, PSend16699);
    
    MethodClosure MC_SMB_debugShellWithAction_ = new_MethodClosure((Method)PMethod16650, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_debugShellWithAction_, MC_SMB_debugShellWithAction_);
}


static void init_SMB_interpretFromStdin() {
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    Variable VAR_readline_0_0 = new_Variable_named(L"readline", 0);
    Array PArray16701 = new_Array_with(1, (Optr)VAR_readline_0_0);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend16705 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16706 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    // from:to:for:. 
    Send PSend16704 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)PSend16705, (Optr)PSend16706, (Optr)self);
    Assign PAssign16703 = new_Assign((Optr)VAR_readline_0_0, (Optr)PSend16704);
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend16707 = new_Send((Optr)VAR_readline_0_0, SMB_readLine, 0);
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    // interpretLine:. 
    Send PSend16708 = new_Send((Optr)self, SMB_interpretLine_, 1, (Optr)PSend16707);
    Array PThreadedCode16702 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16703, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16705, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16706, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend16704, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_0, (Optr)&t_send0, (Optr)PSend16707, (Optr)&t_send1, (Optr)PSend16708, (Optr)&t_method_return);
    Method PMethod16700 = new_Method_with(empty_Array, PArray16701, empty_Array, PThreadedCode16702, 2, PAssign16703, PSend16708);
    
    MethodClosure MC_SMB_interpretFromStdin = new_MethodClosure((Method)PMethod16700, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretFromStdin, MC_SMB_interpretFromStdin);
}


static void init_SMB_interpretLine_() {
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16710 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16713 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_16715 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_16715_Const = new_Constant((Optr)string_16715);
    // =. 
    Send PSend16716 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16715_Const);
    String string_16719 = new_String(L"o");
    Constant string_16719_Const = new_Constant((Optr)string_16719);
    // =. 
    Send PSend16720 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16719_Const);
    String string_16723 = new_String(L"i");
    Constant string_16723_Const = new_Constant((Optr)string_16723);
    // =. 
    Send PSend16724 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16723_Const);
    String string_16727 = new_String(L"j");
    Constant string_16727_Const = new_Constant((Optr)string_16727);
    // =. 
    Send PSend16728 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16727_Const);
    Array PThreadedCode16726 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16727, (Optr)&t_send1, (Optr)PSend16728, (Optr)&t_block_return);
    Block PBlock16725 = new_Block_with(empty_Array, empty_Array, PThreadedCode16726, 1, PSend16728);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend16729 = new_Send((Optr)PSend16724, SMB_or_, 1, (Optr)PBlock16725);
    Array PThreadedCode16722 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16723, (Optr)&t_send1, (Optr)PSend16724, (Optr)&t_push_closure, (Optr)PBlock16725, (Optr)&t_send1, (Optr)PSend16729, (Optr)&t_block_return);
    Block PBlock16721 = new_Block_with(empty_Array, empty_Array, PThreadedCode16722, 1, PSend16729);
    // or:. 
    Send PSend16730 = new_Send((Optr)PSend16720, SMB_or_, 1, (Optr)PBlock16721);
    Array PThreadedCode16718 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16719, (Optr)&t_send1, (Optr)PSend16720, (Optr)&t_push_closure, (Optr)PBlock16721, (Optr)&t_send1, (Optr)PSend16730, (Optr)&t_block_return);
    Block PBlock16717 = new_Block_with(empty_Array, empty_Array, PThreadedCode16718, 1, PSend16730);
    // or:. 
    Send PSend16731 = new_Send((Optr)PSend16716, SMB_or_, 1, (Optr)PBlock16717);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16735 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16736 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16735);
    Array PThreadedCode16734 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16735, (Optr)&t_send1, (Optr)PSend16736, (Optr)&t_block_return);
    Block PBlock16733 = new_Block_with(empty_Array, empty_Array, PThreadedCode16734, 1, PSend16736);
    // ifTrue:. 
    Send PSend16732 = new_Send((Optr)PSend16731, SMB_ifTrue_, 1, (Optr)PBlock16733);
    String string_16737 = new_String(L"");
    Constant string_16737_Const = new_Constant((Optr)string_16737);
    // =. 
    Send PSend16738 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_16737_Const);
    String string_16742 = new_String(L"s");
    Constant string_16742_Const = new_Constant((Optr)string_16742);
    // value:. 
    Send PSend16743 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)string_16742_Const);
    // escape:. 
    Send PSend16744 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16743);
    Array PThreadedCode16741 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push1, (Optr)string_16742, (Optr)&t_send1, (Optr)PSend16743, (Optr)&t_send1, (Optr)PSend16744, (Optr)&t_block_return);
    Block PBlock16740 = new_Block_with(empty_Array, empty_Array, PThreadedCode16741, 1, PSend16744);
    // ifTrue:. 
    Send PSend16739 = new_Send((Optr)PSend16738, SMB_ifTrue_, 1, (Optr)PBlock16740);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16745 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16746 = new_Send((Optr)PSend16745, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16747 = new_Send((Optr)nil_Const, SMB_perform_, 1, (Optr)PSend16746);
    Array PThreadedCode16714 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16715, (Optr)&t_send1, (Optr)PSend16716, (Optr)&t_push_closure, (Optr)PBlock16717, (Optr)&t_send1, (Optr)PSend16731, (Optr)&t_send_ifTrue_, (Optr)PSend16732, (Optr)PBlock16733, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_16737, (Optr)&t_send1, (Optr)PSend16738, (Optr)&t_send_ifTrue_, (Optr)PSend16739, (Optr)PBlock16740, (Optr)&t_zap, (Optr)&t_push_nil, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16745, (Optr)&t_send0, (Optr)PSend16746, (Optr)&t_send1, (Optr)PSend16747, (Optr)&t_method_return);
    Block PBlock16712 = new_Block_with(PArray16713, empty_Array, PThreadedCode16714, 3, PSend16732, PSend16739, PSend16747);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16748 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16712);
    Array PThreadedCode16711 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16712, (Optr)&t_send1, (Optr)PSend16748, (Optr)&t_method_return);
    Method PMethod16709 = new_Method_with(PArray16710, empty_Array, empty_Array, PThreadedCode16711, 1, PSend16748);
    
    MethodClosure MC_SMB_interpretLine_ = new_MethodClosure((Method)PMethod16709, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretLine_, MC_SMB_interpretLine_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16750 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray16751 = new_Array_with(1, (Optr)VAR_method_0_1);
    String string_16756 = new_String(L"method");
    Constant string_16756_Const = new_Constant((Optr)string_16756);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16757 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend16755 = new_Send((Optr)string_16756_Const, SMB__append_, 1, (Optr)PSend16757);
    // ,. 
    Send PSend16754 = new_Send((Optr)PSend16755, SMB__append_, 1, (Optr)VAR_code_0_0);
    Assign PAssign16753 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend16754);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16758 = new_Send((Optr)nil_Const, SMB_class, 0);
    // compile:. 
    Send PSend16759 = new_Send((Optr)PSend16758, SMB_compile_, 1, (Optr)VAR_method_0_1);
    Array PThreadedCode16752 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign16753, (Optr)&t_push1, (Optr)string_16756, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend16757, (Optr)&t_send1, (Optr)PSend16755, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16754, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_nil, (Optr)&t_send0, (Optr)PSend16758, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send1, (Optr)PSend16759, (Optr)&t_method_return);
    Method PMethod16749 = new_Method_with(PArray16750, PArray16751, empty_Array, PThreadedCode16752, 2, PAssign16753, PSend16759);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16749, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_printStacktrace() {
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16762 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_printStacktrace, 0);
    Array PThreadedCode16761 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16762, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16761, 2, PSend16762, self);
    
    MethodClosure MC_SMB_printStacktrace = new_MethodClosure((Method)PMethod16760, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_printStacktrace, MC_SMB_printStacktrace);
}


static void init_SMB_skipBlock_() {
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    Variable VAR_count_0_0 = new_Variable_named(L"count", 0);
    Array PArray16764 = new_Array_with(1, (Optr)VAR_count_0_0);
    Variable VAR_skips_0_1 = new_Variable_named(L"skips", 0);
    Variable VAR_previousBlock_0_2 = new_Variable_named(L"previousBlock", 0);
    Array PArray16765 = new_Array_with(2, (Optr)VAR_skips_0_1, (Optr)VAR_previousBlock_0_2);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16767 = new_Assign((Optr)VAR_skips_0_1, (Optr)int_0_Const);
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    // stepBlock. 
    Send PSend16769 = new_Send((Optr)self, SMB_stepBlock, 0);
    Assign PAssign16768 = new_Assign((Optr)VAR_previousBlock_0_2, (Optr)PSend16769);
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16771 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16774 = new_Send((Optr)VAR_skips_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16773 = new_Assign((Optr)VAR_skips_0_1, (Optr)PSend16774);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend16775 = new_Send((Optr)VAR_skips_0_1, SMB__gt__equals_, 1, (Optr)VAR_count_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    // stepBlock:. 
    Send PSend16779 = new_Send((Optr)self, SMB_stepBlock_, 1, (Optr)VAR_previousBlock_0_2);
    Array PThreadedCode16778 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_previousBlock_0_2, (Optr)&t_send1, (Optr)PSend16779, (Optr)&t_block_return);
    Block PBlock16777 = new_Block_with(empty_Array, empty_Array, PThreadedCode16778, 1, PSend16779);
    // ifTrue:. 
    Send PSend16776 = new_Send((Optr)PSend16775, SMB_ifTrue_, 1, (Optr)PBlock16777);
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    // executeAction:. 
    Send PSend16780 = new_Send((Optr)self, SMB_executeAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode16772 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16773, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16774, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_variable, (Optr)VAR_count_0_0, (Optr)&t_send1, (Optr)PSend16775, (Optr)&t_send_ifTrue_, (Optr)PSend16776, (Optr)PBlock16777, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend16780, (Optr)&t_method_return);
    Block PBlock16770 = new_Block_with(PArray16771, empty_Array, PThreadedCode16772, 3, PAssign16773, PSend16776, PSend16780);
    Array PThreadedCode16766 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16767, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16768, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16769, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16770, (Optr)&t_method_return);
    Method PMethod16763 = new_Method_with(PArray16764, PArray16765, empty_Array, PThreadedCode16766, 3, PAssign16767, PAssign16768, PBlock16770);
    
    MethodClosure MC_SMB_skipBlock_ = new_MethodClosure((Method)PMethod16763, Interpretation_Debugger_Class);
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