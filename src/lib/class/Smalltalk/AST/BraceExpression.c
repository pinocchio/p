#include <lib/class/Smalltalk/AST/BraceExpression.h>


Optr layout_Smalltalk_AST_BraceExpression_Class_class;
Optr slot_Smalltalk_AST_BraceExpression_expressions;
Optr layout_Smalltalk_AST_BraceExpression;


static void init_SMB_expressions() {
    Symbol SMB_expressions = new_Symbol(L"expressions");
    Array PThreadedCode15626 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BraceExpression_expressions, (Optr)&t_method_return);
    Method PMethod15625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15626, 1, slot_Smalltalk_AST_BraceExpression_expressions);
    
    MethodClosure MC_SMB_expressions = new_MethodClosure((Method)PMethod15625, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_expressions, MC_SMB_expressions);
}


static void init_SMB_expressions_() {
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    Variable VAR_newExpressions_0_0 = new_Variable_named(L"newExpressions", 0);
    Array PArray15628 = new_Array_with(1, (Optr)VAR_newExpressions_0_0);
    Assign PAssign15630 = new_Assign((Optr)slot_Smalltalk_AST_BraceExpression_expressions, (Optr)VAR_newExpressions_0_0);
    Array PThreadedCode15629 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15630, (Optr)&t_push_variable, (Optr)VAR_newExpressions_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15627 = new_Method_with(PArray15628, empty_Array, empty_Array, PThreadedCode15629, 2, PAssign15630, self);
    
    MethodClosure MC_SMB_expressions_ = new_MethodClosure((Method)PMethod15627, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_expressions_, MC_SMB_expressions_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15632 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15635 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15637 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15641 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15640 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15641, (Optr)&t_block_return);
    Block PBlock15639 = new_Block_with(empty_Array, empty_Array, PThreadedCode15640, 1, PSend15641);
    // ifFalse:. 
    Send PSend15638 = new_Send((Optr)PSuper15637, SMB_ifFalse_, 1, (Optr)PBlock15639);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15642 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15643 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15644 = new_Send((Optr)PSend15642, SMB__equals_, 1, (Optr)PSend15643);
    // escape:. 
    Send PSend15648 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15647 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15648, (Optr)&t_block_return);
    Block PBlock15646 = new_Block_with(empty_Array, empty_Array, PThreadedCode15647, 1, PSend15648);
    // ifFalse:. 
    Send PSend15645 = new_Send((Optr)PSend15644, SMB_ifFalse_, 1, (Optr)PBlock15646);
    Array PThreadedCode15636 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15637, (Optr)&t_send_ifFalse_, (Optr)PSend15638, (Optr)PBlock15639, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15642, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15643, (Optr)&t_send1, (Optr)PSend15644, (Optr)&t_send_ifFalse_, (Optr)PSend15645, (Optr)PBlock15646, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15634 = new_Block_with(PArray15635, empty_Array, PThreadedCode15636, 3, PSend15638, PSend15645, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15649 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15634);
    Array PThreadedCode15633 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15634, (Optr)&t_send1, (Optr)PSend15649, (Optr)&t_method_return);
    Method PMethod15631 = new_Method_with(PArray15632, empty_Array, empty_Array, PThreadedCode15633, 1, PSend15649);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15631, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15651 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBraceExpression_ = new_Symbol(L"visitBraceExpression:");
    // visitBraceExpression:. 
    Send PSend15653 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBraceExpression_, 1, (Optr)self);
    Array PThreadedCode15652 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15653, (Optr)&t_method_return);
    Method PMethod15650 = new_Method_with(PArray15651, empty_Array, empty_Array, PThreadedCode15652, 1, PSend15653);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15650, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_expressions = new_Symbol(L"expressions");
    // expressions. 
    Send PSend15656 = new_Send((Optr)self, SMB_expressions, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15657 = new_Send((Optr)PSend15656, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15655 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15656, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15657, (Optr)&t_method_return);
    Method PMethod15654 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15655, 1, PSend15657);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15654, Smalltalk_AST_BraceExpression_Class);
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