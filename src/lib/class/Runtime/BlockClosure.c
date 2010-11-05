#include <lib/class/Runtime/BlockClosure.h>


Optr layout_Runtime_BlockClosure_Class_class;
Optr slot_Runtime_BlockClosure_context;
Optr layout_Runtime_BlockClosure;


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7844 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7846 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // value. 
    Send PSend7850 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend7851 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7849 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend7850, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7851, (Optr)&t_block_return);
    Block PBlock7848 = new_Block_with(empty_Array, empty_Array, PThreadedCode7849, 2, PSend7850, PSend7851);
    // ifTrue:. 
    Send PSend7847 = new_Send((Optr)PSend7846, SMB_ifTrue_, 1, (Optr)PBlock7848);
    Array PThreadedCode7845 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7846, (Optr)&t_send_ifTrue_, (Optr)PSend7847, (Optr)PBlock7848, (Optr)&t_method_return);
    Method PMethod7843 = new_Method_with(PArray7844, empty_Array, empty_Array, PThreadedCode7845, 1, PSend7847);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod7843, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue_, MC_SMB_whileTrue_);
}


static void init_SMB_value_value_value_() {
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Array PArray7853 = new_Array_with(3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7855 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7854 = new_Array_with(1, (Optr)PAnnotation7855);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend7857 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7858 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7857);
    Array PThreadedCode7856 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_send3, (Optr)PSend7857, (Optr)&t_send1, (Optr)PSend7858, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7852 = new_ReflectionMethod_with(PArray7853, empty_Array, PArray7854, PThreadedCode7856, 1, PSend7858);
    
    MethodClosure MC_SMB_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7852, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_, MC_SMB_value_value_value_);
}


static void init_SMB_value_value_() {
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Array PArray7860 = new_Array_with(2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7862 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7861 = new_Array_with(1, (Optr)PAnnotation7862);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7864 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7865 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7864);
    Array PThreadedCode7863 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_send2, (Optr)PSend7864, (Optr)&t_send1, (Optr)PSend7865, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7859 = new_ReflectionMethod_with(PArray7860, empty_Array, PArray7861, PThreadedCode7863, 1, PSend7865);
    
    MethodClosure MC_SMB_value_value_ = new_MethodClosure((Method)PReflectionMethod7859, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_, MC_SMB_value_value_);
}


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray7867 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign7869 = new_Assign((Optr)slot_Runtime_BlockClosure_context, (Optr)VAR_aContext_0_0);
    Array PThreadedCode7868 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7869, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7866 = new_Method_with(PArray7867, empty_Array, empty_Array, PThreadedCode7868, 2, PAssign7869, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod7866, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_on_do_() {
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    Variable VAR_errorClass_0_0 = new_Variable_named(L"errorClass", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7871 = new_Array_with(2, (Optr)VAR_errorClass_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_previousExceptionHandler_0_2 = new_Variable_named(L"previousExceptionHandler", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray7872 = new_Array_with(2, (Optr)VAR_previousExceptionHandler_0_2, (Optr)VAR_result_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7875 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend7878 = new_Send((Optr)Exception_classReference, SMB_handler, 0);
    Assign PAssign7877 = new_Assign((Optr)VAR_previousExceptionHandler_0_2, (Optr)PSend7878);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_return_2_0 = new_Variable_named(L"return", 2);
    Array PArray7882 = new_Array_with(1, (Optr)VAR_return_2_0);
    Variable VAR_error_2_1 = new_Variable_named(L"error", 2);
    Array PArray7883 = new_Array_with(1, (Optr)VAR_error_2_1);
    Variable VAR_escape_3_0 = new_Variable_named(L"escape", 3);
    Array PArray7888 = new_Array_with(1, (Optr)VAR_escape_3_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend7890 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_escape_3_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7891 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7892 = new_Send((Optr)VAR_return_2_0, SMB_escape_, 1, (Optr)PSend7891);
    Array PThreadedCode7889 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_escape_3_0, (Optr)&t_send1, (Optr)PSend7890, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_return_2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7891, (Optr)&t_send1, (Optr)PSend7892, (Optr)&t_method_return);
    Block PBlock7887 = new_Block_with(PArray7888, empty_Array, PThreadedCode7889, 2, PSend7890, PSend7892);
    // on:. 
    Send PSend7886 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7887);
    Assign PAssign7885 = new_Assign((Optr)VAR_error_2_1, (Optr)PSend7886);
    // handler:. 
    Send PSend7893 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend7894 = new_Send((Optr)VAR_error_2_1, SMB_isKindOf_, 1, (Optr)VAR_errorClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7898 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_error_2_1);
    // escape:. 
    Send PSend7899 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7898);
    Array PThreadedCode7897 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7898, (Optr)&t_send1, (Optr)PSend7899, (Optr)&t_block_return);
    Block PBlock7896 = new_Block_with(empty_Array, empty_Array, PThreadedCode7897, 1, PSend7899);
    // ifTrue:. 
    Send PSend7895 = new_Send((Optr)PSend7894, SMB_ifTrue_, 1, (Optr)PBlock7896);
    // escape:. 
    Send PSend7900 = new_Send((Optr)VAR_previousExceptionHandler_0_2, SMB_escape_, 1, (Optr)VAR_error_2_1);
    Array PThreadedCode7884 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign7885, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7887, (Optr)&t_send1, (Optr)PSend7886, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7893, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_push_variable, (Optr)VAR_errorClass_0_0, (Optr)&t_send1, (Optr)PSend7894, (Optr)&t_send_ifTrue_, (Optr)PSend7895, (Optr)PBlock7896, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7900, (Optr)&t_method_return);
    Block PBlock7881 = new_Block_with(PArray7882, PArray7883, PThreadedCode7884, 4, PAssign7885, PSend7893, PSend7895, PSend7900);
    // on:. 
    Send PSend7880 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7881);
    Assign PAssign7879 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend7880);
    // handler:. 
    Send PSend7901 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Array PThreadedCode7876 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign7877, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_send0, (Optr)PSend7878, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7879, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7881, (Optr)&t_send1, (Optr)PSend7880, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7901, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock7874 = new_Block_with(PArray7875, empty_Array, PThreadedCode7876, 4, PAssign7877, PAssign7879, PSend7901, VAR_result_0_3);
    // on:. 
    Send PSend7902 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7874);
    Array PThreadedCode7873 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7874, (Optr)&t_send1, (Optr)PSend7902, (Optr)&t_method_return);
    Method PMethod7870 = new_Method_with(PArray7871, PArray7872, empty_Array, PThreadedCode7873, 1, PSend7902);
    
    MethodClosure MC_SMB_on_do_ = new_MethodClosure((Method)PMethod7870, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_on_do_, MC_SMB_on_do_);
}


static void init_SMB_value_value_value_value_() {
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Variable VAR_yetAnotherArg_0_3 = new_Variable_named(L"yetAnotherArg", 0);
    Array PArray7904 = new_Array_with(4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7906 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7905 = new_Array_with(1, (Optr)PAnnotation7906);
    Symbol SMB_with_with_with_with_ = new_Symbol(L"with:with:with:with:");
    // with:with:with:with:. 
    Send PSend7908 = new_Send((Optr)Array_classReference, SMB_with_with_with_with_, 4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7909 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7908);
    Array PThreadedCode7907 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_push_variable, (Optr)VAR_yetAnotherArg_0_3, (Optr)&t_send4, (Optr)PSend7908, (Optr)&t_send1, (Optr)PSend7909, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7903 = new_ReflectionMethod_with(PArray7904, empty_Array, PArray7905, PThreadedCode7907, 1, PSend7909);
    
    MethodClosure MC_SMB_value_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7903, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_value_, MC_SMB_value_value_value_value_);
}


static void init_SMB_whileTrue() {
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7912 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // whileTrue. 
    Send PSend7916 = new_Send((Optr)self, SMB_whileTrue, 0);
    Array PThreadedCode7915 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7916, (Optr)&t_block_return);
    Block PBlock7914 = new_Block_with(empty_Array, empty_Array, PThreadedCode7915, 1, PSend7916);
    // ifTrue:. 
    Send PSend7913 = new_Send((Optr)PSend7912, SMB_ifTrue_, 1, (Optr)PBlock7914);
    Array PThreadedCode7911 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7912, (Optr)&t_send_ifTrue_, (Optr)PSend7913, (Optr)PBlock7914, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7910 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7911, 2, PSend7913, self);
    
    MethodClosure MC_SMB_whileTrue = new_MethodClosure((Method)PMethod7910, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue, MC_SMB_whileTrue);
}


static void init_SMB_parallelWith_() {
    Symbol SMB_parallelWith_ = new_Symbol(L"parallelWith:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7918 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7920 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)self, (Optr)VAR_aBlock_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend7921 = new_Send((Optr)PParallelDebugger_classReference, SMB_interpret_, 1, (Optr)PSend7920);
    Array PThreadedCode7919 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PParallelDebugger_classReference, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend7920, (Optr)&t_send1, (Optr)PSend7921, (Optr)&t_method_return);
    Method PMethod7917 = new_Method_with(PArray7918, empty_Array, empty_Array, PThreadedCode7919, 1, PSend7921);
    
    MethodClosure MC_SMB_parallelWith_ = new_MethodClosure((Method)PMethod7917, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_parallelWith_, MC_SMB_parallelWith_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Array PArray7923 = new_Array_with(1, (Optr)VAR_closure_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7927 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7926 = new_Send((Optr)PSend7927, SMB_new, 0);
    Assign PAssign7925 = new_Assign((Optr)VAR_closure_0_0, (Optr)PSend7926);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend7928 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend7929 = new_Send((Optr)VAR_closure_0_0, SMB_code_, 1, (Optr)PSend7928);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend7930 = new_Send((Optr)self, SMB_context, 0);
    // asAliased. 
    Send PSend7931 = new_Send((Optr)PSend7930, SMB_asAliased, 0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend7932 = new_Send((Optr)VAR_closure_0_0, SMB_context_, 1, (Optr)PSend7931);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7934 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7936 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_0);
    // context. 
    Send PSend7937 = new_Send((Optr)self, SMB_context, 0);
    // context:. 
    Send PSend7938 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)PSend7937);
    Array PThreadedCode7935 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend7936, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7937, (Optr)&t_send1, (Optr)PSend7938, (Optr)&t_method_return);
    Block PBlock7933 = new_Block_with(PArray7934, empty_Array, PThreadedCode7935, 2, PSend7936, PSend7938);
    // new. 
    Send PSend7939 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend7940 = new_Send((Optr)PBlock7933, SMB_value_, 1, (Optr)PSend7939);
    Array PThreadedCode7924 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign7925, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7927, (Optr)&t_send0, (Optr)PSend7926, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7928, (Optr)&t_send1, (Optr)PSend7929, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7930, (Optr)&t_send0, (Optr)PSend7931, (Optr)&t_send1, (Optr)PSend7932, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7933, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend7939, (Optr)&t_send1, (Optr)PSend7940, (Optr)&t_method_return);
    Method PMethod7922 = new_Method_with(empty_Array, PArray7923, empty_Array, PThreadedCode7924, 4, PAssign7925, PSend7929, PSend7932, PSend7940);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod7922, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_for_ = new_Symbol(L"for:");
    // for:. 
    Send PSend7943 = new_Send((Optr)PThread_classReference, SMB_for_, 1, (Optr)self);
    Array PThreadedCode7942 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7943, (Optr)&t_method_return);
    Method PMethod7941 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7942, 1, PSend7943);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod7941, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7946 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7945 = new_Array_with(1, (Optr)PAnnotation7946);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend7948 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7949 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7948);
    Array PThreadedCode7947 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7948, (Optr)&t_send1, (Optr)PSend7949, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7944 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray7945, PThreadedCode7947, 1, PSend7949);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PReflectionMethod7944, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray7951 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7954 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7956 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7957 = new_Send((Optr)VAR_aClosure_0_0, SMB_species, 0);
    // =. 
    Send PSend7958 = new_Send((Optr)PSend7956, SMB__equals_, 1, (Optr)PSend7957);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7962 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7961 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7962, (Optr)&t_block_return);
    Block PBlock7960 = new_Block_with(empty_Array, empty_Array, PThreadedCode7961, 1, PSend7962);
    // ifFalse:. 
    Send PSend7959 = new_Send((Optr)PSend7958, SMB_ifFalse_, 1, (Optr)PBlock7960);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend7963 = new_Send((Optr)self, SMB_code, 0);
    // code. 
    Send PSend7964 = new_Send((Optr)VAR_aClosure_0_0, SMB_code, 0);
    // =. 
    Send PSend7965 = new_Send((Optr)PSend7963, SMB__equals_, 1, (Optr)PSend7964);
    Array PThreadedCode7955 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7956, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend7957, (Optr)&t_send1, (Optr)PSend7958, (Optr)&t_send_ifFalse_, (Optr)PSend7959, (Optr)PBlock7960, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7963, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend7964, (Optr)&t_send1, (Optr)PSend7965, (Optr)&t_method_return);
    Block PBlock7953 = new_Block_with(PArray7954, empty_Array, PThreadedCode7955, 2, PSend7959, PSend7965);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7966 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7953);
    Array PThreadedCode7952 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7953, (Optr)&t_send1, (Optr)PSend7966, (Optr)&t_method_return);
    Method PMethod7950 = new_Method_with(PArray7951, empty_Array, empty_Array, PThreadedCode7952, 1, PSend7966);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7950, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Array PArray7968 = new_Array_with(1, (Optr)VAR_anArg_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7970 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7969 = new_Array_with(1, (Optr)PAnnotation7970);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend7972 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_anArg_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7973 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7972);
    Array PThreadedCode7971 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_send1, (Optr)PSend7972, (Optr)&t_send1, (Optr)PSend7973, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7967 = new_ReflectionMethod_with(PArray7968, empty_Array, PArray7969, PThreadedCode7971, 1, PSend7973);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PReflectionMethod7967, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray7975 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlockClosure_ = new_Symbol(L"visitBlockClosure:");
    // visitBlockClosure:. 
    Send PSend7977 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlockClosure_, 1, (Optr)self);
    Array PThreadedCode7976 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7977, (Optr)&t_method_return);
    Method PMethod7974 = new_Method_with(PArray7975, empty_Array, empty_Array, PThreadedCode7976, 1, PSend7977);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod7974, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_BlockClosure = new_Symbol(L"Runtime.BlockClosure");
    Annotation PAnnotation7980 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_numArgs, (Optr)SMB_Runtime_minus_BlockClosure);
    Array PArray7979 = new_Array_with(1, (Optr)PAnnotation7980);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend7982 = new_Send((Optr)slot_Runtime_Closure_code, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7983 = new_Send((Optr)PSend7982, SMB_size, 0);
    Array PThreadedCode7981 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend7982, (Optr)&t_send0, (Optr)PSend7983, (Optr)&t_method_return);
    NativeMethod PNativeMethod7978 = new_NativeMethod_with(empty_Array, empty_Array, PArray7979, PThreadedCode7981, 1, PSend7983);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PNativeMethod7978, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray7985 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Annotation PAnnotation7987 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValueWithArguments_message_);
    Array PArray7986 = new_Array_with(1, (Optr)PAnnotation7987);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7989 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7988 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7989, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7984 = new_ReflectionMethod_with(PArray7985, empty_Array, PArray7986, PThreadedCode7988, 2, PSend7989, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PReflectionMethod7984, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray7991 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray7992 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7995 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend7998 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign7997 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend7998);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend7999 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8003 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8004 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8003);
    Array PThreadedCode8002 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8003, (Optr)&t_send1, (Optr)PSend8004, (Optr)&t_block_return);
    Block PBlock8001 = new_Block_with(empty_Array, empty_Array, PThreadedCode8002, 1, PSend8004);
    // ifTrue:. 
    Send PSend8000 = new_Send((Optr)PSend7999, SMB_ifTrue_, 1, (Optr)PBlock8001);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8005 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8006 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8005);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8010 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend8011 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8010);
    Array PThreadedCode8009 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8010, (Optr)&t_send1, (Optr)PSend8011, (Optr)&t_block_return);
    Block PBlock8008 = new_Block_with(empty_Array, empty_Array, PThreadedCode8009, 1, PSend8011);
    // ifTrue:. 
    Send PSend8007 = new_Send((Optr)PSend8006, SMB_ifTrue_, 1, (Optr)PBlock8008);
    // size. 
    Send PSend8012 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8013 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8012);
    // size. 
    Send PSend8017 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8018 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8017);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8019 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8018);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8020 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8019);
    // valueWithArguments:. 
    Send PSend8021 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8020);
    // escape:. 
    Send PSend8022 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8021);
    Array PThreadedCode8016 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8017, (Optr)&t_send1, (Optr)PSend8018, (Optr)&t_send1, (Optr)PSend8019, (Optr)&t_send1, (Optr)PSend8020, (Optr)&t_send1, (Optr)PSend8021, (Optr)&t_send1, (Optr)PSend8022, (Optr)&t_block_return);
    Block PBlock8015 = new_Block_with(empty_Array, empty_Array, PThreadedCode8016, 1, PSend8022);
    // ifTrue:. 
    Send PSend8014 = new_Send((Optr)PSend8013, SMB_ifTrue_, 1, (Optr)PBlock8015);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8023 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8024 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8023);
    Array PThreadedCode7996 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign7997, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7998, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7999, (Optr)&t_send_ifTrue_, (Optr)PSend8000, (Optr)PBlock8001, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8005, (Optr)&t_send1, (Optr)PSend8006, (Optr)&t_send_ifTrue_, (Optr)PSend8007, (Optr)PBlock8008, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8012, (Optr)&t_send1, (Optr)PSend8013, (Optr)&t_send_ifTrue_, (Optr)PSend8014, (Optr)PBlock8015, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8023, (Optr)&t_send1, (Optr)PSend8024, (Optr)&t_method_return);
    Block PBlock7994 = new_Block_with(PArray7995, empty_Array, PThreadedCode7996, 5, PAssign7997, PSend8000, PSend8007, PSend8014, PSend8024);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8025 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7994);
    Array PThreadedCode7993 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7994, (Optr)&t_send1, (Optr)PSend8025, (Optr)&t_method_return);
    Method PMethod7990 = new_Method_with(PArray7991, PArray7992, empty_Array, PThreadedCode7993, 1, PSend8025);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod7990, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_whileFalse() {
    Symbol SMB_whileFalse = new_Symbol(L"whileFalse");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8028 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // whileFalse. 
    Send PSend8032 = new_Send((Optr)self, SMB_whileFalse, 0);
    Array PThreadedCode8031 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8032, (Optr)&t_block_return);
    Block PBlock8030 = new_Block_with(empty_Array, empty_Array, PThreadedCode8031, 1, PSend8032);
    // ifFalse:. 
    Send PSend8029 = new_Send((Optr)PSend8028, SMB_ifFalse_, 1, (Optr)PBlock8030);
    Array PThreadedCode8027 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8028, (Optr)&t_send_ifFalse_, (Optr)PSend8029, (Optr)PBlock8030, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8027, 2, PSend8029, self);
    
    MethodClosure MC_SMB_whileFalse = new_MethodClosure((Method)PMethod8026, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse, MC_SMB_whileFalse);
}


static void init_SMB_ensure_() {
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8034 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8037 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray8040 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8042 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend8043 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8044 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8043);
    Array PThreadedCode8041 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8042, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend8043, (Optr)&t_send1, (Optr)PSend8044, (Optr)&t_method_return);
    Block PBlock8039 = new_Block_with(PArray8040, empty_Array, PThreadedCode8041, 2, PSend8042, PSend8044);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend8045 = new_Send((Optr)self, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock8039);
    // value. 
    Send PSend8046 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode8038 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock8039, (Optr)&t_send2, (Optr)PSend8045, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8046, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8036 = new_Block_with(PArray8037, empty_Array, PThreadedCode8038, 3, PSend8045, PSend8046, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8047 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8036);
    Array PThreadedCode8035 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8036, (Optr)&t_send1, (Optr)PSend8047, (Optr)&t_method_return);
    Method PMethod8033 = new_Method_with(PArray8034, empty_Array, empty_Array, PThreadedCode8035, 1, PSend8047);
    
    MethodClosure MC_SMB_ensure_ = new_MethodClosure((Method)PMethod8033, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_ensure_, MC_SMB_ensure_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8049 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockClosure_context, (Optr)&t_method_return);
    Method PMethod8048 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8049, 1, slot_Runtime_BlockClosure_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8048, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context, MC_SMB_context);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8051 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8053 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // value. 
    Send PSend8057 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend8058 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8056 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8057, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8058, (Optr)&t_block_return);
    Block PBlock8055 = new_Block_with(empty_Array, empty_Array, PThreadedCode8056, 2, PSend8057, PSend8058);
    // ifFalse:. 
    Send PSend8054 = new_Send((Optr)PSend8053, SMB_ifFalse_, 1, (Optr)PBlock8055);
    Array PThreadedCode8052 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8053, (Optr)&t_send_ifFalse_, (Optr)PSend8054, (Optr)PBlock8055, (Optr)&t_method_return);
    Method PMethod8050 = new_Method_with(PArray8051, empty_Array, empty_Array, PThreadedCode8052, 1, PSend8054);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod8050, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8061 = new_Send((Optr)PEGBlock_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode8060 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGBlock_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8061, (Optr)&t_method_return);
    Method PMethod8059 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8060, 1, PSend8061);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod8059, BlockClosure_Class);
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