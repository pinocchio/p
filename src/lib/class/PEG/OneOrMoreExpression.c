#include <lib/class/PEG/OneOrMoreExpression.h>


Optr layout_PEG_OneOrMoreExpression_Class_class;
Optr layout_PEG_OneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19914 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19917 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19919 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19923 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19922 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19923, (Optr)&t_block_return);
    Block PBlock19921 = new_Block_with(empty_Array, empty_Array, PThreadedCode19922, 1, PSend19923);
    // ifFalse:. 
    Send PSend19920 = new_Send((Optr)PSend19919, SMB_ifFalse_, 1, (Optr)PBlock19921);
    Symbol SMB_skipWhitespace = new_Symbol(L"skipWhitespace");
    // skipWhitespace. 
    Send PSend19926 = new_Send((Optr)VAR_input_0_0, SMB_skipWhitespace, 0);
    // parseOn:. 
    Send PSend19927 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19925 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19926, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19927, (Optr)&t_block_return);
    Block PBlock19924 = new_Block_with(empty_Array, empty_Array, PThreadedCode19925, 2, PSend19926, PSend19927);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19928 = new_Send((Optr)PBlock19924, SMB_whileTrue, 0);
    Array PThreadedCode19918 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19919, (Optr)&t_send_ifFalse_, (Optr)PSend19920, (Optr)PBlock19921, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19924, (Optr)&t_send0, (Optr)PSend19928, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19916 = new_Block_with(PArray19917, empty_Array, PThreadedCode19918, 3, PSend19920, PSend19928, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19929 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19916);
    Array PThreadedCode19915 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19916, (Optr)&t_send1, (Optr)PSend19929, (Optr)&t_method_return);
    Method PMethod19913 = new_Method_with(PArray19914, empty_Array, empty_Array, PThreadedCode19915, 1, PSend19929);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19913, PEG_OneOrMoreExpression_Class);
    store_method(PEG_OneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19931 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19934 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19936 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19940 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19939 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19940, (Optr)&t_block_return);
    Block PBlock19938 = new_Block_with(empty_Array, empty_Array, PThreadedCode19939, 1, PSend19940);
    // ifFalse:. 
    Send PSend19937 = new_Send((Optr)PSend19936, SMB_ifFalse_, 1, (Optr)PBlock19938);
    Symbol SMB_omitSkipWhitespace = new_Symbol(L"omitSkipWhitespace");
    // omitSkipWhitespace. 
    Send PSend19943 = new_Send((Optr)VAR_input_0_0, SMB_omitSkipWhitespace, 0);
    // omitMatch:. 
    Send PSend19944 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19942 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19943, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19944, (Optr)&t_block_return);
    Block PBlock19941 = new_Block_with(empty_Array, empty_Array, PThreadedCode19942, 2, PSend19943, PSend19944);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19945 = new_Send((Optr)PBlock19941, SMB_whileTrue, 0);
    Array PThreadedCode19935 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19936, (Optr)&t_send_ifFalse_, (Optr)PSend19937, (Optr)PBlock19938, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19941, (Optr)&t_send0, (Optr)PSend19945, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19933 = new_Block_with(PArray19934, empty_Array, PThreadedCode19935, 3, PSend19937, PSend19945, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19946 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19933);
    Array PThreadedCode19932 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19933, (Optr)&t_send1, (Optr)PSend19946, (Optr)&t_method_return);
    Method PMethod19930 = new_Method_with(PArray19931, empty_Array, empty_Array, PThreadedCode19932, 1, PSend19946);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19930, PEG_OneOrMoreExpression_Class);
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