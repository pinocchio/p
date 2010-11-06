#include <lib/class/Smalltalk/AST/AssignmentExpression.h>


Optr layout_Smalltalk_AST_AssignmentExpression_Class_class;
Optr slot_Smalltalk_AST_AssignmentExpression_variable;
Optr slot_Smalltalk_AST_AssignmentExpression_expression;
Optr layout_Smalltalk_AST_AssignmentExpression;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15667 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15669 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15668 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15669, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15666 = new_Method_with(PArray15667, empty_Array, empty_Array, PThreadedCode15668, 2, PAssign15669, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod15666, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15671 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15673 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15672 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15673, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15670 = new_Method_with(PArray15671, empty_Array, empty_Array, PThreadedCode15672, 2, PAssign15673, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod15670, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode15675 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_method_return);
    Method PMethod15674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15675, 1, slot_Smalltalk_AST_AssignmentExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod15674, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15677 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15680 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15682 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15686 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15685 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15686, (Optr)&t_block_return);
    Block PBlock15684 = new_Block_with(empty_Array, empty_Array, PThreadedCode15685, 1, PSend15686);
    // ifFalse:. 
    Send PSend15683 = new_Send((Optr)PSuper15682, SMB_ifFalse_, 1, (Optr)PBlock15684);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15687 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15688 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15689 = new_Send((Optr)PSend15687, SMB__equals_, 1, (Optr)PSend15688);
    // escape:. 
    Send PSend15693 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15692 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15693, (Optr)&t_block_return);
    Block PBlock15691 = new_Block_with(empty_Array, empty_Array, PThreadedCode15692, 1, PSend15693);
    // ifFalse:. 
    Send PSend15690 = new_Send((Optr)PSend15689, SMB_ifFalse_, 1, (Optr)PBlock15691);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend15694 = new_Send((Optr)self, SMB_variable, 0);
    // variable. 
    Send PSend15695 = new_Send((Optr)VAR_other_0_0, SMB_variable, 0);
    // =. 
    Send PSend15696 = new_Send((Optr)PSend15694, SMB__equals_, 1, (Optr)PSend15695);
    // escape:. 
    Send PSend15700 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15699 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15700, (Optr)&t_block_return);
    Block PBlock15698 = new_Block_with(empty_Array, empty_Array, PThreadedCode15699, 1, PSend15700);
    // ifFalse:. 
    Send PSend15697 = new_Send((Optr)PSend15696, SMB_ifFalse_, 1, (Optr)PBlock15698);
    Array PThreadedCode15681 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15682, (Optr)&t_send_ifFalse_, (Optr)PSend15683, (Optr)PBlock15684, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15687, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15688, (Optr)&t_send1, (Optr)PSend15689, (Optr)&t_send_ifFalse_, (Optr)PSend15690, (Optr)PBlock15691, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15694, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15695, (Optr)&t_send1, (Optr)PSend15696, (Optr)&t_send_ifFalse_, (Optr)PSend15697, (Optr)PBlock15698, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15679 = new_Block_with(PArray15680, empty_Array, PThreadedCode15681, 4, PSend15683, PSend15690, PSend15697, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15701 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15679);
    Array PThreadedCode15678 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15679, (Optr)&t_send1, (Optr)PSend15701, (Optr)&t_method_return);
    Method PMethod15676 = new_Method_with(PArray15677, empty_Array, empty_Array, PThreadedCode15678, 1, PSend15701);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15676, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
    Array PThreadedCode15703 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)&t_method_return);
    Method PMethod15702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15703, 1, slot_Smalltalk_AST_AssignmentExpression_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod15702, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable, MC_SMB_variable);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15705 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    // visitAssignmentExpression:. 
    Send PSend15707 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAssignmentExpression_, 1, (Optr)self);
    Array PThreadedCode15706 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15707, (Optr)&t_method_return);
    Method PMethod15704 = new_Method_with(PArray15705, empty_Array, empty_Array, PThreadedCode15706, 1, PSend15707);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15704, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend15710 = new_Send((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, SMB_hasReturnExpression, 0);
    Array PThreadedCode15709 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_send0, (Optr)PSend15710, (Optr)&t_method_return);
    Method PMethod15708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15709, 1, PSend15710);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15708, Smalltalk_AST_AssignmentExpression_Class);
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