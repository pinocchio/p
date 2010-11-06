#include <lib/class/Smalltalk/AST/BraceExpression.h>


Optr layout_Smalltalk_AST_BraceExpression_Class_class;
Optr slot_Smalltalk_AST_BraceExpression_expressions;
Optr layout_Smalltalk_AST_BraceExpression;


static void init_SMB_expressions() {
    Symbol SMB_expressions = new_Symbol(L"expressions");
    Array PThreadedCode15767 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BraceExpression_expressions, (Optr)&t_method_return);
    Method PMethod15766 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15767, 1, slot_Smalltalk_AST_BraceExpression_expressions);
    
    MethodClosure MC_SMB_expressions = new_MethodClosure((Method)PMethod15766, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_expressions, MC_SMB_expressions);
}


static void init_SMB_expressions_() {
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    Variable VAR_newExpressions_0_0 = new_Variable_named(L"newExpressions", 0);
    Array PArray15769 = new_Array_with(1, (Optr)VAR_newExpressions_0_0);
    Assign PAssign15771 = new_Assign((Optr)slot_Smalltalk_AST_BraceExpression_expressions, (Optr)VAR_newExpressions_0_0);
    Array PThreadedCode15770 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15771, (Optr)&t_push_variable, (Optr)VAR_newExpressions_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15768 = new_Method_with(PArray15769, empty_Array, empty_Array, PThreadedCode15770, 2, PAssign15771, self);
    
    MethodClosure MC_SMB_expressions_ = new_MethodClosure((Method)PMethod15768, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_expressions_, MC_SMB_expressions_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15773 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15776 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15778 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15782 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15781 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15782, (Optr)&t_block_return);
    Block PBlock15780 = new_Block_with(empty_Array, empty_Array, PThreadedCode15781, 1, PSend15782);
    // ifFalse:. 
    Send PSend15779 = new_Send((Optr)PSuper15778, SMB_ifFalse_, 1, (Optr)PBlock15780);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15783 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15784 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15785 = new_Send((Optr)PSend15783, SMB__equals_, 1, (Optr)PSend15784);
    // escape:. 
    Send PSend15789 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15788 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15789, (Optr)&t_block_return);
    Block PBlock15787 = new_Block_with(empty_Array, empty_Array, PThreadedCode15788, 1, PSend15789);
    // ifFalse:. 
    Send PSend15786 = new_Send((Optr)PSend15785, SMB_ifFalse_, 1, (Optr)PBlock15787);
    Array PThreadedCode15777 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15778, (Optr)&t_send_ifFalse_, (Optr)PSend15779, (Optr)PBlock15780, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15783, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15784, (Optr)&t_send1, (Optr)PSend15785, (Optr)&t_send_ifFalse_, (Optr)PSend15786, (Optr)PBlock15787, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15775 = new_Block_with(PArray15776, empty_Array, PThreadedCode15777, 3, PSend15779, PSend15786, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15790 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15775);
    Array PThreadedCode15774 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15775, (Optr)&t_send1, (Optr)PSend15790, (Optr)&t_method_return);
    Method PMethod15772 = new_Method_with(PArray15773, empty_Array, empty_Array, PThreadedCode15774, 1, PSend15790);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15772, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15792 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBraceExpression_ = new_Symbol(L"visitBraceExpression:");
    // visitBraceExpression:. 
    Send PSend15794 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBraceExpression_, 1, (Optr)self);
    Array PThreadedCode15793 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15794, (Optr)&t_method_return);
    Method PMethod15791 = new_Method_with(PArray15792, empty_Array, empty_Array, PThreadedCode15793, 1, PSend15794);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15791, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_expressions = new_Symbol(L"expressions");
    // expressions. 
    Send PSend15797 = new_Send((Optr)self, SMB_expressions, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15798 = new_Send((Optr)PSend15797, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15796 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15797, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15798, (Optr)&t_method_return);
    Method PMethod15795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15796, 1, PSend15798);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15795, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}

void init_Smalltalk_AST_ASTBraceExpression_layout() {
    layout_Smalltalk_AST_BraceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_BraceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_BraceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_BraceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_BraceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_BraceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_BraceExpression = new_Symbol(L"BraceExpression");
    slot_Smalltalk_AST_BraceExpression_expressions = (Optr)new_Slot(0, L"expressions");
    layout_Smalltalk_AST_BraceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_BraceExpression)->values[0] = slot_Smalltalk_AST_BraceExpression_expressions; // expressions 
    Smalltalk_AST_BraceExpression_Class = (Class)new_Class(Smalltalk_AST_Expression_Class, layout_Smalltalk_AST_BraceExpression_Class_class);
    Smalltalk_AST_BraceExpression_Class->layout = layout_Smalltalk_AST_BraceExpression;
    Smalltalk_AST_BraceExpression_Class->name = SMB_BraceExpression;
    
}

void init_Smalltalk_AST_ASTBraceExpression_methods() {
    init_SMB_expressions();
    init_SMB_expressions_();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_hasReturnExpression();
    
}