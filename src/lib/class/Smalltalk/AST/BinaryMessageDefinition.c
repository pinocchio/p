#include <lib/class/Smalltalk/AST/BinaryMessageDefinition.h>


Optr layout_Smalltalk_AST_BinaryMessageDefinition_Class_class;
Optr slot_Smalltalk_AST_BinaryMessageDefinition_parameter;
Optr layout_Smalltalk_AST_BinaryMessageDefinition;


static void init_SMB_parameter() {
    Symbol SMB_parameter = new_Symbol(L"parameter");
    Array PThreadedCode15829 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryMessageDefinition_parameter, (Optr)&t_method_return);
    Method PMethod15828 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15829, 1, slot_Smalltalk_AST_BinaryMessageDefinition_parameter);
    
    MethodClosure MC_SMB_parameter = new_MethodClosure((Method)PMethod15828, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB_parameter, MC_SMB_parameter);
}


static void init_SMB_parameter_() {
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15831 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15833 = new_Assign((Optr)slot_Smalltalk_AST_BinaryMessageDefinition_parameter, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15832 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15833, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15830 = new_Method_with(PArray15831, empty_Array, empty_Array, PThreadedCode15832, 2, PAssign15833, self);
    
    MethodClosure MC_SMB_parameter_ = new_MethodClosure((Method)PMethod15830, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB_parameter_, MC_SMB_parameter_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15835 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15838 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15840 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15844 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15843 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15844, (Optr)&t_block_return);
    Block PBlock15842 = new_Block_with(empty_Array, empty_Array, PThreadedCode15843, 1, PSend15844);
    // ifFalse:. 
    Send PSend15841 = new_Send((Optr)PSuper15840, SMB_ifFalse_, 1, (Optr)PBlock15842);
    Symbol SMB_parameter = new_Symbol(L"parameter");
    // parameter. 
    Send PSend15845 = new_Send((Optr)self, SMB_parameter, 0);
    // parameter. 
    Send PSend15846 = new_Send((Optr)VAR_other_0_0, SMB_parameter, 0);
    // =. 
    Send PSend15847 = new_Send((Optr)PSend15845, SMB__equals_, 1, (Optr)PSend15846);
    // escape:. 
    Send PSend15851 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15850 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15851, (Optr)&t_block_return);
    Block PBlock15849 = new_Block_with(empty_Array, empty_Array, PThreadedCode15850, 1, PSend15851);
    // ifFalse:. 
    Send PSend15848 = new_Send((Optr)PSend15847, SMB_ifFalse_, 1, (Optr)PBlock15849);
    Array PThreadedCode15839 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15840, (Optr)&t_send_ifFalse_, (Optr)PSend15841, (Optr)PBlock15842, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15845, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15846, (Optr)&t_send1, (Optr)PSend15847, (Optr)&t_send_ifFalse_, (Optr)PSend15848, (Optr)PBlock15849, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15837 = new_Block_with(PArray15838, empty_Array, PThreadedCode15839, 3, PSend15841, PSend15848, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15852 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15837);
    Array PThreadedCode15836 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15837, (Optr)&t_send1, (Optr)PSend15852, (Optr)&t_method_return);
    Method PMethod15834 = new_Method_with(PArray15835, empty_Array, empty_Array, PThreadedCode15836, 1, PSend15852);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15834, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Symbol SMB_parameter = new_Symbol(L"parameter");
    // parameter. 
    Send PSend15855 = new_Send((Optr)self, SMB_parameter, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend15856 = new_Send((Optr)OrderedCollection_classReference, SMB_with_, 1, (Optr)PSend15855);
    Array PThreadedCode15854 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15855, (Optr)&t_send1, (Optr)PSend15856, (Optr)&t_method_return);
    Method PMethod15853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15854, 1, PSend15856);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15853, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15858 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryMessageDefinition_ = new_Symbol(L"visitBinaryMessageDefinition:");
    // visitBinaryMessageDefinition:. 
    Send PSend15860 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryMessageDefinition_, 1, (Optr)self);
    Array PThreadedCode15859 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15860, (Optr)&t_method_return);
    Method PMethod15857 = new_Method_with(PArray15858, empty_Array, empty_Array, PThreadedCode15859, 1, PSend15860);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15857, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Smalltalk_AST_ASTBinaryMessageDefinition_layout() {
    layout_Smalltalk_AST_BinaryMessageDefinition_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_BinaryMessageDefinition_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_BinaryMessageDefinition_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_BinaryMessageDefinition_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_BinaryMessageDefinition_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_BinaryMessageDefinition_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_BinaryMessageDefinition = new_Symbol(L"BinaryMessageDefinition");
    slot_Smalltalk_AST_BinaryMessageDefinition_parameter = (Optr)new_Slot(1, L"parameter");
    layout_Smalltalk_AST_BinaryMessageDefinition = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_BinaryMessageDefinition)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    ((Array)layout_Smalltalk_AST_BinaryMessageDefinition)->values[1] = slot_Smalltalk_AST_BinaryMessageDefinition_parameter; // parameter 
    Smalltalk_AST_BinaryMessageDefinition_Class = (Class)new_Class(Smalltalk_AST_BinarySelector_Class, layout_Smalltalk_AST_BinaryMessageDefinition_Class_class);
    Smalltalk_AST_BinaryMessageDefinition_Class->layout = layout_Smalltalk_AST_BinaryMessageDefinition;
    Smalltalk_AST_BinaryMessageDefinition_Class->name = SMB_BinaryMessageDefinition;
    
}

void init_Smalltalk_AST_ASTBinaryMessageDefinition_methods() {
    init_SMB_parameter();
    init_SMB_parameter_();
    init_SMB__equals_();
    init_SMB_parameters();
    init_SMB_accept_();
    
}