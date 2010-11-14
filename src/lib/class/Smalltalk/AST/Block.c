#include <lib/class/Smalltalk/AST/Block.h>


Optr layout_Smalltalk_AST_Block_Class_class;
Optr slot_Smalltalk_AST_Block_parameters;
Optr slot_Smalltalk_AST_Block_temporaries;
Optr slot_Smalltalk_AST_Block_statements;
Optr layout_Smalltalk_AST_Block;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15212 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15214 = new_Assign((Optr)slot_Smalltalk_AST_Block_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15213 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15214, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15211 = new_Method_with(PArray15212, empty_Array, empty_Array, PThreadedCode15213, 2, PAssign15214, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod15211, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15216 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15219 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15221 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15225 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15224 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15225, (Optr)&t_block_return);
    Block PBlock15223 = new_Block_with(empty_Array, empty_Array, PThreadedCode15224, 1, PSend15225);
    // ifFalse:. 
    Send PSend15222 = new_Send((Optr)PSuper15221, SMB_ifFalse_, 1, (Optr)PBlock15223);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend15226 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend15227 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend15228 = new_Send((Optr)PSend15226, SMB__equals_, 1, (Optr)PSend15227);
    // escape:. 
    Send PSend15232 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15231 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15232, (Optr)&t_block_return);
    Block PBlock15230 = new_Block_with(empty_Array, empty_Array, PThreadedCode15231, 1, PSend15232);
    // ifFalse:. 
    Send PSend15229 = new_Send((Optr)PSend15228, SMB_ifFalse_, 1, (Optr)PBlock15230);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15233 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15234 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15235 = new_Send((Optr)PSend15233, SMB__equals_, 1, (Optr)PSend15234);
    // escape:. 
    Send PSend15239 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15238 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15239, (Optr)&t_block_return);
    Block PBlock15237 = new_Block_with(empty_Array, empty_Array, PThreadedCode15238, 1, PSend15239);
    // ifFalse:. 
    Send PSend15236 = new_Send((Optr)PSend15235, SMB_ifFalse_, 1, (Optr)PBlock15237);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15240 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15241 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15242 = new_Send((Optr)PSend15240, SMB__equals_, 1, (Optr)PSend15241);
    // escape:. 
    Send PSend15246 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15245 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15246, (Optr)&t_block_return);
    Block PBlock15244 = new_Block_with(empty_Array, empty_Array, PThreadedCode15245, 1, PSend15246);
    // ifFalse:. 
    Send PSend15243 = new_Send((Optr)PSend15242, SMB_ifFalse_, 1, (Optr)PBlock15244);
    Array PThreadedCode15220 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15221, (Optr)&t_send_ifFalse_, (Optr)PSend15222, (Optr)PBlock15223, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15226, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15227, (Optr)&t_send1, (Optr)PSend15228, (Optr)&t_send_ifFalse_, (Optr)PSend15229, (Optr)PBlock15230, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15233, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15234, (Optr)&t_send1, (Optr)PSend15235, (Optr)&t_send_ifFalse_, (Optr)PSend15236, (Optr)PBlock15237, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15240, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15241, (Optr)&t_send1, (Optr)PSend15242, (Optr)&t_send_ifFalse_, (Optr)PSend15243, (Optr)PBlock15244, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15218 = new_Block_with(PArray15219, empty_Array, PThreadedCode15220, 5, PSend15222, PSend15229, PSend15236, PSend15243, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15247 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15218);
    Array PThreadedCode15217 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15218, (Optr)&t_send1, (Optr)PSend15247, (Optr)&t_method_return);
    Method PMethod15215 = new_Method_with(PArray15216, empty_Array, empty_Array, PThreadedCode15217, 1, PSend15247);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15215, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode15249 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_parameters, (Optr)&t_method_return);
    Method PMethod15248 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15249, 1, slot_Smalltalk_AST_Block_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15248, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15251 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend15253 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode15252 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15253, (Optr)&t_method_return);
    Method PMethod15250 = new_Method_with(PArray15251, empty_Array, empty_Array, PThreadedCode15252, 1, PSend15253);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15250, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15255 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_statements, (Optr)&t_method_return);
    Method PMethod15254 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15255, 1, slot_Smalltalk_AST_Block_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15254, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15257 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15259 = new_Assign((Optr)slot_Smalltalk_AST_Block_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15258 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15259, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15256 = new_Method_with(PArray15257, empty_Array, empty_Array, PThreadedCode15258, 2, PAssign15259, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15256, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15262 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15263 = new_Send((Optr)PSend15262, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15261 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15262, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15263, (Optr)&t_method_return);
    Method PMethod15260 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15261, 1, PSend15263);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15260, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15265 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)&t_method_return);
    Method PMethod15264 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15265, 1, slot_Smalltalk_AST_Block_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15264, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15267 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15269 = new_Assign((Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15268 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15269, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15266 = new_Method_with(PArray15267, empty_Array, empty_Array, PThreadedCode15268, 2, PAssign15269, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15266, Smalltalk_AST_Block_Class);
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