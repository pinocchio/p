#include <lib/class/Smalltalk/AST/Block.h>


Optr layout_Smalltalk_AST_Block_Class_class;
Optr slot_Smalltalk_AST_Block_parameters;
Optr slot_Smalltalk_AST_Block_temporaries;
Optr slot_Smalltalk_AST_Block_statements;
Optr layout_Smalltalk_AST_Block;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15012 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15014 = new_Assign((Optr)slot_Smalltalk_AST_Block_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15013 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15014, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15011 = new_Method_with(PArray15012, empty_Array, empty_Array, PThreadedCode15013, 2, PAssign15014, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod15011, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15016 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15019 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15021 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15025 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15024 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15025, (Optr)&t_block_return);
    Block PBlock15023 = new_Block_with(empty_Array, empty_Array, PThreadedCode15024, 1, PSend15025);
    // ifFalse:. 
    Send PSend15022 = new_Send((Optr)PSuper15021, SMB_ifFalse_, 1, (Optr)PBlock15023);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend15026 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend15027 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend15028 = new_Send((Optr)PSend15026, SMB__equals_, 1, (Optr)PSend15027);
    // escape:. 
    Send PSend15032 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15031 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15032, (Optr)&t_block_return);
    Block PBlock15030 = new_Block_with(empty_Array, empty_Array, PThreadedCode15031, 1, PSend15032);
    // ifFalse:. 
    Send PSend15029 = new_Send((Optr)PSend15028, SMB_ifFalse_, 1, (Optr)PBlock15030);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15033 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15034 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15035 = new_Send((Optr)PSend15033, SMB__equals_, 1, (Optr)PSend15034);
    // escape:. 
    Send PSend15039 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15038 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15039, (Optr)&t_block_return);
    Block PBlock15037 = new_Block_with(empty_Array, empty_Array, PThreadedCode15038, 1, PSend15039);
    // ifFalse:. 
    Send PSend15036 = new_Send((Optr)PSend15035, SMB_ifFalse_, 1, (Optr)PBlock15037);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15040 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15041 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15042 = new_Send((Optr)PSend15040, SMB__equals_, 1, (Optr)PSend15041);
    // escape:. 
    Send PSend15046 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15045 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15046, (Optr)&t_block_return);
    Block PBlock15044 = new_Block_with(empty_Array, empty_Array, PThreadedCode15045, 1, PSend15046);
    // ifFalse:. 
    Send PSend15043 = new_Send((Optr)PSend15042, SMB_ifFalse_, 1, (Optr)PBlock15044);
    Array PThreadedCode15020 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15021, (Optr)&t_send_ifFalse_, (Optr)PSend15022, (Optr)PBlock15023, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15026, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15027, (Optr)&t_send1, (Optr)PSend15028, (Optr)&t_send_ifFalse_, (Optr)PSend15029, (Optr)PBlock15030, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15033, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15034, (Optr)&t_send1, (Optr)PSend15035, (Optr)&t_send_ifFalse_, (Optr)PSend15036, (Optr)PBlock15037, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15040, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15041, (Optr)&t_send1, (Optr)PSend15042, (Optr)&t_send_ifFalse_, (Optr)PSend15043, (Optr)PBlock15044, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15018 = new_Block_with(PArray15019, empty_Array, PThreadedCode15020, 5, PSend15022, PSend15029, PSend15036, PSend15043, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15047 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15018);
    Array PThreadedCode15017 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15018, (Optr)&t_send1, (Optr)PSend15047, (Optr)&t_method_return);
    Method PMethod15015 = new_Method_with(PArray15016, empty_Array, empty_Array, PThreadedCode15017, 1, PSend15047);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15015, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode15049 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_parameters, (Optr)&t_method_return);
    Method PMethod15048 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15049, 1, slot_Smalltalk_AST_Block_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15048, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15051 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend15053 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode15052 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15053, (Optr)&t_method_return);
    Method PMethod15050 = new_Method_with(PArray15051, empty_Array, empty_Array, PThreadedCode15052, 1, PSend15053);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15050, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15055 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_statements, (Optr)&t_method_return);
    Method PMethod15054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15055, 1, slot_Smalltalk_AST_Block_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15054, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15057 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15059 = new_Assign((Optr)slot_Smalltalk_AST_Block_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15058 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15059, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15056 = new_Method_with(PArray15057, empty_Array, empty_Array, PThreadedCode15058, 2, PAssign15059, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15056, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15062 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15063 = new_Send((Optr)PSend15062, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15061 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15062, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15063, (Optr)&t_method_return);
    Method PMethod15060 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15061, 1, PSend15063);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15060, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15065 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)&t_method_return);
    Method PMethod15064 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15065, 1, slot_Smalltalk_AST_Block_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15064, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15067 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15069 = new_Assign((Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15068 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15069, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15066 = new_Method_with(PArray15067, empty_Array, empty_Array, PThreadedCode15068, 2, PAssign15069, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15066, Smalltalk_AST_Block_Class);
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