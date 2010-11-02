#include <lib/class/Smalltalk/AST/BinaryMessageDefinition.h>


Optr layout_Smalltalk_AST_BinaryMessageDefinition_Class_class;
Optr slot_Smalltalk_AST_BinaryMessageDefinition_parameter;
Optr layout_Smalltalk_AST_BinaryMessageDefinition;


static void init_SMB_parameter() {
    Symbol SMB_parameter = new_Symbol(L"parameter");
    Array PThreadedCode15658 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryMessageDefinition_parameter, (Optr)&t_method_return);
    Method PMethod15657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15658, 1, slot_Smalltalk_AST_BinaryMessageDefinition_parameter);
    
    MethodClosure MC_SMB_parameter = new_MethodClosure((Method)PMethod15657, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB_parameter, MC_SMB_parameter);
}


static void init_SMB_parameter_() {
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15660 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15662 = new_Assign((Optr)slot_Smalltalk_AST_BinaryMessageDefinition_parameter, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15661 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15662, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15659 = new_Method_with(PArray15660, empty_Array, empty_Array, PThreadedCode15661, 2, PAssign15662, self);
    
    MethodClosure MC_SMB_parameter_ = new_MethodClosure((Method)PMethod15659, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB_parameter_, MC_SMB_parameter_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15664 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15667 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15669 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15673 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15672 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15673, (Optr)&t_block_return);
    Block PBlock15671 = new_Block_with(empty_Array, empty_Array, PThreadedCode15672, 1, PSend15673);
    // ifFalse:. 
    Send PSend15670 = new_Send((Optr)PSuper15669, SMB_ifFalse_, 1, (Optr)PBlock15671);
    Symbol SMB_parameter = new_Symbol(L"parameter");
    // parameter. 
    Send PSend15674 = new_Send((Optr)self, SMB_parameter, 0);
    // parameter. 
    Send PSend15675 = new_Send((Optr)VAR_other_0_0, SMB_parameter, 0);
    // =. 
    Send PSend15676 = new_Send((Optr)PSend15674, SMB__equals_, 1, (Optr)PSend15675);
    // escape:. 
    Send PSend15680 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15679 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15680, (Optr)&t_block_return);
    Block PBlock15678 = new_Block_with(empty_Array, empty_Array, PThreadedCode15679, 1, PSend15680);
    // ifFalse:. 
    Send PSend15677 = new_Send((Optr)PSend15676, SMB_ifFalse_, 1, (Optr)PBlock15678);
    Array PThreadedCode15668 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15669, (Optr)&t_send_ifFalse_, (Optr)PSend15670, (Optr)PBlock15671, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15674, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15675, (Optr)&t_send1, (Optr)PSend15676, (Optr)&t_send_ifFalse_, (Optr)PSend15677, (Optr)PBlock15678, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15666 = new_Block_with(PArray15667, empty_Array, PThreadedCode15668, 3, PSend15670, PSend15677, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15681 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15666);
    Array PThreadedCode15665 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15666, (Optr)&t_send1, (Optr)PSend15681, (Optr)&t_method_return);
    Method PMethod15663 = new_Method_with(PArray15664, empty_Array, empty_Array, PThreadedCode15665, 1, PSend15681);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15663, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Symbol SMB_parameter = new_Symbol(L"parameter");
    // parameter. 
    Send PSend15684 = new_Send((Optr)self, SMB_parameter, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend15685 = new_Send((Optr)OrderedCollection_classReference, SMB_with_, 1, (Optr)PSend15684);
    Array PThreadedCode15683 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15684, (Optr)&t_send1, (Optr)PSend15685, (Optr)&t_method_return);
    Method PMethod15682 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15683, 1, PSend15685);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15682, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15687 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryMessageDefinition_ = new_Symbol(L"visitBinaryMessageDefinition:");
    // visitBinaryMessageDefinition:. 
    Send PSend15689 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryMessageDefinition_, 1, (Optr)self);
    Array PThreadedCode15688 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15689, (Optr)&t_method_return);
    Method PMethod15686 = new_Method_with(PArray15687, empty_Array, empty_Array, PThreadedCode15688, 1, PSend15689);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15686, Smalltalk_AST_BinaryMessageDefinition_Class);
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