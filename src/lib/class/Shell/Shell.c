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
    Array PArray18309 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray18310 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18313 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_18315 = new_String(L"");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_18315_Const = new_Constant((Optr)string_18315);
    // =. 
    Send PSend18316 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_18315_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18320 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode18319 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18320, (Optr)&t_block_return);
    Block PBlock18318 = new_Block_with(empty_Array, empty_Array, PThreadedCode18319, 1, PSend18320);
    // ifTrue:. 
    Send PSend18317 = new_Send((Optr)PSend18316, SMB_ifTrue_, 1, (Optr)PBlock18318);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend18326 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18325 = new_Send((Optr)PSend18326, SMB_selector, 0);
    // perform:. 
    Send PSend18324 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend18325);
    Assign PAssign18323 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend18324);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18327 = new_Send((Optr)slot_Shell_Shell_history, SMB_add_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18322 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18323, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18326, (Optr)&t_send0, (Optr)PSend18325, (Optr)&t_send1, (Optr)PSend18324, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18327, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_block_return);
    Block PBlock18321 = new_Block_with(empty_Array, empty_Array, PThreadedCode18322, 3, PAssign18323, PSend18327, VAR_value_0_1);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18329 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    // exceptions. 
    Send PSend18331 = new_Send((Optr)self, SMB_exceptions, 0);
    // add:. 
    Send PSend18332 = new_Send((Optr)PSend18331, SMB_add_, 1, (Optr)VAR_ex_2_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend18333 = new_Send((Optr)slot_Shell_Shell_error, SMB_yellow, 0);
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    // printStacktraceOn:. 
    Send PSend18334 = new_Send((Optr)VAR_ex_2_0, SMB_printStacktraceOn_, 1, (Optr)slot_Shell_Shell_error);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray18336 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18338 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend18339 = new_Send((Optr)VAR__receiver__3_0, SMB_red, 0);
    Array PThreadedCode18337 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18338, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18339, (Optr)&t_method_return);
    Block PBlock18335 = new_Block_with(PArray18336, empty_Array, PThreadedCode18337, 2, PSend18338, PSend18339);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18340 = new_Send((Optr)PBlock18335, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend18341 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)slot_Shell_Shell_error);
    Array PArray18343 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18345 = new_Send((Optr)VAR__receiver__3_0, SMB_clear, 0);
    // lf. 
    Send PSend18346 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Array PThreadedCode18344 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18345, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18346, (Optr)&t_method_return);
    Block PBlock18342 = new_Block_with(PArray18343, empty_Array, PThreadedCode18344, 2, PSend18345, PSend18346);
    // value:. 
    Send PSend18347 = new_Send((Optr)PBlock18342, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Array PThreadedCode18330 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18331, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend18332, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send0, (Optr)PSend18333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18334, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18335, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18340, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18341, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18342, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18347, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock18328 = new_Block_with(PArray18329, empty_Array, PThreadedCode18330, 7, PSend18332, PSend18333, PSend18334, PSend18340, PSend18341, PSend18347, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18348 = new_Send((Optr)PBlock18321, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock18328);
    Array PThreadedCode18314 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_18315, (Optr)&t_send1, (Optr)PSend18316, (Optr)&t_send_ifTrue_, (Optr)PSend18317, (Optr)PBlock18318, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18321, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock18328, (Optr)&t_send2, (Optr)PSend18348, (Optr)&t_method_return);
    Block PBlock18312 = new_Block_with(PArray18313, empty_Array, PThreadedCode18314, 2, PSend18317, PSend18348);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18349 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18312);
    Array PThreadedCode18311 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18312, (Optr)&t_send1, (Optr)PSend18349, (Optr)&t_method_return);
    Method PMethod18308 = new_Method_with(PArray18309, PArray18310, empty_Array, PThreadedCode18311, 1, PSend18349);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod18308, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Variable VAR_readline_0_1 = new_Variable_named(L"readline", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray18351 = new_Array_with(3, (Optr)VAR_inspector_0_0, (Optr)VAR_readline_0_1, (Optr)VAR_result_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18354 = new_Send((Optr)PStreamInspector_classReference, SMB_on_, 1, (Optr)slot_Shell_Shell_output);
    Assign PAssign18353 = new_Assign((Optr)VAR_inspector_0_0, (Optr)PSend18354);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    // from:to:for:. 
    Send PSend18356 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)slot_Shell_Shell_input, (Optr)slot_Shell_Shell_output, (Optr)self);
    Assign PAssign18355 = new_Assign((Optr)VAR_readline_0_1, (Optr)PSend18356);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend18359 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend18362 = new_Send((Optr)VAR_readline_0_1, SMB_readLine, 0);
    // interpret:. 
    Send PSend18361 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend18362);
    Assign PAssign18360 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18361);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18363 = new_Send((Optr)VAR_result_0_2, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend18367 = new_Send((Optr)VAR_inspector_0_0, SMB_inspect_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18368 = new_Send((Optr)slot_Shell_Shell_output, SMB_lf, 0);
    Array PThreadedCode18366 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18367, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send0, (Optr)PSend18368, (Optr)&t_block_return);
    Block PBlock18365 = new_Block_with(empty_Array, empty_Array, PThreadedCode18366, 2, PSend18367, PSend18368);
    // ifFalse:. 
    Send PSend18364 = new_Send((Optr)PSend18363, SMB_ifFalse_, 1, (Optr)PBlock18365);
    Array PThreadedCode18358 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18359, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18360, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_1, (Optr)&t_send0, (Optr)PSend18362, (Optr)&t_send1, (Optr)PSend18361, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18363, (Optr)&t_send_ifFalse_, (Optr)PSend18364, (Optr)PBlock18365, (Optr)&t_block_return);
    Block PBlock18357 = new_Block_with(empty_Array, empty_Array, PThreadedCode18358, 3, PSend18359, PAssign18360, PSend18364);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend18369 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock18357);
    Array PThreadedCode18352 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign18353, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send1, (Optr)PSend18354, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18355, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_input, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend18356, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock18357, (Optr)&t_send1, (Optr)PSend18369, (Optr)&t_method_return);
    Method PMethod18350 = new_Method_with(empty_Array, PArray18351, empty_Array, PThreadedCode18352, 3, PAssign18353, PAssign18355, PSend18369);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod18350, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18371 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18374 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18378 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18379 = new_Send((Optr)PSend18378, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18377 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18378, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18379, (Optr)&t_block_return);
    Block PBlock18376 = new_Block_with(empty_Array, empty_Array, PThreadedCode18377, 1, PSend18379);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18381 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18383 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18384 = new_Send((Optr)PSend18383, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend18385 = new_Send((Optr)PSend18384, SMB_not, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18386 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18385);
    Array PThreadedCode18382 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18383, (Optr)&t_send0, (Optr)PSend18384, (Optr)&t_send0, (Optr)PSend18385, (Optr)&t_send1, (Optr)PSend18386, (Optr)&t_method_return);
    Block PBlock18380 = new_Block_with(PArray18381, empty_Array, PThreadedCode18382, 1, PSend18386);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18387 = new_Send((Optr)PBlock18376, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18380);
    Array PThreadedCode18375 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18376, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18380, (Optr)&t_send2, (Optr)PSend18387, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18373 = new_Block_with(PArray18374, empty_Array, PThreadedCode18375, 2, PSend18387, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18388 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18373);
    Array PThreadedCode18372 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18373, (Optr)&t_send1, (Optr)PSend18388, (Optr)&t_method_return);
    Method PMethod18370 = new_Method_with(PArray18371, empty_Array, empty_Array, PThreadedCode18372, 1, PSend18388);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod18370, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    String string_18391 = new_String(L"> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18391_Const = new_Constant((Optr)string_18391);
    // <<. 
    Send PSend18392 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18391_Const);
    Array PThreadedCode18390 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18391, (Optr)&t_send1, (Optr)PSend18392, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18389 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18390, 2, PSend18392, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod18389, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_exceptions() {
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    Array PThreadedCode18394 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_exceptions, (Optr)&t_method_return);
    Method PMethod18393 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18394, 1, slot_Shell_Shell_exceptions);
    
    MethodClosure MC_SMB_exceptions = new_MethodClosure((Method)PMethod18393, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_exceptions, MC_SMB_exceptions);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18396 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18399 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18403 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18404 = new_Send((Optr)PSend18403, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18402 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18403, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18404, (Optr)&t_block_return);
    Block PBlock18401 = new_Block_with(empty_Array, empty_Array, PThreadedCode18402, 1, PSend18404);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18406 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18408 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18409 = new_Send((Optr)PSend18408, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend18413 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18414 = new_Send((Optr)PSend18413, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18415 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18414);
    Array PThreadedCode18412 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18413, (Optr)&t_send0, (Optr)PSend18414, (Optr)&t_send1, (Optr)PSend18415, (Optr)&t_block_return);
    Block PBlock18411 = new_Block_with(empty_Array, empty_Array, PThreadedCode18412, 1, PSend18415);
    // ifFalse:. 
    Send PSend18410 = new_Send((Optr)PSend18409, SMB_ifFalse_, 1, (Optr)PBlock18411);
    Array PThreadedCode18407 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18408, (Optr)&t_send0, (Optr)PSend18409, (Optr)&t_send_ifFalse_, (Optr)PSend18410, (Optr)PBlock18411, (Optr)&t_method_return);
    Block PBlock18405 = new_Block_with(PArray18406, empty_Array, PThreadedCode18407, 1, PSend18410);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18416 = new_Send((Optr)PBlock18401, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18405);
    Array PThreadedCode18400 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18401, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18405, (Optr)&t_send2, (Optr)PSend18416, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock18398 = new_Block_with(PArray18399, empty_Array, PThreadedCode18400, 2, PSend18416, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18417 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18398);
    Array PThreadedCode18397 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18398, (Optr)&t_send1, (Optr)PSend18417, (Optr)&t_method_return);
    Method PMethod18395 = new_Method_with(PArray18396, empty_Array, empty_Array, PThreadedCode18397, 1, PSend18417);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod18395, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode18419 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18418 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18419, 1, self);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod18418, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_layout, MC_SMB_layout);
}


static void init_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Array PThreadedCode18421 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_method_return);
    Method PMethod18420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18421, 1, slot_Shell_Shell_history);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod18420, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_history, MC_SMB_history);
}


static void init_SMB_runWith_() {
    /*
    runWith: anInterpreter
// 	^ super basicNew runWith: anInterpreter
    */
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18423 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18426 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign18425 = new_Assign((Optr)slot_Shell_Shell_scope, (Optr)PSend18426);
    // new. 
    Send PSend18428 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18427 = new_Assign((Optr)slot_Shell_Shell_exceptions, (Optr)PSend18428);
    // new. 
    Send PSend18430 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18429 = new_Assign((Optr)slot_Shell_Shell_history, (Optr)PSend18430);
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend18432 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Assign PAssign18431 = new_Assign((Optr)slot_Shell_Shell_input, (Optr)PSend18432);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend18434 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Assign PAssign18433 = new_Assign((Optr)slot_Shell_Shell_output, (Optr)PSend18434);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend18436 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Assign PAssign18435 = new_Assign((Optr)slot_Shell_Shell_error, (Optr)PSend18436);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18437 = new_Send((Optr)self, SMB_class, 0);
    String string_18438 = new_String(L"demoImport self package import: Interpretation. self package import: Demo");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Constant string_18438_Const = new_Constant((Optr)string_18438);
    // compile:. 
    Send PSend18439 = new_Send((Optr)PSend18437, SMB_compile_, 1, (Optr)string_18438_Const);
    Symbol SMB_demoImport = new_Symbol(L"demoImport");
    // demoImport. 
    Send PSend18440 = new_Send((Optr)self, SMB_demoImport, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend18441 = new_Send((Optr)self, SMB_shell, 0);
    Array PThreadedCode18424 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign18425, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend18426, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18427, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18428, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18429, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18430, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18431, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend18432, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18433, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18434, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18435, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18436, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18437, (Optr)&t_push1, (Optr)string_18438, (Optr)&t_send1, (Optr)PSend18439, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18440, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18441, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18422 = new_Method_with(PArray18423, empty_Array, empty_Array, PThreadedCode18424, 10, PAssign18425, PAssign18427, PAssign18429, PAssign18431, PAssign18433, PAssign18435, PSend18439, PSend18440, PSend18441, self);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18422, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_runWith_, MC_SMB_runWith_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray18443 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18446 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend18448 = new_Send((Optr)VAR_name_0_0, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend18449 = new_Send((Optr)PSend18448, SMB_isUppercase, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18453 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18454 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18453);
    Array PThreadedCode18452 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend18453, (Optr)&t_send1, (Optr)PSend18454, (Optr)&t_block_return);
    Block PBlock18451 = new_Block_with(empty_Array, empty_Array, PThreadedCode18452, 1, PSend18454);
    // ifTrue:. 
    Send PSend18450 = new_Send((Optr)PSend18449, SMB_ifTrue_, 1, (Optr)PBlock18451);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18459 = new_Send((Optr)PDirectVariable_classReference, SMB_named_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18460 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)PSend18459);
    Array PThreadedCode18458 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_class_reference, (Optr)PDirectVariable_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend18459, (Optr)&t_send2, (Optr)PSend18460, (Optr)&t_block_return);
    Block PBlock18457 = new_Block_with(empty_Array, empty_Array, PThreadedCode18458, 1, PSend18460);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend18461 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18457);
    Array PThreadedCode18456 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18457, (Optr)&t_send2, (Optr)PSend18461, (Optr)&t_block_return);
    Block PBlock18455 = new_Block_with(empty_Array, empty_Array, PThreadedCode18456, 1, PSend18461);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend18462 = new_Send((Optr)PRootScope_classReference, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18455);
    Array PThreadedCode18447 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send0, (Optr)PSend18448, (Optr)&t_send0, (Optr)PSend18449, (Optr)&t_send_ifTrue_, (Optr)PSend18450, (Optr)PBlock18451, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18455, (Optr)&t_send2, (Optr)PSend18462, (Optr)&t_method_return);
    Block PBlock18445 = new_Block_with(PArray18446, empty_Array, PThreadedCode18447, 2, PSend18450, PSend18462);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18463 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18445);
    Array PThreadedCode18444 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18445, (Optr)&t_send1, (Optr)PSend18463, (Optr)&t_method_return);
    Method PMethod18442 = new_Method_with(PArray18443, empty_Array, empty_Array, PThreadedCode18444, 1, PSend18463);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod18442, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18465 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray18466 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_18472 = new_String(L"DoIt ^[");
    Constant string_18472_Const = new_Constant((Optr)string_18472);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18473 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend18471 = new_Send((Optr)string_18472_Const, SMB__append_, 1, (Optr)PSend18473);
    // ,. 
    Send PSend18470 = new_Send((Optr)PSend18471, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_18474 = new_String(L"] value");
    Constant string_18474_Const = new_Constant((Optr)string_18474);
    // ,. 
    Send PSend18469 = new_Send((Optr)PSend18470, SMB__append_, 1, (Optr)string_18474_Const);
    Assign PAssign18468 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend18469);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend18476 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)self);
    Assign PAssign18475 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend18476);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18477 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend18478 = new_Send((Optr)PSend18477, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18479 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18480 = new_Send((Optr)PSend18478, SMB_at_put_, 2, (Optr)PSend18479, (Optr)VAR_method_0_2);
    Array PThreadedCode18467 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign18468, (Optr)&t_push1, (Optr)string_18472, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend18473, (Optr)&t_send1, (Optr)PSend18471, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18470, (Optr)&t_push1, (Optr)string_18474, (Optr)&t_send1, (Optr)PSend18469, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18475, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend18476, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18477, (Optr)&t_send0, (Optr)PSend18478, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend18479, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend18480, (Optr)&t_method_return);
    Method PMethod18464 = new_Method_with(PArray18465, PArray18466, empty_Array, PThreadedCode18467, 3, PAssign18468, PAssign18475, PSend18480);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod18464, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18483 = new_Send((Optr)self, SMB_class, 0);
    // package. 
    Send PSend18484 = new_Send((Optr)PSend18483, SMB_package, 0);
    Array PThreadedCode18482 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18483, (Optr)&t_send0, (Optr)PSend18484, (Optr)&t_method_return);
    Method PMethod18481 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18482, 1, PSend18484);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod18481, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_continueLine() {
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    String string_18487 = new_String(L"| ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18487_Const = new_Constant((Optr)string_18487);
    // <<. 
    Send PSend18488 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18487_Const);
    Array PThreadedCode18486 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18487, (Optr)&t_send1, (Optr)PSend18488, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18485 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18486, 2, PSend18488, self);
    
    MethodClosure MC_SMB_continueLine = new_MethodClosure((Method)PMethod18485, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_continueLine, MC_SMB_continueLine);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_18491 = new_String(L"Shell");
    Array PThreadedCode18490 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_18491, (Optr)&t_method_return);
    Constant string_18491_Const = new_Constant((Optr)string_18491);
    Method PMethod18489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18490, 1, string_18491_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod18489, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_runWith_() {
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18493 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18495 = new_Super(SMB_basicNew, 0);
    // runWith:. 
    Send PSend18496 = new_Send((Optr)PSuper18495, SMB_runWith_, 1, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode18494 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18495, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send1, (Optr)PSend18496, (Optr)&t_method_return);
    Method PMethod18492 = new_Method_with(PArray18493, empty_Array, empty_Array, PThreadedCode18494, 1, PSend18496);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18492, HEADER(Shell_Shell_Class));
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