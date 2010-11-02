#include <lib/class/Smalltalk/AST/BraceExpression.h>


Optr layout_Smalltalk_AST_BraceExpression_Class_class;
Optr slot_Smalltalk_AST_BraceExpression_expressions;
Optr layout_Smalltalk_AST_BraceExpression;


static void init_SMB_expressions() {
    Symbol SMB_expressions = new_Symbol(L"expressions");
    Array PThreadedCode15596 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BraceExpression_expressions, (Optr)&t_method_return);
    Method PMethod15595 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15596, 1, slot_Smalltalk_AST_BraceExpression_expressions);
    
    MethodClosure MC_SMB_expressions = new_MethodClosure((Method)PMethod15595, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_expressions, MC_SMB_expressions);
}


static void init_SMB_expressions_() {
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    Variable VAR_newExpressions_0_0 = new_Variable_named(L"newExpressions", 0);
    Array PArray15598 = new_Array_with(1, (Optr)VAR_newExpressions_0_0);
    Assign PAssign15600 = new_Assign((Optr)slot_Smalltalk_AST_BraceExpression_expressions, (Optr)VAR_newExpressions_0_0);
    Array PThreadedCode15599 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15600, (Optr)&t_push_variable, (Optr)VAR_newExpressions_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15597 = new_Method_with(PArray15598, empty_Array, empty_Array, PThreadedCode15599, 2, PAssign15600, self);
    
    MethodClosure MC_SMB_expressions_ = new_MethodClosure((Method)PMethod15597, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_expressions_, MC_SMB_expressions_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15602 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15605 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15607 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15611 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15610 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15611, (Optr)&t_block_return);
    Block PBlock15609 = new_Block_with(empty_Array, empty_Array, PThreadedCode15610, 1, PSend15611);
    // ifFalse:. 
    Send PSend15608 = new_Send((Optr)PSuper15607, SMB_ifFalse_, 1, (Optr)PBlock15609);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15612 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15613 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15614 = new_Send((Optr)PSend15612, SMB__equals_, 1, (Optr)PSend15613);
    // escape:. 
    Send PSend15618 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15617 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15618, (Optr)&t_block_return);
    Block PBlock15616 = new_Block_with(empty_Array, empty_Array, PThreadedCode15617, 1, PSend15618);
    // ifFalse:. 
    Send PSend15615 = new_Send((Optr)PSend15614, SMB_ifFalse_, 1, (Optr)PBlock15616);
    Array PThreadedCode15606 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15607, (Optr)&t_send_ifFalse_, (Optr)PSend15608, (Optr)PBlock15609, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15612, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15613, (Optr)&t_send1, (Optr)PSend15614, (Optr)&t_send_ifFalse_, (Optr)PSend15615, (Optr)PBlock15616, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15604 = new_Block_with(PArray15605, empty_Array, PThreadedCode15606, 3, PSend15608, PSend15615, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15619 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15604);
    Array PThreadedCode15603 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15604, (Optr)&t_send1, (Optr)PSend15619, (Optr)&t_method_return);
    Method PMethod15601 = new_Method_with(PArray15602, empty_Array, empty_Array, PThreadedCode15603, 1, PSend15619);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15601, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15621 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBraceExpression_ = new_Symbol(L"visitBraceExpression:");
    // visitBraceExpression:. 
    Send PSend15623 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBraceExpression_, 1, (Optr)self);
    Array PThreadedCode15622 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15623, (Optr)&t_method_return);
    Method PMethod15620 = new_Method_with(PArray15621, empty_Array, empty_Array, PThreadedCode15622, 1, PSend15623);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15620, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_expressions = new_Symbol(L"expressions");
    // expressions. 
    Send PSend15626 = new_Send((Optr)self, SMB_expressions, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend15627 = new_Send((Optr)PSend15626, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode15625 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15626, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend15627, (Optr)&t_method_return);
    Method PMethod15624 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15625, 1, PSend15627);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15624, Smalltalk_AST_BraceExpression_Class);
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