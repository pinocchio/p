#include <lib/class/Runtime/BlockClosure.h>


Optr layout_Runtime_BlockClosure_Class_class;
Optr slot_Runtime_BlockClosure_context;
Optr layout_Runtime_BlockClosure;


static void init_SMB_value_value_value_() {
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Array PArray8078 = new_Array_with(3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8080 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8079 = new_Array_with(1, (Optr)PAnnotation8080);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend8082 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8083 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8082);
    Array PThreadedCode8081 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_send3, (Optr)PSend8082, (Optr)&t_send1, (Optr)PSend8083, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8077 = new_ReflectionMethod_with(PArray8078, empty_Array, PArray8079, PThreadedCode8081, 1, PSend8083);
    
    MethodClosure MC_SMB_value_value_value_ = new_MethodClosure((Method)PReflectionMethod8077, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_, MC_SMB_value_value_value_);
}


static void init_SMB_value_value_() {
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Array PArray8085 = new_Array_with(2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8087 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8086 = new_Array_with(1, (Optr)PAnnotation8087);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend8089 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8090 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8089);
    Array PThreadedCode8088 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_send2, (Optr)PSend8089, (Optr)&t_send1, (Optr)PSend8090, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8084 = new_ReflectionMethod_with(PArray8085, empty_Array, PArray8086, PThreadedCode8088, 1, PSend8090);
    
    MethodClosure MC_SMB_value_value_ = new_MethodClosure((Method)PReflectionMethod8084, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_, MC_SMB_value_value_);
}


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray8092 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign8094 = new_Assign((Optr)slot_Runtime_BlockClosure_context, (Optr)VAR_aContext_0_0);
    Array PThreadedCode8093 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8094, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8091 = new_Method_with(PArray8092, empty_Array, empty_Array, PThreadedCode8093, 2, PAssign8094, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod8091, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8097 = new_Send((Optr)PEGBlock_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode8096 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGBlock_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8097, (Optr)&t_method_return);
    Method PMethod8095 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8096, 1, PSend8097);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod8095, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_SMB_on_do_() {
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    Variable VAR_errorClass_0_0 = new_Variable_named(L"errorClass", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray8099 = new_Array_with(2, (Optr)VAR_errorClass_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_previousExceptionHandler_0_2 = new_Variable_named(L"previousExceptionHandler", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray8100 = new_Array_with(2, (Optr)VAR_previousExceptionHandler_0_2, (Optr)VAR_result_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8103 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend8106 = new_Send((Optr)Exception_classReference, SMB_handler, 0);
    Assign PAssign8105 = new_Assign((Optr)VAR_previousExceptionHandler_0_2, (Optr)PSend8106);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_return_2_0 = new_Variable_named(L"return", 2);
    Array PArray8110 = new_Array_with(1, (Optr)VAR_return_2_0);
    Variable VAR_error_2_1 = new_Variable_named(L"error", 2);
    Array PArray8111 = new_Array_with(1, (Optr)VAR_error_2_1);
    Variable VAR_escape_3_0 = new_Variable_named(L"escape", 3);
    Array PArray8116 = new_Array_with(1, (Optr)VAR_escape_3_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend8118 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_escape_3_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8119 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8120 = new_Send((Optr)VAR_return_2_0, SMB_escape_, 1, (Optr)PSend8119);
    Array PThreadedCode8117 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_escape_3_0, (Optr)&t_send1, (Optr)PSend8118, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_return_2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8119, (Optr)&t_send1, (Optr)PSend8120, (Optr)&t_method_return);
    Block PBlock8115 = new_Block_with(PArray8116, empty_Array, PThreadedCode8117, 2, PSend8118, PSend8120);
    // on:. 
    Send PSend8114 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8115);
    Assign PAssign8113 = new_Assign((Optr)VAR_error_2_1, (Optr)PSend8114);
    // handler:. 
    Send PSend8121 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend8122 = new_Send((Optr)VAR_error_2_1, SMB_isKindOf_, 1, (Optr)VAR_errorClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8126 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_error_2_1);
    // escape:. 
    Send PSend8127 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8126);
    Array PThreadedCode8125 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend8126, (Optr)&t_send1, (Optr)PSend8127, (Optr)&t_block_return);
    Block PBlock8124 = new_Block_with(empty_Array, empty_Array, PThreadedCode8125, 1, PSend8127);
    // ifTrue:. 
    Send PSend8123 = new_Send((Optr)PSend8122, SMB_ifTrue_, 1, (Optr)PBlock8124);
    // escape:. 
    Send PSend8128 = new_Send((Optr)VAR_previousExceptionHandler_0_2, SMB_escape_, 1, (Optr)VAR_error_2_1);
    Array PThreadedCode8112 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign8113, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8115, (Optr)&t_send1, (Optr)PSend8114, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend8121, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_push_variable, (Optr)VAR_errorClass_0_0, (Optr)&t_send1, (Optr)PSend8122, (Optr)&t_send_ifTrue_, (Optr)PSend8123, (Optr)PBlock8124, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend8128, (Optr)&t_method_return);
    Block PBlock8109 = new_Block_with(PArray8110, PArray8111, PThreadedCode8112, 4, PAssign8113, PSend8121, PSend8123, PSend8128);
    // on:. 
    Send PSend8108 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8109);
    Assign PAssign8107 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend8108);
    // handler:. 
    Send PSend8129 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Array PThreadedCode8104 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign8105, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_send0, (Optr)PSend8106, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8107, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8109, (Optr)&t_send1, (Optr)PSend8108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend8129, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock8102 = new_Block_with(PArray8103, empty_Array, PThreadedCode8104, 4, PAssign8105, PAssign8107, PSend8129, VAR_result_0_3);
    // on:. 
    Send PSend8130 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8102);
    Array PThreadedCode8101 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8102, (Optr)&t_send1, (Optr)PSend8130, (Optr)&t_method_return);
    Method PMethod8098 = new_Method_with(PArray8099, PArray8100, empty_Array, PThreadedCode8101, 1, PSend8130);
    
    MethodClosure MC_SMB_on_do_ = new_MethodClosure((Method)PMethod8098, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_on_do_, MC_SMB_on_do_);
}


static void init_SMB_value_value_value_value_() {
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Variable VAR_yetAnotherArg_0_3 = new_Variable_named(L"yetAnotherArg", 0);
    Array PArray8132 = new_Array_with(4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8134 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8133 = new_Array_with(1, (Optr)PAnnotation8134);
    Symbol SMB_with_with_with_with_ = new_Symbol(L"with:with:with:with:");
    // with:with:with:with:. 
    Send PSend8136 = new_Send((Optr)Array_classReference, SMB_with_with_with_with_, 4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8137 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8136);
    Array PThreadedCode8135 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_push_variable, (Optr)VAR_yetAnotherArg_0_3, (Optr)&t_send4, (Optr)PSend8136, (Optr)&t_send1, (Optr)PSend8137, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8131 = new_ReflectionMethod_with(PArray8132, empty_Array, PArray8133, PThreadedCode8135, 1, PSend8137);
    
    MethodClosure MC_SMB_value_value_value_value_ = new_MethodClosure((Method)PReflectionMethod8131, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_value_, MC_SMB_value_value_value_value_);
}


static void init_SMB_whileTrue() {
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8140 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // whileTrue. 
    Send PSend8144 = new_Send((Optr)self, SMB_whileTrue, 0);
    Array PThreadedCode8143 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8144, (Optr)&t_block_return);
    Block PBlock8142 = new_Block_with(empty_Array, empty_Array, PThreadedCode8143, 1, PSend8144);
    // ifTrue:. 
    Send PSend8141 = new_Send((Optr)PSend8140, SMB_ifTrue_, 1, (Optr)PBlock8142);
    Array PThreadedCode8139 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8140, (Optr)&t_send_ifTrue_, (Optr)PSend8141, (Optr)PBlock8142, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8138 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8139, 2, PSend8141, self);
    
    MethodClosure MC_SMB_whileTrue = new_MethodClosure((Method)PMethod8138, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue, MC_SMB_whileTrue);
}


static void init_SMB_parallelWith_() {
    Symbol SMB_parallelWith_ = new_Symbol(L"parallelWith:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8146 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend8148 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)self, (Optr)VAR_aBlock_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend8149 = new_Send((Optr)PParallelDebugger_classReference, SMB_interpret_, 1, (Optr)PSend8148);
    Array PThreadedCode8147 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PParallelDebugger_classReference, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend8148, (Optr)&t_send1, (Optr)PSend8149, (Optr)&t_method_return);
    Method PMethod8145 = new_Method_with(PArray8146, empty_Array, empty_Array, PThreadedCode8147, 1, PSend8149);
    
    MethodClosure MC_SMB_parallelWith_ = new_MethodClosure((Method)PMethod8145, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_parallelWith_, MC_SMB_parallelWith_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Array PArray8151 = new_Array_with(1, (Optr)VAR_closure_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8155 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8154 = new_Send((Optr)PSend8155, SMB_new, 0);
    Assign PAssign8153 = new_Assign((Optr)VAR_closure_0_0, (Optr)PSend8154);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend8156 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend8157 = new_Send((Optr)VAR_closure_0_0, SMB_code_, 1, (Optr)PSend8156);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend8158 = new_Send((Optr)self, SMB_context, 0);
    // asAliased. 
    Send PSend8159 = new_Send((Optr)PSend8158, SMB_asAliased, 0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend8160 = new_Send((Optr)VAR_closure_0_0, SMB_context_, 1, (Optr)PSend8159);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8162 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8164 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_0);
    // context. 
    Send PSend8165 = new_Send((Optr)self, SMB_context, 0);
    // context:. 
    Send PSend8166 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)PSend8165);
    Array PThreadedCode8163 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend8164, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8165, (Optr)&t_send1, (Optr)PSend8166, (Optr)&t_method_return);
    Block PBlock8161 = new_Block_with(PArray8162, empty_Array, PThreadedCode8163, 2, PSend8164, PSend8166);
    // new. 
    Send PSend8167 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend8168 = new_Send((Optr)PBlock8161, SMB_value_, 1, (Optr)PSend8167);
    Array PThreadedCode8152 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign8153, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8155, (Optr)&t_send0, (Optr)PSend8154, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8156, (Optr)&t_send1, (Optr)PSend8157, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8158, (Optr)&t_send0, (Optr)PSend8159, (Optr)&t_send1, (Optr)PSend8160, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock8161, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend8167, (Optr)&t_send1, (Optr)PSend8168, (Optr)&t_method_return);
    Method PMethod8150 = new_Method_with(empty_Array, PArray8151, empty_Array, PThreadedCode8152, 4, PAssign8153, PSend8157, PSend8160, PSend8168);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod8150, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_for_ = new_Symbol(L"for:");
    // for:. 
    Send PSend8171 = new_Send((Optr)PThread_classReference, SMB_for_, 1, (Optr)self);
    Array PThreadedCode8170 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8171, (Optr)&t_method_return);
    Method PMethod8169 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8170, 1, PSend8171);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod8169, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8174 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8173 = new_Array_with(1, (Optr)PAnnotation8174);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend8176 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8177 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8176);
    Array PThreadedCode8175 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8176, (Optr)&t_send1, (Optr)PSend8177, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8172 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray8173, PThreadedCode8175, 1, PSend8177);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PReflectionMethod8172, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray8179 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8182 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8184 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8185 = new_Send((Optr)VAR_aClosure_0_0, SMB_species, 0);
    // =. 
    Send PSend8186 = new_Send((Optr)PSend8184, SMB__equals_, 1, (Optr)PSend8185);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8190 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8189 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8190, (Optr)&t_block_return);
    Block PBlock8188 = new_Block_with(empty_Array, empty_Array, PThreadedCode8189, 1, PSend8190);
    // ifFalse:. 
    Send PSend8187 = new_Send((Optr)PSend8186, SMB_ifFalse_, 1, (Optr)PBlock8188);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend8191 = new_Send((Optr)self, SMB_code, 0);
    // code. 
    Send PSend8192 = new_Send((Optr)VAR_aClosure_0_0, SMB_code, 0);
    // =. 
    Send PSend8193 = new_Send((Optr)PSend8191, SMB__equals_, 1, (Optr)PSend8192);
    Array PThreadedCode8183 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8184, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8185, (Optr)&t_send1, (Optr)PSend8186, (Optr)&t_send_ifFalse_, (Optr)PSend8187, (Optr)PBlock8188, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8191, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8192, (Optr)&t_send1, (Optr)PSend8193, (Optr)&t_method_return);
    Block PBlock8181 = new_Block_with(PArray8182, empty_Array, PThreadedCode8183, 2, PSend8187, PSend8193);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8194 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8181);
    Array PThreadedCode8180 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8181, (Optr)&t_send1, (Optr)PSend8194, (Optr)&t_method_return);
    Method PMethod8178 = new_Method_with(PArray8179, empty_Array, empty_Array, PThreadedCode8180, 1, PSend8194);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8178, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Array PArray8196 = new_Array_with(1, (Optr)VAR_anArg_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8198 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8197 = new_Array_with(1, (Optr)PAnnotation8198);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend8200 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_anArg_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8201 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8200);
    Array PThreadedCode8199 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_send1, (Optr)PSend8200, (Optr)&t_send1, (Optr)PSend8201, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8195 = new_ReflectionMethod_with(PArray8196, empty_Array, PArray8197, PThreadedCode8199, 1, PSend8201);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PReflectionMethod8195, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8203 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlockClosure_ = new_Symbol(L"visitBlockClosure:");
    // visitBlockClosure:. 
    Send PSend8205 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlockClosure_, 1, (Optr)self);
    Array PThreadedCode8204 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8205, (Optr)&t_method_return);
    Method PMethod8202 = new_Method_with(PArray8203, empty_Array, empty_Array, PThreadedCode8204, 1, PSend8205);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8202, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_BlockClosure = new_Symbol(L"Runtime.BlockClosure");
    Annotation PAnnotation8208 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_numArgs, (Optr)SMB_Runtime_minus_BlockClosure);
    Array PArray8207 = new_Array_with(1, (Optr)PAnnotation8208);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend8210 = new_Send((Optr)slot_Runtime_Closure_code, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8211 = new_Send((Optr)PSend8210, SMB_size, 0);
    Array PThreadedCode8209 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8210, (Optr)&t_send0, (Optr)PSend8211, (Optr)&t_method_return);
    NativeMethod PNativeMethod8206 = new_NativeMethod_with(empty_Array, empty_Array, PArray8207, PThreadedCode8209, 1, PSend8211);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PNativeMethod8206, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8213 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Annotation PAnnotation8215 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValueWithArguments_message_);
    Array PArray8214 = new_Array_with(1, (Optr)PAnnotation8215);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8217 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8216 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8217, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8212 = new_ReflectionMethod_with(PArray8213, empty_Array, PArray8214, PThreadedCode8216, 2, PSend8217, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PReflectionMethod8212, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8219 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8220 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8223 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8226 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8225 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8226);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8227 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8231 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8232 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8231);
    Array PThreadedCode8230 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8231, (Optr)&t_send1, (Optr)PSend8232, (Optr)&t_block_return);
    Block PBlock8229 = new_Block_with(empty_Array, empty_Array, PThreadedCode8230, 1, PSend8232);
    // ifTrue:. 
    Send PSend8228 = new_Send((Optr)PSend8227, SMB_ifTrue_, 1, (Optr)PBlock8229);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8233 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8234 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8233);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8238 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend8239 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8238);
    Array PThreadedCode8237 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8238, (Optr)&t_send1, (Optr)PSend8239, (Optr)&t_block_return);
    Block PBlock8236 = new_Block_with(empty_Array, empty_Array, PThreadedCode8237, 1, PSend8239);
    // ifTrue:. 
    Send PSend8235 = new_Send((Optr)PSend8234, SMB_ifTrue_, 1, (Optr)PBlock8236);
    // size. 
    Send PSend8240 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8241 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8240);
    // size. 
    Send PSend8245 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8246 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8245);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8247 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8246);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8248 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8247);
    // valueWithArguments:. 
    Send PSend8249 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8248);
    // escape:. 
    Send PSend8250 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8249);
    Array PThreadedCode8244 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8245, (Optr)&t_send1, (Optr)PSend8246, (Optr)&t_send1, (Optr)PSend8247, (Optr)&t_send1, (Optr)PSend8248, (Optr)&t_send1, (Optr)PSend8249, (Optr)&t_send1, (Optr)PSend8250, (Optr)&t_block_return);
    Block PBlock8243 = new_Block_with(empty_Array, empty_Array, PThreadedCode8244, 1, PSend8250);
    // ifTrue:. 
    Send PSend8242 = new_Send((Optr)PSend8241, SMB_ifTrue_, 1, (Optr)PBlock8243);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8251 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8252 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8251);
    Array PThreadedCode8224 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8225, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8226, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8227, (Optr)&t_send_ifTrue_, (Optr)PSend8228, (Optr)PBlock8229, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8233, (Optr)&t_send1, (Optr)PSend8234, (Optr)&t_send_ifTrue_, (Optr)PSend8235, (Optr)PBlock8236, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8240, (Optr)&t_send1, (Optr)PSend8241, (Optr)&t_send_ifTrue_, (Optr)PSend8242, (Optr)PBlock8243, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8251, (Optr)&t_send1, (Optr)PSend8252, (Optr)&t_method_return);
    Block PBlock8222 = new_Block_with(PArray8223, empty_Array, PThreadedCode8224, 5, PAssign8225, PSend8228, PSend8235, PSend8242, PSend8252);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8253 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8222);
    Array PThreadedCode8221 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8222, (Optr)&t_send1, (Optr)PSend8253, (Optr)&t_method_return);
    Method PMethod8218 = new_Method_with(PArray8219, PArray8220, empty_Array, PThreadedCode8221, 1, PSend8253);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8218, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_whileFalse() {
    Symbol SMB_whileFalse = new_Symbol(L"whileFalse");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8256 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // whileFalse. 
    Send PSend8260 = new_Send((Optr)self, SMB_whileFalse, 0);
    Array PThreadedCode8259 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8260, (Optr)&t_block_return);
    Block PBlock8258 = new_Block_with(empty_Array, empty_Array, PThreadedCode8259, 1, PSend8260);
    // ifFalse:. 
    Send PSend8257 = new_Send((Optr)PSend8256, SMB_ifFalse_, 1, (Optr)PBlock8258);
    Array PThreadedCode8255 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8256, (Optr)&t_send_ifFalse_, (Optr)PSend8257, (Optr)PBlock8258, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8254 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8255, 2, PSend8257, self);
    
    MethodClosure MC_SMB_whileFalse = new_MethodClosure((Method)PMethod8254, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse, MC_SMB_whileFalse);
}


static void init_SMB_ensure_() {
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8262 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8265 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray8268 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8270 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend8271 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8272 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8271);
    Array PThreadedCode8269 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8270, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend8271, (Optr)&t_send1, (Optr)PSend8272, (Optr)&t_method_return);
    Block PBlock8267 = new_Block_with(PArray8268, empty_Array, PThreadedCode8269, 2, PSend8270, PSend8272);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend8273 = new_Send((Optr)self, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock8267);
    // value. 
    Send PSend8274 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode8266 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock8267, (Optr)&t_send2, (Optr)PSend8273, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8274, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8264 = new_Block_with(PArray8265, empty_Array, PThreadedCode8266, 3, PSend8273, PSend8274, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8275 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8264);
    Array PThreadedCode8263 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8264, (Optr)&t_send1, (Optr)PSend8275, (Optr)&t_method_return);
    Method PMethod8261 = new_Method_with(PArray8262, empty_Array, empty_Array, PThreadedCode8263, 1, PSend8275);
    
    MethodClosure MC_SMB_ensure_ = new_MethodClosure((Method)PMethod8261, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_ensure_, MC_SMB_ensure_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8277 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockClosure_context, (Optr)&t_method_return);
    Method PMethod8276 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8277, 1, slot_Runtime_BlockClosure_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8276, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context, MC_SMB_context);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8279 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8281 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // value. 
    Send PSend8285 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend8286 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8284 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8285, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8286, (Optr)&t_block_return);
    Block PBlock8283 = new_Block_with(empty_Array, empty_Array, PThreadedCode8284, 2, PSend8285, PSend8286);
    // ifFalse:. 
    Send PSend8282 = new_Send((Optr)PSend8281, SMB_ifFalse_, 1, (Optr)PBlock8283);
    Array PThreadedCode8280 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8281, (Optr)&t_send_ifFalse_, (Optr)PSend8282, (Optr)PBlock8283, (Optr)&t_method_return);
    Method PMethod8278 = new_Method_with(PArray8279, empty_Array, empty_Array, PThreadedCode8280, 1, PSend8282);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod8278, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
}


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8288 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8290 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // value. 
    Send PSend8294 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend8295 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8293 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8294, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8295, (Optr)&t_block_return);
    Block PBlock8292 = new_Block_with(empty_Array, empty_Array, PThreadedCode8293, 2, PSend8294, PSend8295);
    // ifTrue:. 
    Send PSend8291 = new_Send((Optr)PSend8290, SMB_ifTrue_, 1, (Optr)PBlock8292);
    Array PThreadedCode8289 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8290, (Optr)&t_send_ifTrue_, (Optr)PSend8291, (Optr)PBlock8292, (Optr)&t_method_return);
    Method PMethod8287 = new_Method_with(PArray8288, empty_Array, empty_Array, PThreadedCode8289, 1, PSend8291);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod8287, BlockClosure_Class);
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