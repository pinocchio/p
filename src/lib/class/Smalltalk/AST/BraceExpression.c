#include <lib/class/Smalltalk/AST/BraceExpression.h>


Optr layout_Smalltalk_AST_BraceExpression_Class_class;
Optr slot_Smalltalk_AST_BraceExpression_expressions;
Optr layout_Smalltalk_AST_BraceExpression;


static void init_SMB_expressions() {
    Symbol SMB_expressions = new_Symbol(L"expressions");
    Array PThreadedCode15988 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_BraceExpression_expressions, (Optr)&t_method_return);
    Method PMethod15987 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15988, 1, slot_Smalltalk_AST_BraceExpression_expressions);
    
    MethodClosure MC_SMB_expressions = new_MethodClosure((Method)PMethod15987, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_expressions, MC_SMB_expressions);
}


static void init_SMB_expressions_() {
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    Variable VAR_newExpressions_0_0 = new_Variable_named(L"newExpressions", 0);
    Array PArray15990 = new_Array_with(1, (Optr)VAR_newExpressions_0_0);
    Assign PAssign15992 = new_Assign((Optr)slot_Smalltalk_AST_BraceExpression_expressions, (Optr)VAR_newExpressions_0_0);
    Array PThreadedCode15991 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15992, (Optr)&t_push_variable, (Optr)VAR_newExpressions_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15989 = new_Method_with(PArray15990, empty_Array, empty_Array, PThreadedCode15991, 2, PAssign15992, self);
    
    MethodClosure MC_SMB_expressions_ = new_MethodClosure((Method)PMethod15989, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_expressions_, MC_SMB_expressions_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15994 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15997 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15999 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16003 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16002 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16003, (Optr)&t_block_return);
    Block PBlock16001 = new_Block_with(empty_Array, empty_Array, PThreadedCode16002, 1, PSend16003);
    // ifFalse:. 
    Send PSend16000 = new_Send((Optr)PSuper15999, SMB_ifFalse_, 1, (Optr)PBlock16001);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend16004 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend16005 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend16006 = new_Send((Optr)PSend16004, SMB__equals_, 1, (Optr)PSend16005);
    // escape:. 
    Send PSend16010 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode16009 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend16010, (Optr)&t_block_return);
    Block PBlock16008 = new_Block_with(empty_Array, empty_Array, PThreadedCode16009, 1, PSend16010);
    // ifFalse:. 
    Send PSend16007 = new_Send((Optr)PSend16006, SMB_ifFalse_, 1, (Optr)PBlock16008);
    Array PThreadedCode15998 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15999, (Optr)&t_send_ifFalse_, (Optr)PSend16000, (Optr)PBlock16001, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16004, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend16005, (Optr)&t_send1, (Optr)PSend16006, (Optr)&t_send_ifFalse_, (Optr)PSend16007, (Optr)PBlock16008, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15996 = new_Block_with(PArray15997, empty_Array, PThreadedCode15998, 3, PSend16000, PSend16007, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16011 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15996);
    Array PThreadedCode15995 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15996, (Optr)&t_send1, (Optr)PSend16011, (Optr)&t_method_return);
    Method PMethod15993 = new_Method_with(PArray15994, empty_Array, empty_Array, PThreadedCode15995, 1, PSend16011);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15993, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray16013 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBraceExpression_ = new_Symbol(L"visitBraceExpression:");
    // visitBraceExpression:. 
    Send PSend16015 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBraceExpression_, 1, (Optr)self);
    Array PThreadedCode16014 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16015, (Optr)&t_method_return);
    Method PMethod16012 = new_Method_with(PArray16013, empty_Array, empty_Array, PThreadedCode16014, 1, PSend16015);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod16012, Smalltalk_AST_BraceExpression_Class);
    store_method(Smalltalk_AST_BraceExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Symbol SMB_expressions = new_Symbol(L"expressions");
    // expressions. 
    Send PSend16018 = new_Send((Optr)self, SMB_expressions, 0);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Constant SMB_hasReturnExpression_Const = new_Constant((Optr)SMB_hasReturnExpression);
    // anySatisfy:. 
    Send PSend16019 = new_Send((Optr)PSend16018, SMB_anySatisfy_, 1, (Optr)SMB_hasReturnExpression_Const);
    Array PThreadedCode16017 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16018, (Optr)&t_push1, (Optr)SMB_hasReturnExpression, (Optr)&t_send1, (Optr)PSend16019, (Optr)&t_method_return);
    Method PMethod16016 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16017, 1, PSend16019);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod16016, Smalltalk_AST_BraceExpression_Class);
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