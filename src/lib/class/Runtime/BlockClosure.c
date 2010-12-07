#include <lib/class/Runtime/BlockClosure.h>


Optr layout_Runtime_BlockClosure_Class_class;
Optr slot_Runtime_BlockClosure_context;
Optr layout_Runtime_BlockClosure;


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8110 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8112 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // value. 
    Send PSend8116 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend8117 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8115 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8116, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8117, (Optr)&t_block_return);
    Block PBlock8114 = new_Block_with(empty_Array, empty_Array, PThreadedCode8115, 2, PSend8116, PSend8117);
    // ifTrue:. 
    Send PSend8113 = new_Send((Optr)PSend8112, SMB_ifTrue_, 1, (Optr)PBlock8114);
    Array PThreadedCode8111 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8112, (Optr)&t_send_ifTrue_, (Optr)PSend8113, (Optr)PBlock8114, (Optr)&t_method_return);
    Method PMethod8109 = new_Method_with(PArray8110, empty_Array, empty_Array, PThreadedCode8111, 1, PSend8113);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod8109, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue_, MC_SMB_whileTrue_);
}


static void init_SMB_value_value_value_() {
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Array PArray8119 = new_Array_with(3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8121 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8120 = new_Array_with(1, (Optr)PAnnotation8121);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend8123 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8124 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8123);
    Array PThreadedCode8122 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_send3, (Optr)PSend8123, (Optr)&t_send1, (Optr)PSend8124, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8118 = new_ReflectionMethod_with(PArray8119, empty_Array, PArray8120, PThreadedCode8122, 1, PSend8124);
    
    MethodClosure MC_SMB_value_value_value_ = new_MethodClosure((Method)PReflectionMethod8118, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_, MC_SMB_value_value_value_);
}


static void init_SMB_value_value_() {
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Array PArray8126 = new_Array_with(2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8128 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8127 = new_Array_with(1, (Optr)PAnnotation8128);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend8130 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8131 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8130);
    Array PThreadedCode8129 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_send2, (Optr)PSend8130, (Optr)&t_send1, (Optr)PSend8131, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8125 = new_ReflectionMethod_with(PArray8126, empty_Array, PArray8127, PThreadedCode8129, 1, PSend8131);
    
    MethodClosure MC_SMB_value_value_ = new_MethodClosure((Method)PReflectionMethod8125, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_, MC_SMB_value_value_);
}


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8133 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8135 = new_Assign((Optr)slot_Runtime_BlockClosure_context, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8134 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8135, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8132 = new_Method_with(PArray8133, empty_Array, empty_Array, PThreadedCode8134, 2, PAssign8135, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod8132, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_on_do_() {
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    Variable VAR_errorClass_0_0 = new_Variable_named(L"errorClass", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray8137 = new_Array_with(2, (Optr)VAR_errorClass_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_previousExceptionHandler_0_2 = new_Variable_named(L"previousExceptionHandler", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray8138 = new_Array_with(2, (Optr)VAR_previousExceptionHandler_0_2, (Optr)VAR_result_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8141 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend8144 = new_Send((Optr)Exception_classReference, SMB_handler, 0);
    Assign PAssign8143 = new_Assign((Optr)VAR_previousExceptionHandler_0_2, (Optr)PSend8144);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_return_2_0 = new_Variable_named(L"return", 2);
    Array PArray8148 = new_Array_with(1, (Optr)VAR_return_2_0);
    Variable VAR_error_2_1 = new_Variable_named(L"error", 2);
    Array PArray8149 = new_Array_with(1, (Optr)VAR_error_2_1);
    Variable VAR_escape_3_0 = new_Variable_named(L"escape", 3);
    Array PArray8154 = new_Array_with(1, (Optr)VAR_escape_3_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend8156 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_escape_3_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8157 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8158 = new_Send((Optr)VAR_return_2_0, SMB_escape_, 1, (Optr)PSend8157);
    Array PThreadedCode8155 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_escape_3_0, (Optr)&t_send1, (Optr)PSend8156, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_return_2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8157, (Optr)&t_send1, (Optr)PSend8158, (Optr)&t_method_return);
    Block PBlock8153 = new_Block_with(PArray8154, empty_Array, PThreadedCode8155, 2, PSend8156, PSend8158);
    // on:. 
    Send PSend8152 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8153);
    Assign PAssign8151 = new_Assign((Optr)VAR_error_2_1, (Optr)PSend8152);
    // handler:. 
    Send PSend8159 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend8160 = new_Send((Optr)VAR_error_2_1, SMB_isKindOf_, 1, (Optr)VAR_errorClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8164 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_error_2_1);
    // escape:. 
    Send PSend8165 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8164);
    Array PThreadedCode8163 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend8164, (Optr)&t_send1, (Optr)PSend8165, (Optr)&t_block_return);
    Block PBlock8162 = new_Block_with(empty_Array, empty_Array, PThreadedCode8163, 1, PSend8165);
    // ifTrue:. 
    Send PSend8161 = new_Send((Optr)PSend8160, SMB_ifTrue_, 1, (Optr)PBlock8162);
    // escape:. 
    Send PSend8166 = new_Send((Optr)VAR_previousExceptionHandler_0_2, SMB_escape_, 1, (Optr)VAR_error_2_1);
    Array PThreadedCode8150 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign8151, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8153, (Optr)&t_send1, (Optr)PSend8152, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend8159, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_push_variable, (Optr)VAR_errorClass_0_0, (Optr)&t_send1, (Optr)PSend8160, (Optr)&t_send_ifTrue_, (Optr)PSend8161, (Optr)PBlock8162, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend8166, (Optr)&t_method_return);
    Block PBlock8147 = new_Block_with(PArray8148, PArray8149, PThreadedCode8150, 4, PAssign8151, PSend8159, PSend8161, PSend8166);
    // on:. 
    Send PSend8146 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8147);
    Assign PAssign8145 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend8146);
    // handler:. 
    Send PSend8167 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Array PThreadedCode8142 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign8143, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_send0, (Optr)PSend8144, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8145, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8147, (Optr)&t_send1, (Optr)PSend8146, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend8167, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock8140 = new_Block_with(PArray8141, empty_Array, PThreadedCode8142, 4, PAssign8143, PAssign8145, PSend8167, VAR_result_0_3);
    // on:. 
    Send PSend8168 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8140);
    Array PThreadedCode8139 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8140, (Optr)&t_send1, (Optr)PSend8168, (Optr)&t_method_return);
    Method PMethod8136 = new_Method_with(PArray8137, PArray8138, empty_Array, PThreadedCode8139, 1, PSend8168);
    
    MethodClosure MC_SMB_on_do_ = new_MethodClosure((Method)PMethod8136, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_on_do_, MC_SMB_on_do_);
}


static void init_SMB_value_value_value_value_() {
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Variable VAR_yetAnotherArg_0_3 = new_Variable_named(L"yetAnotherArg", 0);
    Array PArray8170 = new_Array_with(4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8172 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8171 = new_Array_with(1, (Optr)PAnnotation8172);
    Symbol SMB_with_with_with_with_ = new_Symbol(L"with:with:with:with:");
    // with:with:with:with:. 
    Send PSend8174 = new_Send((Optr)Array_classReference, SMB_with_with_with_with_, 4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8175 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8174);
    Array PThreadedCode8173 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_push_variable, (Optr)VAR_yetAnotherArg_0_3, (Optr)&t_send4, (Optr)PSend8174, (Optr)&t_send1, (Optr)PSend8175, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8169 = new_ReflectionMethod_with(PArray8170, empty_Array, PArray8171, PThreadedCode8173, 1, PSend8175);
    
    MethodClosure MC_SMB_value_value_value_value_ = new_MethodClosure((Method)PReflectionMethod8169, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_value_, MC_SMB_value_value_value_value_);
}


static void init_SMB_whileTrue() {
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8178 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // whileTrue. 
    Send PSend8182 = new_Send((Optr)self, SMB_whileTrue, 0);
    Array PThreadedCode8181 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8182, (Optr)&t_block_return);
    Block PBlock8180 = new_Block_with(empty_Array, empty_Array, PThreadedCode8181, 1, PSend8182);
    // ifTrue:. 
    Send PSend8179 = new_Send((Optr)PSend8178, SMB_ifTrue_, 1, (Optr)PBlock8180);
    Array PThreadedCode8177 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8178, (Optr)&t_send_ifTrue_, (Optr)PSend8179, (Optr)PBlock8180, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8176 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8177, 2, PSend8179, self);
    
    MethodClosure MC_SMB_whileTrue = new_MethodClosure((Method)PMethod8176, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue, MC_SMB_whileTrue);
}


static void init_SMB_parallelWith_() {
    Symbol SMB_parallelWith_ = new_Symbol(L"parallelWith:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8184 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend8186 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)self, (Optr)VAR_aBlock_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend8187 = new_Send((Optr)PParallelDebugger_classReference, SMB_interpret_, 1, (Optr)PSend8186);
    Array PThreadedCode8185 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PParallelDebugger_classReference, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend8186, (Optr)&t_send1, (Optr)PSend8187, (Optr)&t_method_return);
    Method PMethod8183 = new_Method_with(PArray8184, empty_Array, empty_Array, PThreadedCode8185, 1, PSend8187);
    
    MethodClosure MC_SMB_parallelWith_ = new_MethodClosure((Method)PMethod8183, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_parallelWith_, MC_SMB_parallelWith_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Array PArray8189 = new_Array_with(1, (Optr)VAR_closure_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8193 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8192 = new_Send((Optr)PSend8193, SMB_new, 0);
    Assign PAssign8191 = new_Assign((Optr)VAR_closure_0_0, (Optr)PSend8192);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend8194 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend8195 = new_Send((Optr)VAR_closure_0_0, SMB_code_, 1, (Optr)PSend8194);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend8196 = new_Send((Optr)self, SMB_context, 0);
    // asAliased. 
    Send PSend8197 = new_Send((Optr)PSend8196, SMB_asAliased, 0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend8198 = new_Send((Optr)VAR_closure_0_0, SMB_context_, 1, (Optr)PSend8197);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8200 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8202 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_0);
    // context. 
    Send PSend8203 = new_Send((Optr)self, SMB_context, 0);
    // context:. 
    Send PSend8204 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)PSend8203);
    Array PThreadedCode8201 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend8202, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8203, (Optr)&t_send1, (Optr)PSend8204, (Optr)&t_method_return);
    Block PBlock8199 = new_Block_with(PArray8200, empty_Array, PThreadedCode8201, 2, PSend8202, PSend8204);
    // new. 
    Send PSend8205 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend8206 = new_Send((Optr)PBlock8199, SMB_value_, 1, (Optr)PSend8205);
    Array PThreadedCode8190 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign8191, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8193, (Optr)&t_send0, (Optr)PSend8192, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8194, (Optr)&t_send1, (Optr)PSend8195, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8196, (Optr)&t_send0, (Optr)PSend8197, (Optr)&t_send1, (Optr)PSend8198, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock8199, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend8205, (Optr)&t_send1, (Optr)PSend8206, (Optr)&t_method_return);
    Method PMethod8188 = new_Method_with(empty_Array, PArray8189, empty_Array, PThreadedCode8190, 4, PAssign8191, PSend8195, PSend8198, PSend8206);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8188, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_for_ = new_Symbol(L"for:");
    // for:. 
    Send PSend8209 = new_Send((Optr)PThread_classReference, SMB_for_, 1, (Optr)self);
    Array PThreadedCode8208 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8209, (Optr)&t_method_return);
    Method PMethod8207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8208, 1, PSend8209);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod8207, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8212 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8211 = new_Array_with(1, (Optr)PAnnotation8212);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend8214 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8215 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8214);
    Array PThreadedCode8213 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8214, (Optr)&t_send1, (Optr)PSend8215, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8210 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray8211, PThreadedCode8213, 1, PSend8215);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PReflectionMethod8210, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray8217 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8220 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8222 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8223 = new_Send((Optr)VAR_aClosure_0_0, SMB_species, 0);
    // =. 
    Send PSend8224 = new_Send((Optr)PSend8222, SMB__equals_, 1, (Optr)PSend8223);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8228 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8227 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8228, (Optr)&t_block_return);
    Block PBlock8226 = new_Block_with(empty_Array, empty_Array, PThreadedCode8227, 1, PSend8228);
    // ifFalse:. 
    Send PSend8225 = new_Send((Optr)PSend8224, SMB_ifFalse_, 1, (Optr)PBlock8226);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend8229 = new_Send((Optr)self, SMB_code, 0);
    // code. 
    Send PSend8230 = new_Send((Optr)VAR_aClosure_0_0, SMB_code, 0);
    // =. 
    Send PSend8231 = new_Send((Optr)PSend8229, SMB__equals_, 1, (Optr)PSend8230);
    Array PThreadedCode8221 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8222, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8223, (Optr)&t_send1, (Optr)PSend8224, (Optr)&t_send_ifFalse_, (Optr)PSend8225, (Optr)PBlock8226, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8229, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8230, (Optr)&t_send1, (Optr)PSend8231, (Optr)&t_method_return);
    Block PBlock8219 = new_Block_with(PArray8220, empty_Array, PThreadedCode8221, 2, PSend8225, PSend8231);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8232 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8219);
    Array PThreadedCode8218 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8219, (Optr)&t_send1, (Optr)PSend8232, (Optr)&t_method_return);
    Method PMethod8216 = new_Method_with(PArray8217, empty_Array, empty_Array, PThreadedCode8218, 1, PSend8232);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8216, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Array PArray8234 = new_Array_with(1, (Optr)VAR_anArg_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8236 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8235 = new_Array_with(1, (Optr)PAnnotation8236);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend8238 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_anArg_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8239 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8238);
    Array PThreadedCode8237 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_send1, (Optr)PSend8238, (Optr)&t_send1, (Optr)PSend8239, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8233 = new_ReflectionMethod_with(PArray8234, empty_Array, PArray8235, PThreadedCode8237, 1, PSend8239);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PReflectionMethod8233, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8241 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlockClosure_ = new_Symbol(L"visitBlockClosure:");
    // visitBlockClosure:. 
    Send PSend8243 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlockClosure_, 1, (Optr)self);
    Array PThreadedCode8242 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8243, (Optr)&t_method_return);
    Method PMethod8240 = new_Method_with(PArray8241, empty_Array, empty_Array, PThreadedCode8242, 1, PSend8243);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8240, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_BlockClosure = new_Symbol(L"Runtime.BlockClosure");
    Annotation PAnnotation8246 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_numArgs, (Optr)SMB_Runtime_minus_BlockClosure);
    Array PArray8245 = new_Array_with(1, (Optr)PAnnotation8246);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend8248 = new_Send((Optr)slot_Runtime_Closure_code, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8249 = new_Send((Optr)PSend8248, SMB_size, 0);
    Array PThreadedCode8247 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8248, (Optr)&t_send0, (Optr)PSend8249, (Optr)&t_method_return);
    NativeMethod PNativeMethod8244 = new_NativeMethod_with(empty_Array, empty_Array, PArray8245, PThreadedCode8247, 1, PSend8249);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PNativeMethod8244, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8251 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Annotation PAnnotation8253 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValueWithArguments_message_);
    Array PArray8252 = new_Array_with(1, (Optr)PAnnotation8253);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8255 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8254 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8255, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8250 = new_ReflectionMethod_with(PArray8251, empty_Array, PArray8252, PThreadedCode8254, 2, PSend8255, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PReflectionMethod8250, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8257 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8258 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8261 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8264 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8263 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8264);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8265 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8269 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8270 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8269);
    Array PThreadedCode8268 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8269, (Optr)&t_send1, (Optr)PSend8270, (Optr)&t_block_return);
    Block PBlock8267 = new_Block_with(empty_Array, empty_Array, PThreadedCode8268, 1, PSend8270);
    // ifTrue:. 
    Send PSend8266 = new_Send((Optr)PSend8265, SMB_ifTrue_, 1, (Optr)PBlock8267);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8271 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8272 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8271);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8276 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend8277 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8276);
    Array PThreadedCode8275 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8276, (Optr)&t_send1, (Optr)PSend8277, (Optr)&t_block_return);
    Block PBlock8274 = new_Block_with(empty_Array, empty_Array, PThreadedCode8275, 1, PSend8277);
    // ifTrue:. 
    Send PSend8273 = new_Send((Optr)PSend8272, SMB_ifTrue_, 1, (Optr)PBlock8274);
    // size. 
    Send PSend8278 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8279 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8278);
    // size. 
    Send PSend8283 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8284 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8283);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8285 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8284);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8286 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8285);
    // valueWithArguments:. 
    Send PSend8287 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8286);
    // escape:. 
    Send PSend8288 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8287);
    Array PThreadedCode8282 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8283, (Optr)&t_send1, (Optr)PSend8284, (Optr)&t_send1, (Optr)PSend8285, (Optr)&t_send1, (Optr)PSend8286, (Optr)&t_send1, (Optr)PSend8287, (Optr)&t_send1, (Optr)PSend8288, (Optr)&t_block_return);
    Block PBlock8281 = new_Block_with(empty_Array, empty_Array, PThreadedCode8282, 1, PSend8288);
    // ifTrue:. 
    Send PSend8280 = new_Send((Optr)PSend8279, SMB_ifTrue_, 1, (Optr)PBlock8281);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8289 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8290 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8289);
    Array PThreadedCode8262 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8263, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8264, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8265, (Optr)&t_send_ifTrue_, (Optr)PSend8266, (Optr)PBlock8267, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8271, (Optr)&t_send1, (Optr)PSend8272, (Optr)&t_send_ifTrue_, (Optr)PSend8273, (Optr)PBlock8274, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8278, (Optr)&t_send1, (Optr)PSend8279, (Optr)&t_send_ifTrue_, (Optr)PSend8280, (Optr)PBlock8281, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8289, (Optr)&t_send1, (Optr)PSend8290, (Optr)&t_method_return);
    Block PBlock8260 = new_Block_with(PArray8261, empty_Array, PThreadedCode8262, 5, PAssign8263, PSend8266, PSend8273, PSend8280, PSend8290);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8291 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8260);
    Array PThreadedCode8259 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8260, (Optr)&t_send1, (Optr)PSend8291, (Optr)&t_method_return);
    Method PMethod8256 = new_Method_with(PArray8257, PArray8258, empty_Array, PThreadedCode8259, 1, PSend8291);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8256, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_whileFalse() {
    Symbol SMB_whileFalse = new_Symbol(L"whileFalse");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8294 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // whileFalse. 
    Send PSend8298 = new_Send((Optr)self, SMB_whileFalse, 0);
    Array PThreadedCode8297 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8298, (Optr)&t_block_return);
    Block PBlock8296 = new_Block_with(empty_Array, empty_Array, PThreadedCode8297, 1, PSend8298);
    // ifFalse:. 
    Send PSend8295 = new_Send((Optr)PSend8294, SMB_ifFalse_, 1, (Optr)PBlock8296);
    Array PThreadedCode8293 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8294, (Optr)&t_send_ifFalse_, (Optr)PSend8295, (Optr)PBlock8296, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8292 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8293, 2, PSend8295, self);
    
    MethodClosure MC_SMB_whileFalse = new_MethodClosure((Method)PMethod8292, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse, MC_SMB_whileFalse);
}


static void init_SMB_ensure_() {
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8300 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8303 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray8306 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8308 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend8309 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8310 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8309);
    Array PThreadedCode8307 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8308, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend8309, (Optr)&t_send1, (Optr)PSend8310, (Optr)&t_method_return);
    Block PBlock8305 = new_Block_with(PArray8306, empty_Array, PThreadedCode8307, 2, PSend8308, PSend8310);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend8311 = new_Send((Optr)self, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock8305);
    // value. 
    Send PSend8312 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode8304 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock8305, (Optr)&t_send2, (Optr)PSend8311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8312, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8302 = new_Block_with(PArray8303, empty_Array, PThreadedCode8304, 3, PSend8311, PSend8312, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8313 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8302);
    Array PThreadedCode8301 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8302, (Optr)&t_send1, (Optr)PSend8313, (Optr)&t_method_return);
    Method PMethod8299 = new_Method_with(PArray8300, empty_Array, empty_Array, PThreadedCode8301, 1, PSend8313);
    
    MethodClosure MC_SMB_ensure_ = new_MethodClosure((Method)PMethod8299, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_ensure_, MC_SMB_ensure_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8315 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockClosure_context, (Optr)&t_method_return);
    Method PMethod8314 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8315, 1, slot_Runtime_BlockClosure_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8314, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context, MC_SMB_context);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8317 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8319 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // value. 
    Send PSend8323 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend8324 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8322 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8323, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8324, (Optr)&t_block_return);
    Block PBlock8321 = new_Block_with(empty_Array, empty_Array, PThreadedCode8322, 2, PSend8323, PSend8324);
    // ifFalse:. 
    Send PSend8320 = new_Send((Optr)PSend8319, SMB_ifFalse_, 1, (Optr)PBlock8321);
    Array PThreadedCode8318 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8319, (Optr)&t_send_ifFalse_, (Optr)PSend8320, (Optr)PBlock8321, (Optr)&t_method_return);
    Method PMethod8316 = new_Method_with(PArray8317, empty_Array, empty_Array, PThreadedCode8318, 1, PSend8320);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod8316, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8327 = new_Send((Optr)PEGBlock_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode8326 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGBlock_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8327, (Optr)&t_method_return);
    Method PMethod8325 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8326, 1, PSend8327);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod8325, BlockClosure_Class);
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