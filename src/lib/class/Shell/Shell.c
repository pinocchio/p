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
    Array PArray18418 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray18419 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18422 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_18424 = new_String(L"");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_18424_Const = new_Constant((Optr)string_18424);
    // =. 
    Send PSend18425 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_18424_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18429 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode18428 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18429, (Optr)&t_block_return);
    Block PBlock18427 = new_Block_with(empty_Array, empty_Array, PThreadedCode18428, 1, PSend18429);
    // ifTrue:. 
    Send PSend18426 = new_Send((Optr)PSend18425, SMB_ifTrue_, 1, (Optr)PBlock18427);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend18435 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18434 = new_Send((Optr)PSend18435, SMB_selector, 0);
    // perform:. 
    Send PSend18433 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend18434);
    Assign PAssign18432 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend18433);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18436 = new_Send((Optr)slot_Shell_Shell_history, SMB_add_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18431 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18432, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18435, (Optr)&t_send0, (Optr)PSend18434, (Optr)&t_send1, (Optr)PSend18433, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18436, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_block_return);
    Block PBlock18430 = new_Block_with(empty_Array, empty_Array, PThreadedCode18431, 3, PAssign18432, PSend18436, VAR_value_0_1);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18438 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    // exceptions. 
    Send PSend18440 = new_Send((Optr)self, SMB_exceptions, 0);
    // add:. 
    Send PSend18441 = new_Send((Optr)PSend18440, SMB_add_, 1, (Optr)VAR_ex_2_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend18442 = new_Send((Optr)slot_Shell_Shell_error, SMB_yellow, 0);
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    // printStacktraceOn:. 
    Send PSend18443 = new_Send((Optr)VAR_ex_2_0, SMB_printStacktraceOn_, 1, (Optr)slot_Shell_Shell_error);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray18445 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18447 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend18448 = new_Send((Optr)VAR__receiver__3_0, SMB_red, 0);
    Array PThreadedCode18446 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18447, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18448, (Optr)&t_method_return);
    Block PBlock18444 = new_Block_with(PArray18445, empty_Array, PThreadedCode18446, 2, PSend18447, PSend18448);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18449 = new_Send((Optr)PBlock18444, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend18450 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)slot_Shell_Shell_error);
    Array PArray18452 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18454 = new_Send((Optr)VAR__receiver__3_0, SMB_clear, 0);
    // lf. 
    Send PSend18455 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Array PThreadedCode18453 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18454, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18455, (Optr)&t_method_return);
    Block PBlock18451 = new_Block_with(PArray18452, empty_Array, PThreadedCode18453, 2, PSend18454, PSend18455);
    // value:. 
    Send PSend18456 = new_Send((Optr)PBlock18451, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Array PThreadedCode18439 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18440, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend18441, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send0, (Optr)PSend18442, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18443, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18444, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18449, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18450, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18451, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18456, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock18437 = new_Block_with(PArray18438, empty_Array, PThreadedCode18439, 7, PSend18441, PSend18442, PSend18443, PSend18449, PSend18450, PSend18456, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18457 = new_Send((Optr)PBlock18430, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock18437);
    Array PThreadedCode18423 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_18424, (Optr)&t_send1, (Optr)PSend18425, (Optr)&t_send_ifTrue_, (Optr)PSend18426, (Optr)PBlock18427, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18430, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock18437, (Optr)&t_send2, (Optr)PSend18457, (Optr)&t_method_return);
    Block PBlock18421 = new_Block_with(PArray18422, empty_Array, PThreadedCode18423, 2, PSend18426, PSend18457);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18458 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18421);
    Array PThreadedCode18420 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18421, (Optr)&t_send1, (Optr)PSend18458, (Optr)&t_method_return);
    Method PMethod18417 = new_Method_with(PArray18418, PArray18419, empty_Array, PThreadedCode18420, 1, PSend18458);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod18417, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Variable VAR_readline_0_1 = new_Variable_named(L"readline", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray18460 = new_Array_with(3, (Optr)VAR_inspector_0_0, (Optr)VAR_readline_0_1, (Optr)VAR_result_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18463 = new_Send((Optr)PStreamInspector_classReference, SMB_on_, 1, (Optr)slot_Shell_Shell_output);
    Assign PAssign18462 = new_Assign((Optr)VAR_inspector_0_0, (Optr)PSend18463);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    // from:to:for:. 
    Send PSend18465 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)slot_Shell_Shell_input, (Optr)slot_Shell_Shell_output, (Optr)self);
    Assign PAssign18464 = new_Assign((Optr)VAR_readline_0_1, (Optr)PSend18465);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend18468 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend18471 = new_Send((Optr)VAR_readline_0_1, SMB_readLine, 0);
    // interpret:. 
    Send PSend18470 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend18471);
    Assign PAssign18469 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18470);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18472 = new_Send((Optr)VAR_result_0_2, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend18476 = new_Send((Optr)VAR_inspector_0_0, SMB_inspect_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18477 = new_Send((Optr)slot_Shell_Shell_output, SMB_lf, 0);
    Array PThreadedCode18475 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18476, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send0, (Optr)PSend18477, (Optr)&t_block_return);
    Block PBlock18474 = new_Block_with(empty_Array, empty_Array, PThreadedCode18475, 2, PSend18476, PSend18477);
    // ifFalse:. 
    Send PSend18473 = new_Send((Optr)PSend18472, SMB_ifFalse_, 1, (Optr)PBlock18474);
    Array PThreadedCode18467 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18468, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18469, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_1, (Optr)&t_send0, (Optr)PSend18471, (Optr)&t_send1, (Optr)PSend18470, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18472, (Optr)&t_send_ifFalse_, (Optr)PSend18473, (Optr)PBlock18474, (Optr)&t_block_return);
    Block PBlock18466 = new_Block_with(empty_Array, empty_Array, PThreadedCode18467, 3, PSend18468, PAssign18469, PSend18473);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend18478 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock18466);
    Array PThreadedCode18461 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign18462, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send1, (Optr)PSend18463, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18464, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_input, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend18465, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock18466, (Optr)&t_send1, (Optr)PSend18478, (Optr)&t_method_return);
    Method PMethod18459 = new_Method_with(empty_Array, PArray18460, empty_Array, PThreadedCode18461, 3, PAssign18462, PAssign18464, PSend18478);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod18459, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
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
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend18494 = new_Send((Optr)PSend18493, SMB_not, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18495 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18494);
    Array PThreadedCode18491 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18492, (Optr)&t_send0, (Optr)PSend18493, (Optr)&t_send0, (Optr)PSend18494, (Optr)&t_send1, (Optr)PSend18495, (Optr)&t_method_return);
    Block PBlock18489 = new_Block_with(PArray18490, empty_Array, PThreadedCode18491, 1, PSend18495);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18496 = new_Send((Optr)PBlock18485, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18489);
    Array PThreadedCode18484 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18485, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18489, (Optr)&t_send2, (Optr)PSend18496, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18482 = new_Block_with(PArray18483, empty_Array, PThreadedCode18484, 2, PSend18496, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18497 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18482);
    Array PThreadedCode18481 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18482, (Optr)&t_send1, (Optr)PSend18497, (Optr)&t_method_return);
    Method PMethod18479 = new_Method_with(PArray18480, empty_Array, empty_Array, PThreadedCode18481, 1, PSend18497);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod18479, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    String string_18500 = new_String(L"> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18500_Const = new_Constant((Optr)string_18500);
    // <<. 
    Send PSend18501 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18500_Const);
    Array PThreadedCode18499 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18500, (Optr)&t_send1, (Optr)PSend18501, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18499, 2, PSend18501, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod18498, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_exceptions() {
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    Array PThreadedCode18503 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_exceptions, (Optr)&t_method_return);
    Method PMethod18502 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18503, 1, slot_Shell_Shell_exceptions);
    
    MethodClosure MC_SMB_exceptions = new_MethodClosure((Method)PMethod18502, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_exceptions, MC_SMB_exceptions);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18505 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18508 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18512 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18513 = new_Send((Optr)PSend18512, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18511 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18512, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18513, (Optr)&t_block_return);
    Block PBlock18510 = new_Block_with(empty_Array, empty_Array, PThreadedCode18511, 1, PSend18513);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18515 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18517 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18518 = new_Send((Optr)PSend18517, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend18522 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18523 = new_Send((Optr)PSend18522, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18524 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18523);
    Array PThreadedCode18521 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18522, (Optr)&t_send0, (Optr)PSend18523, (Optr)&t_send1, (Optr)PSend18524, (Optr)&t_block_return);
    Block PBlock18520 = new_Block_with(empty_Array, empty_Array, PThreadedCode18521, 1, PSend18524);
    // ifFalse:. 
    Send PSend18519 = new_Send((Optr)PSend18518, SMB_ifFalse_, 1, (Optr)PBlock18520);
    Array PThreadedCode18516 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18517, (Optr)&t_send0, (Optr)PSend18518, (Optr)&t_send_ifFalse_, (Optr)PSend18519, (Optr)PBlock18520, (Optr)&t_method_return);
    Block PBlock18514 = new_Block_with(PArray18515, empty_Array, PThreadedCode18516, 1, PSend18519);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18525 = new_Send((Optr)PBlock18510, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18514);
    Array PThreadedCode18509 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18510, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18514, (Optr)&t_send2, (Optr)PSend18525, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock18507 = new_Block_with(PArray18508, empty_Array, PThreadedCode18509, 2, PSend18525, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18526 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18507);
    Array PThreadedCode18506 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18507, (Optr)&t_send1, (Optr)PSend18526, (Optr)&t_method_return);
    Method PMethod18504 = new_Method_with(PArray18505, empty_Array, empty_Array, PThreadedCode18506, 1, PSend18526);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod18504, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode18528 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18527 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18528, 1, self);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod18527, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_layout, MC_SMB_layout);
}


static void init_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Array PThreadedCode18530 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_method_return);
    Method PMethod18529 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18530, 1, slot_Shell_Shell_history);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod18529, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_history, MC_SMB_history);
}


static void init_SMB_runWith_() {
    /*
    runWith: anInterpreter
// 	^ super basicNew runWith: anInterpreter
    */
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18532 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18535 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign18534 = new_Assign((Optr)slot_Shell_Shell_scope, (Optr)PSend18535);
    // new. 
    Send PSend18537 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18536 = new_Assign((Optr)slot_Shell_Shell_exceptions, (Optr)PSend18537);
    // new. 
    Send PSend18539 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18538 = new_Assign((Optr)slot_Shell_Shell_history, (Optr)PSend18539);
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend18541 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Assign PAssign18540 = new_Assign((Optr)slot_Shell_Shell_input, (Optr)PSend18541);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend18543 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Assign PAssign18542 = new_Assign((Optr)slot_Shell_Shell_output, (Optr)PSend18543);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend18545 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Assign PAssign18544 = new_Assign((Optr)slot_Shell_Shell_error, (Optr)PSend18545);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18546 = new_Send((Optr)self, SMB_class, 0);
    String string_18547 = new_String(L"demoImport self package import: Interpretation. self package import: Demo");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Constant string_18547_Const = new_Constant((Optr)string_18547);
    // compile:. 
    Send PSend18548 = new_Send((Optr)PSend18546, SMB_compile_, 1, (Optr)string_18547_Const);
    Symbol SMB_demoImport = new_Symbol(L"demoImport");
    // demoImport. 
    Send PSend18549 = new_Send((Optr)self, SMB_demoImport, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend18550 = new_Send((Optr)self, SMB_shell, 0);
    Array PThreadedCode18533 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign18534, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend18535, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18536, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18537, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18538, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18539, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18540, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend18541, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18542, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18543, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18544, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18545, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18546, (Optr)&t_push1, (Optr)string_18547, (Optr)&t_send1, (Optr)PSend18548, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18549, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18550, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18531 = new_Method_with(PArray18532, empty_Array, empty_Array, PThreadedCode18533, 10, PAssign18534, PAssign18536, PAssign18538, PAssign18540, PAssign18542, PAssign18544, PSend18548, PSend18549, PSend18550, self);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18531, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_runWith_, MC_SMB_runWith_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray18552 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18555 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend18557 = new_Send((Optr)VAR_name_0_0, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend18558 = new_Send((Optr)PSend18557, SMB_isUppercase, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18562 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18563 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18562);
    Array PThreadedCode18561 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend18562, (Optr)&t_send1, (Optr)PSend18563, (Optr)&t_block_return);
    Block PBlock18560 = new_Block_with(empty_Array, empty_Array, PThreadedCode18561, 1, PSend18563);
    // ifTrue:. 
    Send PSend18559 = new_Send((Optr)PSend18558, SMB_ifTrue_, 1, (Optr)PBlock18560);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18568 = new_Send((Optr)PDirectVariable_classReference, SMB_named_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18569 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)PSend18568);
    Array PThreadedCode18567 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_class_reference, (Optr)PDirectVariable_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend18568, (Optr)&t_send2, (Optr)PSend18569, (Optr)&t_block_return);
    Block PBlock18566 = new_Block_with(empty_Array, empty_Array, PThreadedCode18567, 1, PSend18569);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend18570 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18566);
    Array PThreadedCode18565 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18566, (Optr)&t_send2, (Optr)PSend18570, (Optr)&t_block_return);
    Block PBlock18564 = new_Block_with(empty_Array, empty_Array, PThreadedCode18565, 1, PSend18570);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend18571 = new_Send((Optr)PRootScope_classReference, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18564);
    Array PThreadedCode18556 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send0, (Optr)PSend18557, (Optr)&t_send0, (Optr)PSend18558, (Optr)&t_send_ifTrue_, (Optr)PSend18559, (Optr)PBlock18560, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18564, (Optr)&t_send2, (Optr)PSend18571, (Optr)&t_method_return);
    Block PBlock18554 = new_Block_with(PArray18555, empty_Array, PThreadedCode18556, 2, PSend18559, PSend18571);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18572 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18554);
    Array PThreadedCode18553 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18554, (Optr)&t_send1, (Optr)PSend18572, (Optr)&t_method_return);
    Method PMethod18551 = new_Method_with(PArray18552, empty_Array, empty_Array, PThreadedCode18553, 1, PSend18572);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod18551, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18574 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray18575 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_18581 = new_String(L"DoIt ^[");
    Constant string_18581_Const = new_Constant((Optr)string_18581);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18582 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend18580 = new_Send((Optr)string_18581_Const, SMB__append_, 1, (Optr)PSend18582);
    // ,. 
    Send PSend18579 = new_Send((Optr)PSend18580, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_18583 = new_String(L"] value");
    Constant string_18583_Const = new_Constant((Optr)string_18583);
    // ,. 
    Send PSend18578 = new_Send((Optr)PSend18579, SMB__append_, 1, (Optr)string_18583_Const);
    Assign PAssign18577 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend18578);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend18585 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)self);
    Assign PAssign18584 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend18585);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18586 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend18587 = new_Send((Optr)PSend18586, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18588 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18589 = new_Send((Optr)PSend18587, SMB_at_put_, 2, (Optr)PSend18588, (Optr)VAR_method_0_2);
    Array PThreadedCode18576 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign18577, (Optr)&t_push1, (Optr)string_18581, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend18582, (Optr)&t_send1, (Optr)PSend18580, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18579, (Optr)&t_push1, (Optr)string_18583, (Optr)&t_send1, (Optr)PSend18578, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18584, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend18585, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18586, (Optr)&t_send0, (Optr)PSend18587, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend18588, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend18589, (Optr)&t_method_return);
    Method PMethod18573 = new_Method_with(PArray18574, PArray18575, empty_Array, PThreadedCode18576, 3, PAssign18577, PAssign18584, PSend18589);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod18573, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18592 = new_Send((Optr)self, SMB_class, 0);
    // package. 
    Send PSend18593 = new_Send((Optr)PSend18592, SMB_package, 0);
    Array PThreadedCode18591 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18592, (Optr)&t_send0, (Optr)PSend18593, (Optr)&t_method_return);
    Method PMethod18590 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18591, 1, PSend18593);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod18590, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_continueLine() {
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    String string_18596 = new_String(L"| ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18596_Const = new_Constant((Optr)string_18596);
    // <<. 
    Send PSend18597 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18596_Const);
    Array PThreadedCode18595 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18596, (Optr)&t_send1, (Optr)PSend18597, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18594 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18595, 2, PSend18597, self);
    
    MethodClosure MC_SMB_continueLine = new_MethodClosure((Method)PMethod18594, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_continueLine, MC_SMB_continueLine);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_18600 = new_String(L"Shell");
    Array PThreadedCode18599 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_18600, (Optr)&t_method_return);
    Constant string_18600_Const = new_Constant((Optr)string_18600);
    Method PMethod18598 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18599, 1, string_18600_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod18598, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_runWith_() {
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18602 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18604 = new_Super(SMB_basicNew, 0);
    // runWith:. 
    Send PSend18605 = new_Send((Optr)PSuper18604, SMB_runWith_, 1, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode18603 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18604, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send1, (Optr)PSend18605, (Optr)&t_method_return);
    Method PMethod18601 = new_Method_with(PArray18602, empty_Array, empty_Array, PThreadedCode18603, 1, PSend18605);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18601, HEADER(Shell_Shell_Class));
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