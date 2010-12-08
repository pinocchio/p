#include <lib/class/PEG/StrongOneOrMoreExpression.h>


Optr layout_PEG_StrongOneOrMoreExpression_Class_class;
Optr layout_PEG_StrongOneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19928 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19931 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19933 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19937 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19936 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19937, (Optr)&t_block_return);
    Block PBlock19935 = new_Block_with(empty_Array, empty_Array, PThreadedCode19936, 1, PSend19937);
    // ifFalse:. 
    Send PSend19934 = new_Send((Optr)PSend19933, SMB_ifFalse_, 1, (Optr)PBlock19935);
    // parseOn:. 
    Send PSend19940 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19939 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19940, (Optr)&t_block_return);
    Block PBlock19938 = new_Block_with(empty_Array, empty_Array, PThreadedCode19939, 1, PSend19940);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19941 = new_Send((Optr)PBlock19938, SMB_whileTrue, 0);
    Array PThreadedCode19932 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19933, (Optr)&t_send_ifFalse_, (Optr)PSend19934, (Optr)PBlock19935, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19938, (Optr)&t_send0, (Optr)PSend19941, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19930 = new_Block_with(PArray19931, empty_Array, PThreadedCode19932, 3, PSend19934, PSend19941, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19942 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19930);
    Array PThreadedCode19929 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19930, (Optr)&t_send1, (Optr)PSend19942, (Optr)&t_method_return);
    Method PMethod19927 = new_Method_with(PArray19928, empty_Array, empty_Array, PThreadedCode19929, 1, PSend19942);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19927, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19944 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19947 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19949 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19953 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19952 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19953, (Optr)&t_block_return);
    Block PBlock19951 = new_Block_with(empty_Array, empty_Array, PThreadedCode19952, 1, PSend19953);
    // ifFalse:. 
    Send PSend19950 = new_Send((Optr)PSend19949, SMB_ifFalse_, 1, (Optr)PBlock19951);
    // omitMatch:. 
    Send PSend19956 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19955 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19956, (Optr)&t_block_return);
    Block PBlock19954 = new_Block_with(empty_Array, empty_Array, PThreadedCode19955, 1, PSend19956);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19957 = new_Send((Optr)PBlock19954, SMB_whileTrue, 0);
    Array PThreadedCode19948 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19949, (Optr)&t_send_ifFalse_, (Optr)PSend19950, (Optr)PBlock19951, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19954, (Optr)&t_send0, (Optr)PSend19957, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19946 = new_Block_with(PArray19947, empty_Array, PThreadedCode19948, 3, PSend19950, PSend19957, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19958 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19946);
    Array PThreadedCode19945 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19946, (Optr)&t_send1, (Optr)PSend19958, (Optr)&t_method_return);
    Method PMethod19943 = new_Method_with(PArray19944, empty_Array, empty_Array, PThreadedCode19945, 1, PSend19958);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19943, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGStrongOneOrMoreExpression_layout() {
    layout_PEG_StrongOneOrMoreExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_StrongOneOrMoreExpression = new_Symbol(L"StrongOneOrMoreExpression");
    layout_PEG_StrongOneOrMoreExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_StrongOneOrMoreExpression)->values[0] = slot_PEG_ZeroOrMoreExpression_child; // child 
    PEG_StrongOneOrMoreExpression_Class = (Class)new_Class(PEG_StrongZeroOrMoreExpression_Class, layout_PEG_StrongOneOrMoreExpression_Class_class);
    PEG_StrongOneOrMoreExpression_Class->layout = layout_PEG_StrongOneOrMoreExpression;
    PEG_StrongOneOrMoreExpression_Class->name = SMB_StrongOneOrMoreExpression;
    
}

void init_PEG_PEGStrongOneOrMoreExpression_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}