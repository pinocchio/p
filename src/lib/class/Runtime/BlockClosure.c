#include <lib/class/Runtime/BlockClosure.h>


Optr layout_Runtime_BlockClosure_Class_class;
Optr slot_Runtime_BlockClosure_context;
Optr layout_Runtime_BlockClosure;


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7878 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7880 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // value. 
    Send PSend7884 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend7885 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7883 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend7884, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7885, (Optr)&t_block_return);
    Block PBlock7882 = new_Block_with(empty_Array, empty_Array, PThreadedCode7883, 2, PSend7884, PSend7885);
    // ifTrue:. 
    Send PSend7881 = new_Send((Optr)PSend7880, SMB_ifTrue_, 1, (Optr)PBlock7882);
    Array PThreadedCode7879 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7880, (Optr)&t_send_ifTrue_, (Optr)PSend7881, (Optr)PBlock7882, (Optr)&t_method_return);
    Method PMethod7877 = new_Method_with(PArray7878, empty_Array, empty_Array, PThreadedCode7879, 1, PSend7881);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod7877, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue_, MC_SMB_whileTrue_);
}


static void init_SMB_value_value_value_() {
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Array PArray7887 = new_Array_with(3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7889 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7888 = new_Array_with(1, (Optr)PAnnotation7889);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend7891 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7892 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7891);
    Array PThreadedCode7890 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_send3, (Optr)PSend7891, (Optr)&t_send1, (Optr)PSend7892, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7886 = new_ReflectionMethod_with(PArray7887, empty_Array, PArray7888, PThreadedCode7890, 1, PSend7892);
    
    MethodClosure MC_SMB_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7886, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_, MC_SMB_value_value_value_);
}


static void init_SMB_value_value_() {
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Array PArray7894 = new_Array_with(2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7896 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7895 = new_Array_with(1, (Optr)PAnnotation7896);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7898 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7899 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7898);
    Array PThreadedCode7897 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_send2, (Optr)PSend7898, (Optr)&t_send1, (Optr)PSend7899, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7893 = new_ReflectionMethod_with(PArray7894, empty_Array, PArray7895, PThreadedCode7897, 1, PSend7899);
    
    MethodClosure MC_SMB_value_value_ = new_MethodClosure((Method)PReflectionMethod7893, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_, MC_SMB_value_value_);
}


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray7901 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign7903 = new_Assign((Optr)slot_Runtime_BlockClosure_context, (Optr)VAR_aContext_0_0);
    Array PThreadedCode7902 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7903, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7900 = new_Method_with(PArray7901, empty_Array, empty_Array, PThreadedCode7902, 2, PAssign7903, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod7900, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_on_do_() {
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    Variable VAR_errorClass_0_0 = new_Variable_named(L"errorClass", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7905 = new_Array_with(2, (Optr)VAR_errorClass_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_previousExceptionHandler_0_2 = new_Variable_named(L"previousExceptionHandler", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray7906 = new_Array_with(2, (Optr)VAR_previousExceptionHandler_0_2, (Optr)VAR_result_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7909 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend7912 = new_Send((Optr)Exception_classReference, SMB_handler, 0);
    Assign PAssign7911 = new_Assign((Optr)VAR_previousExceptionHandler_0_2, (Optr)PSend7912);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_return_2_0 = new_Variable_named(L"return", 2);
    Array PArray7916 = new_Array_with(1, (Optr)VAR_return_2_0);
    Variable VAR_error_2_1 = new_Variable_named(L"error", 2);
    Array PArray7917 = new_Array_with(1, (Optr)VAR_error_2_1);
    Variable VAR_escape_3_0 = new_Variable_named(L"escape", 3);
    Array PArray7922 = new_Array_with(1, (Optr)VAR_escape_3_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend7924 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_escape_3_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7925 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7926 = new_Send((Optr)VAR_return_2_0, SMB_escape_, 1, (Optr)PSend7925);
    Array PThreadedCode7923 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_escape_3_0, (Optr)&t_send1, (Optr)PSend7924, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_return_2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7925, (Optr)&t_send1, (Optr)PSend7926, (Optr)&t_method_return);
    Block PBlock7921 = new_Block_with(PArray7922, empty_Array, PThreadedCode7923, 2, PSend7924, PSend7926);
    // on:. 
    Send PSend7920 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7921);
    Assign PAssign7919 = new_Assign((Optr)VAR_error_2_1, (Optr)PSend7920);
    // handler:. 
    Send PSend7927 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend7928 = new_Send((Optr)VAR_error_2_1, SMB_isKindOf_, 1, (Optr)VAR_errorClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7932 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_error_2_1);
    // escape:. 
    Send PSend7933 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7932);
    Array PThreadedCode7931 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7932, (Optr)&t_send1, (Optr)PSend7933, (Optr)&t_block_return);
    Block PBlock7930 = new_Block_with(empty_Array, empty_Array, PThreadedCode7931, 1, PSend7933);
    // ifTrue:. 
    Send PSend7929 = new_Send((Optr)PSend7928, SMB_ifTrue_, 1, (Optr)PBlock7930);
    // escape:. 
    Send PSend7934 = new_Send((Optr)VAR_previousExceptionHandler_0_2, SMB_escape_, 1, (Optr)VAR_error_2_1);
    Array PThreadedCode7918 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign7919, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7921, (Optr)&t_send1, (Optr)PSend7920, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7927, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_push_variable, (Optr)VAR_errorClass_0_0, (Optr)&t_send1, (Optr)PSend7928, (Optr)&t_send_ifTrue_, (Optr)PSend7929, (Optr)PBlock7930, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7934, (Optr)&t_method_return);
    Block PBlock7915 = new_Block_with(PArray7916, PArray7917, PThreadedCode7918, 4, PAssign7919, PSend7927, PSend7929, PSend7934);
    // on:. 
    Send PSend7914 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7915);
    Assign PAssign7913 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend7914);
    // handler:. 
    Send PSend7935 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Array PThreadedCode7910 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign7911, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_send0, (Optr)PSend7912, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7913, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7915, (Optr)&t_send1, (Optr)PSend7914, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7935, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock7908 = new_Block_with(PArray7909, empty_Array, PThreadedCode7910, 4, PAssign7911, PAssign7913, PSend7935, VAR_result_0_3);
    // on:. 
    Send PSend7936 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7908);
    Array PThreadedCode7907 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7908, (Optr)&t_send1, (Optr)PSend7936, (Optr)&t_method_return);
    Method PMethod7904 = new_Method_with(PArray7905, PArray7906, empty_Array, PThreadedCode7907, 1, PSend7936);
    
    MethodClosure MC_SMB_on_do_ = new_MethodClosure((Method)PMethod7904, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_on_do_, MC_SMB_on_do_);
}


static void init_SMB_value_value_value_value_() {
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Variable VAR_yetAnotherArg_0_3 = new_Variable_named(L"yetAnotherArg", 0);
    Array PArray7938 = new_Array_with(4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7940 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7939 = new_Array_with(1, (Optr)PAnnotation7940);
    Symbol SMB_with_with_with_with_ = new_Symbol(L"with:with:with:with:");
    // with:with:with:with:. 
    Send PSend7942 = new_Send((Optr)Array_classReference, SMB_with_with_with_with_, 4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7943 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7942);
    Array PThreadedCode7941 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_push_variable, (Optr)VAR_yetAnotherArg_0_3, (Optr)&t_send4, (Optr)PSend7942, (Optr)&t_send1, (Optr)PSend7943, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7937 = new_ReflectionMethod_with(PArray7938, empty_Array, PArray7939, PThreadedCode7941, 1, PSend7943);
    
    MethodClosure MC_SMB_value_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7937, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_value_, MC_SMB_value_value_value_value_);
}


static void init_SMB_whileTrue() {
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7946 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // whileTrue. 
    Send PSend7950 = new_Send((Optr)self, SMB_whileTrue, 0);
    Array PThreadedCode7949 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7950, (Optr)&t_block_return);
    Block PBlock7948 = new_Block_with(empty_Array, empty_Array, PThreadedCode7949, 1, PSend7950);
    // ifTrue:. 
    Send PSend7947 = new_Send((Optr)PSend7946, SMB_ifTrue_, 1, (Optr)PBlock7948);
    Array PThreadedCode7945 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7946, (Optr)&t_send_ifTrue_, (Optr)PSend7947, (Optr)PBlock7948, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7944 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7945, 2, PSend7947, self);
    
    MethodClosure MC_SMB_whileTrue = new_MethodClosure((Method)PMethod7944, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue, MC_SMB_whileTrue);
}


static void init_SMB_parallelWith_() {
    Symbol SMB_parallelWith_ = new_Symbol(L"parallelWith:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7952 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7954 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)self, (Optr)VAR_aBlock_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend7955 = new_Send((Optr)PParallelDebugger_classReference, SMB_interpret_, 1, (Optr)PSend7954);
    Array PThreadedCode7953 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PParallelDebugger_classReference, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend7954, (Optr)&t_send1, (Optr)PSend7955, (Optr)&t_method_return);
    Method PMethod7951 = new_Method_with(PArray7952, empty_Array, empty_Array, PThreadedCode7953, 1, PSend7955);
    
    MethodClosure MC_SMB_parallelWith_ = new_MethodClosure((Method)PMethod7951, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_parallelWith_, MC_SMB_parallelWith_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Array PArray7957 = new_Array_with(1, (Optr)VAR_closure_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7961 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7960 = new_Send((Optr)PSend7961, SMB_new, 0);
    Assign PAssign7959 = new_Assign((Optr)VAR_closure_0_0, (Optr)PSend7960);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend7962 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend7963 = new_Send((Optr)VAR_closure_0_0, SMB_code_, 1, (Optr)PSend7962);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend7964 = new_Send((Optr)self, SMB_context, 0);
    // asAliased. 
    Send PSend7965 = new_Send((Optr)PSend7964, SMB_asAliased, 0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend7966 = new_Send((Optr)VAR_closure_0_0, SMB_context_, 1, (Optr)PSend7965);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7968 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7970 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_0);
    // context. 
    Send PSend7971 = new_Send((Optr)self, SMB_context, 0);
    // context:. 
    Send PSend7972 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)PSend7971);
    Array PThreadedCode7969 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend7970, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7971, (Optr)&t_send1, (Optr)PSend7972, (Optr)&t_method_return);
    Block PBlock7967 = new_Block_with(PArray7968, empty_Array, PThreadedCode7969, 2, PSend7970, PSend7972);
    // new. 
    Send PSend7973 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend7974 = new_Send((Optr)PBlock7967, SMB_value_, 1, (Optr)PSend7973);
    Array PThreadedCode7958 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign7959, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7961, (Optr)&t_send0, (Optr)PSend7960, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7962, (Optr)&t_send1, (Optr)PSend7963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7964, (Optr)&t_send0, (Optr)PSend7965, (Optr)&t_send1, (Optr)PSend7966, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7967, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend7973, (Optr)&t_send1, (Optr)PSend7974, (Optr)&t_method_return);
    Method PMethod7956 = new_Method_with(empty_Array, PArray7957, empty_Array, PThreadedCode7958, 4, PAssign7959, PSend7963, PSend7966, PSend7974);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod7956, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_for_ = new_Symbol(L"for:");
    // for:. 
    Send PSend7977 = new_Send((Optr)PThread_classReference, SMB_for_, 1, (Optr)self);
    Array PThreadedCode7976 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7977, (Optr)&t_method_return);
    Method PMethod7975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7976, 1, PSend7977);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod7975, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7980 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7979 = new_Array_with(1, (Optr)PAnnotation7980);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend7982 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7983 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7982);
    Array PThreadedCode7981 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7982, (Optr)&t_send1, (Optr)PSend7983, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7978 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray7979, PThreadedCode7981, 1, PSend7983);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PReflectionMethod7978, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray7985 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7988 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7990 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7991 = new_Send((Optr)VAR_aClosure_0_0, SMB_species, 0);
    // =. 
    Send PSend7992 = new_Send((Optr)PSend7990, SMB__equals_, 1, (Optr)PSend7991);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7996 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7995 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7996, (Optr)&t_block_return);
    Block PBlock7994 = new_Block_with(empty_Array, empty_Array, PThreadedCode7995, 1, PSend7996);
    // ifFalse:. 
    Send PSend7993 = new_Send((Optr)PSend7992, SMB_ifFalse_, 1, (Optr)PBlock7994);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend7997 = new_Send((Optr)self, SMB_code, 0);
    // code. 
    Send PSend7998 = new_Send((Optr)VAR_aClosure_0_0, SMB_code, 0);
    // =. 
    Send PSend7999 = new_Send((Optr)PSend7997, SMB__equals_, 1, (Optr)PSend7998);
    Array PThreadedCode7989 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7990, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend7991, (Optr)&t_send1, (Optr)PSend7992, (Optr)&t_send_ifFalse_, (Optr)PSend7993, (Optr)PBlock7994, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7997, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend7998, (Optr)&t_send1, (Optr)PSend7999, (Optr)&t_method_return);
    Block PBlock7987 = new_Block_with(PArray7988, empty_Array, PThreadedCode7989, 2, PSend7993, PSend7999);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8000 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7987);
    Array PThreadedCode7986 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7987, (Optr)&t_send1, (Optr)PSend8000, (Optr)&t_method_return);
    Method PMethod7984 = new_Method_with(PArray7985, empty_Array, empty_Array, PThreadedCode7986, 1, PSend8000);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7984, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Array PArray8002 = new_Array_with(1, (Optr)VAR_anArg_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation8004 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray8003 = new_Array_with(1, (Optr)PAnnotation8004);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend8006 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_anArg_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8007 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8006);
    Array PThreadedCode8005 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_send1, (Optr)PSend8006, (Optr)&t_send1, (Optr)PSend8007, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod8001 = new_ReflectionMethod_with(PArray8002, empty_Array, PArray8003, PThreadedCode8005, 1, PSend8007);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PReflectionMethod8001, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8009 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlockClosure_ = new_Symbol(L"visitBlockClosure:");
    // visitBlockClosure:. 
    Send PSend8011 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlockClosure_, 1, (Optr)self);
    Array PThreadedCode8010 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8011, (Optr)&t_method_return);
    Method PMethod8008 = new_Method_with(PArray8009, empty_Array, empty_Array, PThreadedCode8010, 1, PSend8011);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8008, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_BlockClosure = new_Symbol(L"Runtime.BlockClosure");
    Annotation PAnnotation8014 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_numArgs, (Optr)SMB_Runtime_minus_BlockClosure);
    Array PArray8013 = new_Array_with(1, (Optr)PAnnotation8014);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend8016 = new_Send((Optr)slot_Runtime_Closure_code, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8017 = new_Send((Optr)PSend8016, SMB_size, 0);
    Array PThreadedCode8015 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8016, (Optr)&t_send0, (Optr)PSend8017, (Optr)&t_method_return);
    NativeMethod PNativeMethod8012 = new_NativeMethod_with(empty_Array, empty_Array, PArray8013, PThreadedCode8015, 1, PSend8017);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PNativeMethod8012, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8019 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Annotation PAnnotation8021 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValueWithArguments_message_);
    Array PArray8020 = new_Array_with(1, (Optr)PAnnotation8021);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8023 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8022 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8023, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod8018 = new_ReflectionMethod_with(PArray8019, empty_Array, PArray8020, PThreadedCode8022, 2, PSend8023, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PReflectionMethod8018, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8025 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8026 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8029 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8032 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8031 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8032);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8033 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8037 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8038 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8037);
    Array PThreadedCode8036 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8037, (Optr)&t_send1, (Optr)PSend8038, (Optr)&t_block_return);
    Block PBlock8035 = new_Block_with(empty_Array, empty_Array, PThreadedCode8036, 1, PSend8038);
    // ifTrue:. 
    Send PSend8034 = new_Send((Optr)PSend8033, SMB_ifTrue_, 1, (Optr)PBlock8035);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8039 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8040 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8039);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8044 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend8045 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8044);
    Array PThreadedCode8043 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8044, (Optr)&t_send1, (Optr)PSend8045, (Optr)&t_block_return);
    Block PBlock8042 = new_Block_with(empty_Array, empty_Array, PThreadedCode8043, 1, PSend8045);
    // ifTrue:. 
    Send PSend8041 = new_Send((Optr)PSend8040, SMB_ifTrue_, 1, (Optr)PBlock8042);
    // size. 
    Send PSend8046 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8047 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8046);
    // size. 
    Send PSend8051 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8052 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8051);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8053 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8052);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8054 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8053);
    // valueWithArguments:. 
    Send PSend8055 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8054);
    // escape:. 
    Send PSend8056 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8055);
    Array PThreadedCode8050 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8051, (Optr)&t_send1, (Optr)PSend8052, (Optr)&t_send1, (Optr)PSend8053, (Optr)&t_send1, (Optr)PSend8054, (Optr)&t_send1, (Optr)PSend8055, (Optr)&t_send1, (Optr)PSend8056, (Optr)&t_block_return);
    Block PBlock8049 = new_Block_with(empty_Array, empty_Array, PThreadedCode8050, 1, PSend8056);
    // ifTrue:. 
    Send PSend8048 = new_Send((Optr)PSend8047, SMB_ifTrue_, 1, (Optr)PBlock8049);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8057 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8058 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8057);
    Array PThreadedCode8030 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8031, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8032, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8033, (Optr)&t_send_ifTrue_, (Optr)PSend8034, (Optr)PBlock8035, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8039, (Optr)&t_send1, (Optr)PSend8040, (Optr)&t_send_ifTrue_, (Optr)PSend8041, (Optr)PBlock8042, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8046, (Optr)&t_send1, (Optr)PSend8047, (Optr)&t_send_ifTrue_, (Optr)PSend8048, (Optr)PBlock8049, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8057, (Optr)&t_send1, (Optr)PSend8058, (Optr)&t_method_return);
    Block PBlock8028 = new_Block_with(PArray8029, empty_Array, PThreadedCode8030, 5, PAssign8031, PSend8034, PSend8041, PSend8048, PSend8058);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8059 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8028);
    Array PThreadedCode8027 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8028, (Optr)&t_send1, (Optr)PSend8059, (Optr)&t_method_return);
    Method PMethod8024 = new_Method_with(PArray8025, PArray8026, empty_Array, PThreadedCode8027, 1, PSend8059);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8024, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_whileFalse() {
    Symbol SMB_whileFalse = new_Symbol(L"whileFalse");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8062 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // whileFalse. 
    Send PSend8066 = new_Send((Optr)self, SMB_whileFalse, 0);
    Array PThreadedCode8065 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8066, (Optr)&t_block_return);
    Block PBlock8064 = new_Block_with(empty_Array, empty_Array, PThreadedCode8065, 1, PSend8066);
    // ifFalse:. 
    Send PSend8063 = new_Send((Optr)PSend8062, SMB_ifFalse_, 1, (Optr)PBlock8064);
    Array PThreadedCode8061 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8062, (Optr)&t_send_ifFalse_, (Optr)PSend8063, (Optr)PBlock8064, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8060 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8061, 2, PSend8063, self);
    
    MethodClosure MC_SMB_whileFalse = new_MethodClosure((Method)PMethod8060, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse, MC_SMB_whileFalse);
}


static void init_SMB_ensure_() {
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8068 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8071 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray8074 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8076 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend8077 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8078 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8077);
    Array PThreadedCode8075 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8076, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend8077, (Optr)&t_send1, (Optr)PSend8078, (Optr)&t_method_return);
    Block PBlock8073 = new_Block_with(PArray8074, empty_Array, PThreadedCode8075, 2, PSend8076, PSend8078);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend8079 = new_Send((Optr)self, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock8073);
    // value. 
    Send PSend8080 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode8072 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock8073, (Optr)&t_send2, (Optr)PSend8079, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8080, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8070 = new_Block_with(PArray8071, empty_Array, PThreadedCode8072, 3, PSend8079, PSend8080, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8081 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8070);
    Array PThreadedCode8069 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8070, (Optr)&t_send1, (Optr)PSend8081, (Optr)&t_method_return);
    Method PMethod8067 = new_Method_with(PArray8068, empty_Array, empty_Array, PThreadedCode8069, 1, PSend8081);
    
    MethodClosure MC_SMB_ensure_ = new_MethodClosure((Method)PMethod8067, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_ensure_, MC_SMB_ensure_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8083 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockClosure_context, (Optr)&t_method_return);
    Method PMethod8082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8083, 1, slot_Runtime_BlockClosure_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8082, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context, MC_SMB_context);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8085 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8087 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // value. 
    Send PSend8091 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend8092 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8090 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8091, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8092, (Optr)&t_block_return);
    Block PBlock8089 = new_Block_with(empty_Array, empty_Array, PThreadedCode8090, 2, PSend8091, PSend8092);
    // ifFalse:. 
    Send PSend8088 = new_Send((Optr)PSend8087, SMB_ifFalse_, 1, (Optr)PBlock8089);
    Array PThreadedCode8086 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8087, (Optr)&t_send_ifFalse_, (Optr)PSend8088, (Optr)PBlock8089, (Optr)&t_method_return);
    Method PMethod8084 = new_Method_with(PArray8085, empty_Array, empty_Array, PThreadedCode8086, 1, PSend8088);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod8084, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
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