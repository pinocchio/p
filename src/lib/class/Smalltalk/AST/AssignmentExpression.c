#include <lib/class/Smalltalk/AST/AssignmentExpression.h>


Optr layout_Smalltalk_AST_AssignmentExpression_Class_class;
Optr slot_Smalltalk_AST_AssignmentExpression_variable;
Optr slot_Smalltalk_AST_AssignmentExpression_expression;
Optr layout_Smalltalk_AST_AssignmentExpression;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15496 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15498 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15497 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15498, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15495 = new_Method_with(PArray15496, empty_Array, empty_Array, PThreadedCode15497, 2, PAssign15498, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod15495, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15500 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15502 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15501 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15502, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15499 = new_Method_with(PArray15500, empty_Array, empty_Array, PThreadedCode15501, 2, PAssign15502, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod15499, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode15504 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_method_return);
    Method PMethod15503 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15504, 1, slot_Smalltalk_AST_AssignmentExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod15503, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15506 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15509 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15511 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15515 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15514 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15515, (Optr)&t_block_return);
    Block PBlock15513 = new_Block_with(empty_Array, empty_Array, PThreadedCode15514, 1, PSend15515);
    // ifFalse:. 
    Send PSend15512 = new_Send((Optr)PSuper15511, SMB_ifFalse_, 1, (Optr)PBlock15513);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15516 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15517 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15518 = new_Send((Optr)PSend15516, SMB__equals_, 1, (Optr)PSend15517);
    // escape:. 
    Send PSend15522 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15521 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15522, (Optr)&t_block_return);
    Block PBlock15520 = new_Block_with(empty_Array, empty_Array, PThreadedCode15521, 1, PSend15522);
    // ifFalse:. 
    Send PSend15519 = new_Send((Optr)PSend15518, SMB_ifFalse_, 1, (Optr)PBlock15520);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend15523 = new_Send((Optr)self, SMB_variable, 0);
    // variable. 
    Send PSend15524 = new_Send((Optr)VAR_other_0_0, SMB_variable, 0);
    // =. 
    Send PSend15525 = new_Send((Optr)PSend15523, SMB__equals_, 1, (Optr)PSend15524);
    // escape:. 
    Send PSend15529 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15528 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15529, (Optr)&t_block_return);
    Block PBlock15527 = new_Block_with(empty_Array, empty_Array, PThreadedCode15528, 1, PSend15529);
    // ifFalse:. 
    Send PSend15526 = new_Send((Optr)PSend15525, SMB_ifFalse_, 1, (Optr)PBlock15527);
    Array PThreadedCode15510 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15511, (Optr)&t_send_ifFalse_, (Optr)PSend15512, (Optr)PBlock15513, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15516, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15517, (Optr)&t_send1, (Optr)PSend15518, (Optr)&t_send_ifFalse_, (Optr)PSend15519, (Optr)PBlock15520, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15523, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15524, (Optr)&t_send1, (Optr)PSend15525, (Optr)&t_send_ifFalse_, (Optr)PSend15526, (Optr)PBlock15527, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15508 = new_Block_with(PArray15509, empty_Array, PThreadedCode15510, 4, PSend15512, PSend15519, PSend15526, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15530 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15508);
    Array PThreadedCode15507 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15508, (Optr)&t_send1, (Optr)PSend15530, (Optr)&t_method_return);
    Method PMethod15505 = new_Method_with(PArray15506, empty_Array, empty_Array, PThreadedCode15507, 1, PSend15530);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15505, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
    Array PThreadedCode15532 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)&t_method_return);
    Method PMethod15531 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15532, 1, slot_Smalltalk_AST_AssignmentExpression_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod15531, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable, MC_SMB_variable);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15534 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    // visitAssignmentExpression:. 
    Send PSend15536 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAssignmentExpression_, 1, (Optr)self);
    Array PThreadedCode15535 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15536, (Optr)&t_method_return);
    Method PMethod15533 = new_Method_with(PArray15534, empty_Array, empty_Array, PThreadedCode15535, 1, PSend15536);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15533, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend15539 = new_Send((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, SMB_hasReturnExpression, 0);
    Array PThreadedCode15538 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_send0, (Optr)PSend15539, (Optr)&t_method_return);
    Method PMethod15537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15538, 1, PSend15539);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15537, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}

void init_Smalltalk_AST_ASTAssignmentExpression_layout() {
    layout_Smalltalk_AST_AssignmentExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_AssignmentExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_AssignmentExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_AssignmentExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_AssignmentExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_AssignmentExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AssignmentExpression = new_Symbol(L"AssignmentExpression");
    slot_Smalltalk_AST_AssignmentExpression_variable = (Optr)new_Slot(0, L"variable");
    slot_Smalltalk_AST_AssignmentExpression_expression = (Optr)new_Slot(1, L"expression");
    layout_Smalltalk_AST_AssignmentExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_AssignmentExpression)->values[0] = slot_Smalltalk_AST_AssignmentExpression_variable; // variable 
    ((Array)layout_Smalltalk_AST_AssignmentExpression)->values[1] = slot_Smalltalk_AST_AssignmentExpression_expression; // expression 
    Smalltalk_AST_AssignmentExpression_Class = (Class)new_Class(Smalltalk_AST_Expression_Class, layout_Smalltalk_AST_AssignmentExpression_Class_class);
    Smalltalk_AST_AssignmentExpression_Class->layout = layout_Smalltalk_AST_AssignmentExpression;
    Smalltalk_AST_AssignmentExpression_Class->name = SMB_AssignmentExpression;
    
}

void init_Smalltalk_AST_ASTAssignmentExpression_methods() {
    init_SMB_variable_();
    init_SMB_expression_();
    init_SMB_expression();
    init_SMB__equals_();
    init_SMB_variable();
    init_SMB_accept_();
    init_SMB_hasReturnExpression();
    
}