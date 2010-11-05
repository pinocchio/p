#include <lib/class/Runtime/BlockClosure.h>


Optr layout_Runtime_BlockClosure_Class_class;
Optr slot_Runtime_BlockClosure_context;
Optr layout_Runtime_BlockClosure;


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7882 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7884 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // value. 
    Send PSend7888 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend7889 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7887 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend7888, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7889, (Optr)&t_block_return);
    Block PBlock7886 = new_Block_with(empty_Array, empty_Array, PThreadedCode7887, 2, PSend7888, PSend7889);
    // ifTrue:. 
    Send PSend7885 = new_Send((Optr)PSend7884, SMB_ifTrue_, 1, (Optr)PBlock7886);
    Array PThreadedCode7883 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7884, (Optr)&t_send_ifTrue_, (Optr)PSend7885, (Optr)PBlock7886, (Optr)&t_method_return);
    Method PMethod7881 = new_Method_with(PArray7882, empty_Array, empty_Array, PThreadedCode7883, 1, PSend7885);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod7881, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue_, MC_SMB_whileTrue_);
}


static void init_SMB_value_value_value_() {
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Array PArray7891 = new_Array_with(3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7893 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7892 = new_Array_with(1, (Optr)PAnnotation7893);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend7895 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7896 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7895);
    Array PThreadedCode7894 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_send3, (Optr)PSend7895, (Optr)&t_send1, (Optr)PSend7896, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7890 = new_ReflectionMethod_with(PArray7891, empty_Array, PArray7892, PThreadedCode7894, 1, PSend7896);
    
    MethodClosure MC_SMB_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7890, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_, MC_SMB_value_value_value_);
}


static void init_SMB_value_value_() {
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Array PArray7898 = new_Array_with(2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7900 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7899 = new_Array_with(1, (Optr)PAnnotation7900);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7902 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7903 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7902);
    Array PThreadedCode7901 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_send2, (Optr)PSend7902, (Optr)&t_send1, (Optr)PSend7903, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7897 = new_ReflectionMethod_with(PArray7898, empty_Array, PArray7899, PThreadedCode7901, 1, PSend7903);
    
    MethodClosure MC_SMB_value_value_ = new_MethodClosure((Method)PReflectionMethod7897, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_, MC_SMB_value_value_);
}


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray7905 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign7907 = new_Assign((Optr)slot_Runtime_BlockClosure_context, (Optr)VAR_aContext_0_0);
    Array PThreadedCode7906 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7907, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7904 = new_Method_with(PArray7905, empty_Array, empty_Array, PThreadedCode7906, 2, PAssign7907, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod7904, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_on_do_() {
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    Variable VAR_errorClass_0_0 = new_Variable_named(L"errorClass", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7909 = new_Array_with(2, (Optr)VAR_errorClass_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_previousExceptionHandler_0_2 = new_Variable_named(L"previousExceptionHandler", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray7910 = new_Array_with(2, (Optr)VAR_previousExceptionHandler_0_2, (Optr)VAR_result_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7913 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend7916 = new_Send((Optr)Exception_classReference, SMB_handler, 0);
    Assign PAssign7915 = new_Assign((Optr)VAR_previousExceptionHandler_0_2, (Optr)PSend7916);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_return_2_0 = new_Variable_named(L"return", 2);
    Array PArray7920 = new_Array_with(1, (Optr)VAR_return_2_0);
    Variable VAR_error_2_1 = new_Variable_named(L"error", 2);
    Array PArray7921 = new_Array_with(1, (Optr)VAR_error_2_1);
    Variable VAR_escape_3_0 = new_Variable_named(L"escape", 3);
    Array PArray7926 = new_Array_with(1, (Optr)VAR_escape_3_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend7928 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_escape_3_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7929 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7930 = new_Send((Optr)VAR_return_2_0, SMB_escape_, 1, (Optr)PSend7929);
    Array PThreadedCode7927 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_escape_3_0, (Optr)&t_send1, (Optr)PSend7928, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_return_2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7929, (Optr)&t_send1, (Optr)PSend7930, (Optr)&t_method_return);
    Block PBlock7925 = new_Block_with(PArray7926, empty_Array, PThreadedCode7927, 2, PSend7928, PSend7930);
    // on:. 
    Send PSend7924 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7925);
    Assign PAssign7923 = new_Assign((Optr)VAR_error_2_1, (Optr)PSend7924);
    // handler:. 
    Send PSend7931 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend7932 = new_Send((Optr)VAR_error_2_1, SMB_isKindOf_, 1, (Optr)VAR_errorClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7936 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_error_2_1);
    // escape:. 
    Send PSend7937 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7936);
    Array PThreadedCode7935 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7936, (Optr)&t_send1, (Optr)PSend7937, (Optr)&t_block_return);
    Block PBlock7934 = new_Block_with(empty_Array, empty_Array, PThreadedCode7935, 1, PSend7937);
    // ifTrue:. 
    Send PSend7933 = new_Send((Optr)PSend7932, SMB_ifTrue_, 1, (Optr)PBlock7934);
    // escape:. 
    Send PSend7938 = new_Send((Optr)VAR_previousExceptionHandler_0_2, SMB_escape_, 1, (Optr)VAR_error_2_1);
    Array PThreadedCode7922 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign7923, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7925, (Optr)&t_send1, (Optr)PSend7924, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7931, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_push_variable, (Optr)VAR_errorClass_0_0, (Optr)&t_send1, (Optr)PSend7932, (Optr)&t_send_ifTrue_, (Optr)PSend7933, (Optr)PBlock7934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7938, (Optr)&t_method_return);
    Block PBlock7919 = new_Block_with(PArray7920, PArray7921, PThreadedCode7922, 4, PAssign7923, PSend7931, PSend7933, PSend7938);
    // on:. 
    Send PSend7918 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7919);
    Assign PAssign7917 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend7918);
    // handler:. 
    Send PSend7939 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Array PThreadedCode7914 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign7915, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_send0, (Optr)PSend7916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7917, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7919, (Optr)&t_send1, (Optr)PSend7918, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7939, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock7912 = new_Block_with(PArray7913, empty_Array, PThreadedCode7914, 4, PAssign7915, PAssign7917, PSend7939, VAR_result_0_3);
    // on:. 
    Send PSend7940 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7912);
    Array PThreadedCode7911 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7912, (Optr)&t_send1, (Optr)PSend7940, (Optr)&t_method_return);
    Method PMethod7908 = new_Method_with(PArray7909, PArray7910, empty_Array, PThreadedCode7911, 1, PSend7940);
    
    MethodClosure MC_SMB_on_do_ = new_MethodClosure((Method)PMethod7908, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_on_do_, MC_SMB_on_do_);
}


static void init_SMB_value_value_value_value_() {
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Variable VAR_yetAnotherArg_0_3 = new_Variable_named(L"yetAnotherArg", 0);
    Array PArray7942 = new_Array_with(4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7944 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7943 = new_Array_with(1, (Optr)PAnnotation7944);
    Symbol SMB_with_with_with_with_ = new_Symbol(L"with:with:with:with:");
    // with:with:with:with:. 
    Send PSend7946 = new_Send((Optr)Array_classReference, SMB_with_with_with_with_, 4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7947 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7946);
    Array PThreadedCode7945 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_push_variable, (Optr)VAR_yetAnotherArg_0_3, (Optr)&t_send4, (Optr)PSend7946, (Optr)&t_send1, (Optr)PSend7947, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7941 = new_ReflectionMethod_with(PArray7942, empty_Array, PArray7943, PThreadedCode7945, 1, PSend7947);
    
    MethodClosure MC_SMB_value_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7941, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_value_, MC_SMB_value_value_value_value_);
}


static void init_SMB_whileTrue() {
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7950 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // whileTrue. 
    Send PSend7954 = new_Send((Optr)self, SMB_whileTrue, 0);
    Array PThreadedCode7953 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7954, (Optr)&t_block_return);
    Block PBlock7952 = new_Block_with(empty_Array, empty_Array, PThreadedCode7953, 1, PSend7954);
    // ifTrue:. 
    Send PSend7951 = new_Send((Optr)PSend7950, SMB_ifTrue_, 1, (Optr)PBlock7952);
    Array PThreadedCode7949 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7950, (Optr)&t_send_ifTrue_, (Optr)PSend7951, (Optr)PBlock7952, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7948 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7949, 2, PSend7951, self);
    
    MethodClosure MC_SMB_whileTrue = new_MethodClosure((Method)PMethod7948, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue, MC_SMB_whileTrue);
}


static void init_SMB_parallelWith_() {
    Symbol SMB_parallelWith_ = new_Symbol(L"parallelWith:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7956 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7958 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)self, (Optr)VAR_aBlock_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend7959 = new_Send((Optr)PParallelDebugger_classReference, SMB_interpret_, 1, (Optr)PSend7958);
    Array PThreadedCode7957 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PParallelDebugger_classReference, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend7958, (Optr)&t_send1, (Optr)PSend7959, (Optr)&t_method_return);
    Method PMethod7955 = new_Method_with(PArray7956, empty_Array, empty_Array, PThreadedCode7957, 1, PSend7959);
    
    MethodClosure MC_SMB_parallelWith_ = new_MethodClosure((Method)PMethod7955, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_parallelWith_, MC_SMB_parallelWith_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Array PArray7961 = new_Array_with(1, (Optr)VAR_closure_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7965 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7964 = new_Send((Optr)PSend7965, SMB_new, 0);
    Assign PAssign7963 = new_Assign((Optr)VAR_closure_0_0, (Optr)PSend7964);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend7966 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend7967 = new_Send((Optr)VAR_closure_0_0, SMB_code_, 1, (Optr)PSend7966);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend7968 = new_Send((Optr)self, SMB_context, 0);
    // asAliased. 
    Send PSend7969 = new_Send((Optr)PSend7968, SMB_asAliased, 0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend7970 = new_Send((Optr)VAR_closure_0_0, SMB_context_, 1, (Optr)PSend7969);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7972 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7974 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_0);
    // context. 
    Send PSend7975 = new_Send((Optr)self, SMB_context, 0);
    // context:. 
    Send PSend7976 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)PSend7975);
    Array PThreadedCode7973 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend7974, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7975, (Optr)&t_send1, (Optr)PSend7976, (Optr)&t_method_return);
    Block PBlock7971 = new_Block_with(PArray7972, empty_Array, PThreadedCode7973, 2, PSend7974, PSend7976);
    // new. 
    Send PSend7977 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend7978 = new_Send((Optr)PBlock7971, SMB_value_, 1, (Optr)PSend7977);
    Array PThreadedCode7962 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign7963, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7965, (Optr)&t_send0, (Optr)PSend7964, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7966, (Optr)&t_send1, (Optr)PSend7967, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7968, (Optr)&t_send0, (Optr)PSend7969, (Optr)&t_send1, (Optr)PSend7970, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7971, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend7977, (Optr)&t_send1, (Optr)PSend7978, (Optr)&t_method_return);
    Method PMethod7960 = new_Method_with(empty_Array, PArray7961, empty_Array, PThreadedCode7962, 4, PAssign7963, PSend7967, PSend7970, PSend7978);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod7960, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_for_ = new_Symbol(L"for:");
    // for:. 
    Send PSend7981 = new_Send((Optr)PThread_classReference, SMB_for_, 1, (Optr)self);
    Array PThreadedCode7980 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7981, (Optr)&t_method_return);
    Method PMethod7979 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7980, 1, PSend7981);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod7979, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7984 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7983 = new_Array_with(1, (Optr)PAnnotation7984);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend7986 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7987 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7986);
    Array PThreadedCode7985 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7986, (Optr)&t_send1, (Optr)PSend7987, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7982 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray7983, PThreadedCode7985, 1, PSend7987);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PReflectionMethod7982, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray7989 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7992 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7994 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7995 = new_Send((Optr)VAR_aClosure_0_0, SMB_species, 0);
    // =. 
    Send PSend7996 = new_Send((Optr)PSend7994, SMB__equals_, 1, (Optr)PSend7995);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8000 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7999 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8000, (Optr)&t_block_return);
    Block PBlock7998 = new_Block_with(empty_Array, empty_Array, PThreadedCode7999, 1, PSend8000);
    // ifFalse:. 
    Send PSend7997 = new_Send((Optr)PSend7996, SMB_ifFalse_, 1, (Optr)PBlock7998);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend8001 = new_Send((Optr)self, SMB_code, 0);
    // code. 
    Send PSend8002 = new_Send((Optr)VAR_aClosure_0_0, SMB_code, 0);
    // =. 
    Send PSend8003 = new_Send((Optr)PSend8001, SMB__equals_, 1, (Optr)PSend8002);
    Array PThreadedCode7993 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7994, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend7995, (Optr)&t_send1, (Optr)PSend7996, (Optr)&t_send_ifFalse_, (Optr)PSend7997, (Optr)PBlock7998, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8001, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend8002, (Optr)&t_send1, (Optr)PSend8003, (Optr)&t_method_return);
    Block PBlock7991 = new_Block_with(PArray7992, empty_Array, PThreadedCode7993, 2, PSend7997, PSend8003);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8004 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7991);
    Array PThreadedCode7990 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7991, (Optr)&t_send1, (Optr)PSend8004, (Optr)&t_method_return);
    Method PMethod7988 = new_Method_with(PArray7989, empty_Array, empty_Array, PThreadedCode7990, 1, PSend8004);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7988, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Array PArray8006 = new_Array_with(1, (Optr)VAR_anArg_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8008 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8007 = new_Array_with(1, (Optr)PAnnotation8008);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend8010 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_anArg_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8011 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8010);
    Array PThreadedCode8009 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_send1, (Optr)PSend8010, (Optr)&t_send1, (Optr)PSend8011, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8005 = new_ReflectionMethod_with(PArray8006, empty_Array, PArray8007, PThreadedCode8009, 1, PSend8011);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PReflectionMethod8005, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8013 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlockClosure_ = new_Symbol(L"visitBlockClosure:");
    // visitBlockClosure:. 
    Send PSend8015 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlockClosure_, 1, (Optr)self);
    Array PThreadedCode8014 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8015, (Optr)&t_method_return);
    Method PMethod8012 = new_Method_with(PArray8013, empty_Array, empty_Array, PThreadedCode8014, 1, PSend8015);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8012, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_BlockClosure = new_Symbol(L"Runtime.BlockClosure");
    Annotation PAnnotation8018 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_numArgs, (Optr)SMB_Runtime_minus_BlockClosure);
    Array PArray8017 = new_Array_with(1, (Optr)PAnnotation8018);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend8020 = new_Send((Optr)slot_Runtime_Closure_code, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8021 = new_Send((Optr)PSend8020, SMB_size, 0);
    Array PThreadedCode8019 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8020, (Optr)&t_send0, (Optr)PSend8021, (Optr)&t_method_return);
    NativeMethod PNativeMethod8016 = new_NativeMethod_with(empty_Array, empty_Array, PArray8017, PThreadedCode8019, 1, PSend8021);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PNativeMethod8016, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8023 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Annotation PAnnotation8025 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValueWithArguments_message_);
    Array PArray8024 = new_Array_with(1, (Optr)PAnnotation8025);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8027 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8026 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8027, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8022 = new_ReflectionMethod_with(PArray8023, empty_Array, PArray8024, PThreadedCode8026, 2, PSend8027, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PReflectionMethod8022, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8029 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8030 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8033 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8036 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8035 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8036);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8037 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8041 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8042 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8041);
    Array PThreadedCode8040 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8041, (Optr)&t_send1, (Optr)PSend8042, (Optr)&t_block_return);
    Block PBlock8039 = new_Block_with(empty_Array, empty_Array, PThreadedCode8040, 1, PSend8042);
    // ifTrue:. 
    Send PSend8038 = new_Send((Optr)PSend8037, SMB_ifTrue_, 1, (Optr)PBlock8039);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8043 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8044 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8043);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8048 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend8049 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8048);
    Array PThreadedCode8047 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8048, (Optr)&t_send1, (Optr)PSend8049, (Optr)&t_block_return);
    Block PBlock8046 = new_Block_with(empty_Array, empty_Array, PThreadedCode8047, 1, PSend8049);
    // ifTrue:. 
    Send PSend8045 = new_Send((Optr)PSend8044, SMB_ifTrue_, 1, (Optr)PBlock8046);
    // size. 
    Send PSend8050 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8051 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8050);
    // size. 
    Send PSend8055 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8056 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8055);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8057 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8056);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8058 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8057);
    // valueWithArguments:. 
    Send PSend8059 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8058);
    // escape:. 
    Send PSend8060 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8059);
    Array PThreadedCode8054 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8055, (Optr)&t_send1, (Optr)PSend8056, (Optr)&t_send1, (Optr)PSend8057, (Optr)&t_send1, (Optr)PSend8058, (Optr)&t_send1, (Optr)PSend8059, (Optr)&t_send1, (Optr)PSend8060, (Optr)&t_block_return);
    Block PBlock8053 = new_Block_with(empty_Array, empty_Array, PThreadedCode8054, 1, PSend8060);
    // ifTrue:. 
    Send PSend8052 = new_Send((Optr)PSend8051, SMB_ifTrue_, 1, (Optr)PBlock8053);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8061 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8062 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8061);
    Array PThreadedCode8034 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8035, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8036, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8037, (Optr)&t_send_ifTrue_, (Optr)PSend8038, (Optr)PBlock8039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8043, (Optr)&t_send1, (Optr)PSend8044, (Optr)&t_send_ifTrue_, (Optr)PSend8045, (Optr)PBlock8046, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8050, (Optr)&t_send1, (Optr)PSend8051, (Optr)&t_send_ifTrue_, (Optr)PSend8052, (Optr)PBlock8053, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8061, (Optr)&t_send1, (Optr)PSend8062, (Optr)&t_method_return);
    Block PBlock8032 = new_Block_with(PArray8033, empty_Array, PThreadedCode8034, 5, PAssign8035, PSend8038, PSend8045, PSend8052, PSend8062);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8063 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8032);
    Array PThreadedCode8031 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8032, (Optr)&t_send1, (Optr)PSend8063, (Optr)&t_method_return);
    Method PMethod8028 = new_Method_with(PArray8029, PArray8030, empty_Array, PThreadedCode8031, 1, PSend8063);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8028, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_whileFalse() {
    Symbol SMB_whileFalse = new_Symbol(L"whileFalse");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8066 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // whileFalse. 
    Send PSend8070 = new_Send((Optr)self, SMB_whileFalse, 0);
    Array PThreadedCode8069 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8070, (Optr)&t_block_return);
    Block PBlock8068 = new_Block_with(empty_Array, empty_Array, PThreadedCode8069, 1, PSend8070);
    // ifFalse:. 
    Send PSend8067 = new_Send((Optr)PSend8066, SMB_ifFalse_, 1, (Optr)PBlock8068);
    Array PThreadedCode8065 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8066, (Optr)&t_send_ifFalse_, (Optr)PSend8067, (Optr)PBlock8068, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8064 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8065, 2, PSend8067, self);
    
    MethodClosure MC_SMB_whileFalse = new_MethodClosure((Method)PMethod8064, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse, MC_SMB_whileFalse);
}


static void init_SMB_ensure_() {
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8072 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8075 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray8078 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8080 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend8081 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8082 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8081);
    Array PThreadedCode8079 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8080, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend8081, (Optr)&t_send1, (Optr)PSend8082, (Optr)&t_method_return);
    Block PBlock8077 = new_Block_with(PArray8078, empty_Array, PThreadedCode8079, 2, PSend8080, PSend8082);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend8083 = new_Send((Optr)self, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock8077);
    // value. 
    Send PSend8084 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode8076 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock8077, (Optr)&t_send2, (Optr)PSend8083, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8084, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8074 = new_Block_with(PArray8075, empty_Array, PThreadedCode8076, 3, PSend8083, PSend8084, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8085 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8074);
    Array PThreadedCode8073 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8074, (Optr)&t_send1, (Optr)PSend8085, (Optr)&t_method_return);
    Method PMethod8071 = new_Method_with(PArray8072, empty_Array, empty_Array, PThreadedCode8073, 1, PSend8085);
    
    MethodClosure MC_SMB_ensure_ = new_MethodClosure((Method)PMethod8071, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_ensure_, MC_SMB_ensure_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8087 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockClosure_context, (Optr)&t_method_return);
    Method PMethod8086 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8087, 1, slot_Runtime_BlockClosure_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8086, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context, MC_SMB_context);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8089 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8091 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // value. 
    Send PSend8095 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend8096 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8094 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8095, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8096, (Optr)&t_block_return);
    Block PBlock8093 = new_Block_with(empty_Array, empty_Array, PThreadedCode8094, 2, PSend8095, PSend8096);
    // ifFalse:. 
    Send PSend8092 = new_Send((Optr)PSend8091, SMB_ifFalse_, 1, (Optr)PBlock8093);
    Array PThreadedCode8090 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8091, (Optr)&t_send_ifFalse_, (Optr)PSend8092, (Optr)PBlock8093, (Optr)&t_method_return);
    Method PMethod8088 = new_Method_with(PArray8089, empty_Array, empty_Array, PThreadedCode8090, 1, PSend8092);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod8088, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8099 = new_Send((Optr)PEGBlock_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode8098 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGBlock_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8099, (Optr)&t_method_return);
    Method PMethod8097 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8098, 1, PSend8099);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod8097, BlockClosure_Class);
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