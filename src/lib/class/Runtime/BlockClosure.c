#include <lib/class/Runtime/BlockClosure.h>


Optr layout_Runtime_BlockClosure_Class_class;
Optr slot_Runtime_BlockClosure_context;
Optr layout_Runtime_BlockClosure;


static void init_SMB_value_value_value_() {
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Array PArray8076 = new_Array_with(3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8078 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8077 = new_Array_with(1, (Optr)PAnnotation8078);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend8080 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8081 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8080);
    Array PThreadedCode8079 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_send3, (Optr)PSend8080, (Optr)&t_send1, (Optr)PSend8081, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8075 = new_ReflectionMethod_with(PArray8076, empty_Array, PArray8077, PThreadedCode8079, 1, PSend8081);
    
    MethodClosure MC_SMB_value_value_value_ = new_MethodClosure((Method)PReflectionMethod8075, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_, MC_SMB_value_value_value_);
}


static void init_SMB_value_value_() {
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Array PArray8083 = new_Array_with(2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8085 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8084 = new_Array_with(1, (Optr)PAnnotation8085);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend8087 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8088 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8087);
    Array PThreadedCode8086 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_send2, (Optr)PSend8087, (Optr)&t_send1, (Optr)PSend8088, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8082 = new_ReflectionMethod_with(PArray8083, empty_Array, PArray8084, PThreadedCode8086, 1, PSend8088);
    
    MethodClosure MC_SMB_value_value_ = new_MethodClosure((Method)PReflectionMethod8082, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_, MC_SMB_value_value_);
}


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8090 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8092 = new_Assign((Optr)slot_Runtime_BlockClosure_context, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8091 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8092, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8089 = new_Method_with(PArray8090, empty_Array, empty_Array, PThreadedCode8091, 2, PAssign8092, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod8089, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8095 = new_Send((Optr)PEGBlock_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode8094 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGBlock_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8095, (Optr)&t_method_return);
    Method PMethod8093 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8094, 1, PSend8095);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod8093, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_SMB_on_do_() {
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    Variable VAR_errorClass_0_0 = new_Variable_named(L"errorClass", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray8097 = new_Array_with(2, (Optr)VAR_errorClass_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_previousExceptionHandler_0_2 = new_Variable_named(L"previousExceptionHandler", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray8098 = new_Array_with(2, (Optr)VAR_previousExceptionHandler_0_2, (Optr)VAR_result_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8101 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend8104 = new_Send((Optr)Exception_classReference, SMB_handler, 0);
    Assign PAssign8103 = new_Assign((Optr)VAR_previousExceptionHandler_0_2, (Optr)PSend8104);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_return_2_0 = new_Variable_named(L"return", 2);
    Array PArray8108 = new_Array_with(1, (Optr)VAR_return_2_0);
    Variable VAR_error_2_1 = new_Variable_named(L"error", 2);
    Array PArray8109 = new_Array_with(1, (Optr)VAR_error_2_1);
    Variable VAR_escape_3_0 = new_Variable_named(L"escape", 3);
    Array PArray8114 = new_Array_with(1, (Optr)VAR_escape_3_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend8116 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_escape_3_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8117 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8118 = new_Send((Optr)VAR_return_2_0, SMB_escape_, 1, (Optr)PSend8117);
    Array PThreadedCode8115 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_escape_3_0, (Optr)&t_send1, (Optr)PSend8116, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_return_2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8117, (Optr)&t_send1, (Optr)PSend8118, (Optr)&t_method_return);
    Block PBlock8113 = new_Block_with(PArray8114, empty_Array, PThreadedCode8115, 2, PSend8116, PSend8118);
    // on:. 
    Send PSend8112 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8113);
    Assign PAssign8111 = new_Assign((Optr)VAR_error_2_1, (Optr)PSend8112);
    // handler:. 
    Send PSend8119 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend8120 = new_Send((Optr)VAR_error_2_1, SMB_isKindOf_, 1, (Optr)VAR_errorClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8124 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_error_2_1);
    // escape:. 
    Send PSend8125 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8124);
    Array PThreadedCode8123 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend8124, (Optr)&t_send1, (Optr)PSend8125, (Optr)&t_block_return);
    Block PBlock8122 = new_Block_with(empty_Array, empty_Array, PThreadedCode8123, 1, PSend8125);
    // ifTrue:. 
    Send PSend8121 = new_Send((Optr)PSend8120, SMB_ifTrue_, 1, (Optr)PBlock8122);
    // escape:. 
    Send PSend8126 = new_Send((Optr)VAR_previousExceptionHandler_0_2, SMB_escape_, 1, (Optr)VAR_error_2_1);
    Array PThreadedCode8110 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign8111, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8113, (Optr)&t_send1, (Optr)PSend8112, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend8119, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_push_variable, (Optr)VAR_errorClass_0_0, (Optr)&t_send1, (Optr)PSend8120, (Optr)&t_send_ifTrue_, (Optr)PSend8121, (Optr)PBlock8122, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend8126, (Optr)&t_method_return);
    Block PBlock8107 = new_Block_with(PArray8108, PArray8109, PThreadedCode8110, 4, PAssign8111, PSend8119, PSend8121, PSend8126);
    // on:. 
    Send PSend8106 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8107);
    Assign PAssign8105 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend8106);
    // handler:. 
    Send PSend8127 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Array PThreadedCode8102 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign8103, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_send0, (Optr)PSend8104, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8105, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8107, (Optr)&t_send1, (Optr)PSend8106, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend8127, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock8100 = new_Block_with(PArray8101, empty_Array, PThreadedCode8102, 4, PAssign8103, PAssign8105, PSend8127, VAR_result_0_3);
    // on:. 
    Send PSend8128 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8100);
    Array PThreadedCode8099 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8100, (Optr)&t_send1, (Optr)PSend8128, (Optr)&t_method_return);
    Method PMethod8096 = new_Method_with(PArray8097, PArray8098, empty_Array, PThreadedCode8099, 1, PSend8128);
    
    MethodClosure MC_SMB_on_do_ = new_MethodClosure((Method)PMethod8096, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_on_do_, MC_SMB_on_do_);
}


static void init_SMB_value_value_value_value_() {
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Variable VAR_yetAnotherArg_0_3 = new_Variable_named(L"yetAnotherArg", 0);
    Array PArray8130 = new_Array_with(4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8132 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8131 = new_Array_with(1, (Optr)PAnnotation8132);
    Symbol SMB_with_with_with_with_ = new_Symbol(L"with:with:with:with:");
    // with:with:with:with:. 
    Send PSend8134 = new_Send((Optr)Array_classReference, SMB_with_with_with_with_, 4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8135 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8134);
    Array PThreadedCode8133 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_push_variable, (Optr)VAR_yetAnotherArg_0_3, (Optr)&t_send4, (Optr)PSend8134, (Optr)&t_send1, (Optr)PSend8135, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8129 = new_ReflectionMethod_with(PArray8130, empty_Array, PArray8131, PThreadedCode8133, 1, PSend8135);
    
    MethodClosure MC_SMB_value_value_value_value_ = new_MethodClosure((Method)PReflectionMethod8129, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_value_, MC_SMB_value_value_value_value_);
}


static void init_SMB_whileTrue() {
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8138 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // whileTrue. 
    Send PSend8142 = new_Send((Optr)self, SMB_whileTrue, 0);
    Array PThreadedCode8141 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8142, (Optr)&t_block_return);
    Block PBlock8140 = new_Block_with(empty_Array, empty_Array, PThreadedCode8141, 1, PSend8142);
    // ifTrue:. 
    Send PSend8139 = new_Send((Optr)PSend8138, SMB_ifTrue_, 1, (Optr)PBlock8140);
    Array PThreadedCode8137 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8138, (Optr)&t_send_ifTrue_, (Optr)PSend8139, (Optr)PBlock8140, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8136 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8137, 2, PSend8139, self);
    
    MethodClosure MC_SMB_whileTrue = new_MethodClosure((Method)PMethod8136, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue, MC_SMB_whileTrue);
}


static void init_SMB_parallelWith_() {
    Symbol SMB_parallelWith_ = new_Symbol(L"parallelWith:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8144 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend8146 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)self, (Optr)VAR_aBlock_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend8147 = new_Send((Optr)PParallelDebugger_classReference, SMB_interpret_, 1, (Optr)PSend8146);
    Array PThreadedCode8145 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PParallelDebugger_classReference, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend8146, (Optr)&t_send1, (Optr)PSend8147, (Optr)&t_method_return);
    Method PMethod8143 = new_Method_with(PArray8144, empty_Array, empty_Array, PThreadedCode8145, 1, PSend8147);
    
    MethodClosure MC_SMB_parallelWith_ = new_MethodClosure((Method)PMethod8143, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_parallelWith_, MC_SMB_parallelWith_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Array PArray8149 = new_Array_with(1, (Optr)VAR_closure_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8153 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8152 = new_Send((Optr)PSend8153, SMB_new, 0);
    Assign PAssign8151 = new_Assign((Optr)VAR_closure_0_0, (Optr)PSend8152);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend8154 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend8155 = new_Send((Optr)VAR_closure_0_0, SMB_code_, 1, (Optr)PSend8154);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend8156 = new_Send((Optr)self, SMB_context, 0);
    // asAliased. 
    Send PSend8157 = new_Send((Optr)PSend8156, SMB_asAliased, 0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend8158 = new_Send((Optr)VAR_closure_0_0, SMB_context_, 1, (Optr)PSend8157);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8160 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8162 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_0);
    // context. 
    Send PSend8163 = new_Send((Optr)self, SMB_context, 0);
    // context:. 
    Send PSend8164 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)PSend8163);
    Array PThreadedCode8161 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend8162, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8163, (Optr)&t_send1, (Optr)PSend8164, (Optr)&t_method_return);
    Block PBlock8159 = new_Block_with(PArray8160, empty_Array, PThreadedCode8161, 2, PSend8162, PSend8164);
    // new. 
    Send PSend8165 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend8166 = new_Send((Optr)PBlock8159, SMB_value_, 1, (Optr)PSend8165);
    Array PThreadedCode8150 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign8151, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8153, (Optr)&t_send0, (Optr)PSend8152, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8154, (Optr)&t_send1, (Optr)PSend8155, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8156, (Optr)&t_send0, (Optr)PSend8157, (Optr)&t_send1, (Optr)PSend8158, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock8159, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend8165, (Optr)&t_send1, (Optr)PSend8166, (Optr)&t_method_return);
    Method PMethod8148 = new_Method_with(empty_Array, PArray8149, empty_Array, PThreadedCode8150, 4, PAssign8151, PSend8155, PSend8158, PSend8166);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8148, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_for_ = new_Symbol(L"for:");
    // for:. 
    Send PSend8169 = new_Send((Optr)PThread_classReference, SMB_for_, 1, (Optr)self);
    Array PThreadedCode8168 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8169, (Optr)&t_method_return);
    Method PMethod8167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8168, 1, PSend8169);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod8167, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8172 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8171 = new_Array_with(1, (Optr)PAnnotation8172);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend8174 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8175 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8174);
    Array PThreadedCode8173 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8174, (Optr)&t_send1, (Optr)PSend8175, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8170 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray8171, PThreadedCode8173, 1, PSend8175);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PReflectionMethod8170, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray8177 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8180 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8182 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8183 = new_Send((Optr)VAR_aClosure_0_0, SMB_species, 0);
    // =. 
    Send PSend8184 = new_Send((Optr)PSend8182, SMB__equals_, 1, (Optr)PSend8183);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8188 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8187 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8188, (Optr)&t_block_return);
    Block PBlock8186 = new_Block_with(empty_Array, empty_Array, PThreadedCode8187, 1, PSend8188);
    // ifFalse:. 
    Send PSend8185 = new_Send((Optr)PSend8184, SMB_ifFalse_, 1, (Optr)PBlock8186);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend8189 = new_Send((Optr)self, SMB_code, 0);
    // code. 
    Send PSend8190 = new_Send((Optr)VAR_aClosure_0_0, SMB_code, 0);
    // =. 
    Send PSend8191 = new_Send((Optr)PSend8189, SMB__equals_, 1, (Optr)PSend8190);
    Array PThreadedCode8181 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8182, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8183, (Optr)&t_send1, (Optr)PSend8184, (Optr)&t_send_ifFalse_, (Optr)PSend8185, (Optr)PBlock8186, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8189, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8190, (Optr)&t_send1, (Optr)PSend8191, (Optr)&t_method_return);
    Block PBlock8179 = new_Block_with(PArray8180, empty_Array, PThreadedCode8181, 2, PSend8185, PSend8191);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8192 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8179);
    Array PThreadedCode8178 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8179, (Optr)&t_send1, (Optr)PSend8192, (Optr)&t_method_return);
    Method PMethod8176 = new_Method_with(PArray8177, empty_Array, empty_Array, PThreadedCode8178, 1, PSend8192);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8176, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Array PArray8194 = new_Array_with(1, (Optr)VAR_anArg_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8196 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8195 = new_Array_with(1, (Optr)PAnnotation8196);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend8198 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_anArg_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8199 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8198);
    Array PThreadedCode8197 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_send1, (Optr)PSend8198, (Optr)&t_send1, (Optr)PSend8199, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8193 = new_ReflectionMethod_with(PArray8194, empty_Array, PArray8195, PThreadedCode8197, 1, PSend8199);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PReflectionMethod8193, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8201 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlockClosure_ = new_Symbol(L"visitBlockClosure:");
    // visitBlockClosure:. 
    Send PSend8203 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlockClosure_, 1, (Optr)self);
    Array PThreadedCode8202 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8203, (Optr)&t_method_return);
    Method PMethod8200 = new_Method_with(PArray8201, empty_Array, empty_Array, PThreadedCode8202, 1, PSend8203);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8200, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_BlockClosure = new_Symbol(L"Runtime.BlockClosure");
    Annotation PAnnotation8206 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_numArgs, (Optr)SMB_Runtime_minus_BlockClosure);
    Array PArray8205 = new_Array_with(1, (Optr)PAnnotation8206);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend8208 = new_Send((Optr)slot_Runtime_Closure_code, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8209 = new_Send((Optr)PSend8208, SMB_size, 0);
    Array PThreadedCode8207 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8208, (Optr)&t_send0, (Optr)PSend8209, (Optr)&t_method_return);
    NativeMethod PNativeMethod8204 = new_NativeMethod_with(empty_Array, empty_Array, PArray8205, PThreadedCode8207, 1, PSend8209);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PNativeMethod8204, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8211 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Annotation PAnnotation8213 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValueWithArguments_message_);
    Array PArray8212 = new_Array_with(1, (Optr)PAnnotation8213);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8215 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8214 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8215, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8210 = new_ReflectionMethod_with(PArray8211, empty_Array, PArray8212, PThreadedCode8214, 2, PSend8215, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PReflectionMethod8210, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8217 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8218 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8221 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8224 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8223 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8224);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8225 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8229 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8230 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8229);
    Array PThreadedCode8228 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8229, (Optr)&t_send1, (Optr)PSend8230, (Optr)&t_block_return);
    Block PBlock8227 = new_Block_with(empty_Array, empty_Array, PThreadedCode8228, 1, PSend8230);
    // ifTrue:. 
    Send PSend8226 = new_Send((Optr)PSend8225, SMB_ifTrue_, 1, (Optr)PBlock8227);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8231 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8232 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8231);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8236 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend8237 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8236);
    Array PThreadedCode8235 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8236, (Optr)&t_send1, (Optr)PSend8237, (Optr)&t_block_return);
    Block PBlock8234 = new_Block_with(empty_Array, empty_Array, PThreadedCode8235, 1, PSend8237);
    // ifTrue:. 
    Send PSend8233 = new_Send((Optr)PSend8232, SMB_ifTrue_, 1, (Optr)PBlock8234);
    // size. 
    Send PSend8238 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8239 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8238);
    // size. 
    Send PSend8243 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8244 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8243);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8245 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8244);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8246 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8245);
    // valueWithArguments:. 
    Send PSend8247 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8246);
    // escape:. 
    Send PSend8248 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8247);
    Array PThreadedCode8242 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8243, (Optr)&t_send1, (Optr)PSend8244, (Optr)&t_send1, (Optr)PSend8245, (Optr)&t_send1, (Optr)PSend8246, (Optr)&t_send1, (Optr)PSend8247, (Optr)&t_send1, (Optr)PSend8248, (Optr)&t_block_return);
    Block PBlock8241 = new_Block_with(empty_Array, empty_Array, PThreadedCode8242, 1, PSend8248);
    // ifTrue:. 
    Send PSend8240 = new_Send((Optr)PSend8239, SMB_ifTrue_, 1, (Optr)PBlock8241);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8249 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8250 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8249);
    Array PThreadedCode8222 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8223, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8225, (Optr)&t_send_ifTrue_, (Optr)PSend8226, (Optr)PBlock8227, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8231, (Optr)&t_send1, (Optr)PSend8232, (Optr)&t_send_ifTrue_, (Optr)PSend8233, (Optr)PBlock8234, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8238, (Optr)&t_send1, (Optr)PSend8239, (Optr)&t_send_ifTrue_, (Optr)PSend8240, (Optr)PBlock8241, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8249, (Optr)&t_send1, (Optr)PSend8250, (Optr)&t_method_return);
    Block PBlock8220 = new_Block_with(PArray8221, empty_Array, PThreadedCode8222, 5, PAssign8223, PSend8226, PSend8233, PSend8240, PSend8250);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8251 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8220);
    Array PThreadedCode8219 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8220, (Optr)&t_send1, (Optr)PSend8251, (Optr)&t_method_return);
    Method PMethod8216 = new_Method_with(PArray8217, PArray8218, empty_Array, PThreadedCode8219, 1, PSend8251);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8216, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_whileFalse() {
    Symbol SMB_whileFalse = new_Symbol(L"whileFalse");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8254 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // whileFalse. 
    Send PSend8258 = new_Send((Optr)self, SMB_whileFalse, 0);
    Array PThreadedCode8257 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8258, (Optr)&t_block_return);
    Block PBlock8256 = new_Block_with(empty_Array, empty_Array, PThreadedCode8257, 1, PSend8258);
    // ifFalse:. 
    Send PSend8255 = new_Send((Optr)PSend8254, SMB_ifFalse_, 1, (Optr)PBlock8256);
    Array PThreadedCode8253 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8254, (Optr)&t_send_ifFalse_, (Optr)PSend8255, (Optr)PBlock8256, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8252 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8253, 2, PSend8255, self);
    
    MethodClosure MC_SMB_whileFalse = new_MethodClosure((Method)PMethod8252, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse, MC_SMB_whileFalse);
}


static void init_SMB_ensure_() {
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8260 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8263 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray8266 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8268 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend8269 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8270 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8269);
    Array PThreadedCode8267 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend8269, (Optr)&t_send1, (Optr)PSend8270, (Optr)&t_method_return);
    Block PBlock8265 = new_Block_with(PArray8266, empty_Array, PThreadedCode8267, 2, PSend8268, PSend8270);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend8271 = new_Send((Optr)self, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock8265);
    // value. 
    Send PSend8272 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode8264 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock8265, (Optr)&t_send2, (Optr)PSend8271, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8272, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8262 = new_Block_with(PArray8263, empty_Array, PThreadedCode8264, 3, PSend8271, PSend8272, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8273 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8262);
    Array PThreadedCode8261 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8262, (Optr)&t_send1, (Optr)PSend8273, (Optr)&t_method_return);
    Method PMethod8259 = new_Method_with(PArray8260, empty_Array, empty_Array, PThreadedCode8261, 1, PSend8273);
    
    MethodClosure MC_SMB_ensure_ = new_MethodClosure((Method)PMethod8259, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_ensure_, MC_SMB_ensure_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8275 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockClosure_context, (Optr)&t_method_return);
    Method PMethod8274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8275, 1, slot_Runtime_BlockClosure_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8274, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context, MC_SMB_context);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8277 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8279 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // value. 
    Send PSend8283 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend8284 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8282 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8283, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8284, (Optr)&t_block_return);
    Block PBlock8281 = new_Block_with(empty_Array, empty_Array, PThreadedCode8282, 2, PSend8283, PSend8284);
    // ifFalse:. 
    Send PSend8280 = new_Send((Optr)PSend8279, SMB_ifFalse_, 1, (Optr)PBlock8281);
    Array PThreadedCode8278 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8279, (Optr)&t_send_ifFalse_, (Optr)PSend8280, (Optr)PBlock8281, (Optr)&t_method_return);
    Method PMethod8276 = new_Method_with(PArray8277, empty_Array, empty_Array, PThreadedCode8278, 1, PSend8280);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod8276, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
}


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8286 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8288 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // value. 
    Send PSend8292 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend8293 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8291 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8292, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8293, (Optr)&t_block_return);
    Block PBlock8290 = new_Block_with(empty_Array, empty_Array, PThreadedCode8291, 2, PSend8292, PSend8293);
    // ifTrue:. 
    Send PSend8289 = new_Send((Optr)PSend8288, SMB_ifTrue_, 1, (Optr)PBlock8290);
    Array PThreadedCode8287 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8288, (Optr)&t_send_ifTrue_, (Optr)PSend8289, (Optr)PBlock8290, (Optr)&t_method_return);
    Method PMethod8285 = new_Method_with(PArray8286, empty_Array, empty_Array, PThreadedCode8287, 1, PSend8289);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod8285, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue_, MC_SMB_whileTrue_);
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
    init_SMB_value_value_value_();
    init_SMB_value_value_();
    init_SMB_context_();
    init_SMB_asParser();
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
    init_SMB_whileTrue_();
    
}