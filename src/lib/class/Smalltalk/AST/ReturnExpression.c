#include <lib/class/Smalltalk/AST/ReturnExpression.h>


Optr layout_Smalltalk_AST_ReturnExpression_Class_class;
Optr slot_Smalltalk_AST_ReturnExpression_expression;
Optr layout_Smalltalk_AST_ReturnExpression;


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15691 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15693 = new_Assign((Optr)slot_Smalltalk_AST_ReturnExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15692 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15693, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15690 = new_Method_with(PArray15691, empty_Array, empty_Array, PThreadedCode15692, 2, PAssign15693, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod15690, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode15695 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_ReturnExpression_expression, (Optr)&t_method_return);
    Method PMethod15694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15695, 1, slot_Smalltalk_AST_ReturnExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod15694, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_isReturnExpression() {
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    Array PThreadedCode15697 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod15696 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15697, 1, true_Const);
    
    MethodClosure MC_SMB_isReturnExpression = new_MethodClosure((Method)PMethod15696, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_isReturnExpression, MC_SMB_isReturnExpression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15699 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15702 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15704 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15708 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15707 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15708, (Optr)&t_block_return);
    Block PBlock15706 = new_Block_with(empty_Array, empty_Array, PThreadedCode15707, 1, PSend15708);
    // ifFalse:. 
    Send PSend15705 = new_Send((Optr)PSuper15704, SMB_ifFalse_, 1, (Optr)PBlock15706);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15709 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15710 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15711 = new_Send((Optr)PSend15709, SMB__equals_, 1, (Optr)PSend15710);
    // escape:. 
    Send PSend15715 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15714 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15715, (Optr)&t_block_return);
    Block PBlock15713 = new_Block_with(empty_Array, empty_Array, PThreadedCode15714, 1, PSend15715);
    // ifFalse:. 
    Send PSend15712 = new_Send((Optr)PSend15711, SMB_ifFalse_, 1, (Optr)PBlock15713);
    Array PThreadedCode15703 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15704, (Optr)&t_send_ifFalse_, (Optr)PSend15705, (Optr)PBlock15706, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15709, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15710, (Optr)&t_send1, (Optr)PSend15711, (Optr)&t_send_ifFalse_, (Optr)PSend15712, (Optr)PBlock15713, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15701 = new_Block_with(PArray15702, empty_Array, PThreadedCode15703, 3, PSend15705, PSend15712, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15716 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15701);
    Array PThreadedCode15700 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15701, (Optr)&t_send1, (Optr)PSend15716, (Optr)&t_method_return);
    Method PMethod15698 = new_Method_with(PArray15699, empty_Array, empty_Array, PThreadedCode15700, 1, PSend15716);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15698, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15718 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitReturnExpression_ = new_Symbol(L"visitReturnExpression:");
    // visitReturnExpression:. 
    Send PSend15720 = new_Send((Optr)VAR_visitor_0_0, SMB_visitReturnExpression_, 1, (Optr)self);
    Array PThreadedCode15719 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15720, (Optr)&t_method_return);
    Method PMethod15717 = new_Method_with(PArray15718, empty_Array, empty_Array, PThreadedCode15719, 1, PSend15720);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15717, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15722 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod15721 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15722, 1, true_Const);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15721, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_expression = new_Symbol(L"expression");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // with:. 
    Send PSend15725 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode15724 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend15725, (Optr)&t_method_return);
    Method PMethod15723 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15724, 1, PSend15725);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15723, HEADER(Smalltalk_AST_ReturnExpression_Class));
    store_method(HEADER(Smalltalk_AST_ReturnExpression_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTReturnExpression_layout() {
    layout_Smalltalk_AST_ReturnExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_ReturnExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_ReturnExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_ReturnExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_ReturnExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_ReturnExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ReturnExpression = new_Symbol(L"ReturnExpression");
    slot_Smalltalk_AST_ReturnExpression_expression = (Optr)new_Slot(0, L"expression");
    layout_Smalltalk_AST_ReturnExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_ReturnExpression)->values[0] = slot_Smalltalk_AST_ReturnExpression_expression; // expression 
    Smalltalk_AST_ReturnExpression_Class = (Class)new_Class(Smalltalk_AST_Expression_Class, layout_Smalltalk_AST_ReturnExpression_Class_class);
    Smalltalk_AST_ReturnExpression_Class->layout = layout_Smalltalk_AST_ReturnExpression;
    Smalltalk_AST_ReturnExpression_Class->name = SMB_ReturnExpression;
    
}

void init_Smalltalk_AST_ASTReturnExpression_methods() {
    init_SMB_expression_();
    init_SMB_expression();
    init_SMB_isReturnExpression();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_hasReturnExpression();
    init_class_SMB_astSelectors();
    
}