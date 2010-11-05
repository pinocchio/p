#include <lib/class/Smalltalk/AST/Block.h>


Optr layout_Smalltalk_AST_Block_Class_class;
Optr slot_Smalltalk_AST_Block_parameters;
Optr slot_Smalltalk_AST_Block_temporaries;
Optr slot_Smalltalk_AST_Block_statements;
Optr layout_Smalltalk_AST_Block;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15048 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15050 = new_Assign((Optr)slot_Smalltalk_AST_Block_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15049 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15050, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15047 = new_Method_with(PArray15048, empty_Array, empty_Array, PThreadedCode15049, 2, PAssign15050, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod15047, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15052 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15055 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15057 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15061 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15060 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15061, (Optr)&t_block_return);
    Block PBlock15059 = new_Block_with(empty_Array, empty_Array, PThreadedCode15060, 1, PSend15061);
    // ifFalse:. 
    Send PSend15058 = new_Send((Optr)PSuper15057, SMB_ifFalse_, 1, (Optr)PBlock15059);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend15062 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend15063 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend15064 = new_Send((Optr)PSend15062, SMB__equals_, 1, (Optr)PSend15063);
    // escape:. 
    Send PSend15068 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15067 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15068, (Optr)&t_block_return);
    Block PBlock15066 = new_Block_with(empty_Array, empty_Array, PThreadedCode15067, 1, PSend15068);
    // ifFalse:. 
    Send PSend15065 = new_Send((Optr)PSend15064, SMB_ifFalse_, 1, (Optr)PBlock15066);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15069 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15070 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15071 = new_Send((Optr)PSend15069, SMB__equals_, 1, (Optr)PSend15070);
    // escape:. 
    Send PSend15075 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15074 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15075, (Optr)&t_block_return);
    Block PBlock15073 = new_Block_with(empty_Array, empty_Array, PThreadedCode15074, 1, PSend15075);
    // ifFalse:. 
    Send PSend15072 = new_Send((Optr)PSend15071, SMB_ifFalse_, 1, (Optr)PBlock15073);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15076 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15077 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15078 = new_Send((Optr)PSend15076, SMB__equals_, 1, (Optr)PSend15077);
    // escape:. 
    Send PSend15082 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15081 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15082, (Optr)&t_block_return);
    Block PBlock15080 = new_Block_with(empty_Array, empty_Array, PThreadedCode15081, 1, PSend15082);
    // ifFalse:. 
    Send PSend15079 = new_Send((Optr)PSend15078, SMB_ifFalse_, 1, (Optr)PBlock15080);
    Array PThreadedCode15056 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15057, (Optr)&t_send_ifFalse_, (Optr)PSend15058, (Optr)PBlock15059, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15062, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15063, (Optr)&t_send1, (Optr)PSend15064, (Optr)&t_send_ifFalse_, (Optr)PSend15065, (Optr)PBlock15066, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15069, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15070, (Optr)&t_send1, (Optr)PSend15071, (Optr)&t_send_ifFalse_, (Optr)PSend15072, (Optr)PBlock15073, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15076, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15077, (Optr)&t_send1, (Optr)PSend15078, (Optr)&t_send_ifFalse_, (Optr)PSend15079, (Optr)PBlock15080, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15054 = new_Block_with(PArray15055, empty_Array, PThreadedCode15056, 5, PSend15058, PSend15065, PSend15072, PSend15079, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15083 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15054);
    Array PThreadedCode15053 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15054, (Optr)&t_send1, (Optr)PSend15083, (Optr)&t_method_return);
    Method PMethod15051 = new_Method_with(PArray15052, empty_Array, empty_Array, PThreadedCode15053, 1, PSend15083);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15051, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode15085 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_parameters, (Optr)&t_method_return);
    Method PMethod15084 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15085, 1, slot_Smalltalk_AST_Block_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15084, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15087 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend15089 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode15088 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15089, (Optr)&t_method_return);
    Method PMethod15086 = new_Method_with(PArray15087, empty_Array, empty_Array, PThreadedCode15088, 1, PSend15089);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15086, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15091 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_statements, (Optr)&t_method_return);
    Method PMethod15090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15091, 1, slot_Smalltalk_AST_Block_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15090, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15093 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15095 = new_Assign((Optr)slot_Smalltalk_AST_Block_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15094 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15095, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15092 = new_Method_with(PArray15093, empty_Array, empty_Array, PThreadedCode15094, 2, PAssign15095, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15092, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15098 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15099 = new_Send((Optr)PSend15098, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15097 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15098, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15099, (Optr)&t_method_return);
    Method PMethod15096 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15097, 1, PSend15099);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15096, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15101 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)&t_method_return);
    Method PMethod15100 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15101, 1, slot_Smalltalk_AST_Block_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15100, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15103 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15105 = new_Assign((Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15104 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15105, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15102 = new_Method_with(PArray15103, empty_Array, empty_Array, PThreadedCode15104, 2, PAssign15105, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15102, Smalltalk_AST_Block_Class);
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