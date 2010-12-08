#include <lib/class/Runtime/BlockClosure.h>


Optr layout_Runtime_BlockClosure_Class_class;
Optr slot_Runtime_BlockClosure_context;
Optr layout_Runtime_BlockClosure;


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8137 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8139 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // value. 
    Send PSend8143 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend8144 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8142 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8143, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8144, (Optr)&t_block_return);
    Block PBlock8141 = new_Block_with(empty_Array, empty_Array, PThreadedCode8142, 2, PSend8143, PSend8144);
    // ifTrue:. 
    Send PSend8140 = new_Send((Optr)PSend8139, SMB_ifTrue_, 1, (Optr)PBlock8141);
    Array PThreadedCode8138 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8139, (Optr)&t_send_ifTrue_, (Optr)PSend8140, (Optr)PBlock8141, (Optr)&t_method_return);
    Method PMethod8136 = new_Method_with(PArray8137, empty_Array, empty_Array, PThreadedCode8138, 1, PSend8140);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod8136, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue_, MC_SMB_whileTrue_);
}


static void init_SMB_value_value_value_() {
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Array PArray8146 = new_Array_with(3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8148 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8147 = new_Array_with(1, (Optr)PAnnotation8148);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend8150 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8151 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8150);
    Array PThreadedCode8149 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_send3, (Optr)PSend8150, (Optr)&t_send1, (Optr)PSend8151, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8145 = new_ReflectionMethod_with(PArray8146, empty_Array, PArray8147, PThreadedCode8149, 1, PSend8151);
    
    MethodClosure MC_SMB_value_value_value_ = new_MethodClosure((Method)PReflectionMethod8145, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_, MC_SMB_value_value_value_);
}


static void init_SMB_value_value_() {
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Array PArray8153 = new_Array_with(2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8155 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8154 = new_Array_with(1, (Optr)PAnnotation8155);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend8157 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8158 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8157);
    Array PThreadedCode8156 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_send2, (Optr)PSend8157, (Optr)&t_send1, (Optr)PSend8158, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8152 = new_ReflectionMethod_with(PArray8153, empty_Array, PArray8154, PThreadedCode8156, 1, PSend8158);
    
    MethodClosure MC_SMB_value_value_ = new_MethodClosure((Method)PReflectionMethod8152, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_, MC_SMB_value_value_);
}


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8160 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8162 = new_Assign((Optr)slot_Runtime_BlockClosure_context, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8161 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8162, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8159 = new_Method_with(PArray8160, empty_Array, empty_Array, PThreadedCode8161, 2, PAssign8162, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod8159, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_on_do_() {
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    Variable VAR_errorClass_0_0 = new_Variable_named(L"errorClass", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray8164 = new_Array_with(2, (Optr)VAR_errorClass_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_previousExceptionHandler_0_2 = new_Variable_named(L"previousExceptionHandler", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray8165 = new_Array_with(2, (Optr)VAR_previousExceptionHandler_0_2, (Optr)VAR_result_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8168 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend8171 = new_Send((Optr)Exception_classReference, SMB_handler, 0);
    Assign PAssign8170 = new_Assign((Optr)VAR_previousExceptionHandler_0_2, (Optr)PSend8171);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_return_2_0 = new_Variable_named(L"return", 2);
    Array PArray8175 = new_Array_with(1, (Optr)VAR_return_2_0);
    Variable VAR_error_2_1 = new_Variable_named(L"error", 2);
    Array PArray8176 = new_Array_with(1, (Optr)VAR_error_2_1);
    Variable VAR_escape_3_0 = new_Variable_named(L"escape", 3);
    Array PArray8181 = new_Array_with(1, (Optr)VAR_escape_3_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend8183 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_escape_3_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8184 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8185 = new_Send((Optr)VAR_return_2_0, SMB_escape_, 1, (Optr)PSend8184);
    Array PThreadedCode8182 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_escape_3_0, (Optr)&t_send1, (Optr)PSend8183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_return_2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8184, (Optr)&t_send1, (Optr)PSend8185, (Optr)&t_method_return);
    Block PBlock8180 = new_Block_with(PArray8181, empty_Array, PThreadedCode8182, 2, PSend8183, PSend8185);
    // on:. 
    Send PSend8179 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8180);
    Assign PAssign8178 = new_Assign((Optr)VAR_error_2_1, (Optr)PSend8179);
    // handler:. 
    Send PSend8186 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend8187 = new_Send((Optr)VAR_error_2_1, SMB_isKindOf_, 1, (Optr)VAR_errorClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8191 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_error_2_1);
    // escape:. 
    Send PSend8192 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8191);
    Array PThreadedCode8190 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend8191, (Optr)&t_send1, (Optr)PSend8192, (Optr)&t_block_return);
    Block PBlock8189 = new_Block_with(empty_Array, empty_Array, PThreadedCode8190, 1, PSend8192);
    // ifTrue:. 
    Send PSend8188 = new_Send((Optr)PSend8187, SMB_ifTrue_, 1, (Optr)PBlock8189);
    // escape:. 
    Send PSend8193 = new_Send((Optr)VAR_previousExceptionHandler_0_2, SMB_escape_, 1, (Optr)VAR_error_2_1);
    Array PThreadedCode8177 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign8178, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8180, (Optr)&t_send1, (Optr)PSend8179, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend8186, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_push_variable, (Optr)VAR_errorClass_0_0, (Optr)&t_send1, (Optr)PSend8187, (Optr)&t_send_ifTrue_, (Optr)PSend8188, (Optr)PBlock8189, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend8193, (Optr)&t_method_return);
    Block PBlock8174 = new_Block_with(PArray8175, PArray8176, PThreadedCode8177, 4, PAssign8178, PSend8186, PSend8188, PSend8193);
    // on:. 
    Send PSend8173 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8174);
    Assign PAssign8172 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend8173);
    // handler:. 
    Send PSend8194 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Array PThreadedCode8169 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign8170, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_send0, (Optr)PSend8171, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8172, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8174, (Optr)&t_send1, (Optr)PSend8173, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend8194, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock8167 = new_Block_with(PArray8168, empty_Array, PThreadedCode8169, 4, PAssign8170, PAssign8172, PSend8194, VAR_result_0_3);
    // on:. 
    Send PSend8195 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8167);
    Array PThreadedCode8166 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8167, (Optr)&t_send1, (Optr)PSend8195, (Optr)&t_method_return);
    Method PMethod8163 = new_Method_with(PArray8164, PArray8165, empty_Array, PThreadedCode8166, 1, PSend8195);
    
    MethodClosure MC_SMB_on_do_ = new_MethodClosure((Method)PMethod8163, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_on_do_, MC_SMB_on_do_);
}


static void init_SMB_value_value_value_value_() {
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Variable VAR_yetAnotherArg_0_3 = new_Variable_named(L"yetAnotherArg", 0);
    Array PArray8197 = new_Array_with(4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8199 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8198 = new_Array_with(1, (Optr)PAnnotation8199);
    Symbol SMB_with_with_with_with_ = new_Symbol(L"with:with:with:with:");
    // with:with:with:with:. 
    Send PSend8201 = new_Send((Optr)Array_classReference, SMB_with_with_with_with_, 4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8202 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8201);
    Array PThreadedCode8200 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_push_variable, (Optr)VAR_yetAnotherArg_0_3, (Optr)&t_send4, (Optr)PSend8201, (Optr)&t_send1, (Optr)PSend8202, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8196 = new_ReflectionMethod_with(PArray8197, empty_Array, PArray8198, PThreadedCode8200, 1, PSend8202);
    
    MethodClosure MC_SMB_value_value_value_value_ = new_MethodClosure((Method)PReflectionMethod8196, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_value_, MC_SMB_value_value_value_value_);
}


static void init_SMB_whileTrue() {
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8205 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // whileTrue. 
    Send PSend8209 = new_Send((Optr)self, SMB_whileTrue, 0);
    Array PThreadedCode8208 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8209, (Optr)&t_block_return);
    Block PBlock8207 = new_Block_with(empty_Array, empty_Array, PThreadedCode8208, 1, PSend8209);
    // ifTrue:. 
    Send PSend8206 = new_Send((Optr)PSend8205, SMB_ifTrue_, 1, (Optr)PBlock8207);
    Array PThreadedCode8204 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8205, (Optr)&t_send_ifTrue_, (Optr)PSend8206, (Optr)PBlock8207, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8203 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8204, 2, PSend8206, self);
    
    MethodClosure MC_SMB_whileTrue = new_MethodClosure((Method)PMethod8203, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue, MC_SMB_whileTrue);
}


static void init_SMB_parallelWith_() {
    Symbol SMB_parallelWith_ = new_Symbol(L"parallelWith:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8211 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend8213 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)self, (Optr)VAR_aBlock_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend8214 = new_Send((Optr)PParallelDebugger_classReference, SMB_interpret_, 1, (Optr)PSend8213);
    Array PThreadedCode8212 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PParallelDebugger_classReference, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend8213, (Optr)&t_send1, (Optr)PSend8214, (Optr)&t_method_return);
    Method PMethod8210 = new_Method_with(PArray8211, empty_Array, empty_Array, PThreadedCode8212, 1, PSend8214);
    
    MethodClosure MC_SMB_parallelWith_ = new_MethodClosure((Method)PMethod8210, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_parallelWith_, MC_SMB_parallelWith_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Array PArray8216 = new_Array_with(1, (Optr)VAR_closure_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8220 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8219 = new_Send((Optr)PSend8220, SMB_new, 0);
    Assign PAssign8218 = new_Assign((Optr)VAR_closure_0_0, (Optr)PSend8219);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend8221 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend8222 = new_Send((Optr)VAR_closure_0_0, SMB_code_, 1, (Optr)PSend8221);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend8223 = new_Send((Optr)self, SMB_context, 0);
    // asAliased. 
    Send PSend8224 = new_Send((Optr)PSend8223, SMB_asAliased, 0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend8225 = new_Send((Optr)VAR_closure_0_0, SMB_context_, 1, (Optr)PSend8224);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8227 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8229 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_0);
    // context. 
    Send PSend8230 = new_Send((Optr)self, SMB_context, 0);
    // context:. 
    Send PSend8231 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)PSend8230);
    Array PThreadedCode8228 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend8229, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8230, (Optr)&t_send1, (Optr)PSend8231, (Optr)&t_method_return);
    Block PBlock8226 = new_Block_with(PArray8227, empty_Array, PThreadedCode8228, 2, PSend8229, PSend8231);
    // new. 
    Send PSend8232 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend8233 = new_Send((Optr)PBlock8226, SMB_value_, 1, (Optr)PSend8232);
    Array PThreadedCode8217 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign8218, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8220, (Optr)&t_send0, (Optr)PSend8219, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8221, (Optr)&t_send1, (Optr)PSend8222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8223, (Optr)&t_send0, (Optr)PSend8224, (Optr)&t_send1, (Optr)PSend8225, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock8226, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend8232, (Optr)&t_send1, (Optr)PSend8233, (Optr)&t_method_return);
    Method PMethod8215 = new_Method_with(empty_Array, PArray8216, empty_Array, PThreadedCode8217, 4, PAssign8218, PSend8222, PSend8225, PSend8233);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8215, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_for_ = new_Symbol(L"for:");
    // for:. 
    Send PSend8236 = new_Send((Optr)PThread_classReference, SMB_for_, 1, (Optr)self);
    Array PThreadedCode8235 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8236, (Optr)&t_method_return);
    Method PMethod8234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8235, 1, PSend8236);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod8234, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8239 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8238 = new_Array_with(1, (Optr)PAnnotation8239);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend8241 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8242 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8241);
    Array PThreadedCode8240 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8241, (Optr)&t_send1, (Optr)PSend8242, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8237 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray8238, PThreadedCode8240, 1, PSend8242);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PReflectionMethod8237, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray8244 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8247 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8249 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8250 = new_Send((Optr)VAR_aClosure_0_0, SMB_species, 0);
    // =. 
    Send PSend8251 = new_Send((Optr)PSend8249, SMB__equals_, 1, (Optr)PSend8250);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8255 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8254 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8255, (Optr)&t_block_return);
    Block PBlock8253 = new_Block_with(empty_Array, empty_Array, PThreadedCode8254, 1, PSend8255);
    // ifFalse:. 
    Send PSend8252 = new_Send((Optr)PSend8251, SMB_ifFalse_, 1, (Optr)PBlock8253);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend8256 = new_Send((Optr)self, SMB_code, 0);
    // code. 
    Send PSend8257 = new_Send((Optr)VAR_aClosure_0_0, SMB_code, 0);
    // =. 
    Send PSend8258 = new_Send((Optr)PSend8256, SMB__equals_, 1, (Optr)PSend8257);
    Array PThreadedCode8248 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8249, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8250, (Optr)&t_send1, (Optr)PSend8251, (Optr)&t_send_ifFalse_, (Optr)PSend8252, (Optr)PBlock8253, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8256, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8257, (Optr)&t_send1, (Optr)PSend8258, (Optr)&t_method_return);
    Block PBlock8246 = new_Block_with(PArray8247, empty_Array, PThreadedCode8248, 2, PSend8252, PSend8258);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8259 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8246);
    Array PThreadedCode8245 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8246, (Optr)&t_send1, (Optr)PSend8259, (Optr)&t_method_return);
    Method PMethod8243 = new_Method_with(PArray8244, empty_Array, empty_Array, PThreadedCode8245, 1, PSend8259);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8243, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Array PArray8261 = new_Array_with(1, (Optr)VAR_anArg_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8263 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8262 = new_Array_with(1, (Optr)PAnnotation8263);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend8265 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_anArg_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8266 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8265);
    Array PThreadedCode8264 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_send1, (Optr)PSend8265, (Optr)&t_send1, (Optr)PSend8266, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8260 = new_ReflectionMethod_with(PArray8261, empty_Array, PArray8262, PThreadedCode8264, 1, PSend8266);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PReflectionMethod8260, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8268 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlockClosure_ = new_Symbol(L"visitBlockClosure:");
    // visitBlockClosure:. 
    Send PSend8270 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlockClosure_, 1, (Optr)self);
    Array PThreadedCode8269 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8270, (Optr)&t_method_return);
    Method PMethod8267 = new_Method_with(PArray8268, empty_Array, empty_Array, PThreadedCode8269, 1, PSend8270);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8267, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_BlockClosure = new_Symbol(L"Runtime.BlockClosure");
    Annotation PAnnotation8273 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_numArgs, (Optr)SMB_Runtime_minus_BlockClosure);
    Array PArray8272 = new_Array_with(1, (Optr)PAnnotation8273);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend8275 = new_Send((Optr)slot_Runtime_Closure_code, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8276 = new_Send((Optr)PSend8275, SMB_size, 0);
    Array PThreadedCode8274 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8275, (Optr)&t_send0, (Optr)PSend8276, (Optr)&t_method_return);
    NativeMethod PNativeMethod8271 = new_NativeMethod_with(empty_Array, empty_Array, PArray8272, PThreadedCode8274, 1, PSend8276);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PNativeMethod8271, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8278 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Annotation PAnnotation8280 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValueWithArguments_message_);
    Array PArray8279 = new_Array_with(1, (Optr)PAnnotation8280);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8282 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8281 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8282, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8277 = new_ReflectionMethod_with(PArray8278, empty_Array, PArray8279, PThreadedCode8281, 2, PSend8282, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PReflectionMethod8277, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8284 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8285 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8288 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8291 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8290 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8291);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8292 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8296 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8297 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8296);
    Array PThreadedCode8295 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8296, (Optr)&t_send1, (Optr)PSend8297, (Optr)&t_block_return);
    Block PBlock8294 = new_Block_with(empty_Array, empty_Array, PThreadedCode8295, 1, PSend8297);
    // ifTrue:. 
    Send PSend8293 = new_Send((Optr)PSend8292, SMB_ifTrue_, 1, (Optr)PBlock8294);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8298 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8299 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8298);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8303 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend8304 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8303);
    Array PThreadedCode8302 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8303, (Optr)&t_send1, (Optr)PSend8304, (Optr)&t_block_return);
    Block PBlock8301 = new_Block_with(empty_Array, empty_Array, PThreadedCode8302, 1, PSend8304);
    // ifTrue:. 
    Send PSend8300 = new_Send((Optr)PSend8299, SMB_ifTrue_, 1, (Optr)PBlock8301);
    // size. 
    Send PSend8305 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8306 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8305);
    // size. 
    Send PSend8310 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8311 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8310);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8312 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8311);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8313 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8312);
    // valueWithArguments:. 
    Send PSend8314 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8313);
    // escape:. 
    Send PSend8315 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8314);
    Array PThreadedCode8309 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8310, (Optr)&t_send1, (Optr)PSend8311, (Optr)&t_send1, (Optr)PSend8312, (Optr)&t_send1, (Optr)PSend8313, (Optr)&t_send1, (Optr)PSend8314, (Optr)&t_send1, (Optr)PSend8315, (Optr)&t_block_return);
    Block PBlock8308 = new_Block_with(empty_Array, empty_Array, PThreadedCode8309, 1, PSend8315);
    // ifTrue:. 
    Send PSend8307 = new_Send((Optr)PSend8306, SMB_ifTrue_, 1, (Optr)PBlock8308);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8316 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8317 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8316);
    Array PThreadedCode8289 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8290, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8291, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8292, (Optr)&t_send_ifTrue_, (Optr)PSend8293, (Optr)PBlock8294, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8298, (Optr)&t_send1, (Optr)PSend8299, (Optr)&t_send_ifTrue_, (Optr)PSend8300, (Optr)PBlock8301, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8305, (Optr)&t_send1, (Optr)PSend8306, (Optr)&t_send_ifTrue_, (Optr)PSend8307, (Optr)PBlock8308, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8316, (Optr)&t_send1, (Optr)PSend8317, (Optr)&t_method_return);
    Block PBlock8287 = new_Block_with(PArray8288, empty_Array, PThreadedCode8289, 5, PAssign8290, PSend8293, PSend8300, PSend8307, PSend8317);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8318 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8287);
    Array PThreadedCode8286 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8287, (Optr)&t_send1, (Optr)PSend8318, (Optr)&t_method_return);
    Method PMethod8283 = new_Method_with(PArray8284, PArray8285, empty_Array, PThreadedCode8286, 1, PSend8318);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8283, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_whileFalse() {
    Symbol SMB_whileFalse = new_Symbol(L"whileFalse");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8321 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // whileFalse. 
    Send PSend8325 = new_Send((Optr)self, SMB_whileFalse, 0);
    Array PThreadedCode8324 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8325, (Optr)&t_block_return);
    Block PBlock8323 = new_Block_with(empty_Array, empty_Array, PThreadedCode8324, 1, PSend8325);
    // ifFalse:. 
    Send PSend8322 = new_Send((Optr)PSend8321, SMB_ifFalse_, 1, (Optr)PBlock8323);
    Array PThreadedCode8320 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8321, (Optr)&t_send_ifFalse_, (Optr)PSend8322, (Optr)PBlock8323, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8319 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8320, 2, PSend8322, self);
    
    MethodClosure MC_SMB_whileFalse = new_MethodClosure((Method)PMethod8319, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse, MC_SMB_whileFalse);
}


static void init_SMB_ensure_() {
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8327 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8330 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray8333 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8335 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend8336 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8337 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8336);
    Array PThreadedCode8334 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8335, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend8336, (Optr)&t_send1, (Optr)PSend8337, (Optr)&t_method_return);
    Block PBlock8332 = new_Block_with(PArray8333, empty_Array, PThreadedCode8334, 2, PSend8335, PSend8337);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend8338 = new_Send((Optr)self, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock8332);
    // value. 
    Send PSend8339 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode8331 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock8332, (Optr)&t_send2, (Optr)PSend8338, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8339, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8329 = new_Block_with(PArray8330, empty_Array, PThreadedCode8331, 3, PSend8338, PSend8339, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8340 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8329);
    Array PThreadedCode8328 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8329, (Optr)&t_send1, (Optr)PSend8340, (Optr)&t_method_return);
    Method PMethod8326 = new_Method_with(PArray8327, empty_Array, empty_Array, PThreadedCode8328, 1, PSend8340);
    
    MethodClosure MC_SMB_ensure_ = new_MethodClosure((Method)PMethod8326, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_ensure_, MC_SMB_ensure_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8342 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockClosure_context, (Optr)&t_method_return);
    Method PMethod8341 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8342, 1, slot_Runtime_BlockClosure_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8341, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context, MC_SMB_context);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8344 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8346 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // value. 
    Send PSend8350 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend8351 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8349 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8350, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8351, (Optr)&t_block_return);
    Block PBlock8348 = new_Block_with(empty_Array, empty_Array, PThreadedCode8349, 2, PSend8350, PSend8351);
    // ifFalse:. 
    Send PSend8347 = new_Send((Optr)PSend8346, SMB_ifFalse_, 1, (Optr)PBlock8348);
    Array PThreadedCode8345 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8346, (Optr)&t_send_ifFalse_, (Optr)PSend8347, (Optr)PBlock8348, (Optr)&t_method_return);
    Method PMethod8343 = new_Method_with(PArray8344, empty_Array, empty_Array, PThreadedCode8345, 1, PSend8347);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod8343, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8354 = new_Send((Optr)PEGBlock_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode8353 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGBlock_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8354, (Optr)&t_method_return);
    Method PMethod8352 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8353, 1, PSend8354);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod8352, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asParser, MC_SMB_asParser);
}

void init_Runtime_PBlockClosure_layout() {
    layout_Runtime_BlockClosure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_BlockClosure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_BlockClosure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_BlockClosure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_BlockClosure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_BlockClosure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_BlockClosure = new_Symbol(L"BlockClosure");
    slot_Runtime_BlockClosure_context = (Optr)new_Slot(1, L"context");
    layout_Runtime_BlockClosure = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Runtime_BlockClosure)->values[0] = slot_Runtime_Closure_code; // code 
    ((Array)layout_Runtime_BlockClosure)->values[1] = slot_Runtime_BlockClosure_context; // context 
    BlockClosure_Class = (Class)new_Class(Runtime_Closure_Class, layout_Runtime_BlockClosure_Class_class);
    BlockClosure_Class->layout = layout_Runtime_BlockClosure;
    BlockClosure_Class->name = SMB_BlockClosure;
    
}

void init_Runtime_PBlockClosure_methods() {
    init_SMB_whileTrue_();
    init_SMB_value_value_value_();
    init_SMB_value_value_();
    init_SMB_context_();
    init_SMB_on_do_();
    init_SMB_value_value_value_value_();
    init_SMB_whileTrue();
    init_SMB_parallelWith_();
    init_SMB_asAliased();
    init_SMB_fork();
    init_SMB_value();
    init_SMB__equals_();
    init_SMB_value_();
    init_SMB_accept_();
    init_SMB_numArgs();
    init_SMB_valueWithArguments_();
    init_SMB_valueWithPossibleArgs_();
    init_SMB_whileFalse();
    init_SMB_ensure_();
    init_SMB_context();
    init_SMB_whileFalse_();
    init_SMB_asParser();
    
}