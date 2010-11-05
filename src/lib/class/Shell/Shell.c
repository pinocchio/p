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
    Array PArray18382 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray18383 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18386 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_18388 = new_String(L"");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_18388_Const = new_Constant((Optr)string_18388);
    // =. 
    Send PSend18389 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_18388_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18393 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode18392 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18393, (Optr)&t_block_return);
    Block PBlock18391 = new_Block_with(empty_Array, empty_Array, PThreadedCode18392, 1, PSend18393);
    // ifTrue:. 
    Send PSend18390 = new_Send((Optr)PSend18389, SMB_ifTrue_, 1, (Optr)PBlock18391);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend18399 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18398 = new_Send((Optr)PSend18399, SMB_selector, 0);
    // perform:. 
    Send PSend18397 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend18398);
    Assign PAssign18396 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend18397);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18400 = new_Send((Optr)slot_Shell_Shell_history, SMB_add_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18395 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18396, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18399, (Optr)&t_send0, (Optr)PSend18398, (Optr)&t_send1, (Optr)PSend18397, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18400, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_block_return);
    Block PBlock18394 = new_Block_with(empty_Array, empty_Array, PThreadedCode18395, 3, PAssign18396, PSend18400, VAR_value_0_1);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18402 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    // exceptions. 
    Send PSend18404 = new_Send((Optr)self, SMB_exceptions, 0);
    // add:. 
    Send PSend18405 = new_Send((Optr)PSend18404, SMB_add_, 1, (Optr)VAR_ex_2_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend18406 = new_Send((Optr)slot_Shell_Shell_error, SMB_yellow, 0);
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    // printStacktraceOn:. 
    Send PSend18407 = new_Send((Optr)VAR_ex_2_0, SMB_printStacktraceOn_, 1, (Optr)slot_Shell_Shell_error);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray18409 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18411 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend18412 = new_Send((Optr)VAR__receiver__3_0, SMB_red, 0);
    Array PThreadedCode18410 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18411, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18412, (Optr)&t_method_return);
    Block PBlock18408 = new_Block_with(PArray18409, empty_Array, PThreadedCode18410, 2, PSend18411, PSend18412);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18413 = new_Send((Optr)PBlock18408, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend18414 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)slot_Shell_Shell_error);
    Array PArray18416 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18418 = new_Send((Optr)VAR__receiver__3_0, SMB_clear, 0);
    // lf. 
    Send PSend18419 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Array PThreadedCode18417 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18418, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18419, (Optr)&t_method_return);
    Block PBlock18415 = new_Block_with(PArray18416, empty_Array, PThreadedCode18417, 2, PSend18418, PSend18419);
    // value:. 
    Send PSend18420 = new_Send((Optr)PBlock18415, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Array PThreadedCode18403 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18404, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend18405, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send0, (Optr)PSend18406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18407, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18408, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18413, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18414, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18415, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18420, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock18401 = new_Block_with(PArray18402, empty_Array, PThreadedCode18403, 7, PSend18405, PSend18406, PSend18407, PSend18413, PSend18414, PSend18420, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18421 = new_Send((Optr)PBlock18394, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock18401);
    Array PThreadedCode18387 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_18388, (Optr)&t_send1, (Optr)PSend18389, (Optr)&t_send_ifTrue_, (Optr)PSend18390, (Optr)PBlock18391, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18394, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock18401, (Optr)&t_send2, (Optr)PSend18421, (Optr)&t_method_return);
    Block PBlock18385 = new_Block_with(PArray18386, empty_Array, PThreadedCode18387, 2, PSend18390, PSend18421);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18422 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18385);
    Array PThreadedCode18384 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18385, (Optr)&t_send1, (Optr)PSend18422, (Optr)&t_method_return);
    Method PMethod18381 = new_Method_with(PArray18382, PArray18383, empty_Array, PThreadedCode18384, 1, PSend18422);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod18381, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Variable VAR_readline_0_1 = new_Variable_named(L"readline", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray18424 = new_Array_with(3, (Optr)VAR_inspector_0_0, (Optr)VAR_readline_0_1, (Optr)VAR_result_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18427 = new_Send((Optr)PStreamInspector_classReference, SMB_on_, 1, (Optr)slot_Shell_Shell_output);
    Assign PAssign18426 = new_Assign((Optr)VAR_inspector_0_0, (Optr)PSend18427);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    // from:to:for:. 
    Send PSend18429 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)slot_Shell_Shell_input, (Optr)slot_Shell_Shell_output, (Optr)self);
    Assign PAssign18428 = new_Assign((Optr)VAR_readline_0_1, (Optr)PSend18429);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend18432 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend18435 = new_Send((Optr)VAR_readline_0_1, SMB_readLine, 0);
    // interpret:. 
    Send PSend18434 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend18435);
    Assign PAssign18433 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18434);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18436 = new_Send((Optr)VAR_result_0_2, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend18440 = new_Send((Optr)VAR_inspector_0_0, SMB_inspect_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18441 = new_Send((Optr)slot_Shell_Shell_output, SMB_lf, 0);
    Array PThreadedCode18439 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18440, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send0, (Optr)PSend18441, (Optr)&t_block_return);
    Block PBlock18438 = new_Block_with(empty_Array, empty_Array, PThreadedCode18439, 2, PSend18440, PSend18441);
    // ifFalse:. 
    Send PSend18437 = new_Send((Optr)PSend18436, SMB_ifFalse_, 1, (Optr)PBlock18438);
    Array PThreadedCode18431 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18432, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18433, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_1, (Optr)&t_send0, (Optr)PSend18435, (Optr)&t_send1, (Optr)PSend18434, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18436, (Optr)&t_send_ifFalse_, (Optr)PSend18437, (Optr)PBlock18438, (Optr)&t_block_return);
    Block PBlock18430 = new_Block_with(empty_Array, empty_Array, PThreadedCode18431, 3, PSend18432, PAssign18433, PSend18437);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend18442 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock18430);
    Array PThreadedCode18425 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign18426, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send1, (Optr)PSend18427, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18428, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_input, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend18429, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock18430, (Optr)&t_send1, (Optr)PSend18442, (Optr)&t_method_return);
    Method PMethod18423 = new_Method_with(empty_Array, PArray18424, empty_Array, PThreadedCode18425, 3, PAssign18426, PAssign18428, PSend18442);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod18423, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18444 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18447 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18451 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18452 = new_Send((Optr)PSend18451, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18450 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18451, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18452, (Optr)&t_block_return);
    Block PBlock18449 = new_Block_with(empty_Array, empty_Array, PThreadedCode18450, 1, PSend18452);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18454 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18456 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18457 = new_Send((Optr)PSend18456, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend18458 = new_Send((Optr)PSend18457, SMB_not, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18459 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18458);
    Array PThreadedCode18455 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18456, (Optr)&t_send0, (Optr)PSend18457, (Optr)&t_send0, (Optr)PSend18458, (Optr)&t_send1, (Optr)PSend18459, (Optr)&t_method_return);
    Block PBlock18453 = new_Block_with(PArray18454, empty_Array, PThreadedCode18455, 1, PSend18459);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18460 = new_Send((Optr)PBlock18449, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18453);
    Array PThreadedCode18448 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18449, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18453, (Optr)&t_send2, (Optr)PSend18460, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18446 = new_Block_with(PArray18447, empty_Array, PThreadedCode18448, 2, PSend18460, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18461 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18446);
    Array PThreadedCode18445 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18446, (Optr)&t_send1, (Optr)PSend18461, (Optr)&t_method_return);
    Method PMethod18443 = new_Method_with(PArray18444, empty_Array, empty_Array, PThreadedCode18445, 1, PSend18461);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod18443, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    String string_18464 = new_String(L"> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18464_Const = new_Constant((Optr)string_18464);
    // <<. 
    Send PSend18465 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18464_Const);
    Array PThreadedCode18463 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18464, (Optr)&t_send1, (Optr)PSend18465, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18462 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18463, 2, PSend18465, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod18462, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_exceptions() {
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    Array PThreadedCode18467 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_exceptions, (Optr)&t_method_return);
    Method PMethod18466 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18467, 1, slot_Shell_Shell_exceptions);
    
    MethodClosure MC_SMB_exceptions = new_MethodClosure((Method)PMethod18466, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_exceptions, MC_SMB_exceptions);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18469 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18472 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18476 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18477 = new_Send((Optr)PSend18476, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18475 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18476, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18477, (Optr)&t_block_return);
    Block PBlock18474 = new_Block_with(empty_Array, empty_Array, PThreadedCode18475, 1, PSend18477);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18479 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18481 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18482 = new_Send((Optr)PSend18481, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend18486 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18487 = new_Send((Optr)PSend18486, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18488 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18487);
    Array PThreadedCode18485 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18486, (Optr)&t_send0, (Optr)PSend18487, (Optr)&t_send1, (Optr)PSend18488, (Optr)&t_block_return);
    Block PBlock18484 = new_Block_with(empty_Array, empty_Array, PThreadedCode18485, 1, PSend18488);
    // ifFalse:. 
    Send PSend18483 = new_Send((Optr)PSend18482, SMB_ifFalse_, 1, (Optr)PBlock18484);
    Array PThreadedCode18480 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18481, (Optr)&t_send0, (Optr)PSend18482, (Optr)&t_send_ifFalse_, (Optr)PSend18483, (Optr)PBlock18484, (Optr)&t_method_return);
    Block PBlock18478 = new_Block_with(PArray18479, empty_Array, PThreadedCode18480, 1, PSend18483);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18489 = new_Send((Optr)PBlock18474, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18478);
    Array PThreadedCode18473 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18474, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18478, (Optr)&t_send2, (Optr)PSend18489, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock18471 = new_Block_with(PArray18472, empty_Array, PThreadedCode18473, 2, PSend18489, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18490 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18471);
    Array PThreadedCode18470 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18471, (Optr)&t_send1, (Optr)PSend18490, (Optr)&t_method_return);
    Method PMethod18468 = new_Method_with(PArray18469, empty_Array, empty_Array, PThreadedCode18470, 1, PSend18490);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod18468, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode18492 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18491 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18492, 1, self);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod18491, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_layout, MC_SMB_layout);
}


static void init_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Array PThreadedCode18494 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_method_return);
    Method PMethod18493 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18494, 1, slot_Shell_Shell_history);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod18493, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_history, MC_SMB_history);
}


static void init_SMB_runWith_() {
    /*
    runWith: anInterpreter
// 	^ super basicNew runWith: anInterpreter
    */
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18496 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18499 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign18498 = new_Assign((Optr)slot_Shell_Shell_scope, (Optr)PSend18499);
    // new. 
    Send PSend18501 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18500 = new_Assign((Optr)slot_Shell_Shell_exceptions, (Optr)PSend18501);
    // new. 
    Send PSend18503 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18502 = new_Assign((Optr)slot_Shell_Shell_history, (Optr)PSend18503);
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend18505 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Assign PAssign18504 = new_Assign((Optr)slot_Shell_Shell_input, (Optr)PSend18505);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend18507 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Assign PAssign18506 = new_Assign((Optr)slot_Shell_Shell_output, (Optr)PSend18507);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend18509 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Assign PAssign18508 = new_Assign((Optr)slot_Shell_Shell_error, (Optr)PSend18509);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18510 = new_Send((Optr)self, SMB_class, 0);
    String string_18511 = new_String(L"demoImport self package import: Interpretation. self package import: Demo");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Constant string_18511_Const = new_Constant((Optr)string_18511);
    // compile:. 
    Send PSend18512 = new_Send((Optr)PSend18510, SMB_compile_, 1, (Optr)string_18511_Const);
    Symbol SMB_demoImport = new_Symbol(L"demoImport");
    // demoImport. 
    Send PSend18513 = new_Send((Optr)self, SMB_demoImport, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend18514 = new_Send((Optr)self, SMB_shell, 0);
    Array PThreadedCode18497 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign18498, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend18499, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18500, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18501, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18502, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18503, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18504, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend18505, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18506, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18507, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18508, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18509, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18510, (Optr)&t_push1, (Optr)string_18511, (Optr)&t_send1, (Optr)PSend18512, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18513, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18514, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18495 = new_Method_with(PArray18496, empty_Array, empty_Array, PThreadedCode18497, 10, PAssign18498, PAssign18500, PAssign18502, PAssign18504, PAssign18506, PAssign18508, PSend18512, PSend18513, PSend18514, self);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18495, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_runWith_, MC_SMB_runWith_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray18516 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18519 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend18521 = new_Send((Optr)VAR_name_0_0, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend18522 = new_Send((Optr)PSend18521, SMB_isUppercase, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18526 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18527 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18526);
    Array PThreadedCode18525 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend18526, (Optr)&t_send1, (Optr)PSend18527, (Optr)&t_block_return);
    Block PBlock18524 = new_Block_with(empty_Array, empty_Array, PThreadedCode18525, 1, PSend18527);
    // ifTrue:. 
    Send PSend18523 = new_Send((Optr)PSend18522, SMB_ifTrue_, 1, (Optr)PBlock18524);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18532 = new_Send((Optr)PDirectVariable_classReference, SMB_named_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18533 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)PSend18532);
    Array PThreadedCode18531 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_class_reference, (Optr)PDirectVariable_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend18532, (Optr)&t_send2, (Optr)PSend18533, (Optr)&t_block_return);
    Block PBlock18530 = new_Block_with(empty_Array, empty_Array, PThreadedCode18531, 1, PSend18533);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend18534 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18530);
    Array PThreadedCode18529 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18530, (Optr)&t_send2, (Optr)PSend18534, (Optr)&t_block_return);
    Block PBlock18528 = new_Block_with(empty_Array, empty_Array, PThreadedCode18529, 1, PSend18534);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend18535 = new_Send((Optr)PRootScope_classReference, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18528);
    Array PThreadedCode18520 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send0, (Optr)PSend18521, (Optr)&t_send0, (Optr)PSend18522, (Optr)&t_send_ifTrue_, (Optr)PSend18523, (Optr)PBlock18524, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18528, (Optr)&t_send2, (Optr)PSend18535, (Optr)&t_method_return);
    Block PBlock18518 = new_Block_with(PArray18519, empty_Array, PThreadedCode18520, 2, PSend18523, PSend18535);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18536 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18518);
    Array PThreadedCode18517 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18518, (Optr)&t_send1, (Optr)PSend18536, (Optr)&t_method_return);
    Method PMethod18515 = new_Method_with(PArray18516, empty_Array, empty_Array, PThreadedCode18517, 1, PSend18536);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod18515, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18538 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray18539 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_18545 = new_String(L"DoIt ^[");
    Constant string_18545_Const = new_Constant((Optr)string_18545);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18546 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend18544 = new_Send((Optr)string_18545_Const, SMB__append_, 1, (Optr)PSend18546);
    // ,. 
    Send PSend18543 = new_Send((Optr)PSend18544, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_18547 = new_String(L"] value");
    Constant string_18547_Const = new_Constant((Optr)string_18547);
    // ,. 
    Send PSend18542 = new_Send((Optr)PSend18543, SMB__append_, 1, (Optr)string_18547_Const);
    Assign PAssign18541 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend18542);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend18549 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)self);
    Assign PAssign18548 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend18549);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18550 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend18551 = new_Send((Optr)PSend18550, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18552 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18553 = new_Send((Optr)PSend18551, SMB_at_put_, 2, (Optr)PSend18552, (Optr)VAR_method_0_2);
    Array PThreadedCode18540 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign18541, (Optr)&t_push1, (Optr)string_18545, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend18546, (Optr)&t_send1, (Optr)PSend18544, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18543, (Optr)&t_push1, (Optr)string_18547, (Optr)&t_send1, (Optr)PSend18542, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18548, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend18549, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18550, (Optr)&t_send0, (Optr)PSend18551, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend18552, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend18553, (Optr)&t_method_return);
    Method PMethod18537 = new_Method_with(PArray18538, PArray18539, empty_Array, PThreadedCode18540, 3, PAssign18541, PAssign18548, PSend18553);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod18537, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18556 = new_Send((Optr)self, SMB_class, 0);
    // package. 
    Send PSend18557 = new_Send((Optr)PSend18556, SMB_package, 0);
    Array PThreadedCode18555 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18556, (Optr)&t_send0, (Optr)PSend18557, (Optr)&t_method_return);
    Method PMethod18554 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18555, 1, PSend18557);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod18554, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_continueLine() {
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    String string_18560 = new_String(L"| ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18560_Const = new_Constant((Optr)string_18560);
    // <<. 
    Send PSend18561 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18560_Const);
    Array PThreadedCode18559 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18560, (Optr)&t_send1, (Optr)PSend18561, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18559, 2, PSend18561, self);
    
    MethodClosure MC_SMB_continueLine = new_MethodClosure((Method)PMethod18558, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_continueLine, MC_SMB_continueLine);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_18564 = new_String(L"Shell");
    Array PThreadedCode18563 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_18564, (Optr)&t_method_return);
    Constant string_18564_Const = new_Constant((Optr)string_18564);
    Method PMethod18562 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18563, 1, string_18564_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod18562, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_runWith_() {
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18566 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18568 = new_Super(SMB_basicNew, 0);
    // runWith:. 
    Send PSend18569 = new_Send((Optr)PSuper18568, SMB_runWith_, 1, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode18567 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18568, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send1, (Optr)PSend18569, (Optr)&t_method_return);
    Method PMethod18565 = new_Method_with(PArray18566, empty_Array, empty_Array, PThreadedCode18567, 1, PSend18569);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18565, HEADER(Shell_Shell_Class));
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