#include <lib/class/Runtime/BlockClosure.h>


Optr layout_Runtime_BlockClosure_Class_class;
Optr slot_Runtime_BlockClosure_context;
Optr layout_Runtime_BlockClosure;


static void init_SMB_value_value_value_() {
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Array PArray7820 = new_Array_with(3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7822 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7821 = new_Array_with(1, (Optr)PAnnotation7822);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend7824 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7825 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7824);
    Array PThreadedCode7823 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_send3, (Optr)PSend7824, (Optr)&t_send1, (Optr)PSend7825, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7819 = new_ReflectionMethod_with(PArray7820, empty_Array, PArray7821, PThreadedCode7823, 1, PSend7825);
    
    MethodClosure MC_SMB_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7819, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_, MC_SMB_value_value_value_);
}


static void init_SMB_value_value_() {
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Array PArray7827 = new_Array_with(2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7829 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7828 = new_Array_with(1, (Optr)PAnnotation7829);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7831 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7832 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7831);
    Array PThreadedCode7830 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_send2, (Optr)PSend7831, (Optr)&t_send1, (Optr)PSend7832, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7826 = new_ReflectionMethod_with(PArray7827, empty_Array, PArray7828, PThreadedCode7830, 1, PSend7832);
    
    MethodClosure MC_SMB_value_value_ = new_MethodClosure((Method)PReflectionMethod7826, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_, MC_SMB_value_value_);
}


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray7834 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign7836 = new_Assign((Optr)slot_Runtime_BlockClosure_context, (Optr)VAR_aContext_0_0);
    Array PThreadedCode7835 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7836, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7833 = new_Method_with(PArray7834, empty_Array, empty_Array, PThreadedCode7835, 2, PAssign7836, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod7833, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7839 = new_Send((Optr)PEGBlock_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode7838 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGBlock_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7839, (Optr)&t_method_return);
    Method PMethod7837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7838, 1, PSend7839);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod7837, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_SMB_on_do_() {
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    Variable VAR_errorClass_0_0 = new_Variable_named(L"errorClass", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7841 = new_Array_with(2, (Optr)VAR_errorClass_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_previousExceptionHandler_0_2 = new_Variable_named(L"previousExceptionHandler", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray7842 = new_Array_with(2, (Optr)VAR_previousExceptionHandler_0_2, (Optr)VAR_result_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7845 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend7848 = new_Send((Optr)Exception_classReference, SMB_handler, 0);
    Assign PAssign7847 = new_Assign((Optr)VAR_previousExceptionHandler_0_2, (Optr)PSend7848);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_return_2_0 = new_Variable_named(L"return", 2);
    Array PArray7852 = new_Array_with(1, (Optr)VAR_return_2_0);
    Variable VAR_error_2_1 = new_Variable_named(L"error", 2);
    Array PArray7853 = new_Array_with(1, (Optr)VAR_error_2_1);
    Variable VAR_escape_3_0 = new_Variable_named(L"escape", 3);
    Array PArray7858 = new_Array_with(1, (Optr)VAR_escape_3_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend7860 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_escape_3_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7861 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7862 = new_Send((Optr)VAR_return_2_0, SMB_escape_, 1, (Optr)PSend7861);
    Array PThreadedCode7859 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_escape_3_0, (Optr)&t_send1, (Optr)PSend7860, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_return_2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7861, (Optr)&t_send1, (Optr)PSend7862, (Optr)&t_method_return);
    Block PBlock7857 = new_Block_with(PArray7858, empty_Array, PThreadedCode7859, 2, PSend7860, PSend7862);
    // on:. 
    Send PSend7856 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7857);
    Assign PAssign7855 = new_Assign((Optr)VAR_error_2_1, (Optr)PSend7856);
    // handler:. 
    Send PSend7863 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend7864 = new_Send((Optr)VAR_error_2_1, SMB_isKindOf_, 1, (Optr)VAR_errorClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7868 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_error_2_1);
    // escape:. 
    Send PSend7869 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7868);
    Array PThreadedCode7867 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7868, (Optr)&t_send1, (Optr)PSend7869, (Optr)&t_block_return);
    Block PBlock7866 = new_Block_with(empty_Array, empty_Array, PThreadedCode7867, 1, PSend7869);
    // ifTrue:. 
    Send PSend7865 = new_Send((Optr)PSend7864, SMB_ifTrue_, 1, (Optr)PBlock7866);
    // escape:. 
    Send PSend7870 = new_Send((Optr)VAR_previousExceptionHandler_0_2, SMB_escape_, 1, (Optr)VAR_error_2_1);
    Array PThreadedCode7854 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign7855, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7857, (Optr)&t_send1, (Optr)PSend7856, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7863, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_push_variable, (Optr)VAR_errorClass_0_0, (Optr)&t_send1, (Optr)PSend7864, (Optr)&t_send_ifTrue_, (Optr)PSend7865, (Optr)PBlock7866, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7870, (Optr)&t_method_return);
    Block PBlock7851 = new_Block_with(PArray7852, PArray7853, PThreadedCode7854, 4, PAssign7855, PSend7863, PSend7865, PSend7870);
    // on:. 
    Send PSend7850 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7851);
    Assign PAssign7849 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend7850);
    // handler:. 
    Send PSend7871 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Array PThreadedCode7846 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign7847, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_send0, (Optr)PSend7848, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7849, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7851, (Optr)&t_send1, (Optr)PSend7850, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7871, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock7844 = new_Block_with(PArray7845, empty_Array, PThreadedCode7846, 4, PAssign7847, PAssign7849, PSend7871, VAR_result_0_3);
    // on:. 
    Send PSend7872 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7844);
    Array PThreadedCode7843 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7844, (Optr)&t_send1, (Optr)PSend7872, (Optr)&t_method_return);
    Method PMethod7840 = new_Method_with(PArray7841, PArray7842, empty_Array, PThreadedCode7843, 1, PSend7872);
    
    MethodClosure MC_SMB_on_do_ = new_MethodClosure((Method)PMethod7840, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_on_do_, MC_SMB_on_do_);
}


static void init_SMB_value_value_value_value_() {
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Variable VAR_yetAnotherArg_0_3 = new_Variable_named(L"yetAnotherArg", 0);
    Array PArray7874 = new_Array_with(4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7876 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7875 = new_Array_with(1, (Optr)PAnnotation7876);
    Symbol SMB_with_with_with_with_ = new_Symbol(L"with:with:with:with:");
    // with:with:with:with:. 
    Send PSend7878 = new_Send((Optr)Array_classReference, SMB_with_with_with_with_, 4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7879 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7878);
    Array PThreadedCode7877 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_push_variable, (Optr)VAR_yetAnotherArg_0_3, (Optr)&t_send4, (Optr)PSend7878, (Optr)&t_send1, (Optr)PSend7879, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7873 = new_ReflectionMethod_with(PArray7874, empty_Array, PArray7875, PThreadedCode7877, 1, PSend7879);
    
    MethodClosure MC_SMB_value_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7873, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_value_, MC_SMB_value_value_value_value_);
}


static void init_SMB_whileTrue() {
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7882 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // whileTrue. 
    Send PSend7886 = new_Send((Optr)self, SMB_whileTrue, 0);
    Array PThreadedCode7885 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7886, (Optr)&t_block_return);
    Block PBlock7884 = new_Block_with(empty_Array, empty_Array, PThreadedCode7885, 1, PSend7886);
    // ifTrue:. 
    Send PSend7883 = new_Send((Optr)PSend7882, SMB_ifTrue_, 1, (Optr)PBlock7884);
    Array PThreadedCode7881 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7882, (Optr)&t_send_ifTrue_, (Optr)PSend7883, (Optr)PBlock7884, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7881, 2, PSend7883, self);
    
    MethodClosure MC_SMB_whileTrue = new_MethodClosure((Method)PMethod7880, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue, MC_SMB_whileTrue);
}


static void init_SMB_parallelWith_() {
    Symbol SMB_parallelWith_ = new_Symbol(L"parallelWith:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7888 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7890 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)self, (Optr)VAR_aBlock_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend7891 = new_Send((Optr)PParallelDebugger_classReference, SMB_interpret_, 1, (Optr)PSend7890);
    Array PThreadedCode7889 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PParallelDebugger_classReference, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend7890, (Optr)&t_send1, (Optr)PSend7891, (Optr)&t_method_return);
    Method PMethod7887 = new_Method_with(PArray7888, empty_Array, empty_Array, PThreadedCode7889, 1, PSend7891);
    
    MethodClosure MC_SMB_parallelWith_ = new_MethodClosure((Method)PMethod7887, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_parallelWith_, MC_SMB_parallelWith_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Array PArray7893 = new_Array_with(1, (Optr)VAR_closure_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7897 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7896 = new_Send((Optr)PSend7897, SMB_new, 0);
    Assign PAssign7895 = new_Assign((Optr)VAR_closure_0_0, (Optr)PSend7896);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend7898 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend7899 = new_Send((Optr)VAR_closure_0_0, SMB_code_, 1, (Optr)PSend7898);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend7900 = new_Send((Optr)self, SMB_context, 0);
    // asAliased. 
    Send PSend7901 = new_Send((Optr)PSend7900, SMB_asAliased, 0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend7902 = new_Send((Optr)VAR_closure_0_0, SMB_context_, 1, (Optr)PSend7901);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7904 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7906 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_0);
    // context. 
    Send PSend7907 = new_Send((Optr)self, SMB_context, 0);
    // context:. 
    Send PSend7908 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)PSend7907);
    Array PThreadedCode7905 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend7906, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7907, (Optr)&t_send1, (Optr)PSend7908, (Optr)&t_method_return);
    Block PBlock7903 = new_Block_with(PArray7904, empty_Array, PThreadedCode7905, 2, PSend7906, PSend7908);
    // new. 
    Send PSend7909 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend7910 = new_Send((Optr)PBlock7903, SMB_value_, 1, (Optr)PSend7909);
    Array PThreadedCode7894 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign7895, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7897, (Optr)&t_send0, (Optr)PSend7896, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7898, (Optr)&t_send1, (Optr)PSend7899, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7900, (Optr)&t_send0, (Optr)PSend7901, (Optr)&t_send1, (Optr)PSend7902, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7903, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend7909, (Optr)&t_send1, (Optr)PSend7910, (Optr)&t_method_return);
    Method PMethod7892 = new_Method_with(empty_Array, PArray7893, empty_Array, PThreadedCode7894, 4, PAssign7895, PSend7899, PSend7902, PSend7910);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod7892, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_for_ = new_Symbol(L"for:");
    // for:. 
    Send PSend7913 = new_Send((Optr)PThread_classReference, SMB_for_, 1, (Optr)self);
    Array PThreadedCode7912 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7913, (Optr)&t_method_return);
    Method PMethod7911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7912, 1, PSend7913);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod7911, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7916 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7915 = new_Array_with(1, (Optr)PAnnotation7916);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend7918 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7919 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7918);
    Array PThreadedCode7917 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7918, (Optr)&t_send1, (Optr)PSend7919, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7914 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray7915, PThreadedCode7917, 1, PSend7919);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PReflectionMethod7914, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray7921 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7924 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7926 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7927 = new_Send((Optr)VAR_aClosure_0_0, SMB_species, 0);
    // =. 
    Send PSend7928 = new_Send((Optr)PSend7926, SMB__equals_, 1, (Optr)PSend7927);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7932 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7931 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7932, (Optr)&t_block_return);
    Block PBlock7930 = new_Block_with(empty_Array, empty_Array, PThreadedCode7931, 1, PSend7932);
    // ifFalse:. 
    Send PSend7929 = new_Send((Optr)PSend7928, SMB_ifFalse_, 1, (Optr)PBlock7930);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend7933 = new_Send((Optr)self, SMB_code, 0);
    // code. 
    Send PSend7934 = new_Send((Optr)VAR_aClosure_0_0, SMB_code, 0);
    // =. 
    Send PSend7935 = new_Send((Optr)PSend7933, SMB__equals_, 1, (Optr)PSend7934);
    Array PThreadedCode7925 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7926, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend7927, (Optr)&t_send1, (Optr)PSend7928, (Optr)&t_send_ifFalse_, (Optr)PSend7929, (Optr)PBlock7930, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7933, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend7934, (Optr)&t_send1, (Optr)PSend7935, (Optr)&t_method_return);
    Block PBlock7923 = new_Block_with(PArray7924, empty_Array, PThreadedCode7925, 2, PSend7929, PSend7935);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7936 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7923);
    Array PThreadedCode7922 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7923, (Optr)&t_send1, (Optr)PSend7936, (Optr)&t_method_return);
    Method PMethod7920 = new_Method_with(PArray7921, empty_Array, empty_Array, PThreadedCode7922, 1, PSend7936);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7920, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Array PArray7938 = new_Array_with(1, (Optr)VAR_anArg_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7940 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7939 = new_Array_with(1, (Optr)PAnnotation7940);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend7942 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_anArg_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7943 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7942);
    Array PThreadedCode7941 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_send1, (Optr)PSend7942, (Optr)&t_send1, (Optr)PSend7943, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7937 = new_ReflectionMethod_with(PArray7938, empty_Array, PArray7939, PThreadedCode7941, 1, PSend7943);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PReflectionMethod7937, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray7945 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlockClosure_ = new_Symbol(L"visitBlockClosure:");
    // visitBlockClosure:. 
    Send PSend7947 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlockClosure_, 1, (Optr)self);
    Array PThreadedCode7946 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7947, (Optr)&t_method_return);
    Method PMethod7944 = new_Method_with(PArray7945, empty_Array, empty_Array, PThreadedCode7946, 1, PSend7947);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod7944, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_BlockClosure = new_Symbol(L"Runtime.BlockClosure");
    Annotation PAnnotation7950 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_numArgs, (Optr)SMB_Runtime_minus_BlockClosure);
    Array PArray7949 = new_Array_with(1, (Optr)PAnnotation7950);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend7952 = new_Send((Optr)slot_Runtime_Closure_code, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7953 = new_Send((Optr)PSend7952, SMB_size, 0);
    Array PThreadedCode7951 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend7952, (Optr)&t_send0, (Optr)PSend7953, (Optr)&t_method_return);
    NativeMethod PNativeMethod7948 = new_NativeMethod_with(empty_Array, empty_Array, PArray7949, PThreadedCode7951, 1, PSend7953);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PNativeMethod7948, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray7955 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Annotation PAnnotation7957 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValueWithArguments_message_);
    Array PArray7956 = new_Array_with(1, (Optr)PAnnotation7957);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7959 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7958 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7959, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7954 = new_ReflectionMethod_with(PArray7955, empty_Array, PArray7956, PThreadedCode7958, 2, PSend7959, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PReflectionMethod7954, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray7961 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray7962 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7965 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend7968 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign7967 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend7968);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend7969 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7973 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7974 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7973);
    Array PThreadedCode7972 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7973, (Optr)&t_send1, (Optr)PSend7974, (Optr)&t_block_return);
    Block PBlock7971 = new_Block_with(empty_Array, empty_Array, PThreadedCode7972, 1, PSend7974);
    // ifTrue:. 
    Send PSend7970 = new_Send((Optr)PSend7969, SMB_ifTrue_, 1, (Optr)PBlock7971);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7975 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend7976 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend7975);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7980 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend7981 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7980);
    Array PThreadedCode7979 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend7980, (Optr)&t_send1, (Optr)PSend7981, (Optr)&t_block_return);
    Block PBlock7978 = new_Block_with(empty_Array, empty_Array, PThreadedCode7979, 1, PSend7981);
    // ifTrue:. 
    Send PSend7977 = new_Send((Optr)PSend7976, SMB_ifTrue_, 1, (Optr)PBlock7978);
    // size. 
    Send PSend7982 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend7983 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend7982);
    // size. 
    Send PSend7987 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend7988 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend7987);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7989 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend7988);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend7990 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend7989);
    // valueWithArguments:. 
    Send PSend7991 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7990);
    // escape:. 
    Send PSend7992 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7991);
    Array PThreadedCode7986 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7987, (Optr)&t_send1, (Optr)PSend7988, (Optr)&t_send1, (Optr)PSend7989, (Optr)&t_send1, (Optr)PSend7990, (Optr)&t_send1, (Optr)PSend7991, (Optr)&t_send1, (Optr)PSend7992, (Optr)&t_block_return);
    Block PBlock7985 = new_Block_with(empty_Array, empty_Array, PThreadedCode7986, 1, PSend7992);
    // ifTrue:. 
    Send PSend7984 = new_Send((Optr)PSend7983, SMB_ifTrue_, 1, (Optr)PBlock7985);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend7993 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend7994 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7993);
    Array PThreadedCode7966 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign7967, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7968, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7969, (Optr)&t_send_ifTrue_, (Optr)PSend7970, (Optr)PBlock7971, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7975, (Optr)&t_send1, (Optr)PSend7976, (Optr)&t_send_ifTrue_, (Optr)PSend7977, (Optr)PBlock7978, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7982, (Optr)&t_send1, (Optr)PSend7983, (Optr)&t_send_ifTrue_, (Optr)PSend7984, (Optr)PBlock7985, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend7993, (Optr)&t_send1, (Optr)PSend7994, (Optr)&t_method_return);
    Block PBlock7964 = new_Block_with(PArray7965, empty_Array, PThreadedCode7966, 5, PAssign7967, PSend7970, PSend7977, PSend7984, PSend7994);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7995 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7964);
    Array PThreadedCode7963 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7964, (Optr)&t_send1, (Optr)PSend7995, (Optr)&t_method_return);
    Method PMethod7960 = new_Method_with(PArray7961, PArray7962, empty_Array, PThreadedCode7963, 1, PSend7995);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod7960, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_whileFalse() {
    Symbol SMB_whileFalse = new_Symbol(L"whileFalse");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7998 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // whileFalse. 
    Send PSend8002 = new_Send((Optr)self, SMB_whileFalse, 0);
    Array PThreadedCode8001 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8002, (Optr)&t_block_return);
    Block PBlock8000 = new_Block_with(empty_Array, empty_Array, PThreadedCode8001, 1, PSend8002);
    // ifFalse:. 
    Send PSend7999 = new_Send((Optr)PSend7998, SMB_ifFalse_, 1, (Optr)PBlock8000);
    Array PThreadedCode7997 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7998, (Optr)&t_send_ifFalse_, (Optr)PSend7999, (Optr)PBlock8000, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7996 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7997, 2, PSend7999, self);
    
    MethodClosure MC_SMB_whileFalse = new_MethodClosure((Method)PMethod7996, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse, MC_SMB_whileFalse);
}


static void init_SMB_ensure_() {
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8004 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8007 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray8010 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8012 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend8013 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8014 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8013);
    Array PThreadedCode8011 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8012, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend8013, (Optr)&t_send1, (Optr)PSend8014, (Optr)&t_method_return);
    Block PBlock8009 = new_Block_with(PArray8010, empty_Array, PThreadedCode8011, 2, PSend8012, PSend8014);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend8015 = new_Send((Optr)self, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock8009);
    // value. 
    Send PSend8016 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode8008 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock8009, (Optr)&t_send2, (Optr)PSend8015, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8016, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8006 = new_Block_with(PArray8007, empty_Array, PThreadedCode8008, 3, PSend8015, PSend8016, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8017 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8006);
    Array PThreadedCode8005 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8006, (Optr)&t_send1, (Optr)PSend8017, (Optr)&t_method_return);
    Method PMethod8003 = new_Method_with(PArray8004, empty_Array, empty_Array, PThreadedCode8005, 1, PSend8017);
    
    MethodClosure MC_SMB_ensure_ = new_MethodClosure((Method)PMethod8003, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_ensure_, MC_SMB_ensure_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8019 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockClosure_context, (Optr)&t_method_return);
    Method PMethod8018 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8019, 1, slot_Runtime_BlockClosure_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8018, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context, MC_SMB_context);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8021 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8023 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // value. 
    Send PSend8027 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend8028 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8026 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8027, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8028, (Optr)&t_block_return);
    Block PBlock8025 = new_Block_with(empty_Array, empty_Array, PThreadedCode8026, 2, PSend8027, PSend8028);
    // ifFalse:. 
    Send PSend8024 = new_Send((Optr)PSend8023, SMB_ifFalse_, 1, (Optr)PBlock8025);
    Array PThreadedCode8022 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8023, (Optr)&t_send_ifFalse_, (Optr)PSend8024, (Optr)PBlock8025, (Optr)&t_method_return);
    Method PMethod8020 = new_Method_with(PArray8021, empty_Array, empty_Array, PThreadedCode8022, 1, PSend8024);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod8020, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
}


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8030 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8032 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // value. 
    Send PSend8036 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend8037 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8035 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8036, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8037, (Optr)&t_block_return);
    Block PBlock8034 = new_Block_with(empty_Array, empty_Array, PThreadedCode8035, 2, PSend8036, PSend8037);
    // ifTrue:. 
    Send PSend8033 = new_Send((Optr)PSend8032, SMB_ifTrue_, 1, (Optr)PBlock8034);
    Array PThreadedCode8031 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8032, (Optr)&t_send_ifTrue_, (Optr)PSend8033, (Optr)PBlock8034, (Optr)&t_method_return);
    Method PMethod8029 = new_Method_with(PArray8030, empty_Array, empty_Array, PThreadedCode8031, 1, PSend8033);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod8029, BlockClosure_Class);
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