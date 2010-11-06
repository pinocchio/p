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
    Array PArray18393 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray18394 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18397 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_18399 = new_String(L"");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_18399_Const = new_Constant((Optr)string_18399);
    // =. 
    Send PSend18400 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_18399_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18404 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode18403 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18404, (Optr)&t_block_return);
    Block PBlock18402 = new_Block_with(empty_Array, empty_Array, PThreadedCode18403, 1, PSend18404);
    // ifTrue:. 
    Send PSend18401 = new_Send((Optr)PSend18400, SMB_ifTrue_, 1, (Optr)PBlock18402);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend18410 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18409 = new_Send((Optr)PSend18410, SMB_selector, 0);
    // perform:. 
    Send PSend18408 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend18409);
    Assign PAssign18407 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend18408);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18411 = new_Send((Optr)slot_Shell_Shell_history, SMB_add_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18406 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18407, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18410, (Optr)&t_send0, (Optr)PSend18409, (Optr)&t_send1, (Optr)PSend18408, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18411, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_block_return);
    Block PBlock18405 = new_Block_with(empty_Array, empty_Array, PThreadedCode18406, 3, PAssign18407, PSend18411, VAR_value_0_1);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18413 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    // exceptions. 
    Send PSend18415 = new_Send((Optr)self, SMB_exceptions, 0);
    // add:. 
    Send PSend18416 = new_Send((Optr)PSend18415, SMB_add_, 1, (Optr)VAR_ex_2_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend18417 = new_Send((Optr)slot_Shell_Shell_error, SMB_yellow, 0);
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    // printStacktraceOn:. 
    Send PSend18418 = new_Send((Optr)VAR_ex_2_0, SMB_printStacktraceOn_, 1, (Optr)slot_Shell_Shell_error);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray18420 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18422 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend18423 = new_Send((Optr)VAR__receiver__3_0, SMB_red, 0);
    Array PThreadedCode18421 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18422, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18423, (Optr)&t_method_return);
    Block PBlock18419 = new_Block_with(PArray18420, empty_Array, PThreadedCode18421, 2, PSend18422, PSend18423);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18424 = new_Send((Optr)PBlock18419, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend18425 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)slot_Shell_Shell_error);
    Array PArray18427 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18429 = new_Send((Optr)VAR__receiver__3_0, SMB_clear, 0);
    // lf. 
    Send PSend18430 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Array PThreadedCode18428 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18430, (Optr)&t_method_return);
    Block PBlock18426 = new_Block_with(PArray18427, empty_Array, PThreadedCode18428, 2, PSend18429, PSend18430);
    // value:. 
    Send PSend18431 = new_Send((Optr)PBlock18426, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Array PThreadedCode18414 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18415, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend18416, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send0, (Optr)PSend18417, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18418, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18419, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18424, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18425, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18426, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18431, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock18412 = new_Block_with(PArray18413, empty_Array, PThreadedCode18414, 7, PSend18416, PSend18417, PSend18418, PSend18424, PSend18425, PSend18431, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18432 = new_Send((Optr)PBlock18405, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock18412);
    Array PThreadedCode18398 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_18399, (Optr)&t_send1, (Optr)PSend18400, (Optr)&t_send_ifTrue_, (Optr)PSend18401, (Optr)PBlock18402, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18405, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock18412, (Optr)&t_send2, (Optr)PSend18432, (Optr)&t_method_return);
    Block PBlock18396 = new_Block_with(PArray18397, empty_Array, PThreadedCode18398, 2, PSend18401, PSend18432);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18433 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18396);
    Array PThreadedCode18395 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18396, (Optr)&t_send1, (Optr)PSend18433, (Optr)&t_method_return);
    Method PMethod18392 = new_Method_with(PArray18393, PArray18394, empty_Array, PThreadedCode18395, 1, PSend18433);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod18392, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Variable VAR_readline_0_1 = new_Variable_named(L"readline", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray18435 = new_Array_with(3, (Optr)VAR_inspector_0_0, (Optr)VAR_readline_0_1, (Optr)VAR_result_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18438 = new_Send((Optr)PStreamInspector_classReference, SMB_on_, 1, (Optr)slot_Shell_Shell_output);
    Assign PAssign18437 = new_Assign((Optr)VAR_inspector_0_0, (Optr)PSend18438);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    // from:to:for:. 
    Send PSend18440 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)slot_Shell_Shell_input, (Optr)slot_Shell_Shell_output, (Optr)self);
    Assign PAssign18439 = new_Assign((Optr)VAR_readline_0_1, (Optr)PSend18440);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend18443 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend18446 = new_Send((Optr)VAR_readline_0_1, SMB_readLine, 0);
    // interpret:. 
    Send PSend18445 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend18446);
    Assign PAssign18444 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18445);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18447 = new_Send((Optr)VAR_result_0_2, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend18451 = new_Send((Optr)VAR_inspector_0_0, SMB_inspect_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18452 = new_Send((Optr)slot_Shell_Shell_output, SMB_lf, 0);
    Array PThreadedCode18450 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18451, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send0, (Optr)PSend18452, (Optr)&t_block_return);
    Block PBlock18449 = new_Block_with(empty_Array, empty_Array, PThreadedCode18450, 2, PSend18451, PSend18452);
    // ifFalse:. 
    Send PSend18448 = new_Send((Optr)PSend18447, SMB_ifFalse_, 1, (Optr)PBlock18449);
    Array PThreadedCode18442 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18443, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18444, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_1, (Optr)&t_send0, (Optr)PSend18446, (Optr)&t_send1, (Optr)PSend18445, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18447, (Optr)&t_send_ifFalse_, (Optr)PSend18448, (Optr)PBlock18449, (Optr)&t_block_return);
    Block PBlock18441 = new_Block_with(empty_Array, empty_Array, PThreadedCode18442, 3, PSend18443, PAssign18444, PSend18448);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend18453 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock18441);
    Array PThreadedCode18436 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign18437, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send1, (Optr)PSend18438, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18439, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_input, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend18440, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock18441, (Optr)&t_send1, (Optr)PSend18453, (Optr)&t_method_return);
    Method PMethod18434 = new_Method_with(empty_Array, PArray18435, empty_Array, PThreadedCode18436, 3, PAssign18437, PAssign18439, PSend18453);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod18434, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18455 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18458 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18462 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18463 = new_Send((Optr)PSend18462, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18461 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18462, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18463, (Optr)&t_block_return);
    Block PBlock18460 = new_Block_with(empty_Array, empty_Array, PThreadedCode18461, 1, PSend18463);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18465 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18467 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18468 = new_Send((Optr)PSend18467, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend18469 = new_Send((Optr)PSend18468, SMB_not, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18470 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18469);
    Array PThreadedCode18466 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18467, (Optr)&t_send0, (Optr)PSend18468, (Optr)&t_send0, (Optr)PSend18469, (Optr)&t_send1, (Optr)PSend18470, (Optr)&t_method_return);
    Block PBlock18464 = new_Block_with(PArray18465, empty_Array, PThreadedCode18466, 1, PSend18470);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18471 = new_Send((Optr)PBlock18460, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18464);
    Array PThreadedCode18459 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18460, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18464, (Optr)&t_send2, (Optr)PSend18471, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18457 = new_Block_with(PArray18458, empty_Array, PThreadedCode18459, 2, PSend18471, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18472 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18457);
    Array PThreadedCode18456 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18457, (Optr)&t_send1, (Optr)PSend18472, (Optr)&t_method_return);
    Method PMethod18454 = new_Method_with(PArray18455, empty_Array, empty_Array, PThreadedCode18456, 1, PSend18472);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod18454, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    String string_18475 = new_String(L"> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18475_Const = new_Constant((Optr)string_18475);
    // <<. 
    Send PSend18476 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18475_Const);
    Array PThreadedCode18474 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18475, (Optr)&t_send1, (Optr)PSend18476, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18473 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18474, 2, PSend18476, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod18473, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_exceptions() {
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    Array PThreadedCode18478 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_exceptions, (Optr)&t_method_return);
    Method PMethod18477 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18478, 1, slot_Shell_Shell_exceptions);
    
    MethodClosure MC_SMB_exceptions = new_MethodClosure((Method)PMethod18477, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_exceptions, MC_SMB_exceptions);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18480 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18483 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18487 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18488 = new_Send((Optr)PSend18487, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18486 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18487, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18488, (Optr)&t_block_return);
    Block PBlock18485 = new_Block_with(empty_Array, empty_Array, PThreadedCode18486, 1, PSend18488);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18490 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18492 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18493 = new_Send((Optr)PSend18492, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend18497 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18498 = new_Send((Optr)PSend18497, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18499 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18498);
    Array PThreadedCode18496 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18497, (Optr)&t_send0, (Optr)PSend18498, (Optr)&t_send1, (Optr)PSend18499, (Optr)&t_block_return);
    Block PBlock18495 = new_Block_with(empty_Array, empty_Array, PThreadedCode18496, 1, PSend18499);
    // ifFalse:. 
    Send PSend18494 = new_Send((Optr)PSend18493, SMB_ifFalse_, 1, (Optr)PBlock18495);
    Array PThreadedCode18491 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18492, (Optr)&t_send0, (Optr)PSend18493, (Optr)&t_send_ifFalse_, (Optr)PSend18494, (Optr)PBlock18495, (Optr)&t_method_return);
    Block PBlock18489 = new_Block_with(PArray18490, empty_Array, PThreadedCode18491, 1, PSend18494);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18500 = new_Send((Optr)PBlock18485, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18489);
    Array PThreadedCode18484 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18485, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18489, (Optr)&t_send2, (Optr)PSend18500, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock18482 = new_Block_with(PArray18483, empty_Array, PThreadedCode18484, 2, PSend18500, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18501 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18482);
    Array PThreadedCode18481 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18482, (Optr)&t_send1, (Optr)PSend18501, (Optr)&t_method_return);
    Method PMethod18479 = new_Method_with(PArray18480, empty_Array, empty_Array, PThreadedCode18481, 1, PSend18501);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod18479, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode18503 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18502 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18503, 1, self);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod18502, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_layout, MC_SMB_layout);
}


static void init_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Array PThreadedCode18505 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_method_return);
    Method PMethod18504 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18505, 1, slot_Shell_Shell_history);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod18504, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_history, MC_SMB_history);
}


static void init_SMB_runWith_() {
    /*
    runWith: anInterpreter
// 	^ super basicNew runWith: anInterpreter
    */
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18507 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18510 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign18509 = new_Assign((Optr)slot_Shell_Shell_scope, (Optr)PSend18510);
    // new. 
    Send PSend18512 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18511 = new_Assign((Optr)slot_Shell_Shell_exceptions, (Optr)PSend18512);
    // new. 
    Send PSend18514 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18513 = new_Assign((Optr)slot_Shell_Shell_history, (Optr)PSend18514);
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend18516 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Assign PAssign18515 = new_Assign((Optr)slot_Shell_Shell_input, (Optr)PSend18516);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend18518 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Assign PAssign18517 = new_Assign((Optr)slot_Shell_Shell_output, (Optr)PSend18518);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend18520 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Assign PAssign18519 = new_Assign((Optr)slot_Shell_Shell_error, (Optr)PSend18520);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18521 = new_Send((Optr)self, SMB_class, 0);
    String string_18522 = new_String(L"demoImport self package import: Interpretation. self package import: Demo");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Constant string_18522_Const = new_Constant((Optr)string_18522);
    // compile:. 
    Send PSend18523 = new_Send((Optr)PSend18521, SMB_compile_, 1, (Optr)string_18522_Const);
    Symbol SMB_demoImport = new_Symbol(L"demoImport");
    // demoImport. 
    Send PSend18524 = new_Send((Optr)self, SMB_demoImport, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend18525 = new_Send((Optr)self, SMB_shell, 0);
    Array PThreadedCode18508 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign18509, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend18510, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18511, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18512, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18513, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18514, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18515, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend18516, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18517, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18518, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18519, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18520, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18521, (Optr)&t_push1, (Optr)string_18522, (Optr)&t_send1, (Optr)PSend18523, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18524, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18525, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18506 = new_Method_with(PArray18507, empty_Array, empty_Array, PThreadedCode18508, 10, PAssign18509, PAssign18511, PAssign18513, PAssign18515, PAssign18517, PAssign18519, PSend18523, PSend18524, PSend18525, self);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18506, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_runWith_, MC_SMB_runWith_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray18527 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18530 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend18532 = new_Send((Optr)VAR_name_0_0, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend18533 = new_Send((Optr)PSend18532, SMB_isUppercase, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18537 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18538 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18537);
    Array PThreadedCode18536 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend18537, (Optr)&t_send1, (Optr)PSend18538, (Optr)&t_block_return);
    Block PBlock18535 = new_Block_with(empty_Array, empty_Array, PThreadedCode18536, 1, PSend18538);
    // ifTrue:. 
    Send PSend18534 = new_Send((Optr)PSend18533, SMB_ifTrue_, 1, (Optr)PBlock18535);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18543 = new_Send((Optr)PDirectVariable_classReference, SMB_named_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18544 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)PSend18543);
    Array PThreadedCode18542 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_class_reference, (Optr)PDirectVariable_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend18543, (Optr)&t_send2, (Optr)PSend18544, (Optr)&t_block_return);
    Block PBlock18541 = new_Block_with(empty_Array, empty_Array, PThreadedCode18542, 1, PSend18544);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend18545 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18541);
    Array PThreadedCode18540 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18541, (Optr)&t_send2, (Optr)PSend18545, (Optr)&t_block_return);
    Block PBlock18539 = new_Block_with(empty_Array, empty_Array, PThreadedCode18540, 1, PSend18545);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend18546 = new_Send((Optr)PRootScope_classReference, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18539);
    Array PThreadedCode18531 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send0, (Optr)PSend18532, (Optr)&t_send0, (Optr)PSend18533, (Optr)&t_send_ifTrue_, (Optr)PSend18534, (Optr)PBlock18535, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18539, (Optr)&t_send2, (Optr)PSend18546, (Optr)&t_method_return);
    Block PBlock18529 = new_Block_with(PArray18530, empty_Array, PThreadedCode18531, 2, PSend18534, PSend18546);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18547 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18529);
    Array PThreadedCode18528 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18529, (Optr)&t_send1, (Optr)PSend18547, (Optr)&t_method_return);
    Method PMethod18526 = new_Method_with(PArray18527, empty_Array, empty_Array, PThreadedCode18528, 1, PSend18547);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod18526, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18549 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray18550 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_18556 = new_String(L"DoIt ^[");
    Constant string_18556_Const = new_Constant((Optr)string_18556);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18557 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend18555 = new_Send((Optr)string_18556_Const, SMB__append_, 1, (Optr)PSend18557);
    // ,. 
    Send PSend18554 = new_Send((Optr)PSend18555, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_18558 = new_String(L"] value");
    Constant string_18558_Const = new_Constant((Optr)string_18558);
    // ,. 
    Send PSend18553 = new_Send((Optr)PSend18554, SMB__append_, 1, (Optr)string_18558_Const);
    Assign PAssign18552 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend18553);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend18560 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)self);
    Assign PAssign18559 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend18560);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18561 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend18562 = new_Send((Optr)PSend18561, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18563 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18564 = new_Send((Optr)PSend18562, SMB_at_put_, 2, (Optr)PSend18563, (Optr)VAR_method_0_2);
    Array PThreadedCode18551 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign18552, (Optr)&t_push1, (Optr)string_18556, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend18557, (Optr)&t_send1, (Optr)PSend18555, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18554, (Optr)&t_push1, (Optr)string_18558, (Optr)&t_send1, (Optr)PSend18553, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18559, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend18560, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18561, (Optr)&t_send0, (Optr)PSend18562, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend18563, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend18564, (Optr)&t_method_return);
    Method PMethod18548 = new_Method_with(PArray18549, PArray18550, empty_Array, PThreadedCode18551, 3, PAssign18552, PAssign18559, PSend18564);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod18548, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18567 = new_Send((Optr)self, SMB_class, 0);
    // package. 
    Send PSend18568 = new_Send((Optr)PSend18567, SMB_package, 0);
    Array PThreadedCode18566 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18567, (Optr)&t_send0, (Optr)PSend18568, (Optr)&t_method_return);
    Method PMethod18565 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18566, 1, PSend18568);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod18565, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_continueLine() {
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    String string_18571 = new_String(L"| ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18571_Const = new_Constant((Optr)string_18571);
    // <<. 
    Send PSend18572 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18571_Const);
    Array PThreadedCode18570 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18571, (Optr)&t_send1, (Optr)PSend18572, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18569 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18570, 2, PSend18572, self);
    
    MethodClosure MC_SMB_continueLine = new_MethodClosure((Method)PMethod18569, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_continueLine, MC_SMB_continueLine);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_18575 = new_String(L"Shell");
    Array PThreadedCode18574 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_18575, (Optr)&t_method_return);
    Constant string_18575_Const = new_Constant((Optr)string_18575);
    Method PMethod18573 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18574, 1, string_18575_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod18573, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_runWith_() {
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18577 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18579 = new_Super(SMB_basicNew, 0);
    // runWith:. 
    Send PSend18580 = new_Send((Optr)PSuper18579, SMB_runWith_, 1, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode18578 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18579, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send1, (Optr)PSend18580, (Optr)&t_method_return);
    Method PMethod18576 = new_Method_with(PArray18577, empty_Array, empty_Array, PThreadedCode18578, 1, PSend18580);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18576, HEADER(Shell_Shell_Class));
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