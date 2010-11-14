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
    Array PArray16139 = new_Array_with(3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Variable VAR_method_0_3 = new_Variable_named(L"method", 0);
    Array PArray16140 = new_Array_with(1, (Optr)VAR_method_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16143 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16147 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    // lookupSelector:in:. 
    Send PSend16146 = new_Send((Optr)self, SMB_lookupSelector_in_, 2, (Optr)PSend16147, (Optr)VAR_class_0_2);
    Assign PAssign16145 = new_Assign((Optr)VAR_method_0_3, (Optr)PSend16146);
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    // sendDoesNotUnderstandFor:to:. 
    Send PSend16150 = new_Send((Optr)self, SMB_sendDoesNotUnderstandFor_to_, 2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16151 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16150);
    Array PThreadedCode16149 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16150, (Optr)&t_send1, (Optr)PSend16151, (Optr)&t_block_return);
    Block PBlock16148 = new_Block_with(empty_Array, empty_Array, PThreadedCode16149, 1, PSend16151);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend16152 = new_Send((Optr)VAR_method_0_3, SMB_ifNil_, 1, (Optr)PBlock16148);
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    // accept:on:message:. 
    Send PSend16153 = new_Send((Optr)VAR_method_0_3, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode16144 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16145, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16147, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16146, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_push_closure, (Optr)PBlock16148, (Optr)&t_send1, (Optr)PSend16152, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16153, (Optr)&t_method_return);
    Block PBlock16142 = new_Block_with(PArray16143, empty_Array, PThreadedCode16144, 3, PAssign16145, PSend16152, PSend16153);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16154 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16142);
    Array PThreadedCode16141 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16142, (Optr)&t_send1, (Optr)PSend16154, (Optr)&t_method_return);
    Method PMethod16138 = new_Method_with(PArray16139, PArray16140, empty_Array, PThreadedCode16141, 1, PSend16154);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16138, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_interpret_() {
    /*
    interpret: aClosure
// 	^ self new interpret: aClosure
    */
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray16156 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16158 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
    Symbol  SMB_value = new_Symbol(L"value");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value_Const = new_Constant((Optr)SMB_value);
    // selector:. 
    Send PSend16159 = new_Send((Optr)PSend16158, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16160 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend16159, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode16157 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend16158, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend16159, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send2, (Optr)PSend16160, (Optr)&t_method_return);
    Method PMethod16155 = new_Method_with(PArray16156, empty_Array, empty_Array, PThreadedCode16157, 1, PSend16160);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16155, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_continueEscape_message_() {
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16162 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16164 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16165 = new_Send((Optr)VAR_aContinuation_0_0, SMB_escape_, 1, (Optr)PSend16164);
    Array PThreadedCode16163 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16164, (Optr)&t_send1, (Optr)PSend16165, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16161 = new_Method_with(PArray16162, empty_Array, empty_Array, PThreadedCode16163, 2, PSend16165, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod16161, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_continueEscape_message_, MC_SMB_continueEscape_message_);
}


static void init_SMB_invokeNativeMethod_on_message_() {
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16167 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray16168 = new_Array_with(1, (Optr)VAR_result_0_3);
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    // swapInvokeNative. 
    Send PSend16170 = new_Send((Optr)self, SMB_swapInvokeNative, 0);
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend16175 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Array PThreadedCode16174 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16175, (Optr)&t_block_return);
    Block PBlock16173 = new_Block_with(empty_Array, empty_Array, PThreadedCode16174, 1, PSend16175);
    // invokeNativeMethod:on:message:alternative:. 
    Send PSend16172 = new_Send((Optr)self, SMB_invokeNativeMethod_on_message_alternative_, 4, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2, (Optr)PBlock16173);
    Assign PAssign16171 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16172);
    // swapInvokeNative. 
    Send PSend16176 = new_Send((Optr)nil_Const, SMB_swapInvokeNative, 0);
    Array PThreadedCode16169 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16170, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16171, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock16173, (Optr)&t_send4, (Optr)PSend16172, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_nil, (Optr)&t_send0, (Optr)PSend16176, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Method PMethod16166 = new_Method_with(PArray16167, PArray16168, empty_Array, PThreadedCode16169, 4, PSend16170, PAssign16171, PSend16176, VAR_result_0_3);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_ = new_MethodClosure((Method)PMethod16166, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeNativeMethod_on_message_, MC_SMB_invokeNativeMethod_on_message_);
}


static void init_SMB_interpretMethod_() {
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray16178 = new_Array_with(1, (Optr)VAR_method_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray16179 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16181 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16185 = new_Send((Optr)VAR_pc_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16184 = new_Assign((Optr)VAR_pc_0_1, (Optr)PSend16185);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16186 = new_Send((Optr)VAR_method_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend16187 = new_Send((Optr)PAssign16184, SMB__lt_, 1, (Optr)PSend16186);
    Array PThreadedCode16183 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16184, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16185, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_send0, (Optr)PSend16186, (Optr)&t_send1, (Optr)PSend16187, (Optr)&t_block_return);
    Block PBlock16182 = new_Block_with(empty_Array, empty_Array, PThreadedCode16183, 1, PSend16187);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend16190 = new_Send((Optr)VAR_method_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16191 = new_Send((Optr)PSend16190, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16189 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16190, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16191, (Optr)&t_block_return);
    Block PBlock16188 = new_Block_with(empty_Array, empty_Array, PThreadedCode16189, 1, PSend16191);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16192 = new_Send((Optr)PBlock16182, SMB_whileTrue_, 1, (Optr)PBlock16188);
    // at:. 
    Send PSend16193 = new_Send((Optr)VAR_method_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    // accept:. 
    Send PSend16194 = new_Send((Optr)PSend16193, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16180 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign16181, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16182, (Optr)&t_push_closure, (Optr)PBlock16188, (Optr)&t_send1, (Optr)PSend16192, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16193, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16194, (Optr)&t_method_return);
    Method PMethod16177 = new_Method_with(PArray16178, PArray16179, empty_Array, PThreadedCode16180, 3, PAssign16181, PSend16192, PSend16194);
    
    MethodClosure MC_SMB_interpretMethod_ = new_MethodClosure((Method)PMethod16177, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpretMethod_, MC_SMB_interpretMethod_);
}


static void init_SMB_interpretBlock_() {
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray16196 = new_Array_with(1, (Optr)VAR_block_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray16197 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16199 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16203 = new_Send((Optr)VAR_pc_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16202 = new_Assign((Optr)VAR_pc_0_1, (Optr)PSend16203);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16204 = new_Send((Optr)VAR_block_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend16205 = new_Send((Optr)PAssign16202, SMB__lt_, 1, (Optr)PSend16204);
    Array PThreadedCode16201 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16202, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16203, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend16204, (Optr)&t_send1, (Optr)PSend16205, (Optr)&t_block_return);
    Block PBlock16200 = new_Block_with(empty_Array, empty_Array, PThreadedCode16201, 1, PSend16205);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend16208 = new_Send((Optr)VAR_block_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16209 = new_Send((Optr)PSend16208, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16207 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16208, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16209, (Optr)&t_block_return);
    Block PBlock16206 = new_Block_with(empty_Array, empty_Array, PThreadedCode16207, 1, PSend16209);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16210 = new_Send((Optr)PBlock16200, SMB_whileTrue_, 1, (Optr)PBlock16206);
    // at:. 
    Send PSend16211 = new_Send((Optr)VAR_block_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    // accept:. 
    Send PSend16212 = new_Send((Optr)PSend16211, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16198 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign16199, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16200, (Optr)&t_push_closure, (Optr)PBlock16206, (Optr)&t_send1, (Optr)PSend16210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16211, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16212, (Optr)&t_method_return);
    Method PMethod16195 = new_Method_with(PArray16196, PArray16197, empty_Array, PThreadedCode16198, 3, PAssign16199, PSend16210, PSend16212);
    
    MethodClosure MC_SMB_interpretBlock_ = new_MethodClosure((Method)PMethod16195, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpretBlock_, MC_SMB_interpretBlock_);
}


static void init_SMB_visitDirectVariable_() {
    Symbol SMB_visitDirectVariable_ = new_Symbol(L"visitDirectVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray16214 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16216 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)nil_Const);
    Array PThreadedCode16215 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16216, (Optr)&t_method_return);
    Method PMethod16213 = new_Method_with(PArray16214, empty_Array, empty_Array, PThreadedCode16215, 1, PSend16216);
    
    MethodClosure MC_SMB_visitDirectVariable_ = new_MethodClosure((Method)PMethod16213, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitDirectVariable_, MC_SMB_visitDirectVariable_);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Array PArray16218 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16220 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16221 = new_Send((Optr)VAR_aSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16220);
    Array PThreadedCode16219 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16220, (Optr)&t_send1, (Optr)PSend16221, (Optr)&t_method_return);
    Method PMethod16217 = new_Method_with(PArray16218, empty_Array, empty_Array, PThreadedCode16219, 1, PSend16221);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod16217, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_classOf_() {
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16223 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16225 = new_Send((Optr)VAR_anObject_0_0, SMB_class, 0);
    Array PThreadedCode16224 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend16225, (Optr)&t_method_return);
    Method PMethod16222 = new_Method_with(PArray16223, empty_Array, empty_Array, PThreadedCode16224, 1, PSend16225);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod16222, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_classOf_, MC_SMB_classOf_);
}


static void init_SMB_visitAssign_() {
    Symbol SMB_visitAssign_ = new_Symbol(L"visitAssign:");
    Variable VAR_anAssign_0_0 = new_Variable_named(L"anAssign", 0);
    Array PArray16227 = new_Array_with(1, (Optr)VAR_anAssign_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16228 = new_Array_with(1, (Optr)VAR_value_0_1);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend16232 = new_Send((Optr)VAR_anAssign_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16231 = new_Send((Optr)PSend16232, SMB_accept_, 1, (Optr)self);
    Assign PAssign16230 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend16231);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend16233 = new_Send((Optr)VAR_anAssign_0_0, SMB_variable, 0);
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    // assignFor:to:. 
    Send PSend16234 = new_Send((Optr)PSend16233, SMB_assignFor_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode16229 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign16230, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend16232, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16231, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend16233, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend16234, (Optr)&t_method_return);
    Method PMethod16226 = new_Method_with(PArray16227, PArray16228, empty_Array, PThreadedCode16229, 2, PAssign16230, PSend16234);
    
    MethodClosure MC_SMB_visitAssign_ = new_MethodClosure((Method)PMethod16226, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitAssign_, MC_SMB_visitAssign_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray16236 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16238 = new_Send((Optr)self, SMB_currentSelf, 0);
    Array PThreadedCode16237 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16238, (Optr)&t_method_return);
    Method PMethod16235 = new_Method_with(PArray16236, empty_Array, empty_Array, PThreadedCode16237, 1, PSend16238);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod16235, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_swapInvokeNativeOn_message_() {
    Symbol SMB_swapInvokeNativeOn_message_ = new_Symbol(L"swapInvokeNativeOn:message:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray16240 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_message_0_1);
    Assign PAssign16242 = new_Assign((Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)VAR_receiver_0_0);
    Array PThreadedCode16241 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16242, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16239 = new_Method_with(PArray16240, empty_Array, empty_Array, PThreadedCode16241, 2, PAssign16242, self);
    
    MethodClosure MC_SMB_swapInvokeNativeOn_message_ = new_MethodClosure((Method)PMethod16239, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_swapInvokeNativeOn_message_, MC_SMB_swapInvokeNativeOn_message_);
}


static void init_SMB_blockContextFor_message_() {
    Symbol SMB_blockContextFor_message_ = new_Symbol(L"blockContextFor:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16244 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray16245 = new_Array_with(2, (Optr)VAR_block_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16248 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_code, 0);
    Assign PAssign16247 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend16248);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16252 = new_Send((Optr)VAR_block_0_2, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16251 = new_Send((Optr)PSend16252, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend16254 = new_Send((Optr)VAR_block_0_2, SMB_locals, 0);
    // size. 
    Send PSend16253 = new_Send((Optr)PSend16254, SMB_size, 0);
    // +. 
    Send PSend16250 = new_Send((Optr)PSend16251, SMB__plus_, 1, (Optr)PSend16253);
    Assign PAssign16249 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend16250);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16255 = new_Send((Optr)VAR_size_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16260 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Assign PAssign16259 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16260);
    Array PThreadedCode16258 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign16259, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16260, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16257 = new_Block_with(empty_Array, empty_Array, PThreadedCode16258, 1, PAssign16259);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16266 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend16268 = new_Send((Optr)VAR__receiver__1_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    // context. 
    Send PSend16269 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    // outerScope:. 
    Send PSend16270 = new_Send((Optr)VAR__receiver__1_0, SMB_outerScope_, 1, (Optr)PSend16269);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16271 = new_Send((Optr)VAR__receiver__1_0, SMB_closure_, 1, (Optr)VAR_aBlockClosure_0_0);
    // context. 
    Send PSend16272 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16273 = new_Send((Optr)PSend16272, SMB_homeContext, 0);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend16274 = new_Send((Optr)VAR__receiver__1_0, SMB_homeContext_, 1, (Optr)PSend16273);
    Array PThreadedCode16267 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16269, (Optr)&t_send1, (Optr)PSend16270, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send1, (Optr)PSend16271, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16272, (Optr)&t_send0, (Optr)PSend16273, (Optr)&t_send1, (Optr)PSend16274, (Optr)&t_method_return);
    Block PBlock16265 = new_Block_with(PArray16266, empty_Array, PThreadedCode16267, 4, PSend16268, PSend16270, PSend16271, PSend16274);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16275 = new_Send((Optr)PBlockContext_classReference, SMB_new_, 1, (Optr)VAR_size_0_3);
    // value:. 
    Send PSend16264 = new_Send((Optr)PBlock16265, SMB_value_, 1, (Optr)PSend16275);
    Assign PAssign16263 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16264);
    Array PThreadedCode16262 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign16263, (Optr)&t_push_closure, (Optr)PBlock16265, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend16275, (Optr)&t_send1, (Optr)PSend16264, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16261 = new_Block_with(empty_Array, empty_Array, PThreadedCode16262, 1, PAssign16263);
    // ifTrue:ifFalse:. 
    Send PSend16256 = new_Send((Optr)PSend16255, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16257, (Optr)PBlock16261);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16277 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16279 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_value_1_0);
    Array PThreadedCode16278 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send2, (Optr)PSend16279, (Optr)&t_method_return);
    Block PBlock16276 = new_Block_with(PArray16277, empty_Array, PThreadedCode16278, 1, PSend16279);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16280 = new_Send((Optr)VAR_aMessage_0_1, SMB_withIndexDo_, 1, (Optr)PBlock16276);
    Array PThreadedCode16246 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign16247, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16248, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16249, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16252, (Optr)&t_send0, (Optr)PSend16251, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16254, (Optr)&t_send0, (Optr)PSend16253, (Optr)&t_send1, (Optr)PSend16250, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16255, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16256, (Optr)PBlock16257, (Optr)PBlock16261, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_closure, (Optr)PBlock16276, (Optr)&t_send1, (Optr)PSend16280, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16243 = new_Method_with(PArray16244, PArray16245, empty_Array, PThreadedCode16246, 5, PAssign16247, PAssign16249, PSend16256, PSend16280, self);
    
    MethodClosure MC_SMB_blockContextFor_message_ = new_MethodClosure((Method)PMethod16243, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockContextFor_message_, MC_SMB_blockContextFor_message_);
}


static void init_SMB_recursiveDoesNotUnderstand_on_() {
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16282 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16285 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16287 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16288 = new_Send((Optr)VAR_receiver_0_1, SMB_class, 0);
    Symbol SMB_cls_ = new_Symbol(L"cls:");
    // cls:. 
    Send PSend16289 = new_Send((Optr)VAR__receiver__1_0, SMB_cls_, 1, (Optr)PSend16288);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend16290 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_aMessage_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend16291 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode16286 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send0, (Optr)PSend16288, (Optr)&t_send1, (Optr)PSend16289, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend16290, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16291, (Optr)&t_method_return);
    Block PBlock16284 = new_Block_with(PArray16285, empty_Array, PThreadedCode16286, 4, PSend16287, PSend16289, PSend16290, PSend16291);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16292 = new_Send((Optr)PRecursiveDoesNotUnderstand_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16293 = new_Send((Optr)PBlock16284, SMB_value_, 1, (Optr)PSend16292);
    Array PThreadedCode16283 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16284, (Optr)&t_push_class_reference, (Optr)PRecursiveDoesNotUnderstand_classReference, (Optr)&t_send0, (Optr)PSend16292, (Optr)&t_send1, (Optr)PSend16293, (Optr)&t_method_return);
    Method PMethod16281 = new_Method_with(PArray16282, empty_Array, empty_Array, PThreadedCode16283, 1, PSend16293);
    
    MethodClosure MC_SMB_recursiveDoesNotUnderstand_on_ = new_MethodClosure((Method)PMethod16281, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_recursiveDoesNotUnderstand_on_, MC_SMB_recursiveDoesNotUnderstand_on_);
}


static void init_SMB_currentClass() {
    Symbol SMB_currentClass = new_Symbol(L"currentClass");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16296 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    // methodClass. 
    Send PSend16297 = new_Send((Optr)PSend16296, SMB_methodClass, 0);
    Array PThreadedCode16295 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16296, (Optr)&t_send0, (Optr)PSend16297, (Optr)&t_method_return);
    Method PMethod16294 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16295, 1, PSend16297);
    
    MethodClosure MC_SMB_currentClass = new_MethodClosure((Method)PMethod16294, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_currentClass, MC_SMB_currentClass);
}


static void init_SMB_blockclosureValueWithArguments_message_() {
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16299 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16301 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    // blockclosureValue:message:. 
    Send PSend16302 = new_Send((Optr)self, SMB_blockclosureValue_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)PSend16301);
    Array PThreadedCode16300 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16301, (Optr)&t_send2, (Optr)PSend16302, (Optr)&t_method_return);
    Method PMethod16298 = new_Method_with(PArray16299, empty_Array, empty_Array, PThreadedCode16300, 1, PSend16302);
    
    MethodClosure MC_SMB_blockclosureValueWithArguments_message_ = new_MethodClosure((Method)PMethod16298, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockclosureValueWithArguments_message_, MC_SMB_blockclosureValueWithArguments_message_);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_aSuper_0_0 = new_Variable_named(L"aSuper", 0);
    Array PArray16304 = new_Array_with(1, (Optr)VAR_aSuper_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray16305 = new_Array_with(2, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16308 = new_Send((Optr)self, SMB_currentSelf, 0);
    Assign PAssign16307 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend16308);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16311 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    // new:. 
    Send PSend16310 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend16311);
    Assign PAssign16309 = new_Assign((Optr)VAR_message_0_2, (Optr)PSend16310);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend16312 = new_Send((Optr)VAR_aSuper_0_0, SMB_message, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16313 = new_Send((Optr)VAR_message_0_2, SMB_selector_, 1, (Optr)PSend16312);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16315 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16317 = new_Send((Optr)VAR_arg_1_0, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16318 = new_Send((Optr)VAR_message_0_2, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend16317);
    Array PThreadedCode16316 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16317, (Optr)&t_send2, (Optr)PSend16318, (Optr)&t_method_return);
    Block PBlock16314 = new_Block_with(PArray16315, empty_Array, PThreadedCode16316, 1, PSend16318);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16319 = new_Send((Optr)VAR_aSuper_0_0, SMB_withIndexDo_, 1, (Optr)PBlock16314);
    Symbol SMB_currentClass = new_Symbol(L"currentClass");
    // currentClass. 
    Send PSend16320 = new_Send((Optr)self, SMB_currentClass, 0);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend16321 = new_Send((Optr)PSend16320, SMB_superclass, 0);
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    // send:to:class:for:. 
    Send PSend16322 = new_Send((Optr)self, SMB_send_to_class_for_, 4, (Optr)VAR_message_0_2, (Optr)VAR_receiver_0_1, (Optr)PSend16321, (Optr)VAR_aSuper_0_0);
    Array PThreadedCode16306 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push1, (Optr)PAssign16307, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16309, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend16311, (Optr)&t_send1, (Optr)PSend16310, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend16312, (Optr)&t_send1, (Optr)PSend16313, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_push_closure, (Optr)PBlock16314, (Optr)&t_send1, (Optr)PSend16319, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16320, (Optr)&t_send0, (Optr)PSend16321, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send4, (Optr)PSend16322, (Optr)&t_method_return);
    Method PMethod16303 = new_Method_with(PArray16304, PArray16305, empty_Array, PThreadedCode16306, 5, PAssign16307, PAssign16309, PSend16313, PSend16319, PSend16322);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod16303, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16324 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray16325 = new_Array_with(2, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16329 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16328 = new_Send((Optr)PSend16329, SMB_accept_, 1, (Optr)self);
    Assign PAssign16327 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend16328);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16332 = new_Send((Optr)VAR_aSend_0_0, SMB_size, 0);
    // new:. 
    Send PSend16331 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend16332);
    Assign PAssign16330 = new_Assign((Optr)VAR_message_0_2, (Optr)PSend16331);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend16333 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16334 = new_Send((Optr)VAR_message_0_2, SMB_selector_, 1, (Optr)PSend16333);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16336 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    // accept:. 
    Send PSend16338 = new_Send((Optr)VAR_arg_1_0, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16339 = new_Send((Optr)VAR_message_0_2, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend16338);
    Array PThreadedCode16337 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16338, (Optr)&t_send2, (Optr)PSend16339, (Optr)&t_method_return);
    Block PBlock16335 = new_Block_with(PArray16336, empty_Array, PThreadedCode16337, 1, PSend16339);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16340 = new_Send((Optr)VAR_aSend_0_0, SMB_withIndexDo_, 1, (Optr)PBlock16335);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16341 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    // send:to:class:for:. 
    Send PSend16342 = new_Send((Optr)self, SMB_send_to_class_for_, 4, (Optr)VAR_message_0_2, (Optr)VAR_receiver_0_1, (Optr)PSend16341, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16326 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign16327, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16329, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16328, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16330, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16332, (Optr)&t_send1, (Optr)PSend16331, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16333, (Optr)&t_send1, (Optr)PSend16334, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_closure, (Optr)PBlock16335, (Optr)&t_send1, (Optr)PSend16340, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16341, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send4, (Optr)PSend16342, (Optr)&t_method_return);
    Method PMethod16323 = new_Method_with(PArray16324, PArray16325, empty_Array, PThreadedCode16326, 5, PAssign16327, PAssign16330, PSend16334, PSend16340, PSend16342);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16323, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSend_, MC_SMB_visitSend_);
}


static void init_SMB_invokeReflectionMethod_on_message_() {
    Symbol SMB_invokeReflectionMethod_on_message_ = new_Symbol(L"invokeReflectionMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16344 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_annotation_0_3 = new_Variable_named(L"annotation", 0);
    Variable VAR_selector_0_4 = new_Variable_named(L"selector", 0);
    Array PArray16345 = new_Array_with(2, (Optr)VAR_annotation_0_3, (Optr)VAR_selector_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16348 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotationAt:. 
    Send PSend16351 = new_Send((Optr)VAR_aClosure_0_0, SMB_annotationAt_, 1, (Optr)SMB_pinocchioReflective__Const);
    Assign PAssign16350 = new_Assign((Optr)VAR_annotation_0_3, (Optr)PSend16351);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16353 = new_Send((Optr)VAR_annotation_0_3, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16352 = new_Assign((Optr)VAR_selector_0_4, (Optr)PSend16353);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend16354 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)VAR_selector_0_4);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend16358 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    // perform:withArguments:. 
    Send PSend16359 = new_Send((Optr)self, SMB_perform_withArguments_, 2, (Optr)VAR_selector_0_4, (Optr)PSend16358);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16360 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16359);
    Array PThreadedCode16357 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_4, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send2, (Optr)PSend16358, (Optr)&t_send2, (Optr)PSend16359, (Optr)&t_send1, (Optr)PSend16360, (Optr)&t_block_return);
    Block PBlock16356 = new_Block_with(empty_Array, empty_Array, PThreadedCode16357, 1, PSend16360);
    // ifTrue:. 
    Send PSend16355 = new_Send((Optr)PSend16354, SMB_ifTrue_, 1, (Optr)PBlock16356);
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend16361 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Array PThreadedCode16349 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign16350, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend16351, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16352, (Optr)&t_push_variable, (Optr)VAR_annotation_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16353, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_4, (Optr)&t_send1, (Optr)PSend16354, (Optr)&t_send_ifTrue_, (Optr)PSend16355, (Optr)PBlock16356, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16361, (Optr)&t_method_return);
    Block PBlock16347 = new_Block_with(PArray16348, empty_Array, PThreadedCode16349, 4, PAssign16350, PAssign16352, PSend16355, PSend16361);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16362 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16347);
    Array PThreadedCode16346 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16347, (Optr)&t_send1, (Optr)PSend16362, (Optr)&t_method_return);
    Method PMethod16343 = new_Method_with(PArray16344, PArray16345, empty_Array, PThreadedCode16346, 1, PSend16362);
    
    MethodClosure MC_SMB_invokeReflectionMethod_on_message_ = new_MethodClosure((Method)PMethod16343, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeReflectionMethod_on_message_, MC_SMB_invokeReflectionMethod_on_message_);
}


static void init_SMB_blockclosureValue_message_() {
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16364 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_returnContext_0_4 = new_Variable_named(L"returnContext", 0);
    Array PArray16365 = new_Array_with(3, (Optr)VAR_block_0_2, (Optr)VAR_result_0_3, (Optr)VAR_returnContext_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16368 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16371 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_code, 0);
    Assign PAssign16370 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend16371);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16372 = new_Send((Optr)VAR_block_0_2, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16373 = new_Send((Optr)PSend16372, SMB_size, 0);
    // size. 
    Send PSend16374 = new_Send((Optr)VAR_aMessage_0_1, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend16375 = new_Send((Optr)PSend16373, SMB__equals_, 1, (Optr)PSend16374);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend16376 = new_Send((Optr)self, SMB_assert_, 1, (Optr)PSend16375);
    // size. 
    Send PSend16377 = new_Send((Optr)VAR_block_0_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16378 = new_Send((Optr)PSend16377, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16382 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode16381 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16382, (Optr)&t_block_return);
    Block PBlock16380 = new_Block_with(empty_Array, empty_Array, PThreadedCode16381, 1, PSend16382);
    // ifTrue:. 
    Send PSend16379 = new_Send((Optr)PSend16378, SMB_ifTrue_, 1, (Optr)PBlock16380);
    Assign PAssign16383 = new_Assign((Optr)VAR_returnContext_0_4, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_blockContextFor_message_ = new_Symbol(L"blockContextFor:message:");
    // blockContextFor:message:. 
    Send PSend16384 = new_Send((Optr)self, SMB_blockContextFor_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    // interpretBlock:. 
    Send PSend16386 = new_Send((Optr)self, SMB_interpretBlock_, 1, (Optr)VAR_block_0_2);
    Assign PAssign16385 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16386);
    Assign PAssign16387 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)VAR_returnContext_0_4);
    Array PThreadedCode16369 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign16370, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16371, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16372, (Optr)&t_send0, (Optr)PSend16373, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_send0, (Optr)PSend16374, (Optr)&t_send1, (Optr)PSend16375, (Optr)&t_send1, (Optr)PSend16376, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16377, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16378, (Optr)&t_send_ifTrue_, (Optr)PSend16379, (Optr)PBlock16380, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16383, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_send2, (Optr)PSend16384, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16385, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend16386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16387, (Optr)&t_push_variable, (Optr)VAR_returnContext_0_4, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock16367 = new_Block_with(PArray16368, empty_Array, PThreadedCode16369, 8, PAssign16370, PSend16376, PSend16379, PAssign16383, PSend16384, PAssign16385, PAssign16387, VAR_result_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16388 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16367);
    Array PThreadedCode16366 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16367, (Optr)&t_send1, (Optr)PSend16388, (Optr)&t_method_return);
    Method PMethod16363 = new_Method_with(PArray16364, PArray16365, empty_Array, PThreadedCode16366, 1, PSend16388);
    
    MethodClosure MC_SMB_blockclosureValue_message_ = new_MethodClosure((Method)PMethod16363, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockclosureValue_message_, MC_SMB_blockclosureValue_message_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray16390 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16392 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16391 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16392, (Optr)&t_method_return);
    Method PMethod16389 = new_Method_with(PArray16390, empty_Array, empty_Array, PThreadedCode16391, 1, PSend16392);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod16389, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentSelf() {
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16395 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16396 = new_Send((Optr)PSend16395, SMB_receiver, 0);
    Array PThreadedCode16394 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16395, (Optr)&t_send0, (Optr)PSend16396, (Optr)&t_method_return);
    Method PMethod16393 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16394, 1, PSend16396);
    
    MethodClosure MC_SMB_currentSelf = new_MethodClosure((Method)PMethod16393, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_currentSelf, MC_SMB_currentSelf);
}


static void init_SMB_visitUnsintSlot_() {
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Array PArray16398 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16400 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16401 = new_Send((Optr)VAR_aSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16400);
    Array PThreadedCode16399 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16400, (Optr)&t_send1, (Optr)PSend16401, (Optr)&t_method_return);
    Method PMethod16397 = new_Method_with(PArray16398, empty_Array, empty_Array, PThreadedCode16399, 1, PSend16401);
    
    MethodClosure MC_SMB_visitUnsintSlot_ = new_MethodClosure((Method)PMethod16397, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitUnsintSlot_, MC_SMB_visitUnsintSlot_);
}


static void init_SMB_assignSlot_to_() {
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16403 = new_Array_with(2, (Optr)VAR_aSlot_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16405 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16406 = new_Send((Optr)VAR_aSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)PSend16405);
    Array PThreadedCode16404 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16405, (Optr)&t_send2, (Optr)PSend16406, (Optr)&t_method_return);
    Method PMethod16402 = new_Method_with(PArray16403, empty_Array, empty_Array, PThreadedCode16404, 1, PSend16406);
    
    MethodClosure MC_SMB_assignSlot_to_ = new_MethodClosure((Method)PMethod16402, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignSlot_to_, MC_SMB_assignSlot_to_);
}


static void init_SMB_continueOn_message_() {
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray16408 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_saveContext_0_2 = new_Variable_named(L"saveContext", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_aBlock_0_4 = new_Variable_named(L"aBlock", 0);
    Array PArray16409 = new_Array_with(3, (Optr)VAR_saveContext_0_2, (Optr)VAR_result_0_3, (Optr)VAR_aBlock_0_4);
    Assign PAssign16411 = new_Assign((Optr)VAR_saveContext_0_2, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16413 = new_Send((Optr)VAR_message_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16412 = new_Assign((Optr)VAR_aBlock_0_4, (Optr)PSend16413);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_metaCont_1_0 = new_Variable_named(L"metaCont", 1);
    Array PArray16417 = new_Array_with(1, (Optr)VAR_metaCont_1_0);
    Symbol  SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend16419 = new_Send((Optr)VAR_message_0_1, SMB_selector_, 1, (Optr)SMB_value__Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16420 = new_Send((Optr)VAR_message_0_1, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_metaCont_1_0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16421 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_message_0_1, (Optr)VAR_aBlock_0_4);
    Array PThreadedCode16418 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend16419, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_metaCont_1_0, (Optr)&t_send2, (Optr)PSend16420, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_4, (Optr)&t_send2, (Optr)PSend16421, (Optr)&t_method_return);
    Block PBlock16416 = new_Block_with(PArray16417, empty_Array, PThreadedCode16418, 3, PSend16419, PSend16420, PSend16421);
    // on:. 
    Send PSend16415 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16416);
    Assign PAssign16414 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16415);
    Assign PAssign16422 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)VAR_saveContext_0_2);
    Array PThreadedCode16410 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16411, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16412, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16413, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16414, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16416, (Optr)&t_send1, (Optr)PSend16415, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16422, (Optr)&t_push_variable, (Optr)VAR_saveContext_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Method PMethod16407 = new_Method_with(PArray16408, PArray16409, empty_Array, PThreadedCode16410, 5, PAssign16411, PAssign16412, PAssign16414, PAssign16422, VAR_result_0_3);
    
    MethodClosure MC_SMB_continueOn_message_ = new_MethodClosure((Method)PMethod16407, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_continueOn_message_, MC_SMB_continueOn_message_);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray16424 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16427 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16429 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend16430 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16428 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend16430, (Optr)&t_method_return);
    Block PBlock16426 = new_Block_with(PArray16427, empty_Array, PThreadedCode16428, 2, PSend16429, PSend16430);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16431 = new_Send((Optr)PBlockClosure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16432 = new_Send((Optr)PBlock16426, SMB_value_, 1, (Optr)PSend16431);
    Array PThreadedCode16425 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16426, (Optr)&t_push_class_reference, (Optr)PBlockClosure_classReference, (Optr)&t_send0, (Optr)PSend16431, (Optr)&t_send1, (Optr)PSend16432, (Optr)&t_method_return);
    Method PMethod16423 = new_Method_with(PArray16424, empty_Array, empty_Array, PThreadedCode16425, 1, PSend16432);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod16423, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_send_to_() {
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16434 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16436 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    // send:to:class:. 
    Send PSend16437 = new_Send((Optr)self, SMB_send_to_class_, 3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)PSend16436);
    Array PThreadedCode16435 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16436, (Optr)&t_send3, (Optr)PSend16437, (Optr)&t_method_return);
    Method PMethod16433 = new_Method_with(PArray16434, empty_Array, empty_Array, PThreadedCode16435, 1, PSend16437);
    
    MethodClosure MC_SMB_send_to_ = new_MethodClosure((Method)PMethod16433, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_, MC_SMB_send_to_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray16439 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend16441 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Array PThreadedCode16440 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend16441, (Optr)&t_method_return);
    Method PMethod16438 = new_Method_with(PArray16439, empty_Array, empty_Array, PThreadedCode16440, 1, PSend16441);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod16438, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_invokeNativeMethod_on_message_alternative_() {
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray16443 = new_Array_with(4, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_aBlock_0_3);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Interpretation_minus_Interpreter = new_Symbol(L"Interpretation.Interpreter");
    Annotation PAnnotation16445 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_invokeNativeMethod_on_message_alternative_, (Optr)SMB_Interpretation_minus_Interpreter);
    Array PArray16444 = new_Array_with(1, (Optr)PAnnotation16445);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16447 = new_Send((Optr)VAR_aBlock_0_3, SMB_value, 0);
    Array PThreadedCode16446 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_send0, (Optr)PSend16447, (Optr)&t_method_return);
    NativeMethod PNativeMethod16442 = new_NativeMethod_with(PArray16443, empty_Array, PArray16444, PThreadedCode16446, 1, PSend16447);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_alternative_ = new_MethodClosure((Method)PNativeMethod16442, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeNativeMethod_on_message_alternative_, MC_SMB_invokeNativeMethod_on_message_alternative_);
}


static void init_SMB_lookupSelector_in_() {
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray16449 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Variable VAR_currentClass_0_2 = new_Variable_named(L"currentClass", 0);
    Array PArray16450 = new_Array_with(1, (Optr)VAR_currentClass_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16453 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign16455 = new_Assign((Optr)VAR_currentClass_0_2, (Optr)VAR_class_0_1);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16458 = new_Send((Optr)VAR_currentClass_0_2, SMB_isNil, 0);
    Array PThreadedCode16457 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16458, (Optr)&t_block_return);
    Block PBlock16456 = new_Block_with(empty_Array, empty_Array, PThreadedCode16457, 1, PSend16458);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend16461 = new_Send((Optr)VAR_currentClass_0_2, SMB_methodDict, 0);
    Variable VAR_method_2_0 = new_Variable_named(L"method", 2);
    Array PArray16463 = new_Array_with(1, (Optr)VAR_method_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16465 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_method_2_0);
    Array PThreadedCode16464 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_method_2_0, (Optr)&t_send1, (Optr)PSend16465, (Optr)&t_method_return);
    Block PBlock16462 = new_Block_with(PArray16463, empty_Array, PThreadedCode16464, 1, PSend16465);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend16466 = new_Send((Optr)PSend16461, SMB_at_ifPresent_, 2, (Optr)VAR_selector_0_0, (Optr)PBlock16462);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend16468 = new_Send((Optr)VAR_currentClass_0_2, SMB_superclass, 0);
    Assign PAssign16467 = new_Assign((Optr)VAR_currentClass_0_2, (Optr)PSend16468);
    Array PThreadedCode16460 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16461, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_closure, (Optr)PBlock16462, (Optr)&t_send2, (Optr)PSend16466, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16467, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16468, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16459 = new_Block_with(empty_Array, empty_Array, PThreadedCode16460, 2, PSend16466, PAssign16467);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16469 = new_Send((Optr)PBlock16456, SMB_whileFalse_, 1, (Optr)PBlock16459);
    Array PThreadedCode16454 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign16455, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16456, (Optr)&t_push_closure, (Optr)PBlock16459, (Optr)&t_send1, (Optr)PSend16469, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16452 = new_Block_with(PArray16453, empty_Array, PThreadedCode16454, 3, PAssign16455, PSend16469, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16470 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16452);
    Array PThreadedCode16451 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16452, (Optr)&t_send1, (Optr)PSend16470, (Optr)&t_method_return);
    Method PMethod16448 = new_Method_with(PArray16449, PArray16450, empty_Array, PThreadedCode16451, 1, PSend16470);
    
    MethodClosure MC_SMB_lookupSelector_in_ = new_MethodClosure((Method)PMethod16448, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_lookupSelector_in_, MC_SMB_lookupSelector_in_);
}


static void init_SMB_methodContextFor_receiver_message_() {
    Symbol SMB_methodContextFor_receiver_message_ = new_Symbol(L"methodContextFor:receiver:message:");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16472 = new_Array_with(3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16477 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend16479 = new_Send((Optr)VAR__receiver__1_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16480 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16481 = new_Send((Optr)VAR__receiver__1_0, SMB_closure_, 1, (Optr)VAR_closure_0_0);
    Array PThreadedCode16478 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16479, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16480, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend16481, (Optr)&t_method_return);
    Block PBlock16476 = new_Block_with(PArray16477, empty_Array, PThreadedCode16478, 3, PSend16479, PSend16480, PSend16481);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16486 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16485 = new_Send((Optr)PSend16486, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16484 = new_Send((Optr)PSend16485, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // code. 
    Send PSend16489 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend16488 = new_Send((Optr)PSend16489, SMB_locals, 0);
    // size. 
    Send PSend16487 = new_Send((Optr)PSend16488, SMB_size, 0);
    // +. 
    Send PSend16483 = new_Send((Optr)PSend16484, SMB__plus_, 1, (Optr)PSend16487);
    // new:. 
    Send PSend16482 = new_Send((Optr)PMethodContext_classReference, SMB_new_, 1, (Optr)PSend16483);
    // value:. 
    Send PSend16475 = new_Send((Optr)PBlock16476, SMB_value_, 1, (Optr)PSend16482);
    Assign PAssign16474 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16475);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16491 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16493 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_arg_1_0);
    Array PThreadedCode16492 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send2, (Optr)PSend16493, (Optr)&t_method_return);
    Block PBlock16490 = new_Block_with(PArray16491, empty_Array, PThreadedCode16492, 1, PSend16493);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16494 = new_Send((Optr)VAR_aMessage_0_2, SMB_withIndexDo_, 1, (Optr)PBlock16490);
    Array PThreadedCode16473 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign16474, (Optr)&t_push_closure, (Optr)PBlock16476, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16486, (Optr)&t_send0, (Optr)PSend16485, (Optr)&t_send0, (Optr)PSend16484, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16489, (Optr)&t_send0, (Optr)PSend16488, (Optr)&t_send0, (Optr)PSend16487, (Optr)&t_send1, (Optr)PSend16483, (Optr)&t_send1, (Optr)PSend16482, (Optr)&t_send1, (Optr)PSend16475, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock16490, (Optr)&t_send1, (Optr)PSend16494, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16471 = new_Method_with(PArray16472, empty_Array, empty_Array, PThreadedCode16473, 3, PAssign16474, PSend16494, self);
    
    MethodClosure MC_SMB_methodContextFor_receiver_message_ = new_MethodClosure((Method)PMethod16471, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_methodContextFor_receiver_message_, MC_SMB_methodContextFor_receiver_message_);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray16496 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend16498 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode16497 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend16498, (Optr)&t_method_return);
    Method PMethod16495 = new_Method_with(PArray16496, empty_Array, empty_Array, PThreadedCode16497, 1, PSend16498);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod16495, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_sendNext_to_class_() {
    Symbol SMB_sendNext_to_class_ = new_Symbol(L"sendNext:to:class:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Array PArray16500 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_cls_0_2);
    Variable VAR_msg_0_3 = new_Variable_named(L"msg", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16501 = new_Array_with(2, (Optr)VAR_msg_0_3, (Optr)VAR_result_0_4);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    // send:to:class:. 
    Send PSend16507 = new_Send((Optr)self, SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_cls_0_2);
    Array PThreadedCode16506 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send3, (Optr)PSend16507, (Optr)&t_block_return);
    Block PBlock16505 = new_Block_with(empty_Array, empty_Array, PThreadedCode16506, 1, PSend16507);
    Variable VAR_next_1_0 = new_Variable_named(L"next", 1);
    Array PArray16509 = new_Array_with(1, (Optr)VAR_next_1_0);
    Assign PAssign16511 = new_Assign((Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)nil_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16515 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol  SMB_sendNext_to_ = new_Symbol(L"sendNext:to:");
    Constant SMB_sendNext_to__Const = new_Constant((Optr)SMB_sendNext_to_);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16517 = new_Send((Optr)SMB_sendNext_to__Const, SMB_class, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16518 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend16517);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend16519 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_message_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend16520 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)VAR_receiver_0_1);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend16521 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)VAR_cls_0_2);
    Array PThreadedCode16516 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_sendNext_to_, (Optr)&t_send0, (Optr)PSend16517, (Optr)&t_send1, (Optr)PSend16518, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send2, (Optr)PSend16519, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16520, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend16521, (Optr)&t_method_return);
    Block PBlock16514 = new_Block_with(PArray16515, empty_Array, PThreadedCode16516, 4, PSend16518, PSend16519, PSend16520, PSend16521);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16522 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)int_3_Const);
    // value:. 
    Send PSend16513 = new_Send((Optr)PBlock16514, SMB_value_, 1, (Optr)PSend16522);
    Assign PAssign16512 = new_Assign((Optr)VAR_msg_0_3, (Optr)PSend16513);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16523 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_msg_0_3, (Optr)VAR_next_1_0);
    Array PThreadedCode16510 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign16511, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16512, (Optr)&t_push_closure, (Optr)PBlock16514, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend16522, (Optr)&t_send1, (Optr)PSend16513, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_3, (Optr)&t_push_variable, (Optr)VAR_next_1_0, (Optr)&t_send2, (Optr)PSend16523, (Optr)&t_method_return);
    Block PBlock16508 = new_Block_with(PArray16509, empty_Array, PThreadedCode16510, 3, PAssign16511, PAssign16512, PSend16523);
    // ifNil:ifNotNil:. 
    Send PSend16504 = new_Send((Optr)slot_Interpretation_Interpreter_nextInterpreter, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock16505, (Optr)PBlock16508);
    Assign PAssign16503 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16504);
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    // swapInvokeNative. 
    Send PSend16524 = new_Send((Optr)self, SMB_swapInvokeNative, 0);
    Array PThreadedCode16502 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16503, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)&t_push_closure, (Optr)PBlock16505, (Optr)&t_push_closure, (Optr)PBlock16508, (Optr)&t_send2, (Optr)PSend16504, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16524, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Method PMethod16499 = new_Method_with(PArray16500, PArray16501, empty_Array, PThreadedCode16502, 3, PAssign16503, PSend16524, VAR_result_0_4);
    
    MethodClosure MC_SMB_sendNext_to_class_ = new_MethodClosure((Method)PMethod16499, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_sendNext_to_class_, MC_SMB_sendNext_to_class_);
}


static void init_SMB_assignVariable_to_() {
    Symbol SMB_assignVariable_to_ = new_Symbol(L"assignVariable:to:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16526 = new_Array_with(2, (Optr)VAR_aVariable_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16528 = new_Send((Optr)VAR_aVariable_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16527 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send2, (Optr)PSend16528, (Optr)&t_method_return);
    Method PMethod16525 = new_Method_with(PArray16526, empty_Array, empty_Array, PThreadedCode16527, 1, PSend16528);
    
    MethodClosure MC_SMB_assignVariable_to_ = new_MethodClosure((Method)PMethod16525, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignVariable_to_, MC_SMB_assignVariable_to_);
}


static void init_SMB_assignUnsintSlot_to_() {
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16530 = new_Array_with(2, (Optr)VAR_aSlot_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16532 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16533 = new_Send((Optr)VAR_aSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)PSend16532);
    Array PThreadedCode16531 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16532, (Optr)&t_send2, (Optr)PSend16533, (Optr)&t_method_return);
    Method PMethod16529 = new_Method_with(PArray16530, empty_Array, empty_Array, PThreadedCode16531, 1, PSend16533);
    
    MethodClosure MC_SMB_assignUnsintSlot_to_ = new_MethodClosure((Method)PMethod16529, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignUnsintSlot_to_, MC_SMB_assignUnsintSlot_to_);
}


static void init_SMB_invokeMethod_on_message_() {
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16535 = new_Array_with(3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_method_0_3 = new_Variable_named(L"method", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16536 = new_Array_with(2, (Optr)VAR_method_0_3, (Optr)VAR_result_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16539 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16542 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Assign PAssign16541 = new_Assign((Optr)VAR_method_0_3, (Optr)PSend16542);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16543 = new_Send((Optr)VAR_method_0_3, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16544 = new_Send((Optr)PSend16543, SMB_size, 0);
    // size. 
    Send PSend16545 = new_Send((Optr)VAR_aMessage_0_2, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend16546 = new_Send((Optr)PSend16544, SMB__equals_, 1, (Optr)PSend16545);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend16547 = new_Send((Optr)self, SMB_assert_, 1, (Optr)PSend16546);
    // size. 
    Send PSend16548 = new_Send((Optr)VAR_method_0_3, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16549 = new_Send((Optr)PSend16548, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16553 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode16552 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16553, (Optr)&t_block_return);
    Block PBlock16551 = new_Block_with(empty_Array, empty_Array, PThreadedCode16552, 1, PSend16553);
    // ifTrue:. 
    Send PSend16550 = new_Send((Optr)PSend16549, SMB_ifTrue_, 1, (Optr)PBlock16551);
    Symbol SMB_methodContextFor_receiver_message_ = new_Symbol(L"methodContextFor:receiver:message:");
    // methodContextFor:receiver:message:. 
    Send PSend16554 = new_Send((Optr)self, SMB_methodContextFor_receiver_message_, 3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    // interpretMethod:. 
    Send PSend16556 = new_Send((Optr)self, SMB_interpretMethod_, 1, (Optr)VAR_method_0_3);
    Assign PAssign16555 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16556);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16558 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign16557 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16558);
    Array PThreadedCode16540 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign16541, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16542, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send0, (Optr)PSend16543, (Optr)&t_send0, (Optr)PSend16544, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend16545, (Optr)&t_send1, (Optr)PSend16546, (Optr)&t_send1, (Optr)PSend16547, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send0, (Optr)PSend16548, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16549, (Optr)&t_send_ifTrue_, (Optr)PSend16550, (Optr)PBlock16551, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16554, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16555, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send1, (Optr)PSend16556, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16557, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16558, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Block PBlock16538 = new_Block_with(PArray16539, empty_Array, PThreadedCode16540, 7, PAssign16541, PSend16547, PSend16550, PSend16554, PAssign16555, PAssign16557, VAR_result_0_4);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16559 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16538);
    Array PThreadedCode16537 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16538, (Optr)&t_send1, (Optr)PSend16559, (Optr)&t_method_return);
    Method PMethod16534 = new_Method_with(PArray16535, PArray16536, empty_Array, PThreadedCode16537, 1, PSend16559);
    
    MethodClosure MC_SMB_invokeMethod_on_message_ = new_MethodClosure((Method)PMethod16534, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeMethod_on_message_, MC_SMB_invokeMethod_on_message_);
}


static void init_SMB_sendDoesNotUnderstandFor_to_() {
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16561 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR_dnu_0_2 = new_Variable_named(L"dnu", 0);
    Array PArray16562 = new_Array_with(1, (Optr)VAR_dnu_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16565 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16567 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    Symbol  SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_doesNotUnderstand__Const = new_Constant((Optr)SMB_doesNotUnderstand_);
    // =. 
    Send PSend16568 = new_Send((Optr)PSend16567, SMB__equals_, 1, (Optr)SMB_doesNotUnderstand__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16572 = new_Send((Optr)VAR_aMessage_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    // recursiveDoesNotUnderstand:on:. 
    Send PSend16573 = new_Send((Optr)self, SMB_recursiveDoesNotUnderstand_on_, 2, (Optr)PSend16572, (Optr)VAR_receiver_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16574 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16573);
    Array PThreadedCode16571 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16572, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16573, (Optr)&t_send1, (Optr)PSend16574, (Optr)&t_block_return);
    Block PBlock16570 = new_Block_with(empty_Array, empty_Array, PThreadedCode16571, 1, PSend16574);
    // ifTrue:. 
    Send PSend16569 = new_Send((Optr)PSend16568, SMB_ifTrue_, 1, (Optr)PBlock16570);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16576 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Assign PAssign16575 = new_Assign((Optr)VAR_dnu_0_2, (Optr)PSend16576);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16577 = new_Send((Optr)VAR_dnu_0_2, SMB_selector_, 1, (Optr)SMB_doesNotUnderstand__Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16578 = new_Send((Optr)VAR_dnu_0_2, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_aMessage_0_0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16579 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_dnu_0_2, (Optr)VAR_receiver_0_1);
    Array PThreadedCode16566 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16567, (Optr)&t_push1, (Optr)SMB_doesNotUnderstand_, (Optr)&t_send1, (Optr)PSend16568, (Optr)&t_send_ifTrue_, (Optr)PSend16569, (Optr)PBlock16570, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16575, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16576, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push1, (Optr)SMB_doesNotUnderstand_, (Optr)&t_send1, (Optr)PSend16577, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send2, (Optr)PSend16578, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16579, (Optr)&t_method_return);
    Block PBlock16564 = new_Block_with(PArray16565, empty_Array, PThreadedCode16566, 5, PSend16569, PAssign16575, PSend16577, PSend16578, PSend16579);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16580 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16564);
    Array PThreadedCode16563 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16564, (Optr)&t_send1, (Optr)PSend16580, (Optr)&t_method_return);
    Method PMethod16560 = new_Method_with(PArray16561, PArray16562, empty_Array, PThreadedCode16563, 1, PSend16580);
    
    MethodClosure MC_SMB_sendDoesNotUnderstandFor_to_ = new_MethodClosure((Method)PMethod16560, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_sendDoesNotUnderstandFor_to_, MC_SMB_sendDoesNotUnderstandFor_to_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_aSend_0_3 = new_Variable_named(L"aSend", 0);
    Array PArray16582 = new_Array_with(4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Variable VAR_method_0_4 = new_Variable_named(L"method", 0);
    Array PArray16583 = new_Array_with(1, (Optr)VAR_method_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16586 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_inlineCache = new_Symbol(L"inlineCache");
    // inlineCache. 
    Send PSend16590 = new_Send((Optr)VAR_aSend_0_3, SMB_inlineCache, 0);
    Symbol SMB_checkCached_ = new_Symbol(L"checkCached:");
    // checkCached:. 
    Send PSend16589 = new_Send((Optr)PSend16590, SMB_checkCached_, 1, (Optr)VAR_class_0_2);
    Assign PAssign16588 = new_Assign((Optr)VAR_method_0_4, (Optr)PSend16589);
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    // accept:on:message:. 
    Send PSend16593 = new_Send((Optr)VAR_method_0_4, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16594 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16593);
    Array PThreadedCode16592 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16593, (Optr)&t_send1, (Optr)PSend16594, (Optr)&t_block_return);
    Block PBlock16591 = new_Block_with(empty_Array, empty_Array, PThreadedCode16592, 1, PSend16594);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend16595 = new_Send((Optr)VAR_method_0_4, SMB_ifNotNil_, 1, (Optr)PBlock16591);
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16598 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    // lookupSelector:in:. 
    Send PSend16597 = new_Send((Optr)self, SMB_lookupSelector_in_, 2, (Optr)PSend16598, (Optr)VAR_class_0_2);
    Assign PAssign16596 = new_Assign((Optr)VAR_method_0_4, (Optr)PSend16597);
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    // sendDoesNotUnderstandFor:to:. 
    Send PSend16601 = new_Send((Optr)self, SMB_sendDoesNotUnderstandFor_to_, 2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    // escape:. 
    Send PSend16602 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16601);
    Array PThreadedCode16600 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16601, (Optr)&t_send1, (Optr)PSend16602, (Optr)&t_block_return);
    Block PBlock16599 = new_Block_with(empty_Array, empty_Array, PThreadedCode16600, 1, PSend16602);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend16603 = new_Send((Optr)VAR_method_0_4, SMB_ifNil_, 1, (Optr)PBlock16599);
    // inlineCache. 
    Send PSend16604 = new_Send((Optr)VAR_aSend_0_3, SMB_inlineCache, 0);
    Symbol SMB_cache_at_ = new_Symbol(L"cache:at:");
    // cache:at:. 
    Send PSend16605 = new_Send((Optr)PSend16604, SMB_cache_at_, 2, (Optr)VAR_method_0_4, (Optr)VAR_class_0_2);
    // accept:on:message:. 
    Send PSend16606 = new_Send((Optr)VAR_method_0_4, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode16587 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign16588, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_send0, (Optr)PSend16590, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send1, (Optr)PSend16589, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_closure, (Optr)PBlock16591, (Optr)&t_send1, (Optr)PSend16595, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16596, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16598, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16597, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_closure, (Optr)PBlock16599, (Optr)&t_send1, (Optr)PSend16603, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_send0, (Optr)PSend16604, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16605, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16606, (Optr)&t_method_return);
    Block PBlock16585 = new_Block_with(PArray16586, empty_Array, PThreadedCode16587, 6, PAssign16588, PSend16595, PAssign16596, PSend16603, PSend16605, PSend16606);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16607 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16585);
    Array PThreadedCode16584 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16585, (Optr)&t_send1, (Optr)PSend16607, (Optr)&t_method_return);
    Method PMethod16581 = new_Method_with(PArray16582, PArray16583, empty_Array, PThreadedCode16584, 1, PSend16607);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16581, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_class_for_, MC_SMB_send_to_class_for_);
}


static void init_class_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray16609 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16611 = new_Send((Optr)self, SMB_new, 0);
    // interpret:. 
    Send PSend16612 = new_Send((Optr)PSend16611, SMB_interpret_, 1, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode16610 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16611, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend16612, (Optr)&t_method_return);
    Method PMethod16608 = new_Method_with(PArray16609, empty_Array, empty_Array, PThreadedCode16610, 1, PSend16612);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16608, HEADER(Interpretation_Interpreter_Class));
    store_method(HEADER(Interpretation_Interpreter_Class), SMB_interpret_, MC_SMB_interpret_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Interpretation_minus_Interpreter = new_Symbol(L"Interpretation.Interpreter");
    String string_16615 = new_String(L"plugin/interpretation/Interpreter.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Interpretation_minus_Interpreter_Const = new_Constant((Optr)SMB_Interpretation_minus_Interpreter);
    Constant string_16615_Const = new_Constant((Optr)string_16615);
    // require:at:. 
    Send PSend16616 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Interpretation_minus_Interpreter_Const, (Optr)string_16615_Const);
    Array PThreadedCode16614 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Interpretation_minus_Interpreter, (Optr)&t_push1, (Optr)string_16615, (Optr)&t_send2, (Optr)PSend16616, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16613 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16614, 2, PSend16616, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16613, HEADER(Interpretation_Interpreter_Class));
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
    init_SMB_swapInvokeNativeOn_message_();
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
    init_SMB_lookupSelector_in_();
    init_SMB_methodContextFor_receiver_message_();
    init_SMB_visitConstant_();
    init_SMB_sendNext_to_class_();
    init_SMB_assignVariable_to_();
    init_SMB_assignUnsintSlot_to_();
    init_SMB_invokeMethod_on_message_();
    init_SMB_sendDoesNotUnderstandFor_to_();
    init_SMB_send_to_class_for_();
    init_class_SMB_interpret_();
    init_class_SMB_initialize();
    
}