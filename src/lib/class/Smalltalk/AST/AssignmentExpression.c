#include <lib/class/Smalltalk/AST/AssignmentExpression.h>


Optr layout_Smalltalk_AST_AssignmentExpression_Class_class;
Optr slot_Smalltalk_AST_AssignmentExpression_variable;
Optr slot_Smalltalk_AST_AssignmentExpression_expression;
Optr layout_Smalltalk_AST_AssignmentExpression;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15526 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15528 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15527 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15528, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15525 = new_Method_with(PArray15526, empty_Array, empty_Array, PThreadedCode15527, 2, PAssign15528, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod15525, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15530 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15532 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15531 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15532, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15529 = new_Method_with(PArray15530, empty_Array, empty_Array, PThreadedCode15531, 2, PAssign15532, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod15529, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode15534 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_method_return);
    Method PMethod15533 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15534, 1, slot_Smalltalk_AST_AssignmentExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod15533, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15536 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15539 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15541 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15545 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15544 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15545, (Optr)&t_block_return);
    Block PBlock15543 = new_Block_with(empty_Array, empty_Array, PThreadedCode15544, 1, PSend15545);
    // ifFalse:. 
    Send PSend15542 = new_Send((Optr)PSuper15541, SMB_ifFalse_, 1, (Optr)PBlock15543);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15546 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15547 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15548 = new_Send((Optr)PSend15546, SMB__equals_, 1, (Optr)PSend15547);
    // escape:. 
    Send PSend15552 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15551 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15552, (Optr)&t_block_return);
    Block PBlock15550 = new_Block_with(empty_Array, empty_Array, PThreadedCode15551, 1, PSend15552);
    // ifFalse:. 
    Send PSend15549 = new_Send((Optr)PSend15548, SMB_ifFalse_, 1, (Optr)PBlock15550);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend15553 = new_Send((Optr)self, SMB_variable, 0);
    // variable. 
    Send PSend15554 = new_Send((Optr)VAR_other_0_0, SMB_variable, 0);
    // =. 
    Send PSend15555 = new_Send((Optr)PSend15553, SMB__equals_, 1, (Optr)PSend15554);
    // escape:. 
    Send PSend15559 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15558 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15559, (Optr)&t_block_return);
    Block PBlock15557 = new_Block_with(empty_Array, empty_Array, PThreadedCode15558, 1, PSend15559);
    // ifFalse:. 
    Send PSend15556 = new_Send((Optr)PSend15555, SMB_ifFalse_, 1, (Optr)PBlock15557);
    Array PThreadedCode15540 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15541, (Optr)&t_send_ifFalse_, (Optr)PSend15542, (Optr)PBlock15543, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15546, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15547, (Optr)&t_send1, (Optr)PSend15548, (Optr)&t_send_ifFalse_, (Optr)PSend15549, (Optr)PBlock15550, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15553, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15554, (Optr)&t_send1, (Optr)PSend15555, (Optr)&t_send_ifFalse_, (Optr)PSend15556, (Optr)PBlock15557, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15538 = new_Block_with(PArray15539, empty_Array, PThreadedCode15540, 4, PSend15542, PSend15549, PSend15556, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15560 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15538);
    Array PThreadedCode15537 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15538, (Optr)&t_send1, (Optr)PSend15560, (Optr)&t_method_return);
    Method PMethod15535 = new_Method_with(PArray15536, empty_Array, empty_Array, PThreadedCode15537, 1, PSend15560);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15535, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
    Array PThreadedCode15562 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)&t_method_return);
    Method PMethod15561 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15562, 1, slot_Smalltalk_AST_AssignmentExpression_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod15561, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable, MC_SMB_variable);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15564 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    // visitAssignmentExpression:. 
    Send PSend15566 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAssignmentExpression_, 1, (Optr)self);
    Array PThreadedCode15565 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15566, (Optr)&t_method_return);
    Method PMethod15563 = new_Method_with(PArray15564, empty_Array, empty_Array, PThreadedCode15565, 1, PSend15566);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15563, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend15569 = new_Send((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, SMB_hasReturnExpression, 0);
    Array PThreadedCode15568 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_send0, (Optr)PSend15569, (Optr)&t_method_return);
    Method PMethod15567 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15568, 1, PSend15569);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15567, Smalltalk_AST_AssignmentExpression_Class);
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