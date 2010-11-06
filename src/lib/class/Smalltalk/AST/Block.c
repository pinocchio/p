#include <lib/class/Smalltalk/AST/Block.h>


Optr layout_Smalltalk_AST_Block_Class_class;
Optr slot_Smalltalk_AST_Block_parameters;
Optr slot_Smalltalk_AST_Block_temporaries;
Optr slot_Smalltalk_AST_Block_statements;
Optr layout_Smalltalk_AST_Block;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15023 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15025 = new_Assign((Optr)slot_Smalltalk_AST_Block_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15024 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15025, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15022 = new_Method_with(PArray15023, empty_Array, empty_Array, PThreadedCode15024, 2, PAssign15025, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod15022, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15027 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15030 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15032 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15036 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15035 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15036, (Optr)&t_block_return);
    Block PBlock15034 = new_Block_with(empty_Array, empty_Array, PThreadedCode15035, 1, PSend15036);
    // ifFalse:. 
    Send PSend15033 = new_Send((Optr)PSuper15032, SMB_ifFalse_, 1, (Optr)PBlock15034);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend15037 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend15038 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend15039 = new_Send((Optr)PSend15037, SMB__equals_, 1, (Optr)PSend15038);
    // escape:. 
    Send PSend15043 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15042 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15043, (Optr)&t_block_return);
    Block PBlock15041 = new_Block_with(empty_Array, empty_Array, PThreadedCode15042, 1, PSend15043);
    // ifFalse:. 
    Send PSend15040 = new_Send((Optr)PSend15039, SMB_ifFalse_, 1, (Optr)PBlock15041);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15044 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15045 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15046 = new_Send((Optr)PSend15044, SMB__equals_, 1, (Optr)PSend15045);
    // escape:. 
    Send PSend15050 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15049 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15050, (Optr)&t_block_return);
    Block PBlock15048 = new_Block_with(empty_Array, empty_Array, PThreadedCode15049, 1, PSend15050);
    // ifFalse:. 
    Send PSend15047 = new_Send((Optr)PSend15046, SMB_ifFalse_, 1, (Optr)PBlock15048);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15051 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15052 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15053 = new_Send((Optr)PSend15051, SMB__equals_, 1, (Optr)PSend15052);
    // escape:. 
    Send PSend15057 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15056 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15057, (Optr)&t_block_return);
    Block PBlock15055 = new_Block_with(empty_Array, empty_Array, PThreadedCode15056, 1, PSend15057);
    // ifFalse:. 
    Send PSend15054 = new_Send((Optr)PSend15053, SMB_ifFalse_, 1, (Optr)PBlock15055);
    Array PThreadedCode15031 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15032, (Optr)&t_send_ifFalse_, (Optr)PSend15033, (Optr)PBlock15034, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15037, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15038, (Optr)&t_send1, (Optr)PSend15039, (Optr)&t_send_ifFalse_, (Optr)PSend15040, (Optr)PBlock15041, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15044, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15045, (Optr)&t_send1, (Optr)PSend15046, (Optr)&t_send_ifFalse_, (Optr)PSend15047, (Optr)PBlock15048, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15051, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15052, (Optr)&t_send1, (Optr)PSend15053, (Optr)&t_send_ifFalse_, (Optr)PSend15054, (Optr)PBlock15055, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15029 = new_Block_with(PArray15030, empty_Array, PThreadedCode15031, 5, PSend15033, PSend15040, PSend15047, PSend15054, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15058 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15029);
    Array PThreadedCode15028 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15029, (Optr)&t_send1, (Optr)PSend15058, (Optr)&t_method_return);
    Method PMethod15026 = new_Method_with(PArray15027, empty_Array, empty_Array, PThreadedCode15028, 1, PSend15058);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15026, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode15060 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_parameters, (Optr)&t_method_return);
    Method PMethod15059 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15060, 1, slot_Smalltalk_AST_Block_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15059, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15062 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend15064 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode15063 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15064, (Optr)&t_method_return);
    Method PMethod15061 = new_Method_with(PArray15062, empty_Array, empty_Array, PThreadedCode15063, 1, PSend15064);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15061, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15066 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_statements, (Optr)&t_method_return);
    Method PMethod15065 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15066, 1, slot_Smalltalk_AST_Block_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15065, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15068 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15070 = new_Assign((Optr)slot_Smalltalk_AST_Block_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15069 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15070, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15067 = new_Method_with(PArray15068, empty_Array, empty_Array, PThreadedCode15069, 2, PAssign15070, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15067, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15073 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15074 = new_Send((Optr)PSend15073, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15072 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15073, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15074, (Optr)&t_method_return);
    Method PMethod15071 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15072, 1, PSend15074);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15071, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15076 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)&t_method_return);
    Method PMethod15075 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15076, 1, slot_Smalltalk_AST_Block_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15075, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15078 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15080 = new_Assign((Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15079 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15080, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15077 = new_Method_with(PArray15078, empty_Array, empty_Array, PThreadedCode15079, 2, PAssign15080, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15077, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries_, MC_SMB_temporaries_);
}

void init_Smalltalk_AST_ASTBlock_layout() {
    layout_Smalltalk_AST_Block_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Block_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Block_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Block_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Block_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Block_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Block = new_Symbol(L"Block");
    slot_Smalltalk_AST_Block_parameters = (Optr)new_Slot(0, L"parameters");
    slot_Smalltalk_AST_Block_temporaries = (Optr)new_Slot(1, L"temporaries");
    slot_Smalltalk_AST_Block_statements = (Optr)new_Slot(2, L"statements");
    layout_Smalltalk_AST_Block = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Smalltalk_AST_Block)->values[0] = slot_Smalltalk_AST_Block_parameters; // parameters 
    ((Array)layout_Smalltalk_AST_Block)->values[1] = slot_Smalltalk_AST_Block_temporaries; // temporaries 
    ((Array)layout_Smalltalk_AST_Block)->values[2] = slot_Smalltalk_AST_Block_statements; // statements 
    Smalltalk_AST_Block_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Block_Class_class);
    Smalltalk_AST_Block_Class->layout = layout_Smalltalk_AST_Block;
    Smalltalk_AST_Block_Class->name = SMB_Block;
    
}

void init_Smalltalk_AST_ASTBlock_methods() {
    init_SMB_parameters_();
    init_SMB__equals_();
    init_SMB_parameters();
    init_SMB_accept_();
    init_SMB_statements();
    init_SMB_statements_();
    init_SMB_hasReturnExpression();
    init_SMB_temporaries();
    init_SMB_temporaries_();
    
}