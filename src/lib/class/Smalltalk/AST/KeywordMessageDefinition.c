#include <lib/class/Smalltalk/AST/KeywordMessageDefinition.h>


Optr layout_Smalltalk_AST_KeywordMessageDefinition_Class_class;
Optr slot_Smalltalk_AST_KeywordMessageDefinition_parameters;
Optr layout_Smalltalk_AST_KeywordMessageDefinition;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray16048 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign16050 = new_Assign((Optr)slot_Smalltalk_AST_KeywordMessageDefinition_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode16049 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16050, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16047 = new_Method_with(PArray16048, empty_Array, empty_Array, PThreadedCode16049, 2, PAssign16050, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod16047, Smalltalk_AST_KeywordMessageDefinition_Class);
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray16052 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16055 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper16057 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16061 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16060 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16061, (Optr)&t_block_return);
    Block PBlock16059 = new_Block_with(empty_Array, empty_Array, PThreadedCode16060, 1, PSend16061);
    // ifFalse:. 
    Send PSend16058 = new_Send((Optr)PSuper16057, SMB_ifFalse_, 1, (Optr)PBlock16059);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend16062 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend16063 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend16064 = new_Send((Optr)PSend16062, SMB__equals_, 1, (Optr)PSend16063);
    // escape:. 
    Send PSend16068 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16067 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16068, (Optr)&t_block_return);
    Block PBlock16066 = new_Block_with(empty_Array, empty_Array, PThreadedCode16067, 1, PSend16068);
    // ifFalse:. 
    Send PSend16065 = new_Send((Optr)PSend16064, SMB_ifFalse_, 1, (Optr)PBlock16066);
    Array PThreadedCode16056 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper16057, (Optr)&t_send_ifFalse_, (Optr)PSend16058, (Optr)PBlock16059, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16062, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16063, (Optr)&t_send1, (Optr)PSend16064, (Optr)&t_send_ifFalse_, (Optr)PSend16065, (Optr)PBlock16066, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock16054 = new_Block_with(PArray16055, empty_Array, PThreadedCode16056, 3, PSend16058, PSend16065, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16069 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16054);
    Array PThreadedCode16053 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16054, (Optr)&t_send1, (Optr)PSend16069, (Optr)&t_method_return);
    Method PMethod16051 = new_Method_with(PArray16052, empty_Array, empty_Array, PThreadedCode16053, 1, PSend16069);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod16051, Smalltalk_AST_KeywordMessageDefinition_Class);
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode16071 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_KeywordMessageDefinition_parameters, (Optr)&t_method_return);
    Method PMethod16070 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16071, 1, slot_Smalltalk_AST_KeywordMessageDefinition_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod16070, Smalltalk_AST_KeywordMessageDefinition_Class);
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray16073 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitKeywordMessageDefinition_ = new_Symbol(L"visitKeywordMessageDefinition:");
    // visitKeywordMessageDefinition:. 
    Send PSend16075 = new_Send((Optr)VAR_visitor_0_0, SMB_visitKeywordMessageDefinition_, 1, (Optr)self);
    Array PThreadedCode16074 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16075, (Optr)&t_method_return);
    Method PMethod16072 = new_Method_with(PArray16073, empty_Array, empty_Array, PThreadedCode16074, 1, PSend16075);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16072, Smalltalk_AST_KeywordMessageDefinition_Class);
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Smalltalk_AST_ASTKeywordMessageDefinition_layout() {
    layout_Smalltalk_AST_KeywordMessageDefinition_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_KeywordMessageDefinition = new_Symbol(L"KeywordMessageDefinition");
    slot_Smalltalk_AST_KeywordMessageDefinition_parameters = (Optr)new_Slot(1, L"parameters");
    layout_Smalltalk_AST_KeywordMessageDefinition = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_KeywordMessageDefinition)->values[1] = slot_Smalltalk_AST_KeywordMessageDefinition_parameters; // parameters 
    Smalltalk_AST_KeywordMessageDefinition_Class = (Class)new_Class(Smalltalk_AST_KeywordSelector_Class, layout_Smalltalk_AST_KeywordMessageDefinition_Class_class);
    Smalltalk_AST_KeywordMessageDefinition_Class->layout = layout_Smalltalk_AST_KeywordMessageDefinition;
    Smalltalk_AST_KeywordMessageDefinition_Class->name = SMB_KeywordMessageDefinition;
    
}

void init_Smalltalk_AST_ASTKeywordMessageDefinition_methods() {
    init_SMB_parameters_();
    init_SMB__equals_();
    init_SMB_parameters();
    init_SMB_accept_();
    
}