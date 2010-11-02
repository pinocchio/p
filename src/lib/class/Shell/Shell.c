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
    Array PArray18222 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray18223 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18226 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_18228 = new_String(L"");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_18228_Const = new_Constant((Optr)string_18228);
    // =. 
    Send PSend18229 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_18228_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18233 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode18232 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18233, (Optr)&t_block_return);
    Block PBlock18231 = new_Block_with(empty_Array, empty_Array, PThreadedCode18232, 1, PSend18233);
    // ifTrue:. 
    Send PSend18230 = new_Send((Optr)PSend18229, SMB_ifTrue_, 1, (Optr)PBlock18231);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend18239 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18238 = new_Send((Optr)PSend18239, SMB_selector, 0);
    // perform:. 
    Send PSend18237 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend18238);
    Assign PAssign18236 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend18237);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18240 = new_Send((Optr)slot_Shell_Shell_history, SMB_add_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18235 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18236, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18239, (Optr)&t_send0, (Optr)PSend18238, (Optr)&t_send1, (Optr)PSend18237, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18240, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_block_return);
    Block PBlock18234 = new_Block_with(empty_Array, empty_Array, PThreadedCode18235, 3, PAssign18236, PSend18240, VAR_value_0_1);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18242 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    // exceptions. 
    Send PSend18244 = new_Send((Optr)self, SMB_exceptions, 0);
    // add:. 
    Send PSend18245 = new_Send((Optr)PSend18244, SMB_add_, 1, (Optr)VAR_ex_2_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend18246 = new_Send((Optr)slot_Shell_Shell_error, SMB_yellow, 0);
    Symbol SMB_printStacktraceOn_ = new_Symbol(L"printStacktraceOn:");
    // printStacktraceOn:. 
    Send PSend18247 = new_Send((Optr)VAR_ex_2_0, SMB_printStacktraceOn_, 1, (Optr)slot_Shell_Shell_error);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray18249 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18251 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend18252 = new_Send((Optr)VAR__receiver__3_0, SMB_red, 0);
    Array PThreadedCode18250 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18251, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18252, (Optr)&t_method_return);
    Block PBlock18248 = new_Block_with(PArray18249, empty_Array, PThreadedCode18250, 2, PSend18251, PSend18252);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18253 = new_Send((Optr)PBlock18248, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend18254 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)slot_Shell_Shell_error);
    Array PArray18256 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18258 = new_Send((Optr)VAR__receiver__3_0, SMB_clear, 0);
    // lf. 
    Send PSend18259 = new_Send((Optr)VAR__receiver__3_0, SMB_lf, 0);
    Array PThreadedCode18257 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18258, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_send0, (Optr)PSend18259, (Optr)&t_method_return);
    Block PBlock18255 = new_Block_with(PArray18256, empty_Array, PThreadedCode18257, 2, PSend18258, PSend18259);
    // value:. 
    Send PSend18260 = new_Send((Optr)PBlock18255, SMB_value_, 1, (Optr)slot_Shell_Shell_error);
    Array PThreadedCode18243 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18244, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send1, (Optr)PSend18245, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send0, (Optr)PSend18246, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18247, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18248, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18253, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18254, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18255, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_error, (Optr)&t_send1, (Optr)PSend18260, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock18241 = new_Block_with(PArray18242, empty_Array, PThreadedCode18243, 7, PSend18245, PSend18246, PSend18247, PSend18253, PSend18254, PSend18260, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18261 = new_Send((Optr)PBlock18234, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock18241);
    Array PThreadedCode18227 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_18228, (Optr)&t_send1, (Optr)PSend18229, (Optr)&t_send_ifTrue_, (Optr)PSend18230, (Optr)PBlock18231, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18234, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock18241, (Optr)&t_send2, (Optr)PSend18261, (Optr)&t_method_return);
    Block PBlock18225 = new_Block_with(PArray18226, empty_Array, PThreadedCode18227, 2, PSend18230, PSend18261);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18262 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18225);
    Array PThreadedCode18224 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18225, (Optr)&t_send1, (Optr)PSend18262, (Optr)&t_method_return);
    Method PMethod18221 = new_Method_with(PArray18222, PArray18223, empty_Array, PThreadedCode18224, 1, PSend18262);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod18221, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Variable VAR_readline_0_1 = new_Variable_named(L"readline", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray18264 = new_Array_with(3, (Optr)VAR_inspector_0_0, (Optr)VAR_readline_0_1, (Optr)VAR_result_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18267 = new_Send((Optr)PStreamInspector_classReference, SMB_on_, 1, (Optr)slot_Shell_Shell_output);
    Assign PAssign18266 = new_Assign((Optr)VAR_inspector_0_0, (Optr)PSend18267);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    // from:to:for:. 
    Send PSend18269 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)slot_Shell_Shell_input, (Optr)slot_Shell_Shell_output, (Optr)self);
    Assign PAssign18268 = new_Assign((Optr)VAR_readline_0_1, (Optr)PSend18269);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend18272 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend18275 = new_Send((Optr)VAR_readline_0_1, SMB_readLine, 0);
    // interpret:. 
    Send PSend18274 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend18275);
    Assign PAssign18273 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18274);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18276 = new_Send((Optr)VAR_result_0_2, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend18280 = new_Send((Optr)VAR_inspector_0_0, SMB_inspect_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18281 = new_Send((Optr)slot_Shell_Shell_output, SMB_lf, 0);
    Array PThreadedCode18279 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18280, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send0, (Optr)PSend18281, (Optr)&t_block_return);
    Block PBlock18278 = new_Block_with(empty_Array, empty_Array, PThreadedCode18279, 2, PSend18280, PSend18281);
    // ifFalse:. 
    Send PSend18277 = new_Send((Optr)PSend18276, SMB_ifFalse_, 1, (Optr)PBlock18278);
    Array PThreadedCode18271 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18272, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18273, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_1, (Optr)&t_send0, (Optr)PSend18275, (Optr)&t_send1, (Optr)PSend18274, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend18276, (Optr)&t_send_ifFalse_, (Optr)PSend18277, (Optr)PBlock18278, (Optr)&t_block_return);
    Block PBlock18270 = new_Block_with(empty_Array, empty_Array, PThreadedCode18271, 3, PSend18272, PAssign18273, PSend18277);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend18282 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock18270);
    Array PThreadedCode18265 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign18266, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_send1, (Optr)PSend18267, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18268, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_input, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend18269, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock18270, (Optr)&t_send1, (Optr)PSend18282, (Optr)&t_method_return);
    Method PMethod18263 = new_Method_with(empty_Array, PArray18264, empty_Array, PThreadedCode18265, 3, PAssign18266, PAssign18268, PSend18282);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod18263, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18284 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18287 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18291 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18292 = new_Send((Optr)PSend18291, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18290 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18291, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18292, (Optr)&t_block_return);
    Block PBlock18289 = new_Block_with(empty_Array, empty_Array, PThreadedCode18290, 1, PSend18292);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18294 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18296 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18297 = new_Send((Optr)PSend18296, SMB_atEnd, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend18298 = new_Send((Optr)PSend18297, SMB_not, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18299 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18298);
    Array PThreadedCode18295 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18296, (Optr)&t_send0, (Optr)PSend18297, (Optr)&t_send0, (Optr)PSend18298, (Optr)&t_send1, (Optr)PSend18299, (Optr)&t_method_return);
    Block PBlock18293 = new_Block_with(PArray18294, empty_Array, PThreadedCode18295, 1, PSend18299);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18300 = new_Send((Optr)PBlock18289, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18293);
    Array PThreadedCode18288 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18289, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18293, (Optr)&t_send2, (Optr)PSend18300, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18286 = new_Block_with(PArray18287, empty_Array, PThreadedCode18288, 2, PSend18300, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18301 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18286);
    Array PThreadedCode18285 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18286, (Optr)&t_send1, (Optr)PSend18301, (Optr)&t_method_return);
    Method PMethod18283 = new_Method_with(PArray18284, empty_Array, empty_Array, PThreadedCode18285, 1, PSend18301);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod18283, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    String string_18304 = new_String(L"> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18304_Const = new_Constant((Optr)string_18304);
    // <<. 
    Send PSend18305 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18304_Const);
    Array PThreadedCode18303 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18304, (Optr)&t_send1, (Optr)PSend18305, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18302 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18303, 2, PSend18305, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod18302, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_exceptions() {
    Symbol SMB_exceptions = new_Symbol(L"exceptions");
    Array PThreadedCode18307 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_exceptions, (Optr)&t_method_return);
    Method PMethod18306 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18307, 1, slot_Shell_Shell_exceptions);
    
    MethodClosure MC_SMB_exceptions = new_MethodClosure((Method)PMethod18306, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_exceptions, MC_SMB_exceptions);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18309 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18312 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18316 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend18317 = new_Send((Optr)PSend18316, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode18315 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend18316, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18317, (Optr)&t_block_return);
    Block PBlock18314 = new_Block_with(empty_Array, empty_Array, PThreadedCode18315, 1, PSend18317);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray18319 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend18321 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18322 = new_Send((Optr)PSend18321, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend18326 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18327 = new_Send((Optr)PSend18326, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18328 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18327);
    Array PThreadedCode18325 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18326, (Optr)&t_send0, (Optr)PSend18327, (Optr)&t_send1, (Optr)PSend18328, (Optr)&t_block_return);
    Block PBlock18324 = new_Block_with(empty_Array, empty_Array, PThreadedCode18325, 1, PSend18328);
    // ifFalse:. 
    Send PSend18323 = new_Send((Optr)PSend18322, SMB_ifFalse_, 1, (Optr)PBlock18324);
    Array PThreadedCode18320 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend18321, (Optr)&t_send0, (Optr)PSend18322, (Optr)&t_send_ifFalse_, (Optr)PSend18323, (Optr)PBlock18324, (Optr)&t_method_return);
    Block PBlock18318 = new_Block_with(PArray18319, empty_Array, PThreadedCode18320, 1, PSend18323);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend18329 = new_Send((Optr)PBlock18314, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock18318);
    Array PThreadedCode18313 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock18314, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock18318, (Optr)&t_send2, (Optr)PSend18329, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock18311 = new_Block_with(PArray18312, empty_Array, PThreadedCode18313, 2, PSend18329, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18330 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18311);
    Array PThreadedCode18310 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18311, (Optr)&t_send1, (Optr)PSend18330, (Optr)&t_method_return);
    Method PMethod18308 = new_Method_with(PArray18309, empty_Array, empty_Array, PThreadedCode18310, 1, PSend18330);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod18308, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode18332 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18332, 1, self);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod18331, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_layout, MC_SMB_layout);
}


static void init_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Array PThreadedCode18334 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_history, (Optr)&t_method_return);
    Method PMethod18333 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18334, 1, slot_Shell_Shell_history);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod18333, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_history, MC_SMB_history);
}


static void init_SMB_runWith_() {
    /*
    runWith: anInterpreter
// 	^ super basicNew runWith: anInterpreter
    */
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18336 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18339 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign18338 = new_Assign((Optr)slot_Shell_Shell_scope, (Optr)PSend18339);
    // new. 
    Send PSend18341 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18340 = new_Assign((Optr)slot_Shell_Shell_exceptions, (Optr)PSend18341);
    // new. 
    Send PSend18343 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign18342 = new_Assign((Optr)slot_Shell_Shell_history, (Optr)PSend18343);
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend18345 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Assign PAssign18344 = new_Assign((Optr)slot_Shell_Shell_input, (Optr)PSend18345);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend18347 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Assign PAssign18346 = new_Assign((Optr)slot_Shell_Shell_output, (Optr)PSend18347);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend18349 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Assign PAssign18348 = new_Assign((Optr)slot_Shell_Shell_error, (Optr)PSend18349);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18350 = new_Send((Optr)self, SMB_class, 0);
    String string_18351 = new_String(L"demoImport self package import: Interpretation. self package import: Demo");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Constant string_18351_Const = new_Constant((Optr)string_18351);
    // compile:. 
    Send PSend18352 = new_Send((Optr)PSend18350, SMB_compile_, 1, (Optr)string_18351_Const);
    Symbol SMB_demoImport = new_Symbol(L"demoImport");
    // demoImport. 
    Send PSend18353 = new_Send((Optr)self, SMB_demoImport, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend18354 = new_Send((Optr)self, SMB_shell, 0);
    Array PThreadedCode18337 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign18338, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend18339, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18340, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18341, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18342, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend18343, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18344, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend18345, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18346, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18347, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18348, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend18349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18350, (Optr)&t_push1, (Optr)string_18351, (Optr)&t_send1, (Optr)PSend18352, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18353, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18354, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18335 = new_Method_with(PArray18336, empty_Array, empty_Array, PThreadedCode18337, 10, PAssign18338, PAssign18340, PAssign18342, PAssign18344, PAssign18346, PAssign18348, PSend18352, PSend18353, PSend18354, self);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18335, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_runWith_, MC_SMB_runWith_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray18356 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18359 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend18361 = new_Send((Optr)VAR_name_0_0, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend18362 = new_Send((Optr)PSend18361, SMB_isUppercase, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18366 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18367 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18366);
    Array PThreadedCode18365 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend18366, (Optr)&t_send1, (Optr)PSend18367, (Optr)&t_block_return);
    Block PBlock18364 = new_Block_with(empty_Array, empty_Array, PThreadedCode18365, 1, PSend18367);
    // ifTrue:. 
    Send PSend18363 = new_Send((Optr)PSend18362, SMB_ifTrue_, 1, (Optr)PBlock18364);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18372 = new_Send((Optr)PDirectVariable_classReference, SMB_named_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18373 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_put_, 2, (Optr)VAR_name_0_0, (Optr)PSend18372);
    Array PThreadedCode18371 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_class_reference, (Optr)PDirectVariable_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend18372, (Optr)&t_send2, (Optr)PSend18373, (Optr)&t_block_return);
    Block PBlock18370 = new_Block_with(empty_Array, empty_Array, PThreadedCode18371, 1, PSend18373);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend18374 = new_Send((Optr)slot_Shell_Shell_scope, SMB_at_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18370);
    Array PThreadedCode18369 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_scope, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18370, (Optr)&t_send2, (Optr)PSend18374, (Optr)&t_block_return);
    Block PBlock18368 = new_Block_with(empty_Array, empty_Array, PThreadedCode18369, 1, PSend18374);
    Symbol SMB_lookupNamed_ifAbsent_ = new_Symbol(L"lookupNamed:ifAbsent:");
    // lookupNamed:ifAbsent:. 
    Send PSend18375 = new_Send((Optr)PRootScope_classReference, SMB_lookupNamed_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock18368);
    Array PThreadedCode18360 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send0, (Optr)PSend18361, (Optr)&t_send0, (Optr)PSend18362, (Optr)&t_send_ifTrue_, (Optr)PSend18363, (Optr)PBlock18364, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock18368, (Optr)&t_send2, (Optr)PSend18375, (Optr)&t_method_return);
    Block PBlock18358 = new_Block_with(PArray18359, empty_Array, PThreadedCode18360, 2, PSend18363, PSend18375);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18376 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18358);
    Array PThreadedCode18357 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18358, (Optr)&t_send1, (Optr)PSend18376, (Optr)&t_method_return);
    Method PMethod18355 = new_Method_with(PArray18356, empty_Array, empty_Array, PThreadedCode18357, 1, PSend18376);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod18355, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray18378 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray18379 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_18385 = new_String(L"DoIt ^[");
    Constant string_18385_Const = new_Constant((Optr)string_18385);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18386 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend18384 = new_Send((Optr)string_18385_Const, SMB__append_, 1, (Optr)PSend18386);
    // ,. 
    Send PSend18383 = new_Send((Optr)PSend18384, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_18387 = new_String(L"] value");
    Constant string_18387_Const = new_Constant((Optr)string_18387);
    // ,. 
    Send PSend18382 = new_Send((Optr)PSend18383, SMB__append_, 1, (Optr)string_18387_Const);
    Assign PAssign18381 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend18382);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend18389 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)self);
    Assign PAssign18388 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend18389);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18390 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend18391 = new_Send((Optr)PSend18390, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend18392 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend18393 = new_Send((Optr)PSend18391, SMB_at_put_, 2, (Optr)PSend18392, (Optr)VAR_method_0_2);
    Array PThreadedCode18380 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push1, (Optr)PAssign18381, (Optr)&t_push1, (Optr)string_18385, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend18386, (Optr)&t_send1, (Optr)PSend18384, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend18383, (Optr)&t_push1, (Optr)string_18387, (Optr)&t_send1, (Optr)PSend18382, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18388, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend18389, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18390, (Optr)&t_send0, (Optr)PSend18391, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend18392, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend18393, (Optr)&t_method_return);
    Method PMethod18377 = new_Method_with(PArray18378, PArray18379, empty_Array, PThreadedCode18380, 3, PAssign18381, PAssign18388, PSend18393);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod18377, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18396 = new_Send((Optr)self, SMB_class, 0);
    // package. 
    Send PSend18397 = new_Send((Optr)PSend18396, SMB_package, 0);
    Array PThreadedCode18395 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18396, (Optr)&t_send0, (Optr)PSend18397, (Optr)&t_method_return);
    Method PMethod18394 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18395, 1, PSend18397);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod18394, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_continueLine() {
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    String string_18400 = new_String(L"| ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18400_Const = new_Constant((Optr)string_18400);
    // <<. 
    Send PSend18401 = new_Send((Optr)slot_Shell_Shell_output, SMB__shiftLeft_, 1, (Optr)string_18400_Const);
    Array PThreadedCode18399 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_Shell_output, (Optr)&t_push1, (Optr)string_18400, (Optr)&t_send1, (Optr)PSend18401, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18398 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18399, 2, PSend18401, self);
    
    MethodClosure MC_SMB_continueLine = new_MethodClosure((Method)PMethod18398, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_continueLine, MC_SMB_continueLine);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_18404 = new_String(L"Shell");
    Array PThreadedCode18403 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_18404, (Optr)&t_method_return);
    Constant string_18404_Const = new_Constant((Optr)string_18404);
    Method PMethod18402 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18403, 1, string_18404_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod18402, Shell_Shell_Class);
    store_method(Shell_Shell_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_runWith_() {
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    Variable VAR_anInterpreter_0_0 = new_Variable_named(L"anInterpreter", 0);
    Array PArray18406 = new_Array_with(1, (Optr)VAR_anInterpreter_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18408 = new_Super(SMB_basicNew, 0);
    // runWith:. 
    Send PSend18409 = new_Send((Optr)PSuper18408, SMB_runWith_, 1, (Optr)VAR_anInterpreter_0_0);
    Array PThreadedCode18407 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18408, (Optr)&t_push_variable, (Optr)VAR_anInterpreter_0_0, (Optr)&t_send1, (Optr)PSend18409, (Optr)&t_method_return);
    Method PMethod18405 = new_Method_with(PArray18406, empty_Array, empty_Array, PThreadedCode18407, 1, PSend18409);
    
    MethodClosure MC_SMB_runWith_ = new_MethodClosure((Method)PMethod18405, HEADER(Shell_Shell_Class));
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