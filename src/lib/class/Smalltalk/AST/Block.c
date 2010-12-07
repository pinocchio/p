#include <lib/class/Smalltalk/AST/Block.h>


Optr layout_Smalltalk_AST_Block_Class_class;
Optr slot_Smalltalk_AST_Block_parameters;
Optr slot_Smalltalk_AST_Block_temporaries;
Optr slot_Smalltalk_AST_Block_statements;
Optr layout_Smalltalk_AST_Block;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15210 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15212 = new_Assign((Optr)slot_Smalltalk_AST_Block_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15211 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15212, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15209 = new_Method_with(PArray15210, empty_Array, empty_Array, PThreadedCode15211, 2, PAssign15212, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod15209, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15214 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15217 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15219 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15223 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15222 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15223, (Optr)&t_block_return);
    Block PBlock15221 = new_Block_with(empty_Array, empty_Array, PThreadedCode15222, 1, PSend15223);
    // ifFalse:. 
    Send PSend15220 = new_Send((Optr)PSuper15219, SMB_ifFalse_, 1, (Optr)PBlock15221);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend15224 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend15225 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend15226 = new_Send((Optr)PSend15224, SMB__equals_, 1, (Optr)PSend15225);
    // escape:. 
    Send PSend15230 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15229 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15230, (Optr)&t_block_return);
    Block PBlock15228 = new_Block_with(empty_Array, empty_Array, PThreadedCode15229, 1, PSend15230);
    // ifFalse:. 
    Send PSend15227 = new_Send((Optr)PSend15226, SMB_ifFalse_, 1, (Optr)PBlock15228);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15231 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15232 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15233 = new_Send((Optr)PSend15231, SMB__equals_, 1, (Optr)PSend15232);
    // escape:. 
    Send PSend15237 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15236 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15237, (Optr)&t_block_return);
    Block PBlock15235 = new_Block_with(empty_Array, empty_Array, PThreadedCode15236, 1, PSend15237);
    // ifFalse:. 
    Send PSend15234 = new_Send((Optr)PSend15233, SMB_ifFalse_, 1, (Optr)PBlock15235);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15238 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15239 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15240 = new_Send((Optr)PSend15238, SMB__equals_, 1, (Optr)PSend15239);
    // escape:. 
    Send PSend15244 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15243 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15244, (Optr)&t_block_return);
    Block PBlock15242 = new_Block_with(empty_Array, empty_Array, PThreadedCode15243, 1, PSend15244);
    // ifFalse:. 
    Send PSend15241 = new_Send((Optr)PSend15240, SMB_ifFalse_, 1, (Optr)PBlock15242);
    Array PThreadedCode15218 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15219, (Optr)&t_send_ifFalse_, (Optr)PSend15220, (Optr)PBlock15221, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15224, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15225, (Optr)&t_send1, (Optr)PSend15226, (Optr)&t_send_ifFalse_, (Optr)PSend15227, (Optr)PBlock15228, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15231, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15232, (Optr)&t_send1, (Optr)PSend15233, (Optr)&t_send_ifFalse_, (Optr)PSend15234, (Optr)PBlock15235, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15238, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15239, (Optr)&t_send1, (Optr)PSend15240, (Optr)&t_send_ifFalse_, (Optr)PSend15241, (Optr)PBlock15242, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15216 = new_Block_with(PArray15217, empty_Array, PThreadedCode15218, 5, PSend15220, PSend15227, PSend15234, PSend15241, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15245 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15216);
    Array PThreadedCode15215 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15216, (Optr)&t_send1, (Optr)PSend15245, (Optr)&t_method_return);
    Method PMethod15213 = new_Method_with(PArray15214, empty_Array, empty_Array, PThreadedCode15215, 1, PSend15245);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15213, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode15247 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_parameters, (Optr)&t_method_return);
    Method PMethod15246 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15247, 1, slot_Smalltalk_AST_Block_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15246, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15249 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend15251 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode15250 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15251, (Optr)&t_method_return);
    Method PMethod15248 = new_Method_with(PArray15249, empty_Array, empty_Array, PThreadedCode15250, 1, PSend15251);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15248, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15253 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_statements, (Optr)&t_method_return);
    Method PMethod15252 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15253, 1, slot_Smalltalk_AST_Block_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15252, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15255 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15257 = new_Assign((Optr)slot_Smalltalk_AST_Block_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15256 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15257, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15254 = new_Method_with(PArray15255, empty_Array, empty_Array, PThreadedCode15256, 2, PAssign15257, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15254, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15260 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15261 = new_Send((Optr)PSend15260, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15259 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15260, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15261, (Optr)&t_method_return);
    Method PMethod15258 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15259, 1, PSend15261);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15258, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15263 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)&t_method_return);
    Method PMethod15262 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15263, 1, slot_Smalltalk_AST_Block_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15262, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15265 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15267 = new_Assign((Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15266 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15267, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15264 = new_Method_with(PArray15265, empty_Array, empty_Array, PThreadedCode15266, 2, PAssign15267, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15264, Smalltalk_AST_Block_Class);
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