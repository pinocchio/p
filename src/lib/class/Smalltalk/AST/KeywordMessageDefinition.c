#include <lib/class/Smalltalk/AST/KeywordMessageDefinition.h>


Optr layout_Smalltalk_AST_KeywordMessageDefinition_Class_class;
Optr slot_Smalltalk_AST_KeywordMessageDefinition_parameters;
Optr layout_Smalltalk_AST_KeywordMessageDefinition;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15800 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15802 = new_Assign((Optr)slot_Smalltalk_AST_KeywordMessageDefinition_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15801 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15802, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15799 = new_Method_with(PArray15800, empty_Array, empty_Array, PThreadedCode15801, 2, PAssign15802, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod15799, Smalltalk_AST_KeywordMessageDefinition_Class);
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15804 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15807 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15809 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15813 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15812 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15813, (Optr)&t_block_return);
    Block PBlock15811 = new_Block_with(empty_Array, empty_Array, PThreadedCode15812, 1, PSend15813);
    // ifFalse:. 
    Send PSend15810 = new_Send((Optr)PSuper15809, SMB_ifFalse_, 1, (Optr)PBlock15811);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend15814 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend15815 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend15816 = new_Send((Optr)PSend15814, SMB__equals_, 1, (Optr)PSend15815);
    // escape:. 
    Send PSend15820 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15819 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15820, (Optr)&t_block_return);
    Block PBlock15818 = new_Block_with(empty_Array, empty_Array, PThreadedCode15819, 1, PSend15820);
    // ifFalse:. 
    Send PSend15817 = new_Send((Optr)PSend15816, SMB_ifFalse_, 1, (Optr)PBlock15818);
    Array PThreadedCode15808 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15809, (Optr)&t_send_ifFalse_, (Optr)PSend15810, (Optr)PBlock15811, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15814, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15815, (Optr)&t_send1, (Optr)PSend15816, (Optr)&t_send_ifFalse_, (Optr)PSend15817, (Optr)PBlock15818, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15806 = new_Block_with(PArray15807, empty_Array, PThreadedCode15808, 3, PSend15810, PSend15817, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15821 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15806);
    Array PThreadedCode15805 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15806, (Optr)&t_send1, (Optr)PSend15821, (Optr)&t_method_return);
    Method PMethod15803 = new_Method_with(PArray15804, empty_Array, empty_Array, PThreadedCode15805, 1, PSend15821);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15803, Smalltalk_AST_KeywordMessageDefinition_Class);
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode15823 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_KeywordMessageDefinition_parameters, (Optr)&t_method_return);
    Method PMethod15822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15823, 1, slot_Smalltalk_AST_KeywordMessageDefinition_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15822, Smalltalk_AST_KeywordMessageDefinition_Class);
    store_method(Smalltalk_AST_KeywordMessageDefinition_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15825 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitKeywordMessageDefinition_ = new_Symbol(L"visitKeywordMessageDefinition:");
    // visitKeywordMessageDefinition:. 
    Send PSend15827 = new_Send((Optr)VAR_visitor_0_0, SMB_visitKeywordMessageDefinition_, 1, (Optr)self);
    Array PThreadedCode15826 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15827, (Optr)&t_method_return);
    Method PMethod15824 = new_Method_with(PArray15825, empty_Array, empty_Array, PThreadedCode15826, 1, PSend15827);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15824, Smalltalk_AST_KeywordMessageDefinition_Class);
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