#include <lib/class/PEG/OneOrMoreExpression.h>


Optr layout_PEG_OneOrMoreExpression_Class_class;
Optr layout_PEG_OneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19882 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19885 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19887 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19891 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19890 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19891, (Optr)&t_block_return);
    Block PBlock19889 = new_Block_with(empty_Array, empty_Array, PThreadedCode19890, 1, PSend19891);
    // ifFalse:. 
    Send PSend19888 = new_Send((Optr)PSend19887, SMB_ifFalse_, 1, (Optr)PBlock19889);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19894 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // parseOn:. 
    Send PSend19895 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19893 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19894, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19895, (Optr)&t_block_return);
    Block PBlock19892 = new_Block_with(empty_Array, empty_Array, PThreadedCode19893, 2, PSend19894, PSend19895);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19896 = new_Send((Optr)PBlock19892, SMB_whileTrue, 0);
    Array PThreadedCode19886 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19887, (Optr)&t_send_ifFalse_, (Optr)PSend19888, (Optr)PBlock19889, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19892, (Optr)&t_send0, (Optr)PSend19896, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19884 = new_Block_with(PArray19885, empty_Array, PThreadedCode19886, 3, PSend19888, PSend19896, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19897 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19884);
    Array PThreadedCode19883 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19884, (Optr)&t_send1, (Optr)PSend19897, (Optr)&t_method_return);
    Method PMethod19881 = new_Method_with(PArray19882, empty_Array, empty_Array, PThreadedCode19883, 1, PSend19897);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19881, PEG_OneOrMoreExpression_Class);
    store_method(PEG_OneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19899 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19902 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19904 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19908 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19907 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19908, (Optr)&t_block_return);
    Block PBlock19906 = new_Block_with(empty_Array, empty_Array, PThreadedCode19907, 1, PSend19908);
    // ifFalse:. 
    Send PSend19905 = new_Send((Optr)PSend19904, SMB_ifFalse_, 1, (Optr)PBlock19906);
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    // omitSkipWhitespace. 
    Send PSend19911 = new_Send((Optr)VAR_input_0_0, SMB_omitSkipWhitespace, 0);
    // omitMatch:. 
    Send PSend19912 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19910 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19911, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19912, (Optr)&t_block_return);
    Block PBlock19909 = new_Block_with(empty_Array, empty_Array, PThreadedCode19910, 2, PSend19911, PSend19912);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19913 = new_Send((Optr)PBlock19909, SMB_whileTrue, 0);
    Array PThreadedCode19903 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19904, (Optr)&t_send_ifFalse_, (Optr)PSend19905, (Optr)PBlock19906, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19909, (Optr)&t_send0, (Optr)PSend19913, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19901 = new_Block_with(PArray19902, empty_Array, PThreadedCode19903, 3, PSend19905, PSend19913, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19914 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19901);
    Array PThreadedCode19900 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19901, (Optr)&t_send1, (Optr)PSend19914, (Optr)&t_method_return);
    Method PMethod19898 = new_Method_with(PArray19899, empty_Array, empty_Array, PThreadedCode19900, 1, PSend19914);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19898, PEG_OneOrMoreExpression_Class);
    store_method(PEG_OneOrMoreExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGOneOrMoreExpression_layout() {
    layout_PEG_OneOrMoreExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_OneOrMoreExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_OneOrMoreExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_OneOrMoreExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_OneOrMoreExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_OneOrMoreExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OneOrMoreExpression = new_Symbol(L"OneOrMoreExpression");
    layout_PEG_OneOrMoreExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_OneOrMoreExpression)->values[0] = slot_PEG_ZeroOrMoreExpression_child; // child 
    PEG_OneOrMoreExpression_Class = (Class)new_Class(PEG_ZeroOrMoreExpression_Class, layout_PEG_OneOrMoreExpression_Class_class);
    PEG_OneOrMoreExpression_Class->layout = layout_PEG_OneOrMoreExpression;
    PEG_OneOrMoreExpression_Class->name = SMB_OneOrMoreExpression;
    
}

void init_PEG_PEGOneOrMoreExpression_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}