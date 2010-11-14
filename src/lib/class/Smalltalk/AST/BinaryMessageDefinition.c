#include <lib/class/Smalltalk/AST/BinaryMessageDefinition.h>


Optr layout_Smalltalk_AST_BinaryMessageDefinition_Class_class;
Optr slot_Smalltalk_AST_BinaryMessageDefinition_parameter;
Optr layout_Smalltalk_AST_BinaryMessageDefinition;


static void init_SMB_parameter() {
    Symbol SMB_parameter = new_Symbol(L"parameter");
    Array PThreadedCode16018 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BinaryMessageDefinition_parameter, (Optr)&t_method_return);
    Method PMethod16017 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16018, 1, slot_Smalltalk_AST_BinaryMessageDefinition_parameter);
    
    MethodClosure MC_SMB_parameter = new_MethodClosure((Method)PMethod16017, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB_parameter, MC_SMB_parameter);
}


static void init_SMB_parameter_() {
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16020 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16022 = new_Assign((Optr)slot_Smalltalk_AST_BinaryMessageDefinition_parameter, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16021 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16022, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16019 = new_Method_with(PArray16020, empty_Array, empty_Array, PThreadedCode16021, 2, PAssign16022, self);
    
    MethodClosure MC_SMB_parameter_ = new_MethodClosure((Method)PMethod16019, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB_parameter_, MC_SMB_parameter_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray16024 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16027 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper16029 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16033 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16032 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16033, (Optr)&t_block_return);
    Block PBlock16031 = new_Block_with(empty_Array, empty_Array, PThreadedCode16032, 1, PSend16033);
    // ifFalse:. 
    Send PSend16030 = new_Send((Optr)PSuper16029, SMB_ifFalse_, 1, (Optr)PBlock16031);
    Symbol SMB_parameter = new_Symbol(L"parameter");
    // parameter. 
    Send PSend16034 = new_Send((Optr)self, SMB_parameter, 0);
    // parameter. 
    Send PSend16035 = new_Send((Optr)VAR_other_0_0, SMB_parameter, 0);
    // =. 
    Send PSend16036 = new_Send((Optr)PSend16034, SMB__equals_, 1, (Optr)PSend16035);
    // escape:. 
    Send PSend16040 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16039 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16040, (Optr)&t_block_return);
    Block PBlock16038 = new_Block_with(empty_Array, empty_Array, PThreadedCode16039, 1, PSend16040);
    // ifFalse:. 
    Send PSend16037 = new_Send((Optr)PSend16036, SMB_ifFalse_, 1, (Optr)PBlock16038);
    Array PThreadedCode16028 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper16029, (Optr)&t_send_ifFalse_, (Optr)PSend16030, (Optr)PBlock16031, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16034, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16035, (Optr)&t_send1, (Optr)PSend16036, (Optr)&t_send_ifFalse_, (Optr)PSend16037, (Optr)PBlock16038, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock16026 = new_Block_with(PArray16027, empty_Array, PThreadedCode16028, 3, PSend16030, PSend16037, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16041 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16026);
    Array PThreadedCode16025 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16026, (Optr)&t_send1, (Optr)PSend16041, (Optr)&t_method_return);
    Method PMethod16023 = new_Method_with(PArray16024, empty_Array, empty_Array, PThreadedCode16025, 1, PSend16041);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod16023, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Symbol SMB_parameter = new_Symbol(L"parameter");
    // parameter. 
    Send PSend16044 = new_Send((Optr)self, SMB_parameter, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend16045 = new_Send((Optr)OrderedCollection_classReference, SMB_with_, 1, (Optr)PSend16044);
    Array PThreadedCode16043 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16044, (Optr)&t_send1, (Optr)PSend16045, (Optr)&t_method_return);
    Method PMethod16042 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16043, 1, PSend16045);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod16042, Smalltalk_AST_BinaryMessageDefinition_Class);
    store_method(Smalltalk_AST_BinaryMessageDefinition_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray16047 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBinaryMessageDefinition_ = new_Symbol(L"visitBinaryMessageDefinition:");
    // visitBinaryMessageDefinition:. 
    Send PSend16049 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBinaryMessageDefinition_, 1, (Optr)self);
    Array PThreadedCode16048 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16049, (Optr)&t_method_return);
    Method PMethod16046 = new_Method_with(PArray16047, empty_Array, empty_Array, PThreadedCode16048, 1, PSend16049);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16046, Smalltalk_AST_BinaryMessageDefinition_Class);
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