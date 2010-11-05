#include <lib/class/Smalltalk/AST/ReturnExpression.h>


Optr layout_Smalltalk_AST_ReturnExpression_Class_class;
Optr slot_Smalltalk_AST_ReturnExpression_expression;
Optr layout_Smalltalk_AST_ReturnExpression;


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15721 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15723 = new_Assign((Optr)slot_Smalltalk_AST_ReturnExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15722 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15723, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15720 = new_Method_with(PArray15721, empty_Array, empty_Array, PThreadedCode15722, 2, PAssign15723, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod15720, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode15725 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_ReturnExpression_expression, (Optr)&t_method_return);
    Method PMethod15724 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15725, 1, slot_Smalltalk_AST_ReturnExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod15724, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_isReturnExpression() {
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    Array PThreadedCode15727 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod15726 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15727, 1, true_Const);
    
    MethodClosure MC_SMB_isReturnExpression = new_MethodClosure((Method)PMethod15726, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_isReturnExpression, MC_SMB_isReturnExpression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15729 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15732 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15734 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15738 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15737 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15738, (Optr)&t_block_return);
    Block PBlock15736 = new_Block_with(empty_Array, empty_Array, PThreadedCode15737, 1, PSend15738);
    // ifFalse:. 
    Send PSend15735 = new_Send((Optr)PSuper15734, SMB_ifFalse_, 1, (Optr)PBlock15736);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15739 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15740 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15741 = new_Send((Optr)PSend15739, SMB__equals_, 1, (Optr)PSend15740);
    // escape:. 
    Send PSend15745 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15744 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15745, (Optr)&t_block_return);
    Block PBlock15743 = new_Block_with(empty_Array, empty_Array, PThreadedCode15744, 1, PSend15745);
    // ifFalse:. 
    Send PSend15742 = new_Send((Optr)PSend15741, SMB_ifFalse_, 1, (Optr)PBlock15743);
    Array PThreadedCode15733 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15734, (Optr)&t_send_ifFalse_, (Optr)PSend15735, (Optr)PBlock15736, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15739, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15740, (Optr)&t_send1, (Optr)PSend15741, (Optr)&t_send_ifFalse_, (Optr)PSend15742, (Optr)PBlock15743, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15731 = new_Block_with(PArray15732, empty_Array, PThreadedCode15733, 3, PSend15735, PSend15742, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15746 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15731);
    Array PThreadedCode15730 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15731, (Optr)&t_send1, (Optr)PSend15746, (Optr)&t_method_return);
    Method PMethod15728 = new_Method_with(PArray15729, empty_Array, empty_Array, PThreadedCode15730, 1, PSend15746);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15728, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15748 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitReturnExpression_ = new_Symbol(L"visitReturnExpression:");
    // visitReturnExpression:. 
    Send PSend15750 = new_Send((Optr)VAR_visitor_0_0, SMB_visitReturnExpression_, 1, (Optr)self);
    Array PThreadedCode15749 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15750, (Optr)&t_method_return);
    Method PMethod15747 = new_Method_with(PArray15748, empty_Array, empty_Array, PThreadedCode15749, 1, PSend15750);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15747, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Array PThreadedCode15752 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod15751 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15752, 1, true_Const);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15751, Smalltalk_AST_ReturnExpression_Class);
    store_method(Smalltalk_AST_ReturnExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_expression = new_Symbol(L"expression");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // with:. 
    Send PSend15755 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode15754 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend15755, (Optr)&t_method_return);
    Method PMethod15753 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15754, 1, PSend15755);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15753, HEADER(Smalltalk_AST_ReturnExpression_Class));
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