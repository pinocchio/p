#include <lib/class/Smalltalk/AST/AssignmentExpression.h>


Optr layout_Smalltalk_AST_AssignmentExpression_Class_class;
Optr slot_Smalltalk_AST_AssignmentExpression_variable;
Optr slot_Smalltalk_AST_AssignmentExpression_expression;
Optr layout_Smalltalk_AST_AssignmentExpression;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15856 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15858 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15857 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15858, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15855 = new_Method_with(PArray15856, empty_Array, empty_Array, PThreadedCode15857, 2, PAssign15858, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod15855, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15860 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15862 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15861 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15862, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15859 = new_Method_with(PArray15860, empty_Array, empty_Array, PThreadedCode15861, 2, PAssign15862, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod15859, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode15864 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_method_return);
    Method PMethod15863 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15864, 1, slot_Smalltalk_AST_AssignmentExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod15863, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15866 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15869 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15871 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15875 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15874 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15875, (Optr)&t_block_return);
    Block PBlock15873 = new_Block_with(empty_Array, empty_Array, PThreadedCode15874, 1, PSend15875);
    // ifFalse:. 
    Send PSend15872 = new_Send((Optr)PSuper15871, SMB_ifFalse_, 1, (Optr)PBlock15873);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15876 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15877 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15878 = new_Send((Optr)PSend15876, SMB__equals_, 1, (Optr)PSend15877);
    // escape:. 
    Send PSend15882 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15881 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15882, (Optr)&t_block_return);
    Block PBlock15880 = new_Block_with(empty_Array, empty_Array, PThreadedCode15881, 1, PSend15882);
    // ifFalse:. 
    Send PSend15879 = new_Send((Optr)PSend15878, SMB_ifFalse_, 1, (Optr)PBlock15880);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend15883 = new_Send((Optr)self, SMB_variable, 0);
    // variable. 
    Send PSend15884 = new_Send((Optr)VAR_other_0_0, SMB_variable, 0);
    // =. 
    Send PSend15885 = new_Send((Optr)PSend15883, SMB__equals_, 1, (Optr)PSend15884);
    // escape:. 
    Send PSend15889 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15888 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15889, (Optr)&t_block_return);
    Block PBlock15887 = new_Block_with(empty_Array, empty_Array, PThreadedCode15888, 1, PSend15889);
    // ifFalse:. 
    Send PSend15886 = new_Send((Optr)PSend15885, SMB_ifFalse_, 1, (Optr)PBlock15887);
    Array PThreadedCode15870 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15871, (Optr)&t_send_ifFalse_, (Optr)PSend15872, (Optr)PBlock15873, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15876, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15877, (Optr)&t_send1, (Optr)PSend15878, (Optr)&t_send_ifFalse_, (Optr)PSend15879, (Optr)PBlock15880, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15883, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15884, (Optr)&t_send1, (Optr)PSend15885, (Optr)&t_send_ifFalse_, (Optr)PSend15886, (Optr)PBlock15887, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15868 = new_Block_with(PArray15869, empty_Array, PThreadedCode15870, 4, PSend15872, PSend15879, PSend15886, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15890 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15868);
    Array PThreadedCode15867 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15868, (Optr)&t_send1, (Optr)PSend15890, (Optr)&t_method_return);
    Method PMethod15865 = new_Method_with(PArray15866, empty_Array, empty_Array, PThreadedCode15867, 1, PSend15890);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15865, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
    Array PThreadedCode15892 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)&t_method_return);
    Method PMethod15891 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15892, 1, slot_Smalltalk_AST_AssignmentExpression_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod15891, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable, MC_SMB_variable);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15894 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    // visitAssignmentExpression:. 
    Send PSend15896 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAssignmentExpression_, 1, (Optr)self);
    Array PThreadedCode15895 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15896, (Optr)&t_method_return);
    Method PMethod15893 = new_Method_with(PArray15894, empty_Array, empty_Array, PThreadedCode15895, 1, PSend15896);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15893, Smalltalk_AST_AssignmentExpression_Class);
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend15899 = new_Send((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, SMB_hasReturnExpression, 0);
    Array PThreadedCode15898 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_send0, (Optr)PSend15899, (Optr)&t_method_return);
    Method PMethod15897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15898, 1, PSend15899);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15897, Smalltalk_AST_AssignmentExpression_Class);
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