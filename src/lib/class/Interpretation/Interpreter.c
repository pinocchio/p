#include <lib/class/Interpretation/Interpreter.h>


Optr layout_Interpretation_Interpreter_Class_class;
Optr slot_Interpretation_Interpreter_context;
Optr slot_Interpretation_Interpreter_nextInterpreter;
Optr layout_Interpretation_Interpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray16171 = new_Array_with(3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Variable VAR_method_0_3 = new_Variable_named(L"method", 0);
    Array PArray16172 = new_Array_with(1, (Optr)VAR_method_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16175 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16179 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    // lookupSelector:in:. 
    Send PSend16178 = new_Send((Optr)self, SMB_lookupSelector_in_, 2, (Optr)PSend16179, (Optr)VAR_class_0_2);
    Assign PAssign16177 = new_Assign((Optr)VAR_method_0_3, (Optr)PSend16178);
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    // sendDoesNotUnderstandFor:to:. 
    Send PSend16182 = new_Send((Optr)self, SMB_sendDoesNotUnderstandFor_to_, 2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16183 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16182);
    Array PThreadedCode16181 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16182, (Optr)&t_send1, (Optr)PSend16183, (Optr)&t_block_return);
    Block PBlock16180 = new_Block_with(empty_Array, empty_Array, PThreadedCode16181, 1, PSend16183);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend16184 = new_Send((Optr)VAR_method_0_3, SMB_ifNil_, 1, (Optr)PBlock16180);
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    // accept:on:message:. 
    Send PSend16185 = new_Send((Optr)VAR_method_0_3, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode16176 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16177, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16179, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16178, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_push_closure, (Optr)PBlock16180, (Optr)&t_send1, (Optr)PSend16184, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16185, (Optr)&t_method_return);
    Block PBlock16174 = new_Block_with(PArray16175, empty_Array, PThreadedCode16176, 3, PAssign16177, PSend16184, PSend16185);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16186 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16174);
    Array PThreadedCode16173 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16174, (Optr)&t_send1, (Optr)PSend16186, (Optr)&t_method_return);
    Method PMethod16170 = new_Method_with(PArray16171, PArray16172, empty_Array, PThreadedCode16173, 1, PSend16186);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16170, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_interpret_() {
    /*
    interpret: aClosure
// 	^ self new interpret: aClosure
    */
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray16188 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16190 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
    Symbol  SMB_value = new_Symbol(L"value");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value_Const = new_Constant((Optr)SMB_value);
    // selector:. 
    Send PSend16191 = new_Send((Optr)PSend16190, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16192 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend16191, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode16189 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend16190, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend16191, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send2, (Optr)PSend16192, (Optr)&t_method_return);
    Method PMethod16187 = new_Method_with(PArray16188, empty_Array, empty_Array, PThreadedCode16189, 1, PSend16192);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16187, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_continueEscape_message_() {
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16194 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16196 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16197 = new_Send((Optr)VAR_aContinuation_0_0, SMB_escape_, 1, (Optr)PSend16196);
    Array PThreadedCode16195 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16196, (Optr)&t_send1, (Optr)PSend16197, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16193 = new_Method_with(PArray16194, empty_Array, empty_Array, PThreadedCode16195, 2, PSend16197, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod16193, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_continueEscape_message_, MC_SMB_continueEscape_message_);
}


static void init_SMB_invokeNativeMethod_on_message_() {
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16199 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray16200 = new_Array_with(1, (Optr)VAR_result_0_3);
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    // swapInvokeNative. 
    Send PSend16202 = new_Send((Optr)self, SMB_swapInvokeNative, 0);
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend16207 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Array PThreadedCode16206 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16207, (Optr)&t_block_return);
    Block PBlock16205 = new_Block_with(empty_Array, empty_Array, PThreadedCode16206, 1, PSend16207);
    // invokeNativeMethod:on:message:alternative:. 
    Send PSend16204 = new_Send((Optr)self, SMB_invokeNativeMethod_on_message_alternative_, 4, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2, (Optr)PBlock16205);
    Assign PAssign16203 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16204);
    // swapInvokeNative. 
    Send PSend16208 = new_Send((Optr)nil_Const, SMB_swapInvokeNative, 0);
    Array PThreadedCode16201 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16202, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16203, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock16205, (Optr)&t_send4, (Optr)PSend16204, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_nil, (Optr)&t_send0, (Optr)PSend16208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Method PMethod16198 = new_Method_with(PArray16199, PArray16200, empty_Array, PThreadedCode16201, 4, PSend16202, PAssign16203, PSend16208, VAR_result_0_3);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_ = new_MethodClosure((Method)PMethod16198, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeNativeMethod_on_message_, MC_SMB_invokeNativeMethod_on_message_);
}


static void init_SMB_interpretMethod_() {
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray16210 = new_Array_with(1, (Optr)VAR_method_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray16211 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16213 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16217 = new_Send((Optr)VAR_pc_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16216 = new_Assign((Optr)VAR_pc_0_1, (Optr)PSend16217);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16218 = new_Send((Optr)VAR_method_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend16219 = new_Send((Optr)PAssign16216, SMB__lt_, 1, (Optr)PSend16218);
    Array PThreadedCode16215 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16216, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16217, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_send0, (Optr)PSend16218, (Optr)&t_send1, (Optr)PSend16219, (Optr)&t_block_return);
    Block PBlock16214 = new_Block_with(empty_Array, empty_Array, PThreadedCode16215, 1, PSend16219);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend16222 = new_Send((Optr)VAR_method_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16223 = new_Send((Optr)PSend16222, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16221 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16222, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16223, (Optr)&t_block_return);
    Block PBlock16220 = new_Block_with(empty_Array, empty_Array, PThreadedCode16221, 1, PSend16223);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16224 = new_Send((Optr)PBlock16214, SMB_whileTrue_, 1, (Optr)PBlock16220);
    // at:. 
    Send PSend16225 = new_Send((Optr)VAR_method_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    // accept:. 
    Send PSend16226 = new_Send((Optr)PSend16225, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16212 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign16213, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16214, (Optr)&t_push_closure, (Optr)PBlock16220, (Optr)&t_send1, (Optr)PSend16224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16225, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16226, (Optr)&t_method_return);
    Method PMethod16209 = new_Method_with(PArray16210, PArray16211, empty_Array, PThreadedCode16212, 3, PAssign16213, PSend16224, PSend16226);
    
    MethodClosure MC_SMB_interpretMethod_ = new_MethodClosure((Method)PMethod16209, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpretMethod_, MC_SMB_interpretMethod_);
}


static void init_SMB_interpretBlock_() {
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray16228 = new_Array_with(1, (Optr)VAR_block_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray16229 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16231 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16235 = new_Send((Optr)VAR_pc_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16234 = new_Assign((Optr)VAR_pc_0_1, (Optr)PSend16235);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16236 = new_Send((Optr)VAR_block_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend16237 = new_Send((Optr)PAssign16234, SMB__lt_, 1, (Optr)PSend16236);
    Array PThreadedCode16233 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16234, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16235, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend16236, (Optr)&t_send1, (Optr)PSend16237, (Optr)&t_block_return);
    Block PBlock16232 = new_Block_with(empty_Array, empty_Array, PThreadedCode16233, 1, PSend16237);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend16240 = new_Send((Optr)VAR_block_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16241 = new_Send((Optr)PSend16240, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16239 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16240, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16241, (Optr)&t_block_return);
    Block PBlock16238 = new_Block_with(empty_Array, empty_Array, PThreadedCode16239, 1, PSend16241);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16242 = new_Send((Optr)PBlock16232, SMB_whileTrue_, 1, (Optr)PBlock16238);
    // at:. 
    Send PSend16243 = new_Send((Optr)VAR_block_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    // accept:. 
    Send PSend16244 = new_Send((Optr)PSend16243, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16230 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign16231, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16232, (Optr)&t_push_closure, (Optr)PBlock16238, (Optr)&t_send1, (Optr)PSend16242, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16243, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16244, (Optr)&t_method_return);
    Method PMethod16227 = new_Method_with(PArray16228, PArray16229, empty_Array, PThreadedCode16230, 3, PAssign16231, PSend16242, PSend16244);
    
    MethodClosure MC_SMB_interpretBlock_ = new_MethodClosure((Method)PMethod16227, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpretBlock_, MC_SMB_interpretBlock_);
}


static void init_SMB_visitDirectVariable_() {
    Symbol SMB_visitDirectVariable_ = new_Symbol(L"visitDirectVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray16246 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16248 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)nil_Const);
    Array PThreadedCode16247 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16248, (Optr)&t_method_return);
    Method PMethod16245 = new_Method_with(PArray16246, empty_Array, empty_Array, PThreadedCode16247, 1, PSend16248);
    
    MethodClosure MC_SMB_visitDirectVariable_ = new_MethodClosure((Method)PMethod16245, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitDirectVariable_, MC_SMB_visitDirectVariable_);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Array PArray16250 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16252 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16253 = new_Send((Optr)VAR_aSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16252);
    Array PThreadedCode16251 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16252, (Optr)&t_send1, (Optr)PSend16253, (Optr)&t_method_return);
    Method PMethod16249 = new_Method_with(PArray16250, empty_Array, empty_Array, PThreadedCode16251, 1, PSend16253);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod16249, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_classOf_() {
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16255 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16257 = new_Send((Optr)VAR_anObject_0_0, SMB_class, 0);
    Array PThreadedCode16256 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend16257, (Optr)&t_method_return);
    Method PMethod16254 = new_Method_with(PArray16255, empty_Array, empty_Array, PThreadedCode16256, 1, PSend16257);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod16254, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_classOf_, MC_SMB_classOf_);
}


static void init_SMB_visitAssign_() {
    Symbol SMB_visitAssign_ = new_Symbol(L"visitAssign:");
    Variable VAR_anAssign_0_0 = new_Variable_named(L"anAssign", 0);
    Array PArray16259 = new_Array_with(1, (Optr)VAR_anAssign_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16260 = new_Array_with(1, (Optr)VAR_value_0_1);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend16264 = new_Send((Optr)VAR_anAssign_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16263 = new_Send((Optr)PSend16264, SMB_accept_, 1, (Optr)self);
    Assign PAssign16262 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend16263);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend16265 = new_Send((Optr)VAR_anAssign_0_0, SMB_variable, 0);
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    // assignFor:to:. 
    Send PSend16266 = new_Send((Optr)PSend16265, SMB_assignFor_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode16261 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign16262, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend16264, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16263, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend16265, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend16266, (Optr)&t_method_return);
    Method PMethod16258 = new_Method_with(PArray16259, PArray16260, empty_Array, PThreadedCode16261, 2, PAssign16262, PSend16266);
    
    MethodClosure MC_SMB_visitAssign_ = new_MethodClosure((Method)PMethod16258, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitAssign_, MC_SMB_visitAssign_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray16268 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16270 = new_Send((Optr)self, SMB_currentSelf, 0);
    Array PThreadedCode16269 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16270, (Optr)&t_method_return);
    Method PMethod16267 = new_Method_with(PArray16268, empty_Array, empty_Array, PThreadedCode16269, 1, PSend16270);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod16267, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_blockContextFor_message_() {
    Symbol SMB_blockContextFor_message_ = new_Symbol(L"blockContextFor:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16272 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray16273 = new_Array_with(2, (Optr)VAR_block_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16276 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_code, 0);
    Assign PAssign16275 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend16276);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16280 = new_Send((Optr)VAR_block_0_2, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16279 = new_Send((Optr)PSend16280, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend16282 = new_Send((Optr)VAR_block_0_2, SMB_locals, 0);
    // size. 
    Send PSend16281 = new_Send((Optr)PSend16282, SMB_size, 0);
    // +. 
    Send PSend16278 = new_Send((Optr)PSend16279, SMB__plus_, 1, (Optr)PSend16281);
    Assign PAssign16277 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend16278);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16283 = new_Send((Optr)VAR_size_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16288 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Assign PAssign16287 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16288);
    Array PThreadedCode16286 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign16287, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16288, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16285 = new_Block_with(empty_Array, empty_Array, PThreadedCode16286, 1, PAssign16287);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16294 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend16296 = new_Send((Optr)VAR__receiver__1_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    // context. 
    Send PSend16297 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    // outerScope:. 
    Send PSend16298 = new_Send((Optr)VAR__receiver__1_0, SMB_outerScope_, 1, (Optr)PSend16297);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16299 = new_Send((Optr)VAR__receiver__1_0, SMB_closure_, 1, (Optr)VAR_aBlockClosure_0_0);
    // context. 
    Send PSend16300 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16301 = new_Send((Optr)PSend16300, SMB_homeContext, 0);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend16302 = new_Send((Optr)VAR__receiver__1_0, SMB_homeContext_, 1, (Optr)PSend16301);
    Array PThreadedCode16295 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16297, (Optr)&t_send1, (Optr)PSend16298, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send1, (Optr)PSend16299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16300, (Optr)&t_send0, (Optr)PSend16301, (Optr)&t_send1, (Optr)PSend16302, (Optr)&t_method_return);
    Block PBlock16293 = new_Block_with(PArray16294, empty_Array, PThreadedCode16295, 4, PSend16296, PSend16298, PSend16299, PSend16302);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16303 = new_Send((Optr)PBlockContext_classReference, SMB_new_, 1, (Optr)VAR_size_0_3);
    // value:. 
    Send PSend16292 = new_Send((Optr)PBlock16293, SMB_value_, 1, (Optr)PSend16303);
    Assign PAssign16291 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16292);
    Array PThreadedCode16290 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign16291, (Optr)&t_push_closure, (Optr)PBlock16293, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend16303, (Optr)&t_send1, (Optr)PSend16292, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16289 = new_Block_with(empty_Array, empty_Array, PThreadedCode16290, 1, PAssign16291);
    // ifTrue:ifFalse:. 
    Send PSend16284 = new_Send((Optr)PSend16283, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16285, (Optr)PBlock16289);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16305 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16307 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_value_1_0);
    Array PThreadedCode16306 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send2, (Optr)PSend16307, (Optr)&t_method_return);
    Block PBlock16304 = new_Block_with(PArray16305, empty_Array, PThreadedCode16306, 1, PSend16307);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16308 = new_Send((Optr)VAR_aMessage_0_1, SMB_withIndexDo_, 1, (Optr)PBlock16304);
    Array PThreadedCode16274 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign16275, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16276, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16277, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16280, (Optr)&t_send0, (Optr)PSend16279, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16282, (Optr)&t_send0, (Optr)PSend16281, (Optr)&t_send1, (Optr)PSend16278, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16283, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16284, (Optr)PBlock16285, (Optr)PBlock16289, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_closure, (Optr)PBlock16304, (Optr)&t_send1, (Optr)PSend16308, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16271 = new_Method_with(PArray16272, PArray16273, empty_Array, PThreadedCode16274, 5, PAssign16275, PAssign16277, PSend16284, PSend16308, self);
    
    MethodClosure MC_SMB_blockContextFor_message_ = new_MethodClosure((Method)PMethod16271, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockContextFor_message_, MC_SMB_blockContextFor_message_);
}


static void init_SMB_recursiveDoesNotUnderstand_on_() {
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16310 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16313 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16315 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16316 = new_Send((Optr)VAR_receiver_0_1, SMB_class, 0);
    Symbol SMB_cls_ = new_Symbol(L"cls:");
    // cls:. 
    Send PSend16317 = new_Send((Optr)VAR__receiver__1_0, SMB_cls_, 1, (Optr)PSend16316);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend16318 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_aMessage_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend16319 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode16314 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16315, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send0, (Optr)PSend16316, (Optr)&t_send1, (Optr)PSend16317, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend16318, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16319, (Optr)&t_method_return);
    Block PBlock16312 = new_Block_with(PArray16313, empty_Array, PThreadedCode16314, 4, PSend16315, PSend16317, PSend16318, PSend16319);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16320 = new_Send((Optr)PRecursiveDoesNotUnderstand_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16321 = new_Send((Optr)PBlock16312, SMB_value_, 1, (Optr)PSend16320);
    Array PThreadedCode16311 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16312, (Optr)&t_push_class_reference, (Optr)PRecursiveDoesNotUnderstand_classReference, (Optr)&t_send0, (Optr)PSend16320, (Optr)&t_send1, (Optr)PSend16321, (Optr)&t_method_return);
    Method PMethod16309 = new_Method_with(PArray16310, empty_Array, empty_Array, PThreadedCode16311, 1, PSend16321);
    
    MethodClosure MC_SMB_recursiveDoesNotUnderstand_on_ = new_MethodClosure((Method)PMethod16309, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_recursiveDoesNotUnderstand_on_, MC_SMB_recursiveDoesNotUnderstand_on_);
}


static void init_SMB_currentClass() {
    Symbol SMB_currentClass = new_Symbol(L"currentClass");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16324 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    // methodClass. 
    Send PSend16325 = new_Send((Optr)PSend16324, SMB_methodClass, 0);
    Array PThreadedCode16323 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16324, (Optr)&t_send0, (Optr)PSend16325, (Optr)&t_method_return);
    Method PMethod16322 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16323, 1, PSend16325);
    
    MethodClosure MC_SMB_currentClass = new_MethodClosure((Method)PMethod16322, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_currentClass, MC_SMB_currentClass);
}


static void init_SMB_blockclosureValueWithArguments_message_() {
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16327 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16329 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    // blockclosureValue:message:. 
    Send PSend16330 = new_Send((Optr)self, SMB_blockclosureValue_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)PSend16329);
    Array PThreadedCode16328 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16329, (Optr)&t_send2, (Optr)PSend16330, (Optr)&t_method_return);
    Method PMethod16326 = new_Method_with(PArray16327, empty_Array, empty_Array, PThreadedCode16328, 1, PSend16330);
    
    MethodClosure MC_SMB_blockclosureValueWithArguments_message_ = new_MethodClosure((Method)PMethod16326, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockclosureValueWithArguments_message_, MC_SMB_blockclosureValueWithArguments_message_);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_aSuper_0_0 = new_Variable_named(L"aSuper", 0);
    Array PArray16332 = new_Array_with(1, (Optr)VAR_aSuper_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray16333 = new_Array_with(2, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16336 = new_Send((Optr)self, SMB_currentSelf, 0);
    Assign PAssign16335 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend16336);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16339 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    // new:. 
    Send PSend16338 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend16339);
    Assign PAssign16337 = new_Assign((Optr)VAR_message_0_2, (Optr)PSend16338);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend16340 = new_Send((Optr)VAR_aSuper_0_0, SMB_message, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16341 = new_Send((Optr)VAR_message_0_2, SMB_selector_, 1, (Optr)PSend16340);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16343 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16345 = new_Send((Optr)VAR_arg_1_0, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16346 = new_Send((Optr)VAR_message_0_2, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend16345);
    Array PThreadedCode16344 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16345, (Optr)&t_send2, (Optr)PSend16346, (Optr)&t_method_return);
    Block PBlock16342 = new_Block_with(PArray16343, empty_Array, PThreadedCode16344, 1, PSend16346);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16347 = new_Send((Optr)VAR_aSuper_0_0, SMB_withIndexDo_, 1, (Optr)PBlock16342);
    Symbol SMB_currentClass = new_Symbol(L"currentClass");
    // currentClass. 
    Send PSend16348 = new_Send((Optr)self, SMB_currentClass, 0);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend16349 = new_Send((Optr)PSend16348, SMB_superclass, 0);
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    // send:to:class:for:. 
    Send PSend16350 = new_Send((Optr)self, SMB_send_to_class_for_, 4, (Optr)VAR_message_0_2, (Optr)VAR_receiver_0_1, (Optr)PSend16349, (Optr)VAR_aSuper_0_0);
    Array PThreadedCode16334 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push1, (Optr)PAssign16335, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16336, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16337, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend16339, (Optr)&t_send1, (Optr)PSend16338, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend16340, (Optr)&t_send1, (Optr)PSend16341, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_push_closure, (Optr)PBlock16342, (Optr)&t_send1, (Optr)PSend16347, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16348, (Optr)&t_send0, (Optr)PSend16349, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send4, (Optr)PSend16350, (Optr)&t_method_return);
    Method PMethod16331 = new_Method_with(PArray16332, PArray16333, empty_Array, PThreadedCode16334, 5, PAssign16335, PAssign16337, PSend16341, PSend16347, PSend16350);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod16331, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16352 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray16353 = new_Array_with(2, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16357 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16356 = new_Send((Optr)PSend16357, SMB_accept_, 1, (Optr)self);
    Assign PAssign16355 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend16356);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16360 = new_Send((Optr)VAR_aSend_0_0, SMB_size, 0);
    // new:. 
    Send PSend16359 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend16360);
    Assign PAssign16358 = new_Assign((Optr)VAR_message_0_2, (Optr)PSend16359);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend16361 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16362 = new_Send((Optr)VAR_message_0_2, SMB_selector_, 1, (Optr)PSend16361);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16364 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    // accept:. 
    Send PSend16366 = new_Send((Optr)VAR_arg_1_0, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16367 = new_Send((Optr)VAR_message_0_2, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend16366);
    Array PThreadedCode16365 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16366, (Optr)&t_send2, (Optr)PSend16367, (Optr)&t_method_return);
    Block PBlock16363 = new_Block_with(PArray16364, empty_Array, PThreadedCode16365, 1, PSend16367);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16368 = new_Send((Optr)VAR_aSend_0_0, SMB_withIndexDo_, 1, (Optr)PBlock16363);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16369 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    // send:to:class:for:. 
    Send PSend16370 = new_Send((Optr)self, SMB_send_to_class_for_, 4, (Optr)VAR_message_0_2, (Optr)VAR_receiver_0_1, (Optr)PSend16369, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16354 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign16355, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16357, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16356, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16358, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16360, (Optr)&t_send1, (Optr)PSend16359, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16361, (Optr)&t_send1, (Optr)PSend16362, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_closure, (Optr)PBlock16363, (Optr)&t_send1, (Optr)PSend16368, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16369, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send4, (Optr)PSend16370, (Optr)&t_method_return);
    Method PMethod16351 = new_Method_with(PArray16352, PArray16353, empty_Array, PThreadedCode16354, 5, PAssign16355, PAssign16358, PSend16362, PSend16368, PSend16370);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16351, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSend_, MC_SMB_visitSend_);
}


static void init_SMB_invokeReflectionMethod_on_message_() {
    Symbol SMB_invokeReflectionMethod_on_message_ = new_Symbol(L"invokeReflectionMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16372 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_annotation_0_3 = new_Variable_named(L"annotation", 0);
    Variable VAR_selector_0_4 = new_Variable_named(L"selector", 0);
    Array PArray16373 = new_Array_with(2, (Optr)VAR_annotation_0_3, (Optr)VAR_selector_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16376 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotationAt:. 
    Send PSend16379 = new_Send((Optr)VAR_aClosure_0_0, SMB_annotationAt_, 1, (Optr)SMB_pinocchioReflective__Const);
    Assign PAssign16378 = new_Assign((Optr)VAR_annotation_0_3, (Optr)PSend16379);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16381 = new_Send((Optr)VAR_annotation_0_3, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16380 = new_Assign((Optr)VAR_selector_0_4, (Optr)PSend16381);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend16382 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)VAR_selector_0_4);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend16386 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    // perform:withArguments:. 
    Send PSend16387 = new_Send((Optr)self, SMB_perform_withArguments_, 2, (Optr)VAR_selector_0_4, (Optr)PSend16386);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16388 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16387);
    Array PThreadedCode16385 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_4, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send2, (Optr)PSend16386, (Optr)&t_send2, (Optr)PSend16387, (Optr)&t_send1, (Optr)PSend16388, (Optr)&t_block_return);
    Block PBlock16384 = new_Block_with(empty_Array, empty_Array, PThreadedCode16385, 1, PSend16388);
    // ifTrue:. 
    Send PSend16383 = new_Send((Optr)PSend16382, SMB_ifTrue_, 1, (Optr)PBlock16384);
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend16389 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Array PThreadedCode16377 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign16378, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend16379, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16380, (Optr)&t_push_variable, (Optr)VAR_annotation_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16381, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_4, (Optr)&t_send1, (Optr)PSend16382, (Optr)&t_send_ifTrue_, (Optr)PSend16383, (Optr)PBlock16384, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16389, (Optr)&t_method_return);
    Block PBlock16375 = new_Block_with(PArray16376, empty_Array, PThreadedCode16377, 4, PAssign16378, PAssign16380, PSend16383, PSend16389);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16390 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16375);
    Array PThreadedCode16374 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16375, (Optr)&t_send1, (Optr)PSend16390, (Optr)&t_method_return);
    Method PMethod16371 = new_Method_with(PArray16372, PArray16373, empty_Array, PThreadedCode16374, 1, PSend16390);
    
    MethodClosure MC_SMB_invokeReflectionMethod_on_message_ = new_MethodClosure((Method)PMethod16371, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeReflectionMethod_on_message_, MC_SMB_invokeReflectionMethod_on_message_);
}


static void init_SMB_blockclosureValue_message_() {
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16392 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_returnContext_0_4 = new_Variable_named(L"returnContext", 0);
    Array PArray16393 = new_Array_with(3, (Optr)VAR_block_0_2, (Optr)VAR_result_0_3, (Optr)VAR_returnContext_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16396 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16399 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_code, 0);
    Assign PAssign16398 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend16399);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16400 = new_Send((Optr)VAR_block_0_2, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16401 = new_Send((Optr)PSend16400, SMB_size, 0);
    // size. 
    Send PSend16402 = new_Send((Optr)VAR_aMessage_0_1, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend16403 = new_Send((Optr)PSend16401, SMB__equals_, 1, (Optr)PSend16402);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend16404 = new_Send((Optr)self, SMB_assert_, 1, (Optr)PSend16403);
    // size. 
    Send PSend16405 = new_Send((Optr)VAR_block_0_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16406 = new_Send((Optr)PSend16405, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16410 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode16409 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16410, (Optr)&t_block_return);
    Block PBlock16408 = new_Block_with(empty_Array, empty_Array, PThreadedCode16409, 1, PSend16410);
    // ifTrue:. 
    Send PSend16407 = new_Send((Optr)PSend16406, SMB_ifTrue_, 1, (Optr)PBlock16408);
    Assign PAssign16411 = new_Assign((Optr)VAR_returnContext_0_4, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_blockContextFor_message_ = new_Symbol(L"blockContextFor:message:");
    // blockContextFor:message:. 
    Send PSend16412 = new_Send((Optr)self, SMB_blockContextFor_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    // interpretBlock:. 
    Send PSend16414 = new_Send((Optr)self, SMB_interpretBlock_, 1, (Optr)VAR_block_0_2);
    Assign PAssign16413 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16414);
    Assign PAssign16415 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)VAR_returnContext_0_4);
    Array PThreadedCode16397 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign16398, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16399, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16400, (Optr)&t_send0, (Optr)PSend16401, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_send0, (Optr)PSend16402, (Optr)&t_send1, (Optr)PSend16403, (Optr)&t_send1, (Optr)PSend16404, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16405, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16406, (Optr)&t_send_ifTrue_, (Optr)PSend16407, (Optr)PBlock16408, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16411, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_send2, (Optr)PSend16412, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16413, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend16414, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16415, (Optr)&t_push_variable, (Optr)VAR_returnContext_0_4, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock16395 = new_Block_with(PArray16396, empty_Array, PThreadedCode16397, 8, PAssign16398, PSend16404, PSend16407, PAssign16411, PSend16412, PAssign16413, PAssign16415, VAR_result_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16416 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16395);
    Array PThreadedCode16394 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16395, (Optr)&t_send1, (Optr)PSend16416, (Optr)&t_method_return);
    Method PMethod16391 = new_Method_with(PArray16392, PArray16393, empty_Array, PThreadedCode16394, 1, PSend16416);
    
    MethodClosure MC_SMB_blockclosureValue_message_ = new_MethodClosure((Method)PMethod16391, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockclosureValue_message_, MC_SMB_blockclosureValue_message_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray16418 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16420 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16419 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16420, (Optr)&t_method_return);
    Method PMethod16417 = new_Method_with(PArray16418, empty_Array, empty_Array, PThreadedCode16419, 1, PSend16420);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod16417, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentSelf() {
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16423 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16424 = new_Send((Optr)PSend16423, SMB_receiver, 0);
    Array PThreadedCode16422 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16423, (Optr)&t_send0, (Optr)PSend16424, (Optr)&t_method_return);
    Method PMethod16421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16422, 1, PSend16424);
    
    MethodClosure MC_SMB_currentSelf = new_MethodClosure((Method)PMethod16421, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_currentSelf, MC_SMB_currentSelf);
}


static void init_SMB_visitUnsintSlot_() {
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Array PArray16426 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16428 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16429 = new_Send((Optr)VAR_aSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16428);
    Array PThreadedCode16427 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16428, (Optr)&t_send1, (Optr)PSend16429, (Optr)&t_method_return);
    Method PMethod16425 = new_Method_with(PArray16426, empty_Array, empty_Array, PThreadedCode16427, 1, PSend16429);
    
    MethodClosure MC_SMB_visitUnsintSlot_ = new_MethodClosure((Method)PMethod16425, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitUnsintSlot_, MC_SMB_visitUnsintSlot_);
}


static void init_SMB_assignSlot_to_() {
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16431 = new_Array_with(2, (Optr)VAR_aSlot_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16433 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16434 = new_Send((Optr)VAR_aSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)PSend16433);
    Array PThreadedCode16432 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16433, (Optr)&t_send2, (Optr)PSend16434, (Optr)&t_method_return);
    Method PMethod16430 = new_Method_with(PArray16431, empty_Array, empty_Array, PThreadedCode16432, 1, PSend16434);
    
    MethodClosure MC_SMB_assignSlot_to_ = new_MethodClosure((Method)PMethod16430, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignSlot_to_, MC_SMB_assignSlot_to_);
}


static void init_SMB_continueOn_message_() {
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray16436 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_saveContext_0_2 = new_Variable_named(L"saveContext", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_aBlock_0_4 = new_Variable_named(L"aBlock", 0);
    Array PArray16437 = new_Array_with(3, (Optr)VAR_saveContext_0_2, (Optr)VAR_result_0_3, (Optr)VAR_aBlock_0_4);
    Assign PAssign16439 = new_Assign((Optr)VAR_saveContext_0_2, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16441 = new_Send((Optr)VAR_message_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16440 = new_Assign((Optr)VAR_aBlock_0_4, (Optr)PSend16441);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_metaCont_1_0 = new_Variable_named(L"metaCont", 1);
    Array PArray16445 = new_Array_with(1, (Optr)VAR_metaCont_1_0);
    Symbol  SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend16447 = new_Send((Optr)VAR_message_0_1, SMB_selector_, 1, (Optr)SMB_value__Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16448 = new_Send((Optr)VAR_message_0_1, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_metaCont_1_0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16449 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_message_0_1, (Optr)VAR_aBlock_0_4);
    Array PThreadedCode16446 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend16447, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_metaCont_1_0, (Optr)&t_send2, (Optr)PSend16448, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_4, (Optr)&t_send2, (Optr)PSend16449, (Optr)&t_method_return);
    Block PBlock16444 = new_Block_with(PArray16445, empty_Array, PThreadedCode16446, 3, PSend16447, PSend16448, PSend16449);
    // on:. 
    Send PSend16443 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16444);
    Assign PAssign16442 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16443);
    Assign PAssign16450 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)VAR_saveContext_0_2);
    Array PThreadedCode16438 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16439, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16440, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16441, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16442, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16444, (Optr)&t_send1, (Optr)PSend16443, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16450, (Optr)&t_push_variable, (Optr)VAR_saveContext_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Method PMethod16435 = new_Method_with(PArray16436, PArray16437, empty_Array, PThreadedCode16438, 5, PAssign16439, PAssign16440, PAssign16442, PAssign16450, VAR_result_0_3);
    
    MethodClosure MC_SMB_continueOn_message_ = new_MethodClosure((Method)PMethod16435, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_continueOn_message_, MC_SMB_continueOn_message_);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray16452 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16455 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16457 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend16458 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16456 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16457, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend16458, (Optr)&t_method_return);
    Block PBlock16454 = new_Block_with(PArray16455, empty_Array, PThreadedCode16456, 2, PSend16457, PSend16458);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16459 = new_Send((Optr)PBlockClosure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16460 = new_Send((Optr)PBlock16454, SMB_value_, 1, (Optr)PSend16459);
    Array PThreadedCode16453 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16454, (Optr)&t_push_class_reference, (Optr)PBlockClosure_classReference, (Optr)&t_send0, (Optr)PSend16459, (Optr)&t_send1, (Optr)PSend16460, (Optr)&t_method_return);
    Method PMethod16451 = new_Method_with(PArray16452, empty_Array, empty_Array, PThreadedCode16453, 1, PSend16460);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod16451, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_send_to_() {
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16462 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16464 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    // send:to:class:. 
    Send PSend16465 = new_Send((Optr)self, SMB_send_to_class_, 3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)PSend16464);
    Array PThreadedCode16463 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16464, (Optr)&t_send3, (Optr)PSend16465, (Optr)&t_method_return);
    Method PMethod16461 = new_Method_with(PArray16462, empty_Array, empty_Array, PThreadedCode16463, 1, PSend16465);
    
    MethodClosure MC_SMB_send_to_ = new_MethodClosure((Method)PMethod16461, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_, MC_SMB_send_to_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray16467 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend16469 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Array PThreadedCode16468 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend16469, (Optr)&t_method_return);
    Method PMethod16466 = new_Method_with(PArray16467, empty_Array, empty_Array, PThreadedCode16468, 1, PSend16469);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod16466, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_invokeNativeMethod_on_message_alternative_() {
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray16471 = new_Array_with(4, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_aBlock_0_3);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Interpretation_minus_Interpreter = new_Symbol(L"Interpretation.Interpreter");
    Annotation PAnnotation16473 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_invokeNativeMethod_on_message_alternative_, (Optr)SMB_Interpretation_minus_Interpreter);
    Array PArray16472 = new_Array_with(1, (Optr)PAnnotation16473);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16475 = new_Send((Optr)VAR_aBlock_0_3, SMB_value, 0);
    Array PThreadedCode16474 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_send0, (Optr)PSend16475, (Optr)&t_method_return);
    NativeMethod PNativeMethod16470 = new_NativeMethod_with(PArray16471, empty_Array, PArray16472, PThreadedCode16474, 1, PSend16475);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_alternative_ = new_MethodClosure((Method)PNativeMethod16470, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeNativeMethod_on_message_alternative_, MC_SMB_invokeNativeMethod_on_message_alternative_);
}


static void init_SMB_sendNext_to_class_() {
    Symbol SMB_sendNext_to_class_ = new_Symbol(L"sendNext:to:class:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Array PArray16477 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_cls_0_2);
    Variable VAR_msg_0_3 = new_Variable_named(L"msg", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16478 = new_Array_with(2, (Optr)VAR_msg_0_3, (Optr)VAR_result_0_4);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    // send:to:class:. 
    Send PSend16484 = new_Send((Optr)self, SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_cls_0_2);
    Array PThreadedCode16483 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send3, (Optr)PSend16484, (Optr)&t_block_return);
    Block PBlock16482 = new_Block_with(empty_Array, empty_Array, PThreadedCode16483, 1, PSend16484);
    Variable VAR_next_1_0 = new_Variable_named(L"next", 1);
    Array PArray16486 = new_Array_with(1, (Optr)VAR_next_1_0);
    Assign PAssign16488 = new_Assign((Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)nil_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16492 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol  SMB_sendNext_to_ = new_Symbol(L"sendNext:to:");
    Constant SMB_sendNext_to__Const = new_Constant((Optr)SMB_sendNext_to_);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16494 = new_Send((Optr)SMB_sendNext_to__Const, SMB_class, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16495 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend16494);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend16496 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_message_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend16497 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)VAR_receiver_0_1);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend16498 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)VAR_cls_0_2);
    Array PThreadedCode16493 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_sendNext_to_, (Optr)&t_send0, (Optr)PSend16494, (Optr)&t_send1, (Optr)PSend16495, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send2, (Optr)PSend16496, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16497, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend16498, (Optr)&t_method_return);
    Block PBlock16491 = new_Block_with(PArray16492, empty_Array, PThreadedCode16493, 4, PSend16495, PSend16496, PSend16497, PSend16498);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16499 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)int_3_Const);
    // value:. 
    Send PSend16490 = new_Send((Optr)PBlock16491, SMB_value_, 1, (Optr)PSend16499);
    Assign PAssign16489 = new_Assign((Optr)VAR_msg_0_3, (Optr)PSend16490);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16500 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_msg_0_3, (Optr)VAR_next_1_0);
    Array PThreadedCode16487 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign16488, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16489, (Optr)&t_push_closure, (Optr)PBlock16491, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend16499, (Optr)&t_send1, (Optr)PSend16490, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_3, (Optr)&t_push_variable, (Optr)VAR_next_1_0, (Optr)&t_send2, (Optr)PSend16500, (Optr)&t_method_return);
    Block PBlock16485 = new_Block_with(PArray16486, empty_Array, PThreadedCode16487, 3, PAssign16488, PAssign16489, PSend16500);
    // ifNil:ifNotNil:. 
    Send PSend16481 = new_Send((Optr)slot_Interpretation_Interpreter_nextInterpreter, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock16482, (Optr)PBlock16485);
    Assign PAssign16480 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16481);
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    // swapInvokeNative. 
    Send PSend16501 = new_Send((Optr)self, SMB_swapInvokeNative, 0);
    Array PThreadedCode16479 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16480, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)&t_push_closure, (Optr)PBlock16482, (Optr)&t_push_closure, (Optr)PBlock16485, (Optr)&t_send2, (Optr)PSend16481, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16501, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Method PMethod16476 = new_Method_with(PArray16477, PArray16478, empty_Array, PThreadedCode16479, 3, PAssign16480, PSend16501, VAR_result_0_4);
    
    MethodClosure MC_SMB_sendNext_to_class_ = new_MethodClosure((Method)PMethod16476, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_sendNext_to_class_, MC_SMB_sendNext_to_class_);
}


static void init_SMB_lookupSelector_in_() {
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray16503 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Variable VAR_currentClass_0_2 = new_Variable_named(L"currentClass", 0);
    Array PArray16504 = new_Array_with(1, (Optr)VAR_currentClass_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16507 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign16509 = new_Assign((Optr)VAR_currentClass_0_2, (Optr)VAR_class_0_1);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16512 = new_Send((Optr)VAR_currentClass_0_2, SMB_isNil, 0);
    Array PThreadedCode16511 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16512, (Optr)&t_block_return);
    Block PBlock16510 = new_Block_with(empty_Array, empty_Array, PThreadedCode16511, 1, PSend16512);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend16515 = new_Send((Optr)VAR_currentClass_0_2, SMB_methodDict, 0);
    Variable VAR_method_2_0 = new_Variable_named(L"method", 2);
    Array PArray16517 = new_Array_with(1, (Optr)VAR_method_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16519 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_method_2_0);
    Array PThreadedCode16518 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_method_2_0, (Optr)&t_send1, (Optr)PSend16519, (Optr)&t_method_return);
    Block PBlock16516 = new_Block_with(PArray16517, empty_Array, PThreadedCode16518, 1, PSend16519);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend16520 = new_Send((Optr)PSend16515, SMB_at_ifPresent_, 2, (Optr)VAR_selector_0_0, (Optr)PBlock16516);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend16522 = new_Send((Optr)VAR_currentClass_0_2, SMB_superclass, 0);
    Assign PAssign16521 = new_Assign((Optr)VAR_currentClass_0_2, (Optr)PSend16522);
    Array PThreadedCode16514 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16515, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_closure, (Optr)PBlock16516, (Optr)&t_send2, (Optr)PSend16520, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16521, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16522, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16513 = new_Block_with(empty_Array, empty_Array, PThreadedCode16514, 2, PSend16520, PAssign16521);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16523 = new_Send((Optr)PBlock16510, SMB_whileFalse_, 1, (Optr)PBlock16513);
    Array PThreadedCode16508 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign16509, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16510, (Optr)&t_push_closure, (Optr)PBlock16513, (Optr)&t_send1, (Optr)PSend16523, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16506 = new_Block_with(PArray16507, empty_Array, PThreadedCode16508, 3, PAssign16509, PSend16523, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16524 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16506);
    Array PThreadedCode16505 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16506, (Optr)&t_send1, (Optr)PSend16524, (Optr)&t_method_return);
    Method PMethod16502 = new_Method_with(PArray16503, PArray16504, empty_Array, PThreadedCode16505, 1, PSend16524);
    
    MethodClosure MC_SMB_lookupSelector_in_ = new_MethodClosure((Method)PMethod16502, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_lookupSelector_in_, MC_SMB_lookupSelector_in_);
}


static void init_SMB_methodContextFor_receiver_message_() {
    Symbol SMB_methodContextFor_receiver_message_ = new_Symbol(L"methodContextFor:receiver:message:");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16526 = new_Array_with(3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16531 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend16533 = new_Send((Optr)VAR__receiver__1_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16534 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16535 = new_Send((Optr)VAR__receiver__1_0, SMB_closure_, 1, (Optr)VAR_closure_0_0);
    Array PThreadedCode16532 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16533, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16534, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend16535, (Optr)&t_method_return);
    Block PBlock16530 = new_Block_with(PArray16531, empty_Array, PThreadedCode16532, 3, PSend16533, PSend16534, PSend16535);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16540 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16539 = new_Send((Optr)PSend16540, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16538 = new_Send((Optr)PSend16539, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // code. 
    Send PSend16543 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend16542 = new_Send((Optr)PSend16543, SMB_locals, 0);
    // size. 
    Send PSend16541 = new_Send((Optr)PSend16542, SMB_size, 0);
    // +. 
    Send PSend16537 = new_Send((Optr)PSend16538, SMB__plus_, 1, (Optr)PSend16541);
    // new:. 
    Send PSend16536 = new_Send((Optr)PMethodContext_classReference, SMB_new_, 1, (Optr)PSend16537);
    // value:. 
    Send PSend16529 = new_Send((Optr)PBlock16530, SMB_value_, 1, (Optr)PSend16536);
    Assign PAssign16528 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16529);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16545 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16547 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_arg_1_0);
    Array PThreadedCode16546 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send2, (Optr)PSend16547, (Optr)&t_method_return);
    Block PBlock16544 = new_Block_with(PArray16545, empty_Array, PThreadedCode16546, 1, PSend16547);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16548 = new_Send((Optr)VAR_aMessage_0_2, SMB_withIndexDo_, 1, (Optr)PBlock16544);
    Array PThreadedCode16527 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign16528, (Optr)&t_push_closure, (Optr)PBlock16530, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16540, (Optr)&t_send0, (Optr)PSend16539, (Optr)&t_send0, (Optr)PSend16538, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16543, (Optr)&t_send0, (Optr)PSend16542, (Optr)&t_send0, (Optr)PSend16541, (Optr)&t_send1, (Optr)PSend16537, (Optr)&t_send1, (Optr)PSend16536, (Optr)&t_send1, (Optr)PSend16529, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock16544, (Optr)&t_send1, (Optr)PSend16548, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16525 = new_Method_with(PArray16526, empty_Array, empty_Array, PThreadedCode16527, 3, PAssign16528, PSend16548, self);
    
    MethodClosure MC_SMB_methodContextFor_receiver_message_ = new_MethodClosure((Method)PMethod16525, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_methodContextFor_receiver_message_, MC_SMB_methodContextFor_receiver_message_);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray16550 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend16552 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode16551 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend16552, (Optr)&t_method_return);
    Method PMethod16549 = new_Method_with(PArray16550, empty_Array, empty_Array, PThreadedCode16551, 1, PSend16552);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod16549, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_assignVariable_to_() {
    Symbol SMB_assignVariable_to_ = new_Symbol(L"assignVariable:to:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16554 = new_Array_with(2, (Optr)VAR_aVariable_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16556 = new_Send((Optr)VAR_aVariable_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16555 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send2, (Optr)PSend16556, (Optr)&t_method_return);
    Method PMethod16553 = new_Method_with(PArray16554, empty_Array, empty_Array, PThreadedCode16555, 1, PSend16556);
    
    MethodClosure MC_SMB_assignVariable_to_ = new_MethodClosure((Method)PMethod16553, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignVariable_to_, MC_SMB_assignVariable_to_);
}


static void init_SMB_assignUnsintSlot_to_() {
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16558 = new_Array_with(2, (Optr)VAR_aSlot_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16560 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16561 = new_Send((Optr)VAR_aSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)PSend16560);
    Array PThreadedCode16559 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16560, (Optr)&t_send2, (Optr)PSend16561, (Optr)&t_method_return);
    Method PMethod16557 = new_Method_with(PArray16558, empty_Array, empty_Array, PThreadedCode16559, 1, PSend16561);
    
    MethodClosure MC_SMB_assignUnsintSlot_to_ = new_MethodClosure((Method)PMethod16557, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignUnsintSlot_to_, MC_SMB_assignUnsintSlot_to_);
}


static void init_SMB_invokeMethod_on_message_() {
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16563 = new_Array_with(3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_method_0_3 = new_Variable_named(L"method", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16564 = new_Array_with(2, (Optr)VAR_method_0_3, (Optr)VAR_result_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16567 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16570 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Assign PAssign16569 = new_Assign((Optr)VAR_method_0_3, (Optr)PSend16570);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16571 = new_Send((Optr)VAR_method_0_3, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16572 = new_Send((Optr)PSend16571, SMB_size, 0);
    // size. 
    Send PSend16573 = new_Send((Optr)VAR_aMessage_0_2, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend16574 = new_Send((Optr)PSend16572, SMB__equals_, 1, (Optr)PSend16573);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend16575 = new_Send((Optr)self, SMB_assert_, 1, (Optr)PSend16574);
    // size. 
    Send PSend16576 = new_Send((Optr)VAR_method_0_3, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16577 = new_Send((Optr)PSend16576, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16581 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode16580 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16581, (Optr)&t_block_return);
    Block PBlock16579 = new_Block_with(empty_Array, empty_Array, PThreadedCode16580, 1, PSend16581);
    // ifTrue:. 
    Send PSend16578 = new_Send((Optr)PSend16577, SMB_ifTrue_, 1, (Optr)PBlock16579);
    Symbol SMB_methodContextFor_receiver_message_ = new_Symbol(L"methodContextFor:receiver:message:");
    // methodContextFor:receiver:message:. 
    Send PSend16582 = new_Send((Optr)self, SMB_methodContextFor_receiver_message_, 3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    // interpretMethod:. 
    Send PSend16584 = new_Send((Optr)self, SMB_interpretMethod_, 1, (Optr)VAR_method_0_3);
    Assign PAssign16583 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16584);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16586 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign16585 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16586);
    Array PThreadedCode16568 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign16569, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16570, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send0, (Optr)PSend16571, (Optr)&t_send0, (Optr)PSend16572, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend16573, (Optr)&t_send1, (Optr)PSend16574, (Optr)&t_send1, (Optr)PSend16575, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send0, (Optr)PSend16576, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16577, (Optr)&t_send_ifTrue_, (Optr)PSend16578, (Optr)PBlock16579, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16582, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16583, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send1, (Optr)PSend16584, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16585, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16586, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Block PBlock16566 = new_Block_with(PArray16567, empty_Array, PThreadedCode16568, 7, PAssign16569, PSend16575, PSend16578, PSend16582, PAssign16583, PAssign16585, VAR_result_0_4);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16587 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16566);
    Array PThreadedCode16565 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16566, (Optr)&t_send1, (Optr)PSend16587, (Optr)&t_method_return);
    Method PMethod16562 = new_Method_with(PArray16563, PArray16564, empty_Array, PThreadedCode16565, 1, PSend16587);
    
    MethodClosure MC_SMB_invokeMethod_on_message_ = new_MethodClosure((Method)PMethod16562, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeMethod_on_message_, MC_SMB_invokeMethod_on_message_);
}


static void init_SMB_sendDoesNotUnderstandFor_to_() {
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16589 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR_dnu_0_2 = new_Variable_named(L"dnu", 0);
    Array PArray16590 = new_Array_with(1, (Optr)VAR_dnu_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16593 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16595 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    Symbol  SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_doesNotUnderstand__Const = new_Constant((Optr)SMB_doesNotUnderstand_);
    // =. 
    Send PSend16596 = new_Send((Optr)PSend16595, SMB__equals_, 1, (Optr)SMB_doesNotUnderstand__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16600 = new_Send((Optr)VAR_aMessage_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    // recursiveDoesNotUnderstand:on:. 
    Send PSend16601 = new_Send((Optr)self, SMB_recursiveDoesNotUnderstand_on_, 2, (Optr)PSend16600, (Optr)VAR_receiver_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16602 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16601);
    Array PThreadedCode16599 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16600, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16601, (Optr)&t_send1, (Optr)PSend16602, (Optr)&t_block_return);
    Block PBlock16598 = new_Block_with(empty_Array, empty_Array, PThreadedCode16599, 1, PSend16602);
    // ifTrue:. 
    Send PSend16597 = new_Send((Optr)PSend16596, SMB_ifTrue_, 1, (Optr)PBlock16598);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16604 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Assign PAssign16603 = new_Assign((Optr)VAR_dnu_0_2, (Optr)PSend16604);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16605 = new_Send((Optr)VAR_dnu_0_2, SMB_selector_, 1, (Optr)SMB_doesNotUnderstand__Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16606 = new_Send((Optr)VAR_dnu_0_2, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_aMessage_0_0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16607 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_dnu_0_2, (Optr)VAR_receiver_0_1);
    Array PThreadedCode16594 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16595, (Optr)&t_push1, (Optr)SMB_doesNotUnderstand_, (Optr)&t_send1, (Optr)PSend16596, (Optr)&t_send_ifTrue_, (Optr)PSend16597, (Optr)PBlock16598, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16603, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16604, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push1, (Optr)SMB_doesNotUnderstand_, (Optr)&t_send1, (Optr)PSend16605, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send2, (Optr)PSend16606, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16607, (Optr)&t_method_return);
    Block PBlock16592 = new_Block_with(PArray16593, empty_Array, PThreadedCode16594, 5, PSend16597, PAssign16603, PSend16605, PSend16606, PSend16607);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16608 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16592);
    Array PThreadedCode16591 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16592, (Optr)&t_send1, (Optr)PSend16608, (Optr)&t_method_return);
    Method PMethod16588 = new_Method_with(PArray16589, PArray16590, empty_Array, PThreadedCode16591, 1, PSend16608);
    
    MethodClosure MC_SMB_sendDoesNotUnderstandFor_to_ = new_MethodClosure((Method)PMethod16588, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_sendDoesNotUnderstandFor_to_, MC_SMB_sendDoesNotUnderstandFor_to_);
}


static void init_SMB_swapInvokeNativeOn_message_() {
    Symbol SMB_swapInvokeNativeOn_message_ = new_Symbol(L"swapInvokeNativeOn:message:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray16610 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_message_0_1);
    Assign PAssign16612 = new_Assign((Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)VAR_receiver_0_0);
    Array PThreadedCode16611 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16612, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16609 = new_Method_with(PArray16610, empty_Array, empty_Array, PThreadedCode16611, 2, PAssign16612, self);
    
    MethodClosure MC_SMB_swapInvokeNativeOn_message_ = new_MethodClosure((Method)PMethod16609, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_swapInvokeNativeOn_message_, MC_SMB_swapInvokeNativeOn_message_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_aSend_0_3 = new_Variable_named(L"aSend", 0);
    Array PArray16614 = new_Array_with(4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Variable VAR_method_0_4 = new_Variable_named(L"method", 0);
    Array PArray16615 = new_Array_with(1, (Optr)VAR_method_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16618 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_inlineCache = new_Symbol(L"inlineCache");
    // inlineCache. 
    Send PSend16622 = new_Send((Optr)VAR_aSend_0_3, SMB_inlineCache, 0);
    Symbol SMB_checkCached_ = new_Symbol(L"checkCached:");
    // checkCached:. 
    Send PSend16621 = new_Send((Optr)PSend16622, SMB_checkCached_, 1, (Optr)VAR_class_0_2);
    Assign PAssign16620 = new_Assign((Optr)VAR_method_0_4, (Optr)PSend16621);
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    // accept:on:message:. 
    Send PSend16625 = new_Send((Optr)VAR_method_0_4, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16626 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16625);
    Array PThreadedCode16624 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16625, (Optr)&t_send1, (Optr)PSend16626, (Optr)&t_block_return);
    Block PBlock16623 = new_Block_with(empty_Array, empty_Array, PThreadedCode16624, 1, PSend16626);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend16627 = new_Send((Optr)VAR_method_0_4, SMB_ifNotNil_, 1, (Optr)PBlock16623);
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16630 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    // lookupSelector:in:. 
    Send PSend16629 = new_Send((Optr)self, SMB_lookupSelector_in_, 2, (Optr)PSend16630, (Optr)VAR_class_0_2);
    Assign PAssign16628 = new_Assign((Optr)VAR_method_0_4, (Optr)PSend16629);
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    // sendDoesNotUnderstandFor:to:. 
    Send PSend16633 = new_Send((Optr)self, SMB_sendDoesNotUnderstandFor_to_, 2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    // escape:. 
    Send PSend16634 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16633);
    Array PThreadedCode16632 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16633, (Optr)&t_send1, (Optr)PSend16634, (Optr)&t_block_return);
    Block PBlock16631 = new_Block_with(empty_Array, empty_Array, PThreadedCode16632, 1, PSend16634);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend16635 = new_Send((Optr)VAR_method_0_4, SMB_ifNil_, 1, (Optr)PBlock16631);
    // inlineCache. 
    Send PSend16636 = new_Send((Optr)VAR_aSend_0_3, SMB_inlineCache, 0);
    Symbol SMB_cache_at_ = new_Symbol(L"cache:at:");
    // cache:at:. 
    Send PSend16637 = new_Send((Optr)PSend16636, SMB_cache_at_, 2, (Optr)VAR_method_0_4, (Optr)VAR_class_0_2);
    // accept:on:message:. 
    Send PSend16638 = new_Send((Optr)VAR_method_0_4, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode16619 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign16620, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_send0, (Optr)PSend16622, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send1, (Optr)PSend16621, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_closure, (Optr)PBlock16623, (Optr)&t_send1, (Optr)PSend16627, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16628, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16630, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16629, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_closure, (Optr)PBlock16631, (Optr)&t_send1, (Optr)PSend16635, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_send0, (Optr)PSend16636, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16637, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16638, (Optr)&t_method_return);
    Block PBlock16617 = new_Block_with(PArray16618, empty_Array, PThreadedCode16619, 6, PAssign16620, PSend16627, PAssign16628, PSend16635, PSend16637, PSend16638);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16639 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16617);
    Array PThreadedCode16616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16617, (Optr)&t_send1, (Optr)PSend16639, (Optr)&t_method_return);
    Method PMethod16613 = new_Method_with(PArray16614, PArray16615, empty_Array, PThreadedCode16616, 1, PSend16639);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16613, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_class_for_, MC_SMB_send_to_class_for_);
}


static void init_class_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray16641 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16643 = new_Send((Optr)self, SMB_new, 0);
    // interpret:. 
    Send PSend16644 = new_Send((Optr)PSend16643, SMB_interpret_, 1, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode16642 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16643, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend16644, (Optr)&t_method_return);
    Method PMethod16640 = new_Method_with(PArray16641, empty_Array, empty_Array, PThreadedCode16642, 1, PSend16644);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16640, HEADER(Interpretation_Interpreter_Class));
    store_method(HEADER(Interpretation_Interpreter_Class), SMB_interpret_, MC_SMB_interpret_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Interpretation_minus_Interpreter = new_Symbol(L"Interpretation.Interpreter");
    String string_16647 = new_String(L"plugin/interpretation/Interpreter.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Interpretation_minus_Interpreter_Const = new_Constant((Optr)SMB_Interpretation_minus_Interpreter);
    Constant string_16647_Const = new_Constant((Optr)string_16647);
    // require:at:. 
    Send PSend16648 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Interpretation_minus_Interpreter_Const, (Optr)string_16647_Const);
    Array PThreadedCode16646 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Interpretation_minus_Interpreter, (Optr)&t_push1, (Optr)string_16647, (Optr)&t_send2, (Optr)PSend16648, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16645 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16646, 2, PSend16648, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16645, HEADER(Interpretation_Interpreter_Class));
    store_method(HEADER(Interpretation_Interpreter_Class), SMB_initialize, MC_SMB_initialize);
}

void init_Interpretation_PInterpreter_layout() {
    layout_Interpretation_Interpreter_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_Interpreter_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_Interpreter_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_Interpreter_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_Interpreter_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_Interpreter_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Interpreter = new_Symbol(L"Interpreter");
    slot_Interpretation_Interpreter_context = (Optr)new_Slot(0, L"context");
    slot_Interpretation_Interpreter_nextInterpreter = (Optr)new_Slot(1, L"nextInterpreter");
    layout_Interpretation_Interpreter = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Interpretation_Interpreter)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_Interpreter)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    Interpretation_Interpreter_Class = (Class)new_Class(Object_Class, layout_Interpretation_Interpreter_Class_class);
    Interpretation_Interpreter_Class->layout = layout_Interpretation_Interpreter;
    Interpretation_Interpreter_Class->name = SMB_Interpreter;
    
}

void init_Interpretation_PInterpreter_methods() {
    init_SMB_send_to_class_();
    init_SMB_interpret_();
    init_SMB_continueEscape_message_();
    init_SMB_invokeNativeMethod_on_message_();
    init_SMB_interpretMethod_();
    init_SMB_interpretBlock_();
    init_SMB_visitDirectVariable_();
    init_SMB_visitSlot_();
    init_SMB_classOf_();
    init_SMB_visitAssign_();
    init_SMB_visitSelf_();
    init_SMB_blockContextFor_message_();
    init_SMB_recursiveDoesNotUnderstand_on_();
    init_SMB_currentClass();
    init_SMB_blockclosureValueWithArguments_message_();
    init_SMB_visitSuper_();
    init_SMB_visitSend_();
    init_SMB_invokeReflectionMethod_on_message_();
    init_SMB_blockclosureValue_message_();
    init_SMB_visitVariable_();
    init_SMB_currentSelf();
    init_SMB_visitUnsintSlot_();
    init_SMB_assignSlot_to_();
    init_SMB_continueOn_message_();
    init_SMB_visitBlock_();
    init_SMB_send_to_();
    init_SMB_visitClassReference_();
    init_SMB_invokeNativeMethod_on_message_alternative_();
    init_SMB_sendNext_to_class_();
    init_SMB_lookupSelector_in_();
    init_SMB_methodContextFor_receiver_message_();
    init_SMB_visitConstant_();
    init_SMB_assignVariable_to_();
    init_SMB_assignUnsintSlot_to_();
    init_SMB_invokeMethod_on_message_();
    init_SMB_sendDoesNotUnderstandFor_to_();
    init_SMB_swapInvokeNativeOn_message_();
    init_SMB_send_to_class_for_();
    init_class_SMB_interpret_();
    init_class_SMB_initialize();
    
}