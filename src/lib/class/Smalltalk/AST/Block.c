#include <lib/class/Smalltalk/AST/Block.h>


Optr layout_Smalltalk_AST_Block_Class_class;
Optr slot_Smalltalk_AST_Block_parameters;
Optr slot_Smalltalk_AST_Block_temporaries;
Optr slot_Smalltalk_AST_Block_statements;
Optr layout_Smalltalk_AST_Block;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15244 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15246 = new_Assign((Optr)slot_Smalltalk_AST_Block_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15245 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15246, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15243 = new_Method_with(PArray15244, empty_Array, empty_Array, PThreadedCode15245, 2, PAssign15246, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod15243, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15248 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15251 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15253 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15257 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15256 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15257, (Optr)&t_block_return);
    Block PBlock15255 = new_Block_with(empty_Array, empty_Array, PThreadedCode15256, 1, PSend15257);
    // ifFalse:. 
    Send PSend15254 = new_Send((Optr)PSuper15253, SMB_ifFalse_, 1, (Optr)PBlock15255);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend15258 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend15259 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend15260 = new_Send((Optr)PSend15258, SMB__equals_, 1, (Optr)PSend15259);
    // escape:. 
    Send PSend15264 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15263 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15264, (Optr)&t_block_return);
    Block PBlock15262 = new_Block_with(empty_Array, empty_Array, PThreadedCode15263, 1, PSend15264);
    // ifFalse:. 
    Send PSend15261 = new_Send((Optr)PSend15260, SMB_ifFalse_, 1, (Optr)PBlock15262);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15265 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15266 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15267 = new_Send((Optr)PSend15265, SMB__equals_, 1, (Optr)PSend15266);
    // escape:. 
    Send PSend15271 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15270 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15271, (Optr)&t_block_return);
    Block PBlock15269 = new_Block_with(empty_Array, empty_Array, PThreadedCode15270, 1, PSend15271);
    // ifFalse:. 
    Send PSend15268 = new_Send((Optr)PSend15267, SMB_ifFalse_, 1, (Optr)PBlock15269);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15272 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15273 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15274 = new_Send((Optr)PSend15272, SMB__equals_, 1, (Optr)PSend15273);
    // escape:. 
    Send PSend15278 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15277 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15278, (Optr)&t_block_return);
    Block PBlock15276 = new_Block_with(empty_Array, empty_Array, PThreadedCode15277, 1, PSend15278);
    // ifFalse:. 
    Send PSend15275 = new_Send((Optr)PSend15274, SMB_ifFalse_, 1, (Optr)PBlock15276);
    Array PThreadedCode15252 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15253, (Optr)&t_send_ifFalse_, (Optr)PSend15254, (Optr)PBlock15255, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15258, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15259, (Optr)&t_send1, (Optr)PSend15260, (Optr)&t_send_ifFalse_, (Optr)PSend15261, (Optr)PBlock15262, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15265, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15266, (Optr)&t_send1, (Optr)PSend15267, (Optr)&t_send_ifFalse_, (Optr)PSend15268, (Optr)PBlock15269, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15272, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15273, (Optr)&t_send1, (Optr)PSend15274, (Optr)&t_send_ifFalse_, (Optr)PSend15275, (Optr)PBlock15276, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15250 = new_Block_with(PArray15251, empty_Array, PThreadedCode15252, 5, PSend15254, PSend15261, PSend15268, PSend15275, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15279 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15250);
    Array PThreadedCode15249 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15250, (Optr)&t_send1, (Optr)PSend15279, (Optr)&t_method_return);
    Method PMethod15247 = new_Method_with(PArray15248, empty_Array, empty_Array, PThreadedCode15249, 1, PSend15279);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15247, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode15281 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_parameters, (Optr)&t_method_return);
    Method PMethod15280 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15281, 1, slot_Smalltalk_AST_Block_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15280, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15283 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend15285 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode15284 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15285, (Optr)&t_method_return);
    Method PMethod15282 = new_Method_with(PArray15283, empty_Array, empty_Array, PThreadedCode15284, 1, PSend15285);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15282, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15287 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_statements, (Optr)&t_method_return);
    Method PMethod15286 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15287, 1, slot_Smalltalk_AST_Block_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15286, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15289 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15291 = new_Assign((Optr)slot_Smalltalk_AST_Block_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15290 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15291, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15288 = new_Method_with(PArray15289, empty_Array, empty_Array, PThreadedCode15290, 2, PAssign15291, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15288, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15294 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15295 = new_Send((Optr)PSend15294, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15293 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15294, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15295, (Optr)&t_method_return);
    Method PMethod15292 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15293, 1, PSend15295);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15292, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15297 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)&t_method_return);
    Method PMethod15296 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15297, 1, slot_Smalltalk_AST_Block_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15296, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15299 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15301 = new_Assign((Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15300 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15301, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15298 = new_Method_with(PArray15299, empty_Array, empty_Array, PThreadedCode15300, 2, PAssign15301, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15298, Smalltalk_AST_Block_Class);
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