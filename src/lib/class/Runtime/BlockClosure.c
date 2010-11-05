#include <lib/class/Runtime/BlockClosure.h>


Optr layout_Runtime_BlockClosure_Class_class;
Optr slot_Runtime_BlockClosure_context;
Optr layout_Runtime_BlockClosure;


static void init_SMB_whileTrue_() {
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7805 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7807 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // value. 
    Send PSend7811 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileTrue:. 
    Send PSend7812 = new_Send((Optr)self, SMB_whileTrue_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7810 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend7811, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend7812, (Optr)&t_block_return);
    Block PBlock7809 = new_Block_with(empty_Array, empty_Array, PThreadedCode7810, 2, PSend7811, PSend7812);
    // ifTrue:. 
    Send PSend7808 = new_Send((Optr)PSend7807, SMB_ifTrue_, 1, (Optr)PBlock7809);
    Array PThreadedCode7806 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7807, (Optr)&t_send_ifTrue_, (Optr)PSend7808, (Optr)PBlock7809, (Optr)&t_method_return);
    Method PMethod7804 = new_Method_with(PArray7805, empty_Array, empty_Array, PThreadedCode7806, 1, PSend7808);
    
    MethodClosure MC_SMB_whileTrue_ = new_MethodClosure((Method)PMethod7804, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue_, MC_SMB_whileTrue_);
}


static void init_SMB_value_value_value_() {
    Symbol SMB_value_value_value_ = new_Symbol(L"value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Array PArray7814 = new_Array_with(3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7816 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7815 = new_Array_with(1, (Optr)PAnnotation7816);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend7818 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7819 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7818);
    Array PThreadedCode7817 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_send3, (Optr)PSend7818, (Optr)&t_send1, (Optr)PSend7819, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7813 = new_ReflectionMethod_with(PArray7814, empty_Array, PArray7815, PThreadedCode7817, 1, PSend7819);
    
    MethodClosure MC_SMB_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7813, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_, MC_SMB_value_value_value_);
}


static void init_SMB_value_value_() {
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Array PArray7821 = new_Array_with(2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7823 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7822 = new_Array_with(1, (Optr)PAnnotation7823);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7825 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7826 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7825);
    Array PThreadedCode7824 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_send2, (Optr)PSend7825, (Optr)&t_send1, (Optr)PSend7826, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7820 = new_ReflectionMethod_with(PArray7821, empty_Array, PArray7822, PThreadedCode7824, 1, PSend7826);
    
    MethodClosure MC_SMB_value_value_ = new_MethodClosure((Method)PReflectionMethod7820, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_, MC_SMB_value_value_);
}


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray7828 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Assign PAssign7830 = new_Assign((Optr)slot_Runtime_BlockClosure_context, (Optr)VAR_aContext_0_0);
    Array PThreadedCode7829 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7830, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7827 = new_Method_with(PArray7828, empty_Array, empty_Array, PThreadedCode7829, 2, PAssign7830, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod7827, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_on_do_() {
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    Variable VAR_errorClass_0_0 = new_Variable_named(L"errorClass", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray7832 = new_Array_with(2, (Optr)VAR_errorClass_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_previousExceptionHandler_0_2 = new_Variable_named(L"previousExceptionHandler", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray7833 = new_Array_with(2, (Optr)VAR_previousExceptionHandler_0_2, (Optr)VAR_result_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7836 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_handler = new_Symbol(L"handler");
    // handler. 
    Send PSend7839 = new_Send((Optr)Exception_classReference, SMB_handler, 0);
    Assign PAssign7838 = new_Assign((Optr)VAR_previousExceptionHandler_0_2, (Optr)PSend7839);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_return_2_0 = new_Variable_named(L"return", 2);
    Array PArray7843 = new_Array_with(1, (Optr)VAR_return_2_0);
    Variable VAR_error_2_1 = new_Variable_named(L"error", 2);
    Array PArray7844 = new_Array_with(1, (Optr)VAR_error_2_1);
    Variable VAR_escape_3_0 = new_Variable_named(L"escape", 3);
    Array PArray7849 = new_Array_with(1, (Optr)VAR_escape_3_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend7851 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_escape_3_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7852 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7853 = new_Send((Optr)VAR_return_2_0, SMB_escape_, 1, (Optr)PSend7852);
    Array PThreadedCode7850 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_escape_3_0, (Optr)&t_send1, (Optr)PSend7851, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_return_2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7852, (Optr)&t_send1, (Optr)PSend7853, (Optr)&t_method_return);
    Block PBlock7848 = new_Block_with(PArray7849, empty_Array, PThreadedCode7850, 2, PSend7851, PSend7853);
    // on:. 
    Send PSend7847 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7848);
    Assign PAssign7846 = new_Assign((Optr)VAR_error_2_1, (Optr)PSend7847);
    // handler:. 
    Send PSend7854 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend7855 = new_Send((Optr)VAR_error_2_1, SMB_isKindOf_, 1, (Optr)VAR_errorClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7859 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_error_2_1);
    // escape:. 
    Send PSend7860 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7859);
    Array PThreadedCode7858 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7859, (Optr)&t_send1, (Optr)PSend7860, (Optr)&t_block_return);
    Block PBlock7857 = new_Block_with(empty_Array, empty_Array, PThreadedCode7858, 1, PSend7860);
    // ifTrue:. 
    Send PSend7856 = new_Send((Optr)PSend7855, SMB_ifTrue_, 1, (Optr)PBlock7857);
    // escape:. 
    Send PSend7861 = new_Send((Optr)VAR_previousExceptionHandler_0_2, SMB_escape_, 1, (Optr)VAR_error_2_1);
    Array PThreadedCode7845 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign7846, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7848, (Optr)&t_send1, (Optr)PSend7847, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7854, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_push_variable, (Optr)VAR_errorClass_0_0, (Optr)&t_send1, (Optr)PSend7855, (Optr)&t_send_ifTrue_, (Optr)PSend7856, (Optr)PBlock7857, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_push_variable, (Optr)VAR_error_2_1, (Optr)&t_send1, (Optr)PSend7861, (Optr)&t_method_return);
    Block PBlock7842 = new_Block_with(PArray7843, PArray7844, PThreadedCode7845, 4, PAssign7846, PSend7854, PSend7856, PSend7861);
    // on:. 
    Send PSend7841 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7842);
    Assign PAssign7840 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend7841);
    // handler:. 
    Send PSend7862 = new_Send((Optr)Exception_classReference, SMB_handler_, 1, (Optr)VAR_previousExceptionHandler_0_2);
    Array PThreadedCode7837 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign7838, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_send0, (Optr)PSend7839, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7840, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7842, (Optr)&t_send1, (Optr)PSend7841, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Exception_classReference, (Optr)&t_push_variable, (Optr)VAR_previousExceptionHandler_0_2, (Optr)&t_send1, (Optr)PSend7862, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock7835 = new_Block_with(PArray7836, empty_Array, PThreadedCode7837, 4, PAssign7838, PAssign7840, PSend7862, VAR_result_0_3);
    // on:. 
    Send PSend7863 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7835);
    Array PThreadedCode7834 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7835, (Optr)&t_send1, (Optr)PSend7863, (Optr)&t_method_return);
    Method PMethod7831 = new_Method_with(PArray7832, PArray7833, empty_Array, PThreadedCode7834, 1, PSend7863);
    
    MethodClosure MC_SMB_on_do_ = new_MethodClosure((Method)PMethod7831, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_on_do_, MC_SMB_on_do_);
}


static void init_SMB_value_value_value_value_() {
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Variable VAR_otherArg_0_1 = new_Variable_named(L"otherArg", 0);
    Variable VAR_anotherArg_0_2 = new_Variable_named(L"anotherArg", 0);
    Variable VAR_yetAnotherArg_0_3 = new_Variable_named(L"yetAnotherArg", 0);
    Array PArray7865 = new_Array_with(4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7867 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7866 = new_Array_with(1, (Optr)PAnnotation7867);
    Symbol SMB_with_with_with_with_ = new_Symbol(L"with:with:with:with:");
    // with:with:with:with:. 
    Send PSend7869 = new_Send((Optr)Array_classReference, SMB_with_with_with_with_, 4, (Optr)VAR_anArg_0_0, (Optr)VAR_otherArg_0_1, (Optr)VAR_anotherArg_0_2, (Optr)VAR_yetAnotherArg_0_3);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7870 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7869);
    Array PThreadedCode7868 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_push_variable, (Optr)VAR_otherArg_0_1, (Optr)&t_push_variable, (Optr)VAR_anotherArg_0_2, (Optr)&t_push_variable, (Optr)VAR_yetAnotherArg_0_3, (Optr)&t_send4, (Optr)PSend7869, (Optr)&t_send1, (Optr)PSend7870, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7864 = new_ReflectionMethod_with(PArray7865, empty_Array, PArray7866, PThreadedCode7868, 1, PSend7870);
    
    MethodClosure MC_SMB_value_value_value_value_ = new_MethodClosure((Method)PReflectionMethod7864, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_value_value_value_, MC_SMB_value_value_value_value_);
}


static void init_SMB_whileTrue() {
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7873 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // whileTrue. 
    Send PSend7877 = new_Send((Optr)self, SMB_whileTrue, 0);
    Array PThreadedCode7876 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7877, (Optr)&t_block_return);
    Block PBlock7875 = new_Block_with(empty_Array, empty_Array, PThreadedCode7876, 1, PSend7877);
    // ifTrue:. 
    Send PSend7874 = new_Send((Optr)PSend7873, SMB_ifTrue_, 1, (Optr)PBlock7875);
    Array PThreadedCode7872 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7873, (Optr)&t_send_ifTrue_, (Optr)PSend7874, (Optr)PBlock7875, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7871 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7872, 2, PSend7874, self);
    
    MethodClosure MC_SMB_whileTrue = new_MethodClosure((Method)PMethod7871, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileTrue, MC_SMB_whileTrue);
}


static void init_SMB_parallelWith_() {
    Symbol SMB_parallelWith_ = new_Symbol(L"parallelWith:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7879 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend7881 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)self, (Optr)VAR_aBlock_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend7882 = new_Send((Optr)PParallelDebugger_classReference, SMB_interpret_, 1, (Optr)PSend7881);
    Array PThreadedCode7880 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PParallelDebugger_classReference, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend7881, (Optr)&t_send1, (Optr)PSend7882, (Optr)&t_method_return);
    Method PMethod7878 = new_Method_with(PArray7879, empty_Array, empty_Array, PThreadedCode7880, 1, PSend7882);
    
    MethodClosure MC_SMB_parallelWith_ = new_MethodClosure((Method)PMethod7878, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_parallelWith_, MC_SMB_parallelWith_);
}


static void init_SMB_asAliased() {
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Array PArray7884 = new_Array_with(1, (Optr)VAR_closure_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7888 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7887 = new_Send((Optr)PSend7888, SMB_new, 0);
    Assign PAssign7886 = new_Assign((Optr)VAR_closure_0_0, (Optr)PSend7887);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend7889 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend7890 = new_Send((Optr)VAR_closure_0_0, SMB_code_, 1, (Optr)PSend7889);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend7891 = new_Send((Optr)self, SMB_context, 0);
    // asAliased. 
    Send PSend7892 = new_Send((Optr)PSend7891, SMB_asAliased, 0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend7893 = new_Send((Optr)VAR_closure_0_0, SMB_context_, 1, (Optr)PSend7892);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray7895 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7897 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_0);
    // context. 
    Send PSend7898 = new_Send((Optr)self, SMB_context, 0);
    // context:. 
    Send PSend7899 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)PSend7898);
    Array PThreadedCode7896 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend7897, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7898, (Optr)&t_send1, (Optr)PSend7899, (Optr)&t_method_return);
    Block PBlock7894 = new_Block_with(PArray7895, empty_Array, PThreadedCode7896, 2, PSend7897, PSend7899);
    // new. 
    Send PSend7900 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend7901 = new_Send((Optr)PBlock7894, SMB_value_, 1, (Optr)PSend7900);
    Array PThreadedCode7885 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign7886, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7888, (Optr)&t_send0, (Optr)PSend7887, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7889, (Optr)&t_send1, (Optr)PSend7890, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7891, (Optr)&t_send0, (Optr)PSend7892, (Optr)&t_send1, (Optr)PSend7893, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock7894, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend7900, (Optr)&t_send1, (Optr)PSend7901, (Optr)&t_method_return);
    Method PMethod7883 = new_Method_with(empty_Array, PArray7884, empty_Array, PThreadedCode7885, 4, PAssign7886, PSend7890, PSend7893, PSend7901);
    
    MethodClosure MC_SMB_asAliased = new_MethodClosure((Method)PMethod7883, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_asAliased, MC_SMB_asAliased);
}


static void init_SMB_fork() {
    Symbol SMB_fork = new_Symbol(L"fork");
    Symbol SMB_for_ = new_Symbol(L"for:");
    // for:. 
    Send PSend7904 = new_Send((Optr)PThread_classReference, SMB_for_, 1, (Optr)self);
    Array PThreadedCode7903 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7904, (Optr)&t_method_return);
    Method PMethod7902 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7903, 1, PSend7904);
    
    MethodClosure MC_SMB_fork = new_MethodClosure((Method)PMethod7902, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_fork, MC_SMB_fork);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7907 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7906 = new_Array_with(1, (Optr)PAnnotation7907);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend7909 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7910 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7909);
    Array PThreadedCode7908 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7909, (Optr)&t_send1, (Optr)PSend7910, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7905 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray7906, PThreadedCode7908, 1, PSend7910);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PReflectionMethod7905, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray7912 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7915 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7917 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7918 = new_Send((Optr)VAR_aClosure_0_0, SMB_species, 0);
    // =. 
    Send PSend7919 = new_Send((Optr)PSend7917, SMB__equals_, 1, (Optr)PSend7918);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7923 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7922 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7923, (Optr)&t_block_return);
    Block PBlock7921 = new_Block_with(empty_Array, empty_Array, PThreadedCode7922, 1, PSend7923);
    // ifFalse:. 
    Send PSend7920 = new_Send((Optr)PSend7919, SMB_ifFalse_, 1, (Optr)PBlock7921);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend7924 = new_Send((Optr)self, SMB_code, 0);
    // code. 
    Send PSend7925 = new_Send((Optr)VAR_aClosure_0_0, SMB_code, 0);
    // =. 
    Send PSend7926 = new_Send((Optr)PSend7924, SMB__equals_, 1, (Optr)PSend7925);
    Array PThreadedCode7916 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7917, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend7918, (Optr)&t_send1, (Optr)PSend7919, (Optr)&t_send_ifFalse_, (Optr)PSend7920, (Optr)PBlock7921, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7924, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend7925, (Optr)&t_send1, (Optr)PSend7926, (Optr)&t_method_return);
    Block PBlock7914 = new_Block_with(PArray7915, empty_Array, PThreadedCode7916, 2, PSend7920, PSend7926);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7927 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7914);
    Array PThreadedCode7913 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7914, (Optr)&t_send1, (Optr)PSend7927, (Optr)&t_method_return);
    Method PMethod7911 = new_Method_with(PArray7912, empty_Array, empty_Array, PThreadedCode7913, 1, PSend7927);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7911, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anArg_0_0 = new_Variable_named(L"anArg", 0);
    Array PArray7929 = new_Array_with(1, (Optr)VAR_anArg_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Annotation PAnnotation7931 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValue_message_);
    Array PArray7930 = new_Array_with(1, (Optr)PAnnotation7931);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend7933 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_anArg_0_0);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7934 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7933);
    Array PThreadedCode7932 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anArg_0_0, (Optr)&t_send1, (Optr)PSend7933, (Optr)&t_send1, (Optr)PSend7934, (Optr)&t_method_return);
    ReflectionMethod PReflectionMethod7928 = new_ReflectionMethod_with(PArray7929, empty_Array, PArray7930, PThreadedCode7932, 1, PSend7934);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PReflectionMethod7928, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray7936 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlockClosure_ = new_Symbol(L"visitBlockClosure:");
    // visitBlockClosure:. 
    Send PSend7938 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlockClosure_, 1, (Optr)self);
    Array PThreadedCode7937 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7938, (Optr)&t_method_return);
    Method PMethod7935 = new_Method_with(PArray7936, empty_Array, empty_Array, PThreadedCode7937, 1, PSend7938);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod7935, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_BlockClosure = new_Symbol(L"Runtime.BlockClosure");
    Annotation PAnnotation7941 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_numArgs, (Optr)SMB_Runtime_minus_BlockClosure);
    Array PArray7940 = new_Array_with(1, (Optr)PAnnotation7941);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend7943 = new_Send((Optr)slot_Runtime_Closure_code, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7944 = new_Send((Optr)PSend7943, SMB_size, 0);
    Array PThreadedCode7942 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend7943, (Optr)&t_send0, (Optr)PSend7944, (Optr)&t_method_return);
    NativeMethod PNativeMethod7939 = new_NativeMethod_with(empty_Array, empty_Array, PArray7940, PThreadedCode7942, 1, PSend7944);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PNativeMethod7939, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray7946 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Annotation PAnnotation7948 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_blockclosureValueWithArguments_message_);
    Array PArray7947 = new_Array_with(1, (Optr)PAnnotation7948);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7950 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode7949 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7950, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod7945 = new_ReflectionMethod_with(PArray7946, empty_Array, PArray7947, PThreadedCode7949, 2, PSend7950, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PReflectionMethod7945, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray7952 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray7953 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7956 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend7959 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign7958 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend7959);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend7960 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7964 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7965 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7964);
    Array PThreadedCode7963 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7964, (Optr)&t_send1, (Optr)PSend7965, (Optr)&t_block_return);
    Block PBlock7962 = new_Block_with(empty_Array, empty_Array, PThreadedCode7963, 1, PSend7965);
    // ifTrue:. 
    Send PSend7961 = new_Send((Optr)PSend7960, SMB_ifTrue_, 1, (Optr)PBlock7962);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7966 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend7967 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend7966);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7971 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend7972 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7971);
    Array PThreadedCode7970 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend7971, (Optr)&t_send1, (Optr)PSend7972, (Optr)&t_block_return);
    Block PBlock7969 = new_Block_with(empty_Array, empty_Array, PThreadedCode7970, 1, PSend7972);
    // ifTrue:. 
    Send PSend7968 = new_Send((Optr)PSend7967, SMB_ifTrue_, 1, (Optr)PBlock7969);
    // size. 
    Send PSend7973 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend7974 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend7973);
    // size. 
    Send PSend7978 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend7979 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend7978);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7980 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend7979);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend7981 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend7980);
    // valueWithArguments:. 
    Send PSend7982 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7981);
    // escape:. 
    Send PSend7983 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7982);
    Array PThreadedCode7977 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7978, (Optr)&t_send1, (Optr)PSend7979, (Optr)&t_send1, (Optr)PSend7980, (Optr)&t_send1, (Optr)PSend7981, (Optr)&t_send1, (Optr)PSend7982, (Optr)&t_send1, (Optr)PSend7983, (Optr)&t_block_return);
    Block PBlock7976 = new_Block_with(empty_Array, empty_Array, PThreadedCode7977, 1, PSend7983);
    // ifTrue:. 
    Send PSend7975 = new_Send((Optr)PSend7974, SMB_ifTrue_, 1, (Optr)PBlock7976);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend7984 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend7985 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7984);
    Array PThreadedCode7957 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign7958, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7959, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7960, (Optr)&t_send_ifTrue_, (Optr)PSend7961, (Optr)PBlock7962, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7966, (Optr)&t_send1, (Optr)PSend7967, (Optr)&t_send_ifTrue_, (Optr)PSend7968, (Optr)PBlock7969, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7973, (Optr)&t_send1, (Optr)PSend7974, (Optr)&t_send_ifTrue_, (Optr)PSend7975, (Optr)PBlock7976, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend7984, (Optr)&t_send1, (Optr)PSend7985, (Optr)&t_method_return);
    Block PBlock7955 = new_Block_with(PArray7956, empty_Array, PThreadedCode7957, 5, PAssign7958, PSend7961, PSend7968, PSend7975, PSend7985);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7986 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7955);
    Array PThreadedCode7954 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7955, (Optr)&t_send1, (Optr)PSend7986, (Optr)&t_method_return);
    Method PMethod7951 = new_Method_with(PArray7952, PArray7953, empty_Array, PThreadedCode7954, 1, PSend7986);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod7951, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_whileFalse() {
    Symbol SMB_whileFalse = new_Symbol(L"whileFalse");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7989 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // whileFalse. 
    Send PSend7993 = new_Send((Optr)self, SMB_whileFalse, 0);
    Array PThreadedCode7992 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7993, (Optr)&t_block_return);
    Block PBlock7991 = new_Block_with(empty_Array, empty_Array, PThreadedCode7992, 1, PSend7993);
    // ifFalse:. 
    Send PSend7990 = new_Send((Optr)PSend7989, SMB_ifFalse_, 1, (Optr)PBlock7991);
    Array PThreadedCode7988 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7989, (Optr)&t_send_ifFalse_, (Optr)PSend7990, (Optr)PBlock7991, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7987 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7988, 2, PSend7990, self);
    
    MethodClosure MC_SMB_whileFalse = new_MethodClosure((Method)PMethod7987, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse, MC_SMB_whileFalse);
}


static void init_SMB_ensure_() {
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7995 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7998 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray8001 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8003 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend8004 = new_Send((Optr)VAR_ex_2_0, SMB_signal, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8005 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8004);
    Array PThreadedCode8002 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8003, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend8004, (Optr)&t_send1, (Optr)PSend8005, (Optr)&t_method_return);
    Block PBlock8000 = new_Block_with(PArray8001, empty_Array, PThreadedCode8002, 2, PSend8003, PSend8005);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend8006 = new_Send((Optr)self, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock8000);
    // value. 
    Send PSend8007 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode7999 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock8000, (Optr)&t_send2, (Optr)PSend8006, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8007, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7997 = new_Block_with(PArray7998, empty_Array, PThreadedCode7999, 3, PSend8006, PSend8007, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8008 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7997);
    Array PThreadedCode7996 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7997, (Optr)&t_send1, (Optr)PSend8008, (Optr)&t_method_return);
    Method PMethod7994 = new_Method_with(PArray7995, empty_Array, empty_Array, PThreadedCode7996, 1, PSend8008);
    
    MethodClosure MC_SMB_ensure_ = new_MethodClosure((Method)PMethod7994, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_ensure_, MC_SMB_ensure_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode8010 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_BlockClosure_context, (Optr)&t_method_return);
    Method PMethod8009 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8010, 1, slot_Runtime_BlockClosure_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod8009, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_context, MC_SMB_context);
}


static void init_SMB_whileFalse_() {
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8012 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8014 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // value. 
    Send PSend8018 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    // whileFalse:. 
    Send PSend8019 = new_Send((Optr)self, SMB_whileFalse_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8017 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend8018, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend8019, (Optr)&t_block_return);
    Block PBlock8016 = new_Block_with(empty_Array, empty_Array, PThreadedCode8017, 2, PSend8018, PSend8019);
    // ifFalse:. 
    Send PSend8015 = new_Send((Optr)PSend8014, SMB_ifFalse_, 1, (Optr)PBlock8016);
    Array PThreadedCode8013 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8014, (Optr)&t_send_ifFalse_, (Optr)PSend8015, (Optr)PBlock8016, (Optr)&t_method_return);
    Method PMethod8011 = new_Method_with(PArray8012, empty_Array, empty_Array, PThreadedCode8013, 1, PSend8015);
    
    MethodClosure MC_SMB_whileFalse_ = new_MethodClosure((Method)PMethod8011, BlockClosure_Class);
    store_method(BlockClosure_Class, SMB_whileFalse_, MC_SMB_whileFalse_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8022 = new_Send((Optr)PEGBlock_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode8021 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGBlock_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8022, (Optr)&t_method_return);
    Method PMethod8020 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8021, 1, PSend8022);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod8020, BlockClosure_Class);
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