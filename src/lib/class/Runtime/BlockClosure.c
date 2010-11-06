#include <lib/class/Runtime/BlockClosure.h>


Optr layout_Runtime_BlockClosure_Class_class;
Optr slot_Runtime_BlockClosure_context;
Optr layout_Runtime_BlockClosure;


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7889 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7891 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // value. 
    Send PSend7895 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend7896 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7894 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend7895, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7896, (Optr)&t_block_return);
    Block PBlock7893 = new_Block_with(empty_Array, empty_Array, PThreadedCode7894, 2, PSend7895, PSend7896);
    // ifTrue:. 
    Send PSend7892 = new_Send((Optr)PSend7891, SMB_ifTrue_, 1, (Optr)PBlock7893);
    Array PThreadedCode7890 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7891, (Optr)&t_send_ifTrue_, (Optr)PSend7892, (Optr)PBlock7893, (Optr)&t_method_return);
    Method PMethod7888 = new_Method_with(PArray7889, empty_Array, empty_Array, PThreadedCode7890, 1, PSend7892);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod7888, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue_, MC_SMB_whileTrue_);
}


static void init_SMB_value_value_value_() {
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Array PArray7898 = new_Array_with(3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7900 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7899 = new_Array_with(1, (Optr)PAnnotation7900);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend7902 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7903 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7902);
    Array PThreadedCode7901 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_send3, (Optr)PSend7902, (Optr)&t_send1, (Optr)PSend7903, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7897 = new_ReflectionMethod_with(PArray7898, empty_Array, PArray7899, PThreadedCode7901, 1, PSend7903);
    
    MethodClosure MC_SMB_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7897, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_, MC_SMB_value_value_value_);
}


static void init_SMB_value_value_() {
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Array PArray7905 = new_Array_with(2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7907 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7906 = new_Array_with(1, (Optr)PAnnotation7907);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7909 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7910 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7909);
    Array PThreadedCode7908 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_send2, (Optr)PSend7909, (Optr)&t_send1, (Optr)PSend7910, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7904 = new_ReflectionMethod_with(PArray7905, empty_Array, PArray7906, PThreadedCode7908, 1, PSend7910);
    
    MethodClosure MC_SMB_value_value_ = new_MethodClosure((Method)PReflectionMethod7904, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_, MC_SMB_value_value_);
}


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray7912 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign7914 = new_Assign((Optr)slot_Runtime_BlockClosure_context, (Optr)VAR_aContext_0_0);
    Array PThreadedCode7913 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7914, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7911 = new_Method_with(PArray7912, empty_Array, empty_Array, PThreadedCode7913, 2, PAssign7914, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod7911, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_on_do_() {
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    Variable VAR_errorClass_0_0 = new_Variable_named(L"errorClass", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7916 = new_Array_with(2, (Optr)VAR_errorClass_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_previousExceptionHandler_0_2 = new_Variable_named(L"previousExceptionHandler", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray7917 = new_Array_with(2, (Optr)VAR_previousExceptionHandler_0_2, (Optr)VAR_result_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7920 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend7923 = new_Send((Optr)Exception_classReference, SMB_handler, 0);
    Assign PAssign7922 = new_Assign((Optr)VAR_previousExceptionHandler_0_2, (Optr)PSend7923);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_return_2_0 = new_Variable_named(L"return", 2);
    Array PArray7927 = new_Array_with(1, (Optr)VAR_return_2_0);
    Variable VAR_error_2_1 = new_Variable_named(L"error", 2);
    Array PArray7928 = new_Array_with(1, (Optr)VAR_error_2_1);
    Variable VAR_escape_3_0 = new_Variable_named(L"escape", 3);
    Array PArray7933 = new_Array_with(1, (Optr)VAR_escape_3_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend7935 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_escape_3_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7936 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7937 = new_Send((Optr)VAR_return_2_0, SMB_escape_, 1, (Optr)PSend7936);
    Array PThreadedCode7934 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_escape_3_0, (Optr)&t_send1, (Optr)PSend7935, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_return_2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7936, (Optr)&t_send1, (Optr)PSend7937, (Optr)&t_method_return);
    Block PBlock7932 = new_Block_with(PArray7933, empty_Array, PThreadedCode7934, 2, PSend7935, PSend7937);
    // on:. 
    Send PSend7931 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7932);
    Assign PAssign7930 = new_Assign((Optr)VAR_error_2_1, (Optr)PSend7931);
    // handler:. 
    Send PSend7938 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend7939 = new_Send((Optr)VAR_error_2_1, SMB_isKindOf_, 1, (Optr)VAR_errorClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7943 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_error_2_1);
    // escape:. 
    Send PSend7944 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7943);
    Array PThreadedCode7942 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7943, (Optr)&t_send1, (Optr)PSend7944, (Optr)&t_block_return);
    Block PBlock7941 = new_Block_with(empty_Array, empty_Array, PThreadedCode7942, 1, PSend7944);
    // ifTrue:. 
    Send PSend7940 = new_Send((Optr)PSend7939, SMB_ifTrue_, 1, (Optr)PBlock7941);
    // escape:. 
    Send PSend7945 = new_Send((Optr)VAR_previousExceptionHandler_0_2, SMB_escape_, 1, (Optr)VAR_error_2_1);
    Array PThreadedCode7929 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign7930, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7932, (Optr)&t_send1, (Optr)PSend7931, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7938, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_push_variable, (Optr)VAR_errorClass_0_0, (Optr)&t_send1, (Optr)PSend7939, (Optr)&t_send_ifTrue_, (Optr)PSend7940, (Optr)PBlock7941, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7945, (Optr)&t_method_return);
    Block PBlock7926 = new_Block_with(PArray7927, PArray7928, PThreadedCode7929, 4, PAssign7930, PSend7938, PSend7940, PSend7945);
    // on:. 
    Send PSend7925 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7926);
    Assign PAssign7924 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend7925);
    // handler:. 
    Send PSend7946 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Array PThreadedCode7921 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign7922, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_send0, (Optr)PSend7923, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7924, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7926, (Optr)&t_send1, (Optr)PSend7925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7946, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock7919 = new_Block_with(PArray7920, empty_Array, PThreadedCode7921, 4, PAssign7922, PAssign7924, PSend7946, VAR_result_0_3);
    // on:. 
    Send PSend7947 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7919);
    Array PThreadedCode7918 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7919, (Optr)&t_send1, (Optr)PSend7947, (Optr)&t_method_return);
    Method PMethod7915 = new_Method_with(PArray7916, PArray7917, empty_Array, PThreadedCode7918, 1, PSend7947);
    
    MethodClosure MC_SMB_on_do_ = new_MethodClosure((Method)PMethod7915, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_on_do_, MC_SMB_on_do_);
}


static void init_SMB_value_value_value_value_() {
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Variable VAR_yetAnotherArg_0_3 = new_Variable_named(L"yetAnotherArg", 0);
    Array PArray7949 = new_Array_with(4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7951 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7950 = new_Array_with(1, (Optr)PAnnotation7951);
    Symbol SMB_with_with_with_with_ = new_Symbol(L"with:with:with:with:");
    // with:with:with:with:. 
    Send PSend7953 = new_Send((Optr)Array_classReference, SMB_with_with_with_with_, 4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7954 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7953);
    Array PThreadedCode7952 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_push_variable, (Optr)VAR_yetAnotherArg_0_3, (Optr)&t_send4, (Optr)PSend7953, (Optr)&t_send1, (Optr)PSend7954, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7948 = new_ReflectionMethod_with(PArray7949, empty_Array, PArray7950, PThreadedCode7952, 1, PSend7954);
    
    MethodClosure MC_SMB_value_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7948, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_value_, MC_SMB_value_value_value_value_);
}


static void init_SMB_whileTrue() {
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7957 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // whileTrue. 
    Send PSend7961 = new_Send((Optr)self, SMB_whileTrue, 0);
    Array PThreadedCode7960 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7961, (Optr)&t_block_return);
    Block PBlock7959 = new_Block_with(empty_Array, empty_Array, PThreadedCode7960, 1, PSend7961);
    // ifTrue:. 
    Send PSend7958 = new_Send((Optr)PSend7957, SMB_ifTrue_, 1, (Optr)PBlock7959);
    Array PThreadedCode7956 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7957, (Optr)&t_send_ifTrue_, (Optr)PSend7958, (Optr)PBlock7959, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7955 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7956, 2, PSend7958, self);
    
    MethodClosure MC_SMB_whileTrue = new_MethodClosure((Method)PMethod7955, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue, MC_SMB_whileTrue);
}


static void init_SMB_parallelWith_() {
    Symbol SMB_parallelWith_ = new_Symbol(L"parallelWith:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7963 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7965 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)self, (Optr)VAR_aBlock_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend7966 = new_Send((Optr)PParallelDebugger_classReference, SMB_interpret_, 1, (Optr)PSend7965);
    Array PThreadedCode7964 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PParallelDebugger_classReference, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend7965, (Optr)&t_send1, (Optr)PSend7966, (Optr)&t_method_return);
    Method PMethod7962 = new_Method_with(PArray7963, empty_Array, empty_Array, PThreadedCode7964, 1, PSend7966);
    
    MethodClosure MC_SMB_parallelWith_ = new_MethodClosure((Method)PMethod7962, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_parallelWith_, MC_SMB_parallelWith_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Array PArray7968 = new_Array_with(1, (Optr)VAR_closure_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7972 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7971 = new_Send((Optr)PSend7972, SMB_new, 0);
    Assign PAssign7970 = new_Assign((Optr)VAR_closure_0_0, (Optr)PSend7971);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend7973 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend7974 = new_Send((Optr)VAR_closure_0_0, SMB_code_, 1, (Optr)PSend7973);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend7975 = new_Send((Optr)self, SMB_context, 0);
    // asAliased. 
    Send PSend7976 = new_Send((Optr)PSend7975, SMB_asAliased, 0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend7977 = new_Send((Optr)VAR_closure_0_0, SMB_context_, 1, (Optr)PSend7976);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7979 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7981 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_0);
    // context. 
    Send PSend7982 = new_Send((Optr)self, SMB_context, 0);
    // context:. 
    Send PSend7983 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)PSend7982);
    Array PThreadedCode7980 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend7981, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7982, (Optr)&t_send1, (Optr)PSend7983, (Optr)&t_method_return);
    Block PBlock7978 = new_Block_with(PArray7979, empty_Array, PThreadedCode7980, 2, PSend7981, PSend7983);
    // new. 
    Send PSend7984 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend7985 = new_Send((Optr)PBlock7978, SMB_value_, 1, (Optr)PSend7984);
    Array PThreadedCode7969 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign7970, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7972, (Optr)&t_send0, (Optr)PSend7971, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7973, (Optr)&t_send1, (Optr)PSend7974, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7975, (Optr)&t_send0, (Optr)PSend7976, (Optr)&t_send1, (Optr)PSend7977, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7978, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend7984, (Optr)&t_send1, (Optr)PSend7985, (Optr)&t_method_return);
    Method PMethod7967 = new_Method_with(empty_Array, PArray7968, empty_Array, PThreadedCode7969, 4, PAssign7970, PSend7974, PSend7977, PSend7985);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod7967, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_for_ = new_Symbol(L"for:");
    // for:. 
    Send PSend7988 = new_Send((Optr)PThread_classReference, SMB_for_, 1, (Optr)self);
    Array PThreadedCode7987 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7988, (Optr)&t_method_return);
    Method PMethod7986 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7987, 1, PSend7988);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod7986, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7991 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7990 = new_Array_with(1, (Optr)PAnnotation7991);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend7993 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7994 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7993);
    Array PThreadedCode7992 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7993, (Optr)&t_send1, (Optr)PSend7994, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7989 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray7990, PThreadedCode7992, 1, PSend7994);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PReflectionMethod7989, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray7996 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7999 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8001 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8002 = new_Send((Optr)VAR_aClosure_0_0, SMB_species, 0);
    // =. 
    Send PSend8003 = new_Send((Optr)PSend8001, SMB__equals_, 1, (Optr)PSend8002);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8007 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8006 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8007, (Optr)&t_block_return);
    Block PBlock8005 = new_Block_with(empty_Array, empty_Array, PThreadedCode8006, 1, PSend8007);
    // ifFalse:. 
    Send PSend8004 = new_Send((Optr)PSend8003, SMB_ifFalse_, 1, (Optr)PBlock8005);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend8008 = new_Send((Optr)self, SMB_code, 0);
    // code. 
    Send PSend8009 = new_Send((Optr)VAR_aClosure_0_0, SMB_code, 0);
    // =. 
    Send PSend8010 = new_Send((Optr)PSend8008, SMB__equals_, 1, (Optr)PSend8009);
    Array PThreadedCode8000 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8001, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8002, (Optr)&t_send1, (Optr)PSend8003, (Optr)&t_send_ifFalse_, (Optr)PSend8004, (Optr)PBlock8005, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8008, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8009, (Optr)&t_send1, (Optr)PSend8010, (Optr)&t_method_return);
    Block PBlock7998 = new_Block_with(PArray7999, empty_Array, PThreadedCode8000, 2, PSend8004, PSend8010);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8011 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7998);
    Array PThreadedCode7997 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7998, (Optr)&t_send1, (Optr)PSend8011, (Optr)&t_method_return);
    Method PMethod7995 = new_Method_with(PArray7996, empty_Array, empty_Array, PThreadedCode7997, 1, PSend8011);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7995, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Array PArray8013 = new_Array_with(1, (Optr)VAR_anArg_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8015 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8014 = new_Array_with(1, (Optr)PAnnotation8015);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend8017 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_anArg_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8018 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8017);
    Array PThreadedCode8016 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_send1, (Optr)PSend8017, (Optr)&t_send1, (Optr)PSend8018, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8012 = new_ReflectionMethod_with(PArray8013, empty_Array, PArray8014, PThreadedCode8016, 1, PSend8018);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PReflectionMethod8012, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8020 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlockClosure_ = new_Symbol(L"visitBlockClosure:");
    // visitBlockClosure:. 
    Send PSend8022 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlockClosure_, 1, (Optr)self);
    Array PThreadedCode8021 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8022, (Optr)&t_method_return);
    Method PMethod8019 = new_Method_with(PArray8020, empty_Array, empty_Array, PThreadedCode8021, 1, PSend8022);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8019, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_BlockClosure = new_Symbol(L"Runtime.BlockClosure");
    Annotation PAnnotation8025 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_numArgs, (Optr)SMB_Runtime_minus_BlockClosure);
    Array PArray8024 = new_Array_with(1, (Optr)PAnnotation8025);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend8027 = new_Send((Optr)slot_Runtime_Closure_code, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8028 = new_Send((Optr)PSend8027, SMB_size, 0);
    Array PThreadedCode8026 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8027, (Optr)&t_send0, (Optr)PSend8028, (Optr)&t_method_return);
    NativeMethod PNativeMethod8023 = new_NativeMethod_with(empty_Array, empty_Array, PArray8024, PThreadedCode8026, 1, PSend8028);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PNativeMethod8023, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8030 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Annotation PAnnotation8032 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValueWithArguments_message_);
    Array PArray8031 = new_Array_with(1, (Optr)PAnnotation8032);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8034 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8033 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8034, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8029 = new_ReflectionMethod_with(PArray8030, empty_Array, PArray8031, PThreadedCode8033, 2, PSend8034, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PReflectionMethod8029, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8036 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8037 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8040 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8043 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8042 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8043);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8044 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8048 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8049 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8048);
    Array PThreadedCode8047 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8048, (Optr)&t_send1, (Optr)PSend8049, (Optr)&t_block_return);
    Block PBlock8046 = new_Block_with(empty_Array, empty_Array, PThreadedCode8047, 1, PSend8049);
    // ifTrue:. 
    Send PSend8045 = new_Send((Optr)PSend8044, SMB_ifTrue_, 1, (Optr)PBlock8046);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8050 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8051 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8050);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8055 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend8056 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8055);
    Array PThreadedCode8054 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8055, (Optr)&t_send1, (Optr)PSend8056, (Optr)&t_block_return);
    Block PBlock8053 = new_Block_with(empty_Array, empty_Array, PThreadedCode8054, 1, PSend8056);
    // ifTrue:. 
    Send PSend8052 = new_Send((Optr)PSend8051, SMB_ifTrue_, 1, (Optr)PBlock8053);
    // size. 
    Send PSend8057 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8058 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8057);
    // size. 
    Send PSend8062 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8063 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8062);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8064 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8063);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8065 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8064);
    // valueWithArguments:. 
    Send PSend8066 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8065);
    // escape:. 
    Send PSend8067 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8066);
    Array PThreadedCode8061 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8062, (Optr)&t_send1, (Optr)PSend8063, (Optr)&t_send1, (Optr)PSend8064, (Optr)&t_send1, (Optr)PSend8065, (Optr)&t_send1, (Optr)PSend8066, (Optr)&t_send1, (Optr)PSend8067, (Optr)&t_block_return);
    Block PBlock8060 = new_Block_with(empty_Array, empty_Array, PThreadedCode8061, 1, PSend8067);
    // ifTrue:. 
    Send PSend8059 = new_Send((Optr)PSend8058, SMB_ifTrue_, 1, (Optr)PBlock8060);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8068 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8069 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8068);
    Array PThreadedCode8041 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8042, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8043, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8044, (Optr)&t_send_ifTrue_, (Optr)PSend8045, (Optr)PBlock8046, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8050, (Optr)&t_send1, (Optr)PSend8051, (Optr)&t_send_ifTrue_, (Optr)PSend8052, (Optr)PBlock8053, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8057, (Optr)&t_send1, (Optr)PSend8058, (Optr)&t_send_ifTrue_, (Optr)PSend8059, (Optr)PBlock8060, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8068, (Optr)&t_send1, (Optr)PSend8069, (Optr)&t_method_return);
    Block PBlock8039 = new_Block_with(PArray8040, empty_Array, PThreadedCode8041, 5, PAssign8042, PSend8045, PSend8052, PSend8059, PSend8069);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8070 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8039);
    Array PThreadedCode8038 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8039, (Optr)&t_send1, (Optr)PSend8070, (Optr)&t_method_return);
    Method PMethod8035 = new_Method_with(PArray8036, PArray8037, empty_Array, PThreadedCode8038, 1, PSend8070);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8035, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_whileFalse() {
    Symbol SMB_whileFalse = new_Symbol(L"whileFalse");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8073 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // whileFalse. 
    Send PSend8077 = new_Send((Optr)self, SMB_whileFalse, 0);
    Array PThreadedCode8076 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8077, (Optr)&t_block_return);
    Block PBlock8075 = new_Block_with(empty_Array, empty_Array, PThreadedCode8076, 1, PSend8077);
    // ifFalse:. 
    Send PSend8074 = new_Send((Optr)PSend8073, SMB_ifFalse_, 1, (Optr)PBlock8075);
    Array PThreadedCode8072 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8073, (Optr)&t_send_ifFalse_, (Optr)PSend8074, (Optr)PBlock8075, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8071 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8072, 2, PSend8074, self);
    
    MethodClosure MC_SMB_whileFalse = new_MethodClosure((Method)PMethod8071, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse, MC_SMB_whileFalse);
}


static void init_SMB_ensure_() {
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8079 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8082 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray8085 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8087 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend8088 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8089 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8088);
    Array PThreadedCode8086 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8087, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend8088, (Optr)&t_send1, (Optr)PSend8089, (Optr)&t_method_return);
    Block PBlock8084 = new_Block_with(PArray8085, empty_Array, PThreadedCode8086, 2, PSend8087, PSend8089);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend8090 = new_Send((Optr)self, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock8084);
    // value. 
    Send PSend8091 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode8083 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock8084, (Optr)&t_send2, (Optr)PSend8090, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8091, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8081 = new_Block_with(PArray8082, empty_Array, PThreadedCode8083, 3, PSend8090, PSend8091, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8092 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8081);
    Array PThreadedCode8080 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8081, (Optr)&t_send1, (Optr)PSend8092, (Optr)&t_method_return);
    Method PMethod8078 = new_Method_with(PArray8079, empty_Array, empty_Array, PThreadedCode8080, 1, PSend8092);
    
    MethodClosure MC_SMB_ensure_ = new_MethodClosure((Method)PMethod8078, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_ensure_, MC_SMB_ensure_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8094 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockClosure_context, (Optr)&t_method_return);
    Method PMethod8093 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8094, 1, slot_Runtime_BlockClosure_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8093, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context, MC_SMB_context);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8096 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8098 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // value. 
    Send PSend8102 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend8103 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8101 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8102, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8103, (Optr)&t_block_return);
    Block PBlock8100 = new_Block_with(empty_Array, empty_Array, PThreadedCode8101, 2, PSend8102, PSend8103);
    // ifFalse:. 
    Send PSend8099 = new_Send((Optr)PSend8098, SMB_ifFalse_, 1, (Optr)PBlock8100);
    Array PThreadedCode8097 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8098, (Optr)&t_send_ifFalse_, (Optr)PSend8099, (Optr)PBlock8100, (Optr)&t_method_return);
    Method PMethod8095 = new_Method_with(PArray8096, empty_Array, empty_Array, PThreadedCode8097, 1, PSend8099);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod8095, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8106 = new_Send((Optr)PEGBlock_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode8105 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGBlock_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8106, (Optr)&t_method_return);
    Method PMethod8104 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8105, 1, PSend8106);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod8104, BlockClosure_Class);
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