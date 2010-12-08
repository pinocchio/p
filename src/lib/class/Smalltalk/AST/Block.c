#include <lib/class/Smalltalk/AST/Block.h>


Optr layout_Smalltalk_AST_Block_Class_class;
Optr slot_Smalltalk_AST_Block_parameters;
Optr slot_Smalltalk_AST_Block_temporaries;
Optr slot_Smalltalk_AST_Block_statements;
Optr layout_Smalltalk_AST_Block;


static void init_SMB_parameters_() {
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15271 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15273 = new_Assign((Optr)slot_Smalltalk_AST_Block_parameters, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15272 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15273, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15270 = new_Method_with(PArray15271, empty_Array, empty_Array, PThreadedCode15272, 2, PAssign15273, self);
    
    MethodClosure MC_SMB_parameters_ = new_MethodClosure((Method)PMethod15270, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters_, MC_SMB_parameters_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15275 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15278 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15280 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15284 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15283 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15284, (Optr)&t_block_return);
    Block PBlock15282 = new_Block_with(empty_Array, empty_Array, PThreadedCode15283, 1, PSend15284);
    // ifFalse:. 
    Send PSend15281 = new_Send((Optr)PSuper15280, SMB_ifFalse_, 1, (Optr)PBlock15282);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend15285 = new_Send((Optr)self, SMB_parameters, 0);
    // parameters. 
    Send PSend15286 = new_Send((Optr)VAR_other_0_0, SMB_parameters, 0);
    // =. 
    Send PSend15287 = new_Send((Optr)PSend15285, SMB__equals_, 1, (Optr)PSend15286);
    // escape:. 
    Send PSend15291 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15290 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15291, (Optr)&t_block_return);
    Block PBlock15289 = new_Block_with(empty_Array, empty_Array, PThreadedCode15290, 1, PSend15291);
    // ifFalse:. 
    Send PSend15288 = new_Send((Optr)PSend15287, SMB_ifFalse_, 1, (Optr)PBlock15289);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15292 = new_Send((Optr)self, SMB_statements, 0);
    // statements. 
    Send PSend15293 = new_Send((Optr)VAR_other_0_0, SMB_statements, 0);
    // =. 
    Send PSend15294 = new_Send((Optr)PSend15292, SMB__equals_, 1, (Optr)PSend15293);
    // escape:. 
    Send PSend15298 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15297 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15298, (Optr)&t_block_return);
    Block PBlock15296 = new_Block_with(empty_Array, empty_Array, PThreadedCode15297, 1, PSend15298);
    // ifFalse:. 
    Send PSend15295 = new_Send((Optr)PSend15294, SMB_ifFalse_, 1, (Optr)PBlock15296);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend15299 = new_Send((Optr)self, SMB_temporaries, 0);
    // temporaries. 
    Send PSend15300 = new_Send((Optr)VAR_other_0_0, SMB_temporaries, 0);
    // =. 
    Send PSend15301 = new_Send((Optr)PSend15299, SMB__equals_, 1, (Optr)PSend15300);
    // escape:. 
    Send PSend15305 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15304 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15305, (Optr)&t_block_return);
    Block PBlock15303 = new_Block_with(empty_Array, empty_Array, PThreadedCode15304, 1, PSend15305);
    // ifFalse:. 
    Send PSend15302 = new_Send((Optr)PSend15301, SMB_ifFalse_, 1, (Optr)PBlock15303);
    Array PThreadedCode15279 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15280, (Optr)&t_send_ifFalse_, (Optr)PSend15281, (Optr)PBlock15282, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15285, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15286, (Optr)&t_send1, (Optr)PSend15287, (Optr)&t_send_ifFalse_, (Optr)PSend15288, (Optr)PBlock15289, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15292, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15293, (Optr)&t_send1, (Optr)PSend15294, (Optr)&t_send_ifFalse_, (Optr)PSend15295, (Optr)PBlock15296, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15299, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15300, (Optr)&t_send1, (Optr)PSend15301, (Optr)&t_send_ifFalse_, (Optr)PSend15302, (Optr)PBlock15303, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15277 = new_Block_with(PArray15278, empty_Array, PThreadedCode15279, 5, PSend15281, PSend15288, PSend15295, PSend15302, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15306 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15277);
    Array PThreadedCode15276 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15277, (Optr)&t_send1, (Optr)PSend15306, (Optr)&t_method_return);
    Method PMethod15274 = new_Method_with(PArray15275, empty_Array, empty_Array, PThreadedCode15276, 1, PSend15306);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15274, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Array PThreadedCode15308 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_parameters, (Optr)&t_method_return);
    Method PMethod15307 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15308, 1, slot_Smalltalk_AST_Block_parameters);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod15307, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15310 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend15312 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode15311 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15312, (Optr)&t_method_return);
    Method PMethod15309 = new_Method_with(PArray15310, empty_Array, empty_Array, PThreadedCode15311, 1, PSend15312);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15309, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_statements() {
    Symbol SMB_statements = new_Symbol(L"statements");
    Array PThreadedCode15314 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_statements, (Optr)&t_method_return);
    Method PMethod15313 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15314, 1, slot_Smalltalk_AST_Block_statements);
    
    MethodClosure MC_SMB_statements = new_MethodClosure((Method)PMethod15313, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements, MC_SMB_statements);
}


static void init_SMB_statements_() {
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15316 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15318 = new_Assign((Optr)slot_Smalltalk_AST_Block_statements, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15317 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15318, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15315 = new_Method_with(PArray15316, empty_Array, empty_Array, PThreadedCode15317, 2, PAssign15318, self);
    
    MethodClosure MC_SMB_statements_ = new_MethodClosure((Method)PMethod15315, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_statements_, MC_SMB_statements_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend15321 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15322 = new_Send((Optr)PSend15321, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15320 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15321, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15322, (Optr)&t_method_return);
    Method PMethod15319 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15320, 1, PSend15322);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15319, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_temporaries() {
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    Array PThreadedCode15324 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)&t_method_return);
    Method PMethod15323 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15324, 1, slot_Smalltalk_AST_Block_temporaries);
    
    MethodClosure MC_SMB_temporaries = new_MethodClosure((Method)PMethod15323, Smalltalk_AST_Block_Class);
    store_method(Smalltalk_AST_Block_Class, SMB_temporaries, MC_SMB_temporaries);
}


static void init_SMB_temporaries_() {
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15326 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15328 = new_Assign((Optr)slot_Smalltalk_AST_Block_temporaries, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15327 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15328, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15325 = new_Method_with(PArray15326, empty_Array, empty_Array, PThreadedCode15327, 2, PAssign15328, self);
    
    MethodClosure MC_SMB_temporaries_ = new_MethodClosure((Method)PMethod15325, Smalltalk_AST_Block_Class);
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