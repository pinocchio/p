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
<<<<<<< HEAD
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
=======
    Array PArray16137 = new_Array_with(3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Variable VAR_method_0_3 = new_Variable_named(L"method", 0);
    Array PArray16138 = new_Array_with(1, (Optr)VAR_method_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16141 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16145 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    // lookupSelector:in:. 
    Send PSend16144 = new_Send((Optr)self, SMB_lookupSelector_in_, 2, (Optr)PSend16145, (Optr)VAR_class_0_2);
    Assign PAssign16143 = new_Assign((Optr)VAR_method_0_3, (Optr)PSend16144);
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    // sendDoesNotUnderstandFor:to:. 
    Send PSend16148 = new_Send((Optr)self, SMB_sendDoesNotUnderstandFor_to_, 2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16149 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16148);
    Array PThreadedCode16147 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16148, (Optr)&t_send1, (Optr)PSend16149, (Optr)&t_block_return);
    Block PBlock16146 = new_Block_with(empty_Array, empty_Array, PThreadedCode16147, 1, PSend16149);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend16150 = new_Send((Optr)VAR_method_0_3, SMB_ifNil_, 1, (Optr)PBlock16146);
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    // accept:on:message:. 
    Send PSend16151 = new_Send((Optr)VAR_method_0_3, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode16142 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16143, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16145, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16144, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_push_closure, (Optr)PBlock16146, (Optr)&t_send1, (Optr)PSend16150, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16151, (Optr)&t_method_return);
    Block PBlock16140 = new_Block_with(PArray16141, empty_Array, PThreadedCode16142, 3, PAssign16143, PSend16150, PSend16151);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16152 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16140);
    Array PThreadedCode16139 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16140, (Optr)&t_send1, (Optr)PSend16152, (Optr)&t_method_return);
    Method PMethod16136 = new_Method_with(PArray16137, PArray16138, empty_Array, PThreadedCode16139, 1, PSend16152);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16136, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_interpret_() {
    /*
    interpret: aClosure
// 	^ self new interpret: aClosure
    */
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
<<<<<<< HEAD
    Array PArray16188 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16190 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
=======
    Array PArray16154 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16156 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_value = new_Symbol(L"value");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value_Const = new_Constant((Optr)SMB_value);
    // selector:. 
<<<<<<< HEAD
    Send PSend16191 = new_Send((Optr)PSend16190, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16192 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend16191, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode16189 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend16190, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend16191, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send2, (Optr)PSend16192, (Optr)&t_method_return);
    Method PMethod16187 = new_Method_with(PArray16188, empty_Array, empty_Array, PThreadedCode16189, 1, PSend16192);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16187, Interpretation_Interpreter_Class);
=======
    Send PSend16157 = new_Send((Optr)PSend16156, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16158 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend16157, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode16155 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend16156, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend16157, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send2, (Optr)PSend16158, (Optr)&t_method_return);
    Method PMethod16153 = new_Method_with(PArray16154, empty_Array, empty_Array, PThreadedCode16155, 1, PSend16158);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16153, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_continueEscape_message_() {
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
<<<<<<< HEAD
    Array PArray16194 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
=======
    Array PArray16160 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
<<<<<<< HEAD
    Send PSend16196 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16197 = new_Send((Optr)VAR_aContinuation_0_0, SMB_escape_, 1, (Optr)PSend16196);
    Array PThreadedCode16195 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16196, (Optr)&t_send1, (Optr)PSend16197, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16193 = new_Method_with(PArray16194, empty_Array, empty_Array, PThreadedCode16195, 2, PSend16197, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod16193, Interpretation_Interpreter_Class);
=======
    Send PSend16162 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16163 = new_Send((Optr)VAR_aContinuation_0_0, SMB_escape_, 1, (Optr)PSend16162);
    Array PThreadedCode16161 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16162, (Optr)&t_send1, (Optr)PSend16163, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16159 = new_Method_with(PArray16160, empty_Array, empty_Array, PThreadedCode16161, 2, PSend16163, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod16159, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_continueEscape_message_, MC_SMB_continueEscape_message_);
}


static void init_SMB_invokeNativeMethod_on_message_() {
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
<<<<<<< HEAD
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
=======
    Array PArray16165 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray16166 = new_Array_with(1, (Optr)VAR_result_0_3);
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    // swapInvokeNative. 
    Send PSend16168 = new_Send((Optr)self, SMB_swapInvokeNative, 0);
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend16173 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Array PThreadedCode16172 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16173, (Optr)&t_block_return);
    Block PBlock16171 = new_Block_with(empty_Array, empty_Array, PThreadedCode16172, 1, PSend16173);
    // invokeNativeMethod:on:message:alternative:. 
    Send PSend16170 = new_Send((Optr)self, SMB_invokeNativeMethod_on_message_alternative_, 4, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2, (Optr)PBlock16171);
    Assign PAssign16169 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16170);
    // swapInvokeNative. 
    Send PSend16174 = new_Send((Optr)nil_Const, SMB_swapInvokeNative, 0);
    Array PThreadedCode16167 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16168, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16169, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock16171, (Optr)&t_send4, (Optr)PSend16170, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_nil, (Optr)&t_send0, (Optr)PSend16174, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Method PMethod16164 = new_Method_with(PArray16165, PArray16166, empty_Array, PThreadedCode16167, 4, PSend16168, PAssign16169, PSend16174, VAR_result_0_3);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_ = new_MethodClosure((Method)PMethod16164, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_invokeNativeMethod_on_message_, MC_SMB_invokeNativeMethod_on_message_);
}


static void init_SMB_interpretMethod_() {
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
<<<<<<< HEAD
    Array PArray16210 = new_Array_with(1, (Optr)VAR_method_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray16211 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16213 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
=======
    Array PArray16176 = new_Array_with(1, (Optr)VAR_method_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray16177 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16179 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
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
=======
    Send PSend16183 = new_Send((Optr)VAR_pc_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16182 = new_Assign((Optr)VAR_pc_0_1, (Optr)PSend16183);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16184 = new_Send((Optr)VAR_method_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend16185 = new_Send((Optr)PAssign16182, SMB__lt_, 1, (Optr)PSend16184);
    Array PThreadedCode16181 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16182, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16183, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_send0, (Optr)PSend16184, (Optr)&t_send1, (Optr)PSend16185, (Optr)&t_block_return);
    Block PBlock16180 = new_Block_with(empty_Array, empty_Array, PThreadedCode16181, 1, PSend16185);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend16188 = new_Send((Optr)VAR_method_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16189 = new_Send((Optr)PSend16188, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16187 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16188, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16189, (Optr)&t_block_return);
    Block PBlock16186 = new_Block_with(empty_Array, empty_Array, PThreadedCode16187, 1, PSend16189);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16190 = new_Send((Optr)PBlock16180, SMB_whileTrue_, 1, (Optr)PBlock16186);
    // at:. 
    Send PSend16191 = new_Send((Optr)VAR_method_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    // accept:. 
    Send PSend16192 = new_Send((Optr)PSend16191, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16178 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign16179, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16180, (Optr)&t_push_closure, (Optr)PBlock16186, (Optr)&t_send1, (Optr)PSend16190, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16191, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16192, (Optr)&t_method_return);
    Method PMethod16175 = new_Method_with(PArray16176, PArray16177, empty_Array, PThreadedCode16178, 3, PAssign16179, PSend16190, PSend16192);
    
    MethodClosure MC_SMB_interpretMethod_ = new_MethodClosure((Method)PMethod16175, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_interpretMethod_, MC_SMB_interpretMethod_);
}


static void init_SMB_interpretBlock_() {
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
<<<<<<< HEAD
    Array PArray16228 = new_Array_with(1, (Optr)VAR_block_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray16229 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16231 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
=======
    Array PArray16194 = new_Array_with(1, (Optr)VAR_block_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray16195 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16197 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
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
=======
    Send PSend16201 = new_Send((Optr)VAR_pc_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16200 = new_Assign((Optr)VAR_pc_0_1, (Optr)PSend16201);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16202 = new_Send((Optr)VAR_block_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend16203 = new_Send((Optr)PAssign16200, SMB__lt_, 1, (Optr)PSend16202);
    Array PThreadedCode16199 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16200, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16201, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend16202, (Optr)&t_send1, (Optr)PSend16203, (Optr)&t_block_return);
    Block PBlock16198 = new_Block_with(empty_Array, empty_Array, PThreadedCode16199, 1, PSend16203);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend16206 = new_Send((Optr)VAR_block_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16207 = new_Send((Optr)PSend16206, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16205 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16206, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16207, (Optr)&t_block_return);
    Block PBlock16204 = new_Block_with(empty_Array, empty_Array, PThreadedCode16205, 1, PSend16207);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16208 = new_Send((Optr)PBlock16198, SMB_whileTrue_, 1, (Optr)PBlock16204);
    // at:. 
    Send PSend16209 = new_Send((Optr)VAR_block_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    // accept:. 
    Send PSend16210 = new_Send((Optr)PSend16209, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16196 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign16197, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16198, (Optr)&t_push_closure, (Optr)PBlock16204, (Optr)&t_send1, (Optr)PSend16208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16209, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16210, (Optr)&t_method_return);
    Method PMethod16193 = new_Method_with(PArray16194, PArray16195, empty_Array, PThreadedCode16196, 3, PAssign16197, PSend16208, PSend16210);
    
    MethodClosure MC_SMB_interpretBlock_ = new_MethodClosure((Method)PMethod16193, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_interpretBlock_, MC_SMB_interpretBlock_);
}


static void init_SMB_visitDirectVariable_() {
    Symbol SMB_visitDirectVariable_ = new_Symbol(L"visitDirectVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
<<<<<<< HEAD
    Array PArray16246 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16248 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)nil_Const);
    Array PThreadedCode16247 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16248, (Optr)&t_method_return);
    Method PMethod16245 = new_Method_with(PArray16246, empty_Array, empty_Array, PThreadedCode16247, 1, PSend16248);
    
    MethodClosure MC_SMB_visitDirectVariable_ = new_MethodClosure((Method)PMethod16245, Interpretation_Interpreter_Class);
=======
    Array PArray16212 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16214 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)nil_Const);
    Array PThreadedCode16213 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16214, (Optr)&t_method_return);
    Method PMethod16211 = new_Method_with(PArray16212, empty_Array, empty_Array, PThreadedCode16213, 1, PSend16214);
    
    MethodClosure MC_SMB_visitDirectVariable_ = new_MethodClosure((Method)PMethod16211, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitDirectVariable_, MC_SMB_visitDirectVariable_);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
<<<<<<< HEAD
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
=======
    Array PArray16216 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16218 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16219 = new_Send((Optr)VAR_aSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16218);
    Array PThreadedCode16217 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16218, (Optr)&t_send1, (Optr)PSend16219, (Optr)&t_method_return);
    Method PMethod16215 = new_Method_with(PArray16216, empty_Array, empty_Array, PThreadedCode16217, 1, PSend16219);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod16215, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_classOf_() {
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray16255 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16257 = new_Send((Optr)VAR_anObject_0_0, SMB_class, 0);
    Array PThreadedCode16256 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend16257, (Optr)&t_method_return);
    Method PMethod16254 = new_Method_with(PArray16255, empty_Array, empty_Array, PThreadedCode16256, 1, PSend16257);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod16254, Interpretation_Interpreter_Class);
=======
    Array PArray16221 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16223 = new_Send((Optr)VAR_anObject_0_0, SMB_class, 0);
    Array PThreadedCode16222 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend16223, (Optr)&t_method_return);
    Method PMethod16220 = new_Method_with(PArray16221, empty_Array, empty_Array, PThreadedCode16222, 1, PSend16223);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod16220, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_classOf_, MC_SMB_classOf_);
}


static void init_SMB_visitAssign_() {
    Symbol SMB_visitAssign_ = new_Symbol(L"visitAssign:");
    Variable VAR_anAssign_0_0 = new_Variable_named(L"anAssign", 0);
<<<<<<< HEAD
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
=======
    Array PArray16225 = new_Array_with(1, (Optr)VAR_anAssign_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16226 = new_Array_with(1, (Optr)VAR_value_0_1);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend16230 = new_Send((Optr)VAR_anAssign_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16229 = new_Send((Optr)PSend16230, SMB_accept_, 1, (Optr)self);
    Assign PAssign16228 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend16229);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend16231 = new_Send((Optr)VAR_anAssign_0_0, SMB_variable, 0);
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    // assignFor:to:. 
    Send PSend16232 = new_Send((Optr)PSend16231, SMB_assignFor_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode16227 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign16228, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend16230, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16229, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend16231, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend16232, (Optr)&t_method_return);
    Method PMethod16224 = new_Method_with(PArray16225, PArray16226, empty_Array, PThreadedCode16227, 2, PAssign16228, PSend16232);
    
    MethodClosure MC_SMB_visitAssign_ = new_MethodClosure((Method)PMethod16224, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitAssign_, MC_SMB_visitAssign_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
<<<<<<< HEAD
    Array PArray16268 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16270 = new_Send((Optr)self, SMB_currentSelf, 0);
    Array PThreadedCode16269 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16270, (Optr)&t_method_return);
    Method PMethod16267 = new_Method_with(PArray16268, empty_Array, empty_Array, PThreadedCode16269, 1, PSend16270);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod16267, Interpretation_Interpreter_Class);
=======
    Array PArray16234 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16236 = new_Send((Optr)self, SMB_currentSelf, 0);
    Array PThreadedCode16235 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16236, (Optr)&t_method_return);
    Method PMethod16233 = new_Method_with(PArray16234, empty_Array, empty_Array, PThreadedCode16235, 1, PSend16236);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod16233, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_swapInvokeNativeOn_message_() {
    Symbol SMB_swapInvokeNativeOn_message_ = new_Symbol(L"swapInvokeNativeOn:message:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray16238 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_message_0_1);
    Assign PAssign16240 = new_Assign((Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)VAR_receiver_0_0);
    Array PThreadedCode16239 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16240, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16237 = new_Method_with(PArray16238, empty_Array, empty_Array, PThreadedCode16239, 2, PAssign16240, self);
    
    MethodClosure MC_SMB_swapInvokeNativeOn_message_ = new_MethodClosure((Method)PMethod16237, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_swapInvokeNativeOn_message_, MC_SMB_swapInvokeNativeOn_message_);
}


static void init_SMB_blockContextFor_message_() {
    Symbol SMB_blockContextFor_message_ = new_Symbol(L"blockContextFor:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
<<<<<<< HEAD
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
=======
    Array PArray16242 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray16243 = new_Array_with(2, (Optr)VAR_block_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16246 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_code, 0);
    Assign PAssign16245 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend16246);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16250 = new_Send((Optr)VAR_block_0_2, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16249 = new_Send((Optr)PSend16250, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend16252 = new_Send((Optr)VAR_block_0_2, SMB_locals, 0);
    // size. 
    Send PSend16251 = new_Send((Optr)PSend16252, SMB_size, 0);
    // +. 
    Send PSend16248 = new_Send((Optr)PSend16249, SMB__plus_, 1, (Optr)PSend16251);
    Assign PAssign16247 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend16248);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
<<<<<<< HEAD
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
=======
    Send PSend16253 = new_Send((Optr)VAR_size_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16258 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Assign PAssign16257 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16258);
    Array PThreadedCode16256 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign16257, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16258, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16255 = new_Block_with(empty_Array, empty_Array, PThreadedCode16256, 1, PAssign16257);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16264 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend16266 = new_Send((Optr)VAR__receiver__1_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    // context. 
    Send PSend16267 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    // outerScope:. 
    Send PSend16268 = new_Send((Optr)VAR__receiver__1_0, SMB_outerScope_, 1, (Optr)PSend16267);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16269 = new_Send((Optr)VAR__receiver__1_0, SMB_closure_, 1, (Optr)VAR_aBlockClosure_0_0);
    // context. 
    Send PSend16270 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16271 = new_Send((Optr)PSend16270, SMB_homeContext, 0);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend16272 = new_Send((Optr)VAR__receiver__1_0, SMB_homeContext_, 1, (Optr)PSend16271);
    Array PThreadedCode16265 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16266, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16267, (Optr)&t_send1, (Optr)PSend16268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send1, (Optr)PSend16269, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16270, (Optr)&t_send0, (Optr)PSend16271, (Optr)&t_send1, (Optr)PSend16272, (Optr)&t_method_return);
    Block PBlock16263 = new_Block_with(PArray16264, empty_Array, PThreadedCode16265, 4, PSend16266, PSend16268, PSend16269, PSend16272);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16273 = new_Send((Optr)PBlockContext_classReference, SMB_new_, 1, (Optr)VAR_size_0_3);
    // value:. 
    Send PSend16262 = new_Send((Optr)PBlock16263, SMB_value_, 1, (Optr)PSend16273);
    Assign PAssign16261 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16262);
    Array PThreadedCode16260 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign16261, (Optr)&t_push_closure, (Optr)PBlock16263, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend16273, (Optr)&t_send1, (Optr)PSend16262, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16259 = new_Block_with(empty_Array, empty_Array, PThreadedCode16260, 1, PAssign16261);
    // ifTrue:ifFalse:. 
    Send PSend16254 = new_Send((Optr)PSend16253, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16255, (Optr)PBlock16259);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16275 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16277 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_value_1_0);
    Array PThreadedCode16276 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send2, (Optr)PSend16277, (Optr)&t_method_return);
    Block PBlock16274 = new_Block_with(PArray16275, empty_Array, PThreadedCode16276, 1, PSend16277);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16278 = new_Send((Optr)VAR_aMessage_0_1, SMB_withIndexDo_, 1, (Optr)PBlock16274);
    Array PThreadedCode16244 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign16245, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16246, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16247, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16250, (Optr)&t_send0, (Optr)PSend16249, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16252, (Optr)&t_send0, (Optr)PSend16251, (Optr)&t_send1, (Optr)PSend16248, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16253, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16254, (Optr)PBlock16255, (Optr)PBlock16259, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_closure, (Optr)PBlock16274, (Optr)&t_send1, (Optr)PSend16278, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16241 = new_Method_with(PArray16242, PArray16243, empty_Array, PThreadedCode16244, 5, PAssign16245, PAssign16247, PSend16254, PSend16278, self);
    
    MethodClosure MC_SMB_blockContextFor_message_ = new_MethodClosure((Method)PMethod16241, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_blockContextFor_message_, MC_SMB_blockContextFor_message_);
}


static void init_SMB_recursiveDoesNotUnderstand_on_() {
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
<<<<<<< HEAD
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
=======
    Array PArray16280 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16283 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16285 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16286 = new_Send((Optr)VAR_receiver_0_1, SMB_class, 0);
    Symbol SMB_cls_ = new_Symbol(L"cls:");
    // cls:. 
    Send PSend16287 = new_Send((Optr)VAR__receiver__1_0, SMB_cls_, 1, (Optr)PSend16286);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend16288 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_aMessage_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend16289 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode16284 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16285, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send0, (Optr)PSend16286, (Optr)&t_send1, (Optr)PSend16287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend16288, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16289, (Optr)&t_method_return);
    Block PBlock16282 = new_Block_with(PArray16283, empty_Array, PThreadedCode16284, 4, PSend16285, PSend16287, PSend16288, PSend16289);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16290 = new_Send((Optr)PRecursiveDoesNotUnderstand_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16291 = new_Send((Optr)PBlock16282, SMB_value_, 1, (Optr)PSend16290);
    Array PThreadedCode16281 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16282, (Optr)&t_push_class_reference, (Optr)PRecursiveDoesNotUnderstand_classReference, (Optr)&t_send0, (Optr)PSend16290, (Optr)&t_send1, (Optr)PSend16291, (Optr)&t_method_return);
    Method PMethod16279 = new_Method_with(PArray16280, empty_Array, empty_Array, PThreadedCode16281, 1, PSend16291);
    
    MethodClosure MC_SMB_recursiveDoesNotUnderstand_on_ = new_MethodClosure((Method)PMethod16279, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_recursiveDoesNotUnderstand_on_, MC_SMB_recursiveDoesNotUnderstand_on_);
}


static void init_SMB_currentClass() {
    Symbol SMB_currentClass = new_Symbol(L"currentClass");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
<<<<<<< HEAD
    Send PSend16324 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    // methodClass. 
    Send PSend16325 = new_Send((Optr)PSend16324, SMB_methodClass, 0);
    Array PThreadedCode16323 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16324, (Optr)&t_send0, (Optr)PSend16325, (Optr)&t_method_return);
    Method PMethod16322 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16323, 1, PSend16325);
    
    MethodClosure MC_SMB_currentClass = new_MethodClosure((Method)PMethod16322, Interpretation_Interpreter_Class);
=======
    Send PSend16294 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    // methodClass. 
    Send PSend16295 = new_Send((Optr)PSend16294, SMB_methodClass, 0);
    Array PThreadedCode16293 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16294, (Optr)&t_send0, (Optr)PSend16295, (Optr)&t_method_return);
    Method PMethod16292 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16293, 1, PSend16295);
    
    MethodClosure MC_SMB_currentClass = new_MethodClosure((Method)PMethod16292, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_currentClass, MC_SMB_currentClass);
}


static void init_SMB_blockclosureValueWithArguments_message_() {
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
<<<<<<< HEAD
    Array PArray16327 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
=======
    Array PArray16297 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
<<<<<<< HEAD
    Send PSend16329 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    // blockclosureValue:message:. 
    Send PSend16330 = new_Send((Optr)self, SMB_blockclosureValue_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)PSend16329);
    Array PThreadedCode16328 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16329, (Optr)&t_send2, (Optr)PSend16330, (Optr)&t_method_return);
    Method PMethod16326 = new_Method_with(PArray16327, empty_Array, empty_Array, PThreadedCode16328, 1, PSend16330);
    
    MethodClosure MC_SMB_blockclosureValueWithArguments_message_ = new_MethodClosure((Method)PMethod16326, Interpretation_Interpreter_Class);
=======
    Send PSend16299 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    // blockclosureValue:message:. 
    Send PSend16300 = new_Send((Optr)self, SMB_blockclosureValue_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)PSend16299);
    Array PThreadedCode16298 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16299, (Optr)&t_send2, (Optr)PSend16300, (Optr)&t_method_return);
    Method PMethod16296 = new_Method_with(PArray16297, empty_Array, empty_Array, PThreadedCode16298, 1, PSend16300);
    
    MethodClosure MC_SMB_blockclosureValueWithArguments_message_ = new_MethodClosure((Method)PMethod16296, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_blockclosureValueWithArguments_message_, MC_SMB_blockclosureValueWithArguments_message_);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_aSuper_0_0 = new_Variable_named(L"aSuper", 0);
<<<<<<< HEAD
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
=======
    Array PArray16302 = new_Array_with(1, (Optr)VAR_aSuper_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray16303 = new_Array_with(2, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16306 = new_Send((Optr)self, SMB_currentSelf, 0);
    Assign PAssign16305 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend16306);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16309 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    // new:. 
    Send PSend16308 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend16309);
    Assign PAssign16307 = new_Assign((Optr)VAR_message_0_2, (Optr)PSend16308);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend16310 = new_Send((Optr)VAR_aSuper_0_0, SMB_message, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16311 = new_Send((Optr)VAR_message_0_2, SMB_selector_, 1, (Optr)PSend16310);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16313 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16315 = new_Send((Optr)VAR_arg_1_0, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16316 = new_Send((Optr)VAR_message_0_2, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend16315);
    Array PThreadedCode16314 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16315, (Optr)&t_send2, (Optr)PSend16316, (Optr)&t_method_return);
    Block PBlock16312 = new_Block_with(PArray16313, empty_Array, PThreadedCode16314, 1, PSend16316);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16317 = new_Send((Optr)VAR_aSuper_0_0, SMB_withIndexDo_, 1, (Optr)PBlock16312);
    Symbol SMB_currentClass = new_Symbol(L"currentClass");
    // currentClass. 
    Send PSend16318 = new_Send((Optr)self, SMB_currentClass, 0);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend16319 = new_Send((Optr)PSend16318, SMB_superclass, 0);
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    // send:to:class:for:. 
    Send PSend16320 = new_Send((Optr)self, SMB_send_to_class_for_, 4, (Optr)VAR_message_0_2, (Optr)VAR_receiver_0_1, (Optr)PSend16319, (Optr)VAR_aSuper_0_0);
    Array PThreadedCode16304 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push1, (Optr)PAssign16305, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16306, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16307, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend16309, (Optr)&t_send1, (Optr)PSend16308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend16310, (Optr)&t_send1, (Optr)PSend16311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_push_closure, (Optr)PBlock16312, (Optr)&t_send1, (Optr)PSend16317, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16318, (Optr)&t_send0, (Optr)PSend16319, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send4, (Optr)PSend16320, (Optr)&t_method_return);
    Method PMethod16301 = new_Method_with(PArray16302, PArray16303, empty_Array, PThreadedCode16304, 5, PAssign16305, PAssign16307, PSend16311, PSend16317, PSend16320);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod16301, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
<<<<<<< HEAD
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
=======
    Array PArray16322 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray16323 = new_Array_with(2, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16327 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16326 = new_Send((Optr)PSend16327, SMB_accept_, 1, (Optr)self);
    Assign PAssign16325 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend16326);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16330 = new_Send((Optr)VAR_aSend_0_0, SMB_size, 0);
    // new:. 
    Send PSend16329 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend16330);
    Assign PAssign16328 = new_Assign((Optr)VAR_message_0_2, (Optr)PSend16329);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend16331 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16332 = new_Send((Optr)VAR_message_0_2, SMB_selector_, 1, (Optr)PSend16331);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16334 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    // accept:. 
    Send PSend16336 = new_Send((Optr)VAR_arg_1_0, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16337 = new_Send((Optr)VAR_message_0_2, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend16336);
    Array PThreadedCode16335 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16336, (Optr)&t_send2, (Optr)PSend16337, (Optr)&t_method_return);
    Block PBlock16333 = new_Block_with(PArray16334, empty_Array, PThreadedCode16335, 1, PSend16337);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16338 = new_Send((Optr)VAR_aSend_0_0, SMB_withIndexDo_, 1, (Optr)PBlock16333);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16339 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    // send:to:class:for:. 
    Send PSend16340 = new_Send((Optr)self, SMB_send_to_class_for_, 4, (Optr)VAR_message_0_2, (Optr)VAR_receiver_0_1, (Optr)PSend16339, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16324 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign16325, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16327, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16326, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16328, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16330, (Optr)&t_send1, (Optr)PSend16329, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16331, (Optr)&t_send1, (Optr)PSend16332, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_closure, (Optr)PBlock16333, (Optr)&t_send1, (Optr)PSend16338, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16339, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send4, (Optr)PSend16340, (Optr)&t_method_return);
    Method PMethod16321 = new_Method_with(PArray16322, PArray16323, empty_Array, PThreadedCode16324, 5, PAssign16325, PAssign16328, PSend16332, PSend16338, PSend16340);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16321, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitSend_, MC_SMB_visitSend_);
}


static void init_SMB_invokeReflectionMethod_on_message_() {
    Symbol SMB_invokeReflectionMethod_on_message_ = new_Symbol(L"invokeReflectionMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
<<<<<<< HEAD
    Array PArray16372 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_annotation_0_3 = new_Variable_named(L"annotation", 0);
    Variable VAR_selector_0_4 = new_Variable_named(L"selector", 0);
    Array PArray16373 = new_Array_with(2, (Optr)VAR_annotation_0_3, (Optr)VAR_selector_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16376 = new_Array_with(1, (Optr)VAR__return__1_0);
=======
    Array PArray16342 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_annotation_0_3 = new_Variable_named(L"annotation", 0);
    Variable VAR_selector_0_4 = new_Variable_named(L"selector", 0);
    Array PArray16343 = new_Array_with(2, (Optr)VAR_annotation_0_3, (Optr)VAR_selector_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16346 = new_Array_with(1, (Optr)VAR__return__1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotationAt:. 
<<<<<<< HEAD
    Send PSend16379 = new_Send((Optr)VAR_aClosure_0_0, SMB_annotationAt_, 1, (Optr)SMB_pinocchioReflective__Const);
    Assign PAssign16378 = new_Assign((Optr)VAR_annotation_0_3, (Optr)PSend16379);
=======
    Send PSend16349 = new_Send((Optr)VAR_aClosure_0_0, SMB_annotationAt_, 1, (Optr)SMB_pinocchioReflective__Const);
    Assign PAssign16348 = new_Assign((Optr)VAR_annotation_0_3, (Optr)PSend16349);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
<<<<<<< HEAD
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
=======
    Send PSend16351 = new_Send((Optr)VAR_annotation_0_3, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16350 = new_Assign((Optr)VAR_selector_0_4, (Optr)PSend16351);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend16352 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)VAR_selector_0_4);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend16356 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    // perform:withArguments:. 
    Send PSend16357 = new_Send((Optr)self, SMB_perform_withArguments_, 2, (Optr)VAR_selector_0_4, (Optr)PSend16356);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16358 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16357);
    Array PThreadedCode16355 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_4, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send2, (Optr)PSend16356, (Optr)&t_send2, (Optr)PSend16357, (Optr)&t_send1, (Optr)PSend16358, (Optr)&t_block_return);
    Block PBlock16354 = new_Block_with(empty_Array, empty_Array, PThreadedCode16355, 1, PSend16358);
    // ifTrue:. 
    Send PSend16353 = new_Send((Optr)PSend16352, SMB_ifTrue_, 1, (Optr)PBlock16354);
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend16359 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Array PThreadedCode16347 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign16348, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend16349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16350, (Optr)&t_push_variable, (Optr)VAR_annotation_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16351, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_4, (Optr)&t_send1, (Optr)PSend16352, (Optr)&t_send_ifTrue_, (Optr)PSend16353, (Optr)PBlock16354, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16359, (Optr)&t_method_return);
    Block PBlock16345 = new_Block_with(PArray16346, empty_Array, PThreadedCode16347, 4, PAssign16348, PAssign16350, PSend16353, PSend16359);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16360 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16345);
    Array PThreadedCode16344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16345, (Optr)&t_send1, (Optr)PSend16360, (Optr)&t_method_return);
    Method PMethod16341 = new_Method_with(PArray16342, PArray16343, empty_Array, PThreadedCode16344, 1, PSend16360);
    
    MethodClosure MC_SMB_invokeReflectionMethod_on_message_ = new_MethodClosure((Method)PMethod16341, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_invokeReflectionMethod_on_message_, MC_SMB_invokeReflectionMethod_on_message_);
}


static void init_SMB_blockclosureValue_message_() {
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
<<<<<<< HEAD
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
=======
    Array PArray16362 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_returnContext_0_4 = new_Variable_named(L"returnContext", 0);
    Array PArray16363 = new_Array_with(3, (Optr)VAR_block_0_2, (Optr)VAR_result_0_3, (Optr)VAR_returnContext_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16366 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16369 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_code, 0);
    Assign PAssign16368 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend16369);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16370 = new_Send((Optr)VAR_block_0_2, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16371 = new_Send((Optr)PSend16370, SMB_size, 0);
    // size. 
    Send PSend16372 = new_Send((Optr)VAR_aMessage_0_1, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend16373 = new_Send((Optr)PSend16371, SMB__equals_, 1, (Optr)PSend16372);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend16374 = new_Send((Optr)self, SMB_assert_, 1, (Optr)PSend16373);
    // size. 
    Send PSend16375 = new_Send((Optr)VAR_block_0_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16376 = new_Send((Optr)PSend16375, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16380 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode16379 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16380, (Optr)&t_block_return);
    Block PBlock16378 = new_Block_with(empty_Array, empty_Array, PThreadedCode16379, 1, PSend16380);
    // ifTrue:. 
    Send PSend16377 = new_Send((Optr)PSend16376, SMB_ifTrue_, 1, (Optr)PBlock16378);
    Assign PAssign16381 = new_Assign((Optr)VAR_returnContext_0_4, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_blockContextFor_message_ = new_Symbol(L"blockContextFor:message:");
    // blockContextFor:message:. 
    Send PSend16382 = new_Send((Optr)self, SMB_blockContextFor_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    // interpretBlock:. 
    Send PSend16384 = new_Send((Optr)self, SMB_interpretBlock_, 1, (Optr)VAR_block_0_2);
    Assign PAssign16383 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16384);
    Assign PAssign16385 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)VAR_returnContext_0_4);
    Array PThreadedCode16367 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign16368, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16370, (Optr)&t_send0, (Optr)PSend16371, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_send0, (Optr)PSend16372, (Optr)&t_send1, (Optr)PSend16373, (Optr)&t_send1, (Optr)PSend16374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16375, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16376, (Optr)&t_send_ifTrue_, (Optr)PSend16377, (Optr)PBlock16378, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16381, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_send2, (Optr)PSend16382, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16383, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend16384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16385, (Optr)&t_push_variable, (Optr)VAR_returnContext_0_4, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock16365 = new_Block_with(PArray16366, empty_Array, PThreadedCode16367, 8, PAssign16368, PSend16374, PSend16377, PAssign16381, PSend16382, PAssign16383, PAssign16385, VAR_result_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16386 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16365);
    Array PThreadedCode16364 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16365, (Optr)&t_send1, (Optr)PSend16386, (Optr)&t_method_return);
    Method PMethod16361 = new_Method_with(PArray16362, PArray16363, empty_Array, PThreadedCode16364, 1, PSend16386);
    
    MethodClosure MC_SMB_blockclosureValue_message_ = new_MethodClosure((Method)PMethod16361, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_blockclosureValue_message_, MC_SMB_blockclosureValue_message_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
<<<<<<< HEAD
    Array PArray16418 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16420 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16419 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16420, (Optr)&t_method_return);
    Method PMethod16417 = new_Method_with(PArray16418, empty_Array, empty_Array, PThreadedCode16419, 1, PSend16420);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod16417, Interpretation_Interpreter_Class);
=======
    Array PArray16388 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16390 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16389 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16390, (Optr)&t_method_return);
    Method PMethod16387 = new_Method_with(PArray16388, empty_Array, empty_Array, PThreadedCode16389, 1, PSend16390);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod16387, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentSelf() {
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
<<<<<<< HEAD
    Send PSend16423 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16424 = new_Send((Optr)PSend16423, SMB_receiver, 0);
    Array PThreadedCode16422 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16423, (Optr)&t_send0, (Optr)PSend16424, (Optr)&t_method_return);
    Method PMethod16421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16422, 1, PSend16424);
    
    MethodClosure MC_SMB_currentSelf = new_MethodClosure((Method)PMethod16421, Interpretation_Interpreter_Class);
=======
    Send PSend16393 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16394 = new_Send((Optr)PSend16393, SMB_receiver, 0);
    Array PThreadedCode16392 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16393, (Optr)&t_send0, (Optr)PSend16394, (Optr)&t_method_return);
    Method PMethod16391 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16392, 1, PSend16394);
    
    MethodClosure MC_SMB_currentSelf = new_MethodClosure((Method)PMethod16391, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_currentSelf, MC_SMB_currentSelf);
}


static void init_SMB_visitUnsintSlot_() {
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
<<<<<<< HEAD
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
=======
    Array PArray16396 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16398 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16399 = new_Send((Optr)VAR_aSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16398);
    Array PThreadedCode16397 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16398, (Optr)&t_send1, (Optr)PSend16399, (Optr)&t_method_return);
    Method PMethod16395 = new_Method_with(PArray16396, empty_Array, empty_Array, PThreadedCode16397, 1, PSend16399);
    
    MethodClosure MC_SMB_visitUnsintSlot_ = new_MethodClosure((Method)PMethod16395, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitUnsintSlot_, MC_SMB_visitUnsintSlot_);
}


static void init_SMB_assignSlot_to_() {
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
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
=======
    Array PArray16401 = new_Array_with(2, (Optr)VAR_aSlot_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16403 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16404 = new_Send((Optr)VAR_aSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)PSend16403);
    Array PThreadedCode16402 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16403, (Optr)&t_send2, (Optr)PSend16404, (Optr)&t_method_return);
    Method PMethod16400 = new_Method_with(PArray16401, empty_Array, empty_Array, PThreadedCode16402, 1, PSend16404);
    
    MethodClosure MC_SMB_assignSlot_to_ = new_MethodClosure((Method)PMethod16400, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_assignSlot_to_, MC_SMB_assignSlot_to_);
}


static void init_SMB_continueOn_message_() {
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
<<<<<<< HEAD
    Array PArray16436 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_saveContext_0_2 = new_Variable_named(L"saveContext", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_aBlock_0_4 = new_Variable_named(L"aBlock", 0);
    Array PArray16437 = new_Array_with(3, (Optr)VAR_saveContext_0_2, (Optr)VAR_result_0_3, (Optr)VAR_aBlock_0_4);
    Assign PAssign16439 = new_Assign((Optr)VAR_saveContext_0_2, (Optr)slot_Interpretation_Interpreter_context);
=======
    Array PArray16406 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_saveContext_0_2 = new_Variable_named(L"saveContext", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_aBlock_0_4 = new_Variable_named(L"aBlock", 0);
    Array PArray16407 = new_Array_with(3, (Optr)VAR_saveContext_0_2, (Optr)VAR_result_0_3, (Optr)VAR_aBlock_0_4);
    Assign PAssign16409 = new_Assign((Optr)VAR_saveContext_0_2, (Optr)slot_Interpretation_Interpreter_context);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
<<<<<<< HEAD
    Send PSend16441 = new_Send((Optr)VAR_message_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16440 = new_Assign((Optr)VAR_aBlock_0_4, (Optr)PSend16441);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_metaCont_1_0 = new_Variable_named(L"metaCont", 1);
    Array PArray16445 = new_Array_with(1, (Optr)VAR_metaCont_1_0);
=======
    Send PSend16411 = new_Send((Optr)VAR_message_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16410 = new_Assign((Optr)VAR_aBlock_0_4, (Optr)PSend16411);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_metaCont_1_0 = new_Variable_named(L"metaCont", 1);
    Array PArray16415 = new_Array_with(1, (Optr)VAR_metaCont_1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
<<<<<<< HEAD
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
=======
    Send PSend16417 = new_Send((Optr)VAR_message_0_1, SMB_selector_, 1, (Optr)SMB_value__Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16418 = new_Send((Optr)VAR_message_0_1, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_metaCont_1_0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16419 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_message_0_1, (Optr)VAR_aBlock_0_4);
    Array PThreadedCode16416 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend16417, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_metaCont_1_0, (Optr)&t_send2, (Optr)PSend16418, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_4, (Optr)&t_send2, (Optr)PSend16419, (Optr)&t_method_return);
    Block PBlock16414 = new_Block_with(PArray16415, empty_Array, PThreadedCode16416, 3, PSend16417, PSend16418, PSend16419);
    // on:. 
    Send PSend16413 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16414);
    Assign PAssign16412 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16413);
    Assign PAssign16420 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)VAR_saveContext_0_2);
    Array PThreadedCode16408 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16409, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16410, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16411, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16412, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16414, (Optr)&t_send1, (Optr)PSend16413, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16420, (Optr)&t_push_variable, (Optr)VAR_saveContext_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Method PMethod16405 = new_Method_with(PArray16406, PArray16407, empty_Array, PThreadedCode16408, 5, PAssign16409, PAssign16410, PAssign16412, PAssign16420, VAR_result_0_3);
    
    MethodClosure MC_SMB_continueOn_message_ = new_MethodClosure((Method)PMethod16405, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_continueOn_message_, MC_SMB_continueOn_message_);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
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
=======
    Array PArray16422 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16425 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16427 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend16428 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16426 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16427, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend16428, (Optr)&t_method_return);
    Block PBlock16424 = new_Block_with(PArray16425, empty_Array, PThreadedCode16426, 2, PSend16427, PSend16428);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16429 = new_Send((Optr)PBlockClosure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16430 = new_Send((Optr)PBlock16424, SMB_value_, 1, (Optr)PSend16429);
    Array PThreadedCode16423 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16424, (Optr)&t_push_class_reference, (Optr)PBlockClosure_classReference, (Optr)&t_send0, (Optr)PSend16429, (Optr)&t_send1, (Optr)PSend16430, (Optr)&t_method_return);
    Method PMethod16421 = new_Method_with(PArray16422, empty_Array, empty_Array, PThreadedCode16423, 1, PSend16430);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod16421, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_send_to_() {
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
<<<<<<< HEAD
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
=======
    Array PArray16432 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16434 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    // send:to:class:. 
    Send PSend16435 = new_Send((Optr)self, SMB_send_to_class_, 3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)PSend16434);
    Array PThreadedCode16433 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16434, (Optr)&t_send3, (Optr)PSend16435, (Optr)&t_method_return);
    Method PMethod16431 = new_Method_with(PArray16432, empty_Array, empty_Array, PThreadedCode16433, 1, PSend16435);
    
    MethodClosure MC_SMB_send_to_ = new_MethodClosure((Method)PMethod16431, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_send_to_, MC_SMB_send_to_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
<<<<<<< HEAD
    Array PArray16467 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend16469 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Array PThreadedCode16468 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend16469, (Optr)&t_method_return);
    Method PMethod16466 = new_Method_with(PArray16467, empty_Array, empty_Array, PThreadedCode16468, 1, PSend16469);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod16466, Interpretation_Interpreter_Class);
=======
    Array PArray16437 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend16439 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Array PThreadedCode16438 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend16439, (Optr)&t_method_return);
    Method PMethod16436 = new_Method_with(PArray16437, empty_Array, empty_Array, PThreadedCode16438, 1, PSend16439);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod16436, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_invokeNativeMethod_on_message_alternative_() {
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
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
=======
    Array PArray16441 = new_Array_with(4, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_aBlock_0_3);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Interpretation_minus_Interpreter = new_Symbol(L"Interpretation.Interpreter");
    Annotation PAnnotation16443 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_invokeNativeMethod_on_message_alternative_, (Optr)SMB_Interpretation_minus_Interpreter);
    Array PArray16442 = new_Array_with(1, (Optr)PAnnotation16443);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16445 = new_Send((Optr)VAR_aBlock_0_3, SMB_value, 0);
    Array PThreadedCode16444 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_send0, (Optr)PSend16445, (Optr)&t_method_return);
    NativeMethod PNativeMethod16440 = new_NativeMethod_with(PArray16441, empty_Array, PArray16442, PThreadedCode16444, 1, PSend16445);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_alternative_ = new_MethodClosure((Method)PNativeMethod16440, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_invokeNativeMethod_on_message_alternative_, MC_SMB_invokeNativeMethod_on_message_alternative_);
}


<<<<<<< HEAD
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


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_lookupSelector_in_() {
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
<<<<<<< HEAD
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
=======
    Array PArray16447 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Variable VAR_currentClass_0_2 = new_Variable_named(L"currentClass", 0);
    Array PArray16448 = new_Array_with(1, (Optr)VAR_currentClass_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16451 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign16453 = new_Assign((Optr)VAR_currentClass_0_2, (Optr)VAR_class_0_1);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16456 = new_Send((Optr)VAR_currentClass_0_2, SMB_isNil, 0);
    Array PThreadedCode16455 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16456, (Optr)&t_block_return);
    Block PBlock16454 = new_Block_with(empty_Array, empty_Array, PThreadedCode16455, 1, PSend16456);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend16459 = new_Send((Optr)VAR_currentClass_0_2, SMB_methodDict, 0);
    Variable VAR_method_2_0 = new_Variable_named(L"method", 2);
    Array PArray16461 = new_Array_with(1, (Optr)VAR_method_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16463 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_method_2_0);
    Array PThreadedCode16462 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_method_2_0, (Optr)&t_send1, (Optr)PSend16463, (Optr)&t_method_return);
    Block PBlock16460 = new_Block_with(PArray16461, empty_Array, PThreadedCode16462, 1, PSend16463);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend16464 = new_Send((Optr)PSend16459, SMB_at_ifPresent_, 2, (Optr)VAR_selector_0_0, (Optr)PBlock16460);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend16466 = new_Send((Optr)VAR_currentClass_0_2, SMB_superclass, 0);
    Assign PAssign16465 = new_Assign((Optr)VAR_currentClass_0_2, (Optr)PSend16466);
    Array PThreadedCode16458 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16459, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_closure, (Optr)PBlock16460, (Optr)&t_send2, (Optr)PSend16464, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16465, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16466, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16457 = new_Block_with(empty_Array, empty_Array, PThreadedCode16458, 2, PSend16464, PAssign16465);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16467 = new_Send((Optr)PBlock16454, SMB_whileFalse_, 1, (Optr)PBlock16457);
    Array PThreadedCode16452 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign16453, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16454, (Optr)&t_push_closure, (Optr)PBlock16457, (Optr)&t_send1, (Optr)PSend16467, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16450 = new_Block_with(PArray16451, empty_Array, PThreadedCode16452, 3, PAssign16453, PSend16467, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16468 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16450);
    Array PThreadedCode16449 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16450, (Optr)&t_send1, (Optr)PSend16468, (Optr)&t_method_return);
    Method PMethod16446 = new_Method_with(PArray16447, PArray16448, empty_Array, PThreadedCode16449, 1, PSend16468);
    
    MethodClosure MC_SMB_lookupSelector_in_ = new_MethodClosure((Method)PMethod16446, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_lookupSelector_in_, MC_SMB_lookupSelector_in_);
}


static void init_SMB_methodContextFor_receiver_message_() {
    Symbol SMB_methodContextFor_receiver_message_ = new_Symbol(L"methodContextFor:receiver:message:");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
<<<<<<< HEAD
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
=======
    Array PArray16470 = new_Array_with(3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16475 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend16477 = new_Send((Optr)VAR__receiver__1_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16478 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16479 = new_Send((Optr)VAR__receiver__1_0, SMB_closure_, 1, (Optr)VAR_closure_0_0);
    Array PThreadedCode16476 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16477, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16478, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend16479, (Optr)&t_method_return);
    Block PBlock16474 = new_Block_with(PArray16475, empty_Array, PThreadedCode16476, 3, PSend16477, PSend16478, PSend16479);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
<<<<<<< HEAD
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
=======
    Send PSend16484 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16483 = new_Send((Optr)PSend16484, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16482 = new_Send((Optr)PSend16483, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // code. 
    Send PSend16487 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend16486 = new_Send((Optr)PSend16487, SMB_locals, 0);
    // size. 
    Send PSend16485 = new_Send((Optr)PSend16486, SMB_size, 0);
    // +. 
    Send PSend16481 = new_Send((Optr)PSend16482, SMB__plus_, 1, (Optr)PSend16485);
    // new:. 
    Send PSend16480 = new_Send((Optr)PMethodContext_classReference, SMB_new_, 1, (Optr)PSend16481);
    // value:. 
    Send PSend16473 = new_Send((Optr)PBlock16474, SMB_value_, 1, (Optr)PSend16480);
    Assign PAssign16472 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16473);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16489 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16491 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_arg_1_0);
    Array PThreadedCode16490 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send2, (Optr)PSend16491, (Optr)&t_method_return);
    Block PBlock16488 = new_Block_with(PArray16489, empty_Array, PThreadedCode16490, 1, PSend16491);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16492 = new_Send((Optr)VAR_aMessage_0_2, SMB_withIndexDo_, 1, (Optr)PBlock16488);
    Array PThreadedCode16471 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign16472, (Optr)&t_push_closure, (Optr)PBlock16474, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16484, (Optr)&t_send0, (Optr)PSend16483, (Optr)&t_send0, (Optr)PSend16482, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16487, (Optr)&t_send0, (Optr)PSend16486, (Optr)&t_send0, (Optr)PSend16485, (Optr)&t_send1, (Optr)PSend16481, (Optr)&t_send1, (Optr)PSend16480, (Optr)&t_send1, (Optr)PSend16473, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock16488, (Optr)&t_send1, (Optr)PSend16492, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16469 = new_Method_with(PArray16470, empty_Array, empty_Array, PThreadedCode16471, 3, PAssign16472, PSend16492, self);
    
    MethodClosure MC_SMB_methodContextFor_receiver_message_ = new_MethodClosure((Method)PMethod16469, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_methodContextFor_receiver_message_, MC_SMB_methodContextFor_receiver_message_);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
<<<<<<< HEAD
    Array PArray16550 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend16552 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode16551 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend16552, (Optr)&t_method_return);
    Method PMethod16549 = new_Method_with(PArray16550, empty_Array, empty_Array, PThreadedCode16551, 1, PSend16552);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod16549, Interpretation_Interpreter_Class);
=======
    Array PArray16494 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend16496 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode16495 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend16496, (Optr)&t_method_return);
    Method PMethod16493 = new_Method_with(PArray16494, empty_Array, empty_Array, PThreadedCode16495, 1, PSend16496);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod16493, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_sendNext_to_class_() {
    Symbol SMB_sendNext_to_class_ = new_Symbol(L"sendNext:to:class:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Array PArray16498 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_cls_0_2);
    Variable VAR_msg_0_3 = new_Variable_named(L"msg", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16499 = new_Array_with(2, (Optr)VAR_msg_0_3, (Optr)VAR_result_0_4);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    // send:to:class:. 
    Send PSend16505 = new_Send((Optr)self, SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_cls_0_2);
    Array PThreadedCode16504 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send3, (Optr)PSend16505, (Optr)&t_block_return);
    Block PBlock16503 = new_Block_with(empty_Array, empty_Array, PThreadedCode16504, 1, PSend16505);
    Variable VAR_next_1_0 = new_Variable_named(L"next", 1);
    Array PArray16507 = new_Array_with(1, (Optr)VAR_next_1_0);
    Assign PAssign16509 = new_Assign((Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)nil_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16513 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol  SMB_sendNext_to_ = new_Symbol(L"sendNext:to:");
    Constant SMB_sendNext_to__Const = new_Constant((Optr)SMB_sendNext_to_);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16515 = new_Send((Optr)SMB_sendNext_to__Const, SMB_class, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16516 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend16515);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend16517 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_message_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend16518 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)VAR_receiver_0_1);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend16519 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)VAR_cls_0_2);
    Array PThreadedCode16514 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_sendNext_to_, (Optr)&t_send0, (Optr)PSend16515, (Optr)&t_send1, (Optr)PSend16516, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send2, (Optr)PSend16517, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16518, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend16519, (Optr)&t_method_return);
    Block PBlock16512 = new_Block_with(PArray16513, empty_Array, PThreadedCode16514, 4, PSend16516, PSend16517, PSend16518, PSend16519);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16520 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)int_3_Const);
    // value:. 
    Send PSend16511 = new_Send((Optr)PBlock16512, SMB_value_, 1, (Optr)PSend16520);
    Assign PAssign16510 = new_Assign((Optr)VAR_msg_0_3, (Optr)PSend16511);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16521 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_msg_0_3, (Optr)VAR_next_1_0);
    Array PThreadedCode16508 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign16509, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16510, (Optr)&t_push_closure, (Optr)PBlock16512, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend16520, (Optr)&t_send1, (Optr)PSend16511, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_3, (Optr)&t_push_variable, (Optr)VAR_next_1_0, (Optr)&t_send2, (Optr)PSend16521, (Optr)&t_method_return);
    Block PBlock16506 = new_Block_with(PArray16507, empty_Array, PThreadedCode16508, 3, PAssign16509, PAssign16510, PSend16521);
    // ifNil:ifNotNil:. 
    Send PSend16502 = new_Send((Optr)slot_Interpretation_Interpreter_nextInterpreter, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock16503, (Optr)PBlock16506);
    Assign PAssign16501 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16502);
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    // swapInvokeNative. 
    Send PSend16522 = new_Send((Optr)self, SMB_swapInvokeNative, 0);
    Array PThreadedCode16500 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16501, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)&t_push_closure, (Optr)PBlock16503, (Optr)&t_push_closure, (Optr)PBlock16506, (Optr)&t_send2, (Optr)PSend16502, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16522, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Method PMethod16497 = new_Method_with(PArray16498, PArray16499, empty_Array, PThreadedCode16500, 3, PAssign16501, PSend16522, VAR_result_0_4);
    
    MethodClosure MC_SMB_sendNext_to_class_ = new_MethodClosure((Method)PMethod16497, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_sendNext_to_class_, MC_SMB_sendNext_to_class_);
}


static void init_SMB_assignVariable_to_() {
    Symbol SMB_assignVariable_to_ = new_Symbol(L"assignVariable:to:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
    Array PArray16554 = new_Array_with(2, (Optr)VAR_aVariable_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16556 = new_Send((Optr)VAR_aVariable_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16555 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send2, (Optr)PSend16556, (Optr)&t_method_return);
    Method PMethod16553 = new_Method_with(PArray16554, empty_Array, empty_Array, PThreadedCode16555, 1, PSend16556);
    
    MethodClosure MC_SMB_assignVariable_to_ = new_MethodClosure((Method)PMethod16553, Interpretation_Interpreter_Class);
=======
    Array PArray16524 = new_Array_with(2, (Optr)VAR_aVariable_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16526 = new_Send((Optr)VAR_aVariable_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16525 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send2, (Optr)PSend16526, (Optr)&t_method_return);
    Method PMethod16523 = new_Method_with(PArray16524, empty_Array, empty_Array, PThreadedCode16525, 1, PSend16526);
    
    MethodClosure MC_SMB_assignVariable_to_ = new_MethodClosure((Method)PMethod16523, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_assignVariable_to_, MC_SMB_assignVariable_to_);
}


static void init_SMB_assignUnsintSlot_to_() {
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
<<<<<<< HEAD
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
=======
    Array PArray16528 = new_Array_with(2, (Optr)VAR_aSlot_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16530 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16531 = new_Send((Optr)VAR_aSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)PSend16530);
    Array PThreadedCode16529 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16530, (Optr)&t_send2, (Optr)PSend16531, (Optr)&t_method_return);
    Method PMethod16527 = new_Method_with(PArray16528, empty_Array, empty_Array, PThreadedCode16529, 1, PSend16531);
    
    MethodClosure MC_SMB_assignUnsintSlot_to_ = new_MethodClosure((Method)PMethod16527, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_assignUnsintSlot_to_, MC_SMB_assignUnsintSlot_to_);
}


static void init_SMB_invokeMethod_on_message_() {
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
<<<<<<< HEAD
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
=======
    Array PArray16533 = new_Array_with(3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_method_0_3 = new_Variable_named(L"method", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16534 = new_Array_with(2, (Optr)VAR_method_0_3, (Optr)VAR_result_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16537 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16540 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Assign PAssign16539 = new_Assign((Optr)VAR_method_0_3, (Optr)PSend16540);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16541 = new_Send((Optr)VAR_method_0_3, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16542 = new_Send((Optr)PSend16541, SMB_size, 0);
    // size. 
    Send PSend16543 = new_Send((Optr)VAR_aMessage_0_2, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend16544 = new_Send((Optr)PSend16542, SMB__equals_, 1, (Optr)PSend16543);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend16545 = new_Send((Optr)self, SMB_assert_, 1, (Optr)PSend16544);
    // size. 
    Send PSend16546 = new_Send((Optr)VAR_method_0_3, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16547 = new_Send((Optr)PSend16546, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16551 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode16550 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16551, (Optr)&t_block_return);
    Block PBlock16549 = new_Block_with(empty_Array, empty_Array, PThreadedCode16550, 1, PSend16551);
    // ifTrue:. 
    Send PSend16548 = new_Send((Optr)PSend16547, SMB_ifTrue_, 1, (Optr)PBlock16549);
    Symbol SMB_methodContextFor_receiver_message_ = new_Symbol(L"methodContextFor:receiver:message:");
    // methodContextFor:receiver:message:. 
    Send PSend16552 = new_Send((Optr)self, SMB_methodContextFor_receiver_message_, 3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    // interpretMethod:. 
    Send PSend16554 = new_Send((Optr)self, SMB_interpretMethod_, 1, (Optr)VAR_method_0_3);
    Assign PAssign16553 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16554);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16556 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign16555 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16556);
    Array PThreadedCode16538 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign16539, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16540, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send0, (Optr)PSend16541, (Optr)&t_send0, (Optr)PSend16542, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend16543, (Optr)&t_send1, (Optr)PSend16544, (Optr)&t_send1, (Optr)PSend16545, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send0, (Optr)PSend16546, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16547, (Optr)&t_send_ifTrue_, (Optr)PSend16548, (Optr)PBlock16549, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16552, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16553, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send1, (Optr)PSend16554, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16555, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16556, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Block PBlock16536 = new_Block_with(PArray16537, empty_Array, PThreadedCode16538, 7, PAssign16539, PSend16545, PSend16548, PSend16552, PAssign16553, PAssign16555, VAR_result_0_4);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16557 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16536);
    Array PThreadedCode16535 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16536, (Optr)&t_send1, (Optr)PSend16557, (Optr)&t_method_return);
    Method PMethod16532 = new_Method_with(PArray16533, PArray16534, empty_Array, PThreadedCode16535, 1, PSend16557);
    
    MethodClosure MC_SMB_invokeMethod_on_message_ = new_MethodClosure((Method)PMethod16532, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_invokeMethod_on_message_, MC_SMB_invokeMethod_on_message_);
}


static void init_SMB_sendDoesNotUnderstandFor_to_() {
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
<<<<<<< HEAD
    Array PArray16589 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR_dnu_0_2 = new_Variable_named(L"dnu", 0);
    Array PArray16590 = new_Array_with(1, (Optr)VAR_dnu_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16593 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16595 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
=======
    Array PArray16559 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR_dnu_0_2 = new_Variable_named(L"dnu", 0);
    Array PArray16560 = new_Array_with(1, (Optr)VAR_dnu_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16563 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16565 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_doesNotUnderstand__Const = new_Constant((Optr)SMB_doesNotUnderstand_);
    // =. 
<<<<<<< HEAD
    Send PSend16596 = new_Send((Optr)PSend16595, SMB__equals_, 1, (Optr)SMB_doesNotUnderstand__Const);
=======
    Send PSend16566 = new_Send((Optr)PSend16565, SMB__equals_, 1, (Optr)SMB_doesNotUnderstand__Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
<<<<<<< HEAD
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
=======
    Send PSend16570 = new_Send((Optr)VAR_aMessage_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    // recursiveDoesNotUnderstand:on:. 
    Send PSend16571 = new_Send((Optr)self, SMB_recursiveDoesNotUnderstand_on_, 2, (Optr)PSend16570, (Optr)VAR_receiver_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16572 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16571);
    Array PThreadedCode16569 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16570, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16571, (Optr)&t_send1, (Optr)PSend16572, (Optr)&t_block_return);
    Block PBlock16568 = new_Block_with(empty_Array, empty_Array, PThreadedCode16569, 1, PSend16572);
    // ifTrue:. 
    Send PSend16567 = new_Send((Optr)PSend16566, SMB_ifTrue_, 1, (Optr)PBlock16568);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16574 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Assign PAssign16573 = new_Assign((Optr)VAR_dnu_0_2, (Optr)PSend16574);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16575 = new_Send((Optr)VAR_dnu_0_2, SMB_selector_, 1, (Optr)SMB_doesNotUnderstand__Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16576 = new_Send((Optr)VAR_dnu_0_2, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_aMessage_0_0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16577 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_dnu_0_2, (Optr)VAR_receiver_0_1);
    Array PThreadedCode16564 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16565, (Optr)&t_push1, (Optr)SMB_doesNotUnderstand_, (Optr)&t_send1, (Optr)PSend16566, (Optr)&t_send_ifTrue_, (Optr)PSend16567, (Optr)PBlock16568, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16573, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16574, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push1, (Optr)SMB_doesNotUnderstand_, (Optr)&t_send1, (Optr)PSend16575, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send2, (Optr)PSend16576, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16577, (Optr)&t_method_return);
    Block PBlock16562 = new_Block_with(PArray16563, empty_Array, PThreadedCode16564, 5, PSend16567, PAssign16573, PSend16575, PSend16576, PSend16577);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16578 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16562);
    Array PThreadedCode16561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16562, (Optr)&t_send1, (Optr)PSend16578, (Optr)&t_method_return);
    Method PMethod16558 = new_Method_with(PArray16559, PArray16560, empty_Array, PThreadedCode16561, 1, PSend16578);
    
    MethodClosure MC_SMB_sendDoesNotUnderstandFor_to_ = new_MethodClosure((Method)PMethod16558, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_sendDoesNotUnderstandFor_to_, MC_SMB_sendDoesNotUnderstandFor_to_);
}


<<<<<<< HEAD
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


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_aSend_0_3 = new_Variable_named(L"aSend", 0);
<<<<<<< HEAD
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
=======
    Array PArray16580 = new_Array_with(4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Variable VAR_method_0_4 = new_Variable_named(L"method", 0);
    Array PArray16581 = new_Array_with(1, (Optr)VAR_method_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16584 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_inlineCache = new_Symbol(L"inlineCache");
    // inlineCache. 
    Send PSend16588 = new_Send((Optr)VAR_aSend_0_3, SMB_inlineCache, 0);
    Symbol SMB_checkCached_ = new_Symbol(L"checkCached:");
    // checkCached:. 
    Send PSend16587 = new_Send((Optr)PSend16588, SMB_checkCached_, 1, (Optr)VAR_class_0_2);
    Assign PAssign16586 = new_Assign((Optr)VAR_method_0_4, (Optr)PSend16587);
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    // accept:on:message:. 
    Send PSend16591 = new_Send((Optr)VAR_method_0_4, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16592 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16591);
    Array PThreadedCode16590 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16591, (Optr)&t_send1, (Optr)PSend16592, (Optr)&t_block_return);
    Block PBlock16589 = new_Block_with(empty_Array, empty_Array, PThreadedCode16590, 1, PSend16592);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend16593 = new_Send((Optr)VAR_method_0_4, SMB_ifNotNil_, 1, (Optr)PBlock16589);
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16596 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    // lookupSelector:in:. 
    Send PSend16595 = new_Send((Optr)self, SMB_lookupSelector_in_, 2, (Optr)PSend16596, (Optr)VAR_class_0_2);
    Assign PAssign16594 = new_Assign((Optr)VAR_method_0_4, (Optr)PSend16595);
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    // sendDoesNotUnderstandFor:to:. 
    Send PSend16599 = new_Send((Optr)self, SMB_sendDoesNotUnderstandFor_to_, 2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    // escape:. 
    Send PSend16600 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16599);
    Array PThreadedCode16598 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16599, (Optr)&t_send1, (Optr)PSend16600, (Optr)&t_block_return);
    Block PBlock16597 = new_Block_with(empty_Array, empty_Array, PThreadedCode16598, 1, PSend16600);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend16601 = new_Send((Optr)VAR_method_0_4, SMB_ifNil_, 1, (Optr)PBlock16597);
    // inlineCache. 
    Send PSend16602 = new_Send((Optr)VAR_aSend_0_3, SMB_inlineCache, 0);
    Symbol SMB_cache_at_ = new_Symbol(L"cache:at:");
    // cache:at:. 
    Send PSend16603 = new_Send((Optr)PSend16602, SMB_cache_at_, 2, (Optr)VAR_method_0_4, (Optr)VAR_class_0_2);
    // accept:on:message:. 
    Send PSend16604 = new_Send((Optr)VAR_method_0_4, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode16585 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign16586, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_send0, (Optr)PSend16588, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send1, (Optr)PSend16587, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_closure, (Optr)PBlock16589, (Optr)&t_send1, (Optr)PSend16593, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16594, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16596, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16595, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_closure, (Optr)PBlock16597, (Optr)&t_send1, (Optr)PSend16601, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_send0, (Optr)PSend16602, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16603, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16604, (Optr)&t_method_return);
    Block PBlock16583 = new_Block_with(PArray16584, empty_Array, PThreadedCode16585, 6, PAssign16586, PSend16593, PAssign16594, PSend16601, PSend16603, PSend16604);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16605 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16583);
    Array PThreadedCode16582 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16583, (Optr)&t_send1, (Optr)PSend16605, (Optr)&t_method_return);
    Method PMethod16579 = new_Method_with(PArray16580, PArray16581, empty_Array, PThreadedCode16582, 1, PSend16605);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16579, Interpretation_Interpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Interpreter_Class, SMB_send_to_class_for_, MC_SMB_send_to_class_for_);
}


static void init_class_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
<<<<<<< HEAD
    Array PArray16641 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16643 = new_Send((Optr)self, SMB_new, 0);
    // interpret:. 
    Send PSend16644 = new_Send((Optr)PSend16643, SMB_interpret_, 1, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode16642 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16643, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend16644, (Optr)&t_method_return);
    Method PMethod16640 = new_Method_with(PArray16641, empty_Array, empty_Array, PThreadedCode16642, 1, PSend16644);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16640, HEADER(Interpretation_Interpreter_Class));
=======
    Array PArray16607 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16609 = new_Send((Optr)self, SMB_new, 0);
    // interpret:. 
    Send PSend16610 = new_Send((Optr)PSend16609, SMB_interpret_, 1, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode16608 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16609, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend16610, (Optr)&t_method_return);
    Method PMethod16606 = new_Method_with(PArray16607, empty_Array, empty_Array, PThreadedCode16608, 1, PSend16610);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16606, HEADER(Interpretation_Interpreter_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Interpretation_Interpreter_Class), SMB_interpret_, MC_SMB_interpret_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Interpretation_minus_Interpreter = new_Symbol(L"Interpretation.Interpreter");
<<<<<<< HEAD
    String string_16647 = new_String(L"plugin/interpretation/Interpreter.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Interpretation_minus_Interpreter_Const = new_Constant((Optr)SMB_Interpretation_minus_Interpreter);
    Constant string_16647_Const = new_Constant((Optr)string_16647);
    // require:at:. 
    Send PSend16648 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Interpretation_minus_Interpreter_Const, (Optr)string_16647_Const);
    Array PThreadedCode16646 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Interpretation_minus_Interpreter, (Optr)&t_push1, (Optr)string_16647, (Optr)&t_send2, (Optr)PSend16648, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16645 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16646, 2, PSend16648, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16645, HEADER(Interpretation_Interpreter_Class));
=======
    String string_16613 = new_String(L"plugin/interpretation/Interpreter.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Interpretation_minus_Interpreter_Const = new_Constant((Optr)SMB_Interpretation_minus_Interpreter);
    Constant string_16613_Const = new_Constant((Optr)string_16613);
    // require:at:. 
    Send PSend16614 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Interpretation_minus_Interpreter_Const, (Optr)string_16613_Const);
    Array PThreadedCode16612 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Interpretation_minus_Interpreter, (Optr)&t_push1, (Optr)string_16613, (Optr)&t_send2, (Optr)PSend16614, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16611 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16612, 2, PSend16614, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16611, HEADER(Interpretation_Interpreter_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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