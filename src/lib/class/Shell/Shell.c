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
    Array PArray18252 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray18253 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18256 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_18258 = new_String(L"");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_18258_Const = new_Constant((Optr)string_18258);
    // =. 
    Send PSend18259 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_18258_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18263 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode18262 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18263, (Optr)&t_block_return);
    Block PBlock18261 = new_Block_with(empty_Array, empty_Array, PThreadedCode18262, 1, PSend18263);
    // ifTrue:. 
    Send PSend18260 = new_Send((Optr)PSend18259, SMB_ifTrue_, 1, (Optr)PBlock18261);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend18269 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18268 = new_Send((Optr)PSend18269, SMB_selector, 0);
    // perform:. 
    Send PSend18267 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend18268);
    Assign PAssign18266 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend18267);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18270 = new_Send((Optr)slot_Shell_Shell_history, SMB_add_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18265 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18266, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18269, (Optr)&t_send0, (Optr)PSend18268, (Optr)&t_send1, (Optr)PSend18267, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18270, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_block_return);
    Block PBlock18264 = new_Block_with(empty_Array, empty_Array, PThreadedCode18265, 3, PAssign18266, PSend18270, VAR_value_0_1);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18272 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    // exceptions. 
    Send PSend18274 = new_Send((Optr)self, SMB_exceptions, 0);
    // add:. 
    Send PSend18275 = new_Send((Optr)PSend18274, SMB_add_, 1, (Optr)VAR_ex_2_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend18276 = new_Send((Optr)slot_Shell_Shell_error, SMB_yellow, 0);
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    // printStacktraceOn:. 
    Send PSend18277 = new_Send((Optr)VAR_ex_2_0, SMB_printStacktraceOn_, 1, (Optr)slot_Shell_Shell_error);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray18279 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18281 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend18282 = new_Send((Optr)VAR__receiver__3_0, SMB_red, 0);
    Array PThreadedCode18280 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18281, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18282, (Optr)&t_method_return);
    Block PBlock18278 = new_Block_with(PArray18279, empty_Array, PThreadedCode18280, 2, PSend18281, PSend18282);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18283 = new_Send((Optr)PBlock18278, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend18284 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)slot_Shell_Shell_error);
    Array PArray18286 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18288 = new_Send((Optr)VAR__receiver__3_0, SMB_clear, 0);
    // lf. 
    Send PSend18289 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Array PThreadedCode18287 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18288, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18289, (Optr)&t_method_return);
    Block PBlock18285 = new_Block_with(PArray18286, empty_Array, PThreadedCode18287, 2, PSend18288, PSend18289);
    // value:. 
    Send PSend18290 = new_Send((Optr)PBlock18285, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Array PThreadedCode18273 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18274, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend18275, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send0, (Optr)PSend18276, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18277, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18278, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18283, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18284, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18285, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18290, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock18271 = new_Block_with(PArray18272, empty_Array, PThreadedCode18273, 7, PSend18275, PSend18276, PSend18277, PSend18283, PSend18284, PSend18290, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18291 = new_Send((Optr)PBlock18264, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock18271);
    Array PThreadedCode18257 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_18258, (Optr)&t_send1, (Optr)PSend18259, (Optr)&t_send_ifTrue_, (Optr)PSend18260, (Optr)PBlock18261, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18264, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock18271, (Optr)&t_send2, (Optr)PSend18291, (Optr)&t_method_return);
    Block PBlock18255 = new_Block_with(PArray18256, empty_Array, PThreadedCode18257, 2, PSend18260, PSend18291);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18292 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18255);
    Array PThreadedCode18254 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18255, (Optr)&t_send1, (Optr)PSend18292, (Optr)&t_method_return);
    Method PMethod18251 = new_Method_with(PArray18252, PArray18253, empty_Array, PThreadedCode18254, 1, PSend18292);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod18251, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Variable VAR_readline_0_1 = new_Variable_named(L"readline", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray18294 = new_Array_with(3, (Optr)VAR_inspector_0_0, (Optr)VAR_readline_0_1, (Optr)VAR_result_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18297 = new_Send((Optr)PStreamInspector_classReference, SMB_on_, 1, (Optr)slot_Shell_Shell_output);
    Assign PAssign18296 = new_Assign((Optr)VAR_inspector_0_0, (Optr)PSend18297);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    // from:to:for:. 
    Send PSend18299 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)slot_Shell_Shell_input, (Optr)slot_Shell_Shell_output, (Optr)self);
    Assign PAssign18298 = new_Assign((Optr)VAR_readline_0_1, (Optr)PSend18299);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend18302 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend18305 = new_Send((Optr)VAR_readline_0_1, SMB_readLine, 0);
    // interpret:. 
    Send PSend18304 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend18305);
    Assign PAssign18303 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18304);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18306 = new_Send((Optr)VAR_result_0_2, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend18310 = new_Send((Optr)VAR_inspector_0_0, SMB_inspect_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18311 = new_Send((Optr)slot_Shell_Shell_output, SMB_lf, 0);
    Array PThreadedCode18309 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18310, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send0, (Optr)PSend18311, (Optr)&t_block_return);
    Block PBlock18308 = new_Block_with(empty_Array, empty_Array, PThreadedCode18309, 2, PSend18310, PSend18311);
    // ifFalse:. 
    Send PSend18307 = new_Send((Optr)PSend18306, SMB_ifFalse_, 1, (Optr)PBlock18308);
    Array PThreadedCode18301 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18302, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18303, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_1, (Optr)&t_send0, (Optr)PSend18305, (Optr)&t_send1, (Optr)PSend18304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18306, (Optr)&t_send_ifFalse_, (Optr)PSend18307, (Optr)PBlock18308, (Optr)&t_block_return);
    Block PBlock18300 = new_Block_with(empty_Array, empty_Array, PThreadedCode18301, 3, PSend18302, PAssign18303, PSend18307);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend18312 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock18300);
    Array PThreadedCode18295 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign18296, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send1, (Optr)PSend18297, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18298, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_input, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend18299, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock18300, (Optr)&t_send1, (Optr)PSend18312, (Optr)&t_method_return);
    Method PMethod18293 = new_Method_with(empty_Array, PArray18294, empty_Array, PThreadedCode18295, 3, PAssign18296, PAssign18298, PSend18312);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod18293, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18314 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18317 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18321 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18322 = new_Send((Optr)PSend18321, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18320 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18321, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18322, (Optr)&t_block_return);
    Block PBlock18319 = new_Block_with(empty_Array, empty_Array, PThreadedCode18320, 1, PSend18322);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18324 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18326 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18327 = new_Send((Optr)PSend18326, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend18328 = new_Send((Optr)PSend18327, SMB_not, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18329 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18328);
    Array PThreadedCode18325 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18326, (Optr)&t_send0, (Optr)PSend18327, (Optr)&t_send0, (Optr)PSend18328, (Optr)&t_send1, (Optr)PSend18329, (Optr)&t_method_return);
    Block PBlock18323 = new_Block_with(PArray18324, empty_Array, PThreadedCode18325, 1, PSend18329);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18330 = new_Send((Optr)PBlock18319, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18323);
    Array PThreadedCode18318 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18319, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18323, (Optr)&t_send2, (Optr)PSend18330, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18316 = new_Block_with(PArray18317, empty_Array, PThreadedCode18318, 2, PSend18330, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18331 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18316);
    Array PThreadedCode18315 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18316, (Optr)&t_send1, (Optr)PSend18331, (Optr)&t_method_return);
    Method PMethod18313 = new_Method_with(PArray18314, empty_Array, empty_Array, PThreadedCode18315, 1, PSend18331);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod18313, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    String string_18334 = new_String(L"> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18334_Const = new_Constant((Optr)string_18334);
    // <<. 
    Send PSend18335 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18334_Const);
    Array PThreadedCode18333 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18334, (Optr)&t_send1, (Optr)PSend18335, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18332 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18333, 2, PSend18335, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod18332, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_exceptions() {
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    Array PThreadedCode18337 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_exceptions, (Optr)&t_method_return);
    Method PMethod18336 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18337, 1, slot_Shell_Shell_exceptions);
    
    MethodClosure MC_SMB_exceptions = new_MethodClosure((Method)PMethod18336, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_exceptions, MC_SMB_exceptions);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18339 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18342 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18346 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18347 = new_Send((Optr)PSend18346, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18345 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18346, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18347, (Optr)&t_block_return);
    Block PBlock18344 = new_Block_with(empty_Array, empty_Array, PThreadedCode18345, 1, PSend18347);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18349 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18351 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18352 = new_Send((Optr)PSend18351, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend18356 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18357 = new_Send((Optr)PSend18356, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18358 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18357);
    Array PThreadedCode18355 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18356, (Optr)&t_send0, (Optr)PSend18357, (Optr)&t_send1, (Optr)PSend18358, (Optr)&t_block_return);
    Block PBlock18354 = new_Block_with(empty_Array, empty_Array, PThreadedCode18355, 1, PSend18358);
    // ifFalse:. 
    Send PSend18353 = new_Send((Optr)PSend18352, SMB_ifFalse_, 1, (Optr)PBlock18354);
    Array PThreadedCode18350 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18351, (Optr)&t_send0, (Optr)PSend18352, (Optr)&t_send_ifFalse_, (Optr)PSend18353, (Optr)PBlock18354, (Optr)&t_method_return);
    Block PBlock18348 = new_Block_with(PArray18349, empty_Array, PThreadedCode18350, 1, PSend18353);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18359 = new_Send((Optr)PBlock18344, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18348);
    Array PThreadedCode18343 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18344, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18348, (Optr)&t_send2, (Optr)PSend18359, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock18341 = new_Block_with(PArray18342, empty_Array, PThreadedCode18343, 2, PSend18359, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18360 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18341);
    Array PThreadedCode18340 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18341, (Optr)&t_send1, (Optr)PSend18360, (Optr)&t_method_return);
    Method PMethod18338 = new_Method_with(PArray18339, empty_Array, empty_Array, PThreadedCode18340, 1, PSend18360);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod18338, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode18362 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18361 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18362, 1, self);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod18361, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_layout, MC_SMB_layout);
}


static void init_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Array PThreadedCode18364 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_method_return);
    Method PMethod18363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18364, 1, slot_Shell_Shell_history);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod18363, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_history, MC_SMB_history);
}


static void init_SMB_runWith_() {
    /*
    runWith: anInterpreter
// 	^ super basicNew runWith: anInterpreter
    */
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18366 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18369 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign18368 = new_Assign((Optr)slot_Shell_Shell_scope, (Optr)PSend18369);
    // new. 
    Send PSend18371 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18370 = new_Assign((Optr)slot_Shell_Shell_exceptions, (Optr)PSend18371);
    // new. 
    Send PSend18373 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18372 = new_Assign((Optr)slot_Shell_Shell_history, (Optr)PSend18373);
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend18375 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Assign PAssign18374 = new_Assign((Optr)slot_Shell_Shell_input, (Optr)PSend18375);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend18377 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Assign PAssign18376 = new_Assign((Optr)slot_Shell_Shell_output, (Optr)PSend18377);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend18379 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Assign PAssign18378 = new_Assign((Optr)slot_Shell_Shell_error, (Optr)PSend18379);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18380 = new_Send((Optr)self, SMB_class, 0);
    String string_18381 = new_String(L"demoImport self package import: Interpretation. self package import: Demo");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Constant string_18381_Const = new_Constant((Optr)string_18381);
    // compile:. 
    Send PSend18382 = new_Send((Optr)PSend18380, SMB_compile_, 1, (Optr)string_18381_Const);
    Symbol SMB_demoImport = new_Symbol(L"demoImport");
    // demoImport. 
    Send PSend18383 = new_Send((Optr)self, SMB_demoImport, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend18384 = new_Send((Optr)self, SMB_shell, 0);
    Array PThreadedCode18367 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign18368, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend18369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18370, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18371, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18372, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18373, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18374, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend18375, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18376, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18377, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18378, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18379, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18380, (Optr)&t_push1, (Optr)string_18381, (Optr)&t_send1, (Optr)PSend18382, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18383, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18384, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18365 = new_Method_with(PArray18366, empty_Array, empty_Array, PThreadedCode18367, 10, PAssign18368, PAssign18370, PAssign18372, PAssign18374, PAssign18376, PAssign18378, PSend18382, PSend18383, PSend18384, self);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18365, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_runWith_, MC_SMB_runWith_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray18386 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18389 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend18391 = new_Send((Optr)VAR_name_0_0, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend18392 = new_Send((Optr)PSend18391, SMB_isUppercase, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18396 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18397 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18396);
    Array PThreadedCode18395 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend18396, (Optr)&t_send1, (Optr)PSend18397, (Optr)&t_block_return);
    Block PBlock18394 = new_Block_with(empty_Array, empty_Array, PThreadedCode18395, 1, PSend18397);
    // ifTrue:. 
    Send PSend18393 = new_Send((Optr)PSend18392, SMB_ifTrue_, 1, (Optr)PBlock18394);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18402 = new_Send((Optr)PDirectVariable_classReference, SMB_named_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18403 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)PSend18402);
    Array PThreadedCode18401 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_class_reference, (Optr)PDirectVariable_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend18402, (Optr)&t_send2, (Optr)PSend18403, (Optr)&t_block_return);
    Block PBlock18400 = new_Block_with(empty_Array, empty_Array, PThreadedCode18401, 1, PSend18403);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend18404 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18400);
    Array PThreadedCode18399 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18400, (Optr)&t_send2, (Optr)PSend18404, (Optr)&t_block_return);
    Block PBlock18398 = new_Block_with(empty_Array, empty_Array, PThreadedCode18399, 1, PSend18404);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend18405 = new_Send((Optr)PRootScope_classReference, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18398);
    Array PThreadedCode18390 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send0, (Optr)PSend18391, (Optr)&t_send0, (Optr)PSend18392, (Optr)&t_send_ifTrue_, (Optr)PSend18393, (Optr)PBlock18394, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18398, (Optr)&t_send2, (Optr)PSend18405, (Optr)&t_method_return);
    Block PBlock18388 = new_Block_with(PArray18389, empty_Array, PThreadedCode18390, 2, PSend18393, PSend18405);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18406 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18388);
    Array PThreadedCode18387 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18388, (Optr)&t_send1, (Optr)PSend18406, (Optr)&t_method_return);
    Method PMethod18385 = new_Method_with(PArray18386, empty_Array, empty_Array, PThreadedCode18387, 1, PSend18406);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod18385, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18408 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray18409 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_18415 = new_String(L"DoIt ^[");
    Constant string_18415_Const = new_Constant((Optr)string_18415);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18416 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend18414 = new_Send((Optr)string_18415_Const, SMB__append_, 1, (Optr)PSend18416);
    // ,. 
    Send PSend18413 = new_Send((Optr)PSend18414, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_18417 = new_String(L"] value");
    Constant string_18417_Const = new_Constant((Optr)string_18417);
    // ,. 
    Send PSend18412 = new_Send((Optr)PSend18413, SMB__append_, 1, (Optr)string_18417_Const);
    Assign PAssign18411 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend18412);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend18419 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)self);
    Assign PAssign18418 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend18419);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18420 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend18421 = new_Send((Optr)PSend18420, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18422 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18423 = new_Send((Optr)PSend18421, SMB_at_put_, 2, (Optr)PSend18422, (Optr)VAR_method_0_2);
    Array PThreadedCode18410 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign18411, (Optr)&t_push1, (Optr)string_18415, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend18416, (Optr)&t_send1, (Optr)PSend18414, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18413, (Optr)&t_push1, (Optr)string_18417, (Optr)&t_send1, (Optr)PSend18412, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18418, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend18419, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18420, (Optr)&t_send0, (Optr)PSend18421, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend18422, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend18423, (Optr)&t_method_return);
    Method PMethod18407 = new_Method_with(PArray18408, PArray18409, empty_Array, PThreadedCode18410, 3, PAssign18411, PAssign18418, PSend18423);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod18407, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18426 = new_Send((Optr)self, SMB_class, 0);
    // package. 
    Send PSend18427 = new_Send((Optr)PSend18426, SMB_package, 0);
    Array PThreadedCode18425 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18426, (Optr)&t_send0, (Optr)PSend18427, (Optr)&t_method_return);
    Method PMethod18424 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18425, 1, PSend18427);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod18424, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_continueLine() {
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    String string_18430 = new_String(L"| ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18430_Const = new_Constant((Optr)string_18430);
    // <<. 
    Send PSend18431 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18430_Const);
    Array PThreadedCode18429 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18430, (Optr)&t_send1, (Optr)PSend18431, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18429, 2, PSend18431, self);
    
    MethodClosure MC_SMB_continueLine = new_MethodClosure((Method)PMethod18428, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_continueLine, MC_SMB_continueLine);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_18434 = new_String(L"Shell");
    Array PThreadedCode18433 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_18434, (Optr)&t_method_return);
    Constant string_18434_Const = new_Constant((Optr)string_18434);
    Method PMethod18432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18433, 1, string_18434_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod18432, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_runWith_() {
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18436 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18438 = new_Super(SMB_basicNew, 0);
    // runWith:. 
    Send PSend18439 = new_Send((Optr)PSuper18438, SMB_runWith_, 1, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode18437 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18438, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send1, (Optr)PSend18439, (Optr)&t_method_return);
    Method PMethod18435 = new_Method_with(PArray18436, empty_Array, empty_Array, PThreadedCode18437, 1, PSend18439);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18435, HEADER(Shell_Shell_Class));
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