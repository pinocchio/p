#include <lib/class/Smalltalk/AST/AssignmentExpression.h>


Optr layout_Smalltalk_AST_AssignmentExpression_Class_class;
Optr slot_Smalltalk_AST_AssignmentExpression_variable;
Optr slot_Smalltalk_AST_AssignmentExpression_expression;
Optr layout_Smalltalk_AST_AssignmentExpression;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray15888 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15890 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15889 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15890, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15887 = new_Method_with(PArray15888, empty_Array, empty_Array, PThreadedCode15889, 2, PAssign15890, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod15887, Smalltalk_AST_AssignmentExpression_Class);
=======
    Array PArray15854 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15856 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15855 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15856, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15853 = new_Method_with(PArray15854, empty_Array, empty_Array, PThreadedCode15855, 2, PAssign15856, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod15853, Smalltalk_AST_AssignmentExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray15892 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15894 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15893 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15894, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15891 = new_Method_with(PArray15892, empty_Array, empty_Array, PThreadedCode15893, 2, PAssign15894, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod15891, Smalltalk_AST_AssignmentExpression_Class);
=======
    Array PArray15858 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15860 = new_Assign((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15859 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15860, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15857 = new_Method_with(PArray15858, empty_Array, empty_Array, PThreadedCode15859, 2, PAssign15860, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod15857, Smalltalk_AST_AssignmentExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
<<<<<<< HEAD
    Array PThreadedCode15896 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_method_return);
    Method PMethod15895 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15896, 1, slot_Smalltalk_AST_AssignmentExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod15895, Smalltalk_AST_AssignmentExpression_Class);
=======
    Array PThreadedCode15862 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_method_return);
    Method PMethod15861 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15862, 1, slot_Smalltalk_AST_AssignmentExpression_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod15861, Smalltalk_AST_AssignmentExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
<<<<<<< HEAD
    Array PArray15898 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15901 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15903 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15907 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15906 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15907, (Optr)&t_block_return);
    Block PBlock15905 = new_Block_with(empty_Array, empty_Array, PThreadedCode15906, 1, PSend15907);
    // ifFalse:. 
    Send PSend15904 = new_Send((Optr)PSuper15903, SMB_ifFalse_, 1, (Optr)PBlock15905);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15908 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15909 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15910 = new_Send((Optr)PSend15908, SMB__equals_, 1, (Optr)PSend15909);
    // escape:. 
    Send PSend15914 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15913 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15914, (Optr)&t_block_return);
    Block PBlock15912 = new_Block_with(empty_Array, empty_Array, PThreadedCode15913, 1, PSend15914);
    // ifFalse:. 
    Send PSend15911 = new_Send((Optr)PSend15910, SMB_ifFalse_, 1, (Optr)PBlock15912);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend15915 = new_Send((Optr)self, SMB_variable, 0);
    // variable. 
    Send PSend15916 = new_Send((Optr)VAR_other_0_0, SMB_variable, 0);
    // =. 
    Send PSend15917 = new_Send((Optr)PSend15915, SMB__equals_, 1, (Optr)PSend15916);
    // escape:. 
    Send PSend15921 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15920 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15921, (Optr)&t_block_return);
    Block PBlock15919 = new_Block_with(empty_Array, empty_Array, PThreadedCode15920, 1, PSend15921);
    // ifFalse:. 
    Send PSend15918 = new_Send((Optr)PSend15917, SMB_ifFalse_, 1, (Optr)PBlock15919);
    Array PThreadedCode15902 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15903, (Optr)&t_send_ifFalse_, (Optr)PSend15904, (Optr)PBlock15905, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15908, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15909, (Optr)&t_send1, (Optr)PSend15910, (Optr)&t_send_ifFalse_, (Optr)PSend15911, (Optr)PBlock15912, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15915, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15916, (Optr)&t_send1, (Optr)PSend15917, (Optr)&t_send_ifFalse_, (Optr)PSend15918, (Optr)PBlock15919, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15900 = new_Block_with(PArray15901, empty_Array, PThreadedCode15902, 4, PSend15904, PSend15911, PSend15918, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15922 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15900);
    Array PThreadedCode15899 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15900, (Optr)&t_send1, (Optr)PSend15922, (Optr)&t_method_return);
    Method PMethod15897 = new_Method_with(PArray15898, empty_Array, empty_Array, PThreadedCode15899, 1, PSend15922);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15897, Smalltalk_AST_AssignmentExpression_Class);
=======
    Array PArray15864 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15867 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15869 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15873 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15872 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15873, (Optr)&t_block_return);
    Block PBlock15871 = new_Block_with(empty_Array, empty_Array, PThreadedCode15872, 1, PSend15873);
    // ifFalse:. 
    Send PSend15870 = new_Send((Optr)PSuper15869, SMB_ifFalse_, 1, (Optr)PBlock15871);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15874 = new_Send((Optr)self, SMB_expression, 0);
    // expression. 
    Send PSend15875 = new_Send((Optr)VAR_other_0_0, SMB_expression, 0);
    // =. 
    Send PSend15876 = new_Send((Optr)PSend15874, SMB__equals_, 1, (Optr)PSend15875);
    // escape:. 
    Send PSend15880 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15879 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15880, (Optr)&t_block_return);
    Block PBlock15878 = new_Block_with(empty_Array, empty_Array, PThreadedCode15879, 1, PSend15880);
    // ifFalse:. 
    Send PSend15877 = new_Send((Optr)PSend15876, SMB_ifFalse_, 1, (Optr)PBlock15878);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend15881 = new_Send((Optr)self, SMB_variable, 0);
    // variable. 
    Send PSend15882 = new_Send((Optr)VAR_other_0_0, SMB_variable, 0);
    // =. 
    Send PSend15883 = new_Send((Optr)PSend15881, SMB__equals_, 1, (Optr)PSend15882);
    // escape:. 
    Send PSend15887 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15886 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15887, (Optr)&t_block_return);
    Block PBlock15885 = new_Block_with(empty_Array, empty_Array, PThreadedCode15886, 1, PSend15887);
    // ifFalse:. 
    Send PSend15884 = new_Send((Optr)PSend15883, SMB_ifFalse_, 1, (Optr)PBlock15885);
    Array PThreadedCode15868 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15869, (Optr)&t_send_ifFalse_, (Optr)PSend15870, (Optr)PBlock15871, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15874, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15875, (Optr)&t_send1, (Optr)PSend15876, (Optr)&t_send_ifFalse_, (Optr)PSend15877, (Optr)PBlock15878, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15881, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15882, (Optr)&t_send1, (Optr)PSend15883, (Optr)&t_send_ifFalse_, (Optr)PSend15884, (Optr)PBlock15885, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15866 = new_Block_with(PArray15867, empty_Array, PThreadedCode15868, 4, PSend15870, PSend15877, PSend15884, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15888 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15866);
    Array PThreadedCode15865 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15866, (Optr)&t_send1, (Optr)PSend15888, (Optr)&t_method_return);
    Method PMethod15863 = new_Method_with(PArray15864, empty_Array, empty_Array, PThreadedCode15865, 1, PSend15888);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15863, Smalltalk_AST_AssignmentExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
<<<<<<< HEAD
    Array PThreadedCode15924 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)&t_method_return);
    Method PMethod15923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15924, 1, slot_Smalltalk_AST_AssignmentExpression_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod15923, Smalltalk_AST_AssignmentExpression_Class);
=======
    Array PThreadedCode15890 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_variable, (Optr)&t_method_return);
    Method PMethod15889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15890, 1, slot_Smalltalk_AST_AssignmentExpression_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod15889, Smalltalk_AST_AssignmentExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_variable, MC_SMB_variable);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray15926 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    // visitAssignmentExpression:. 
    Send PSend15928 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAssignmentExpression_, 1, (Optr)self);
    Array PThreadedCode15927 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15928, (Optr)&t_method_return);
    Method PMethod15925 = new_Method_with(PArray15926, empty_Array, empty_Array, PThreadedCode15927, 1, PSend15928);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15925, Smalltalk_AST_AssignmentExpression_Class);
=======
    Array PArray15892 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    // visitAssignmentExpression:. 
    Send PSend15894 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAssignmentExpression_, 1, (Optr)self);
    Array PThreadedCode15893 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15894, (Optr)&t_method_return);
    Method PMethod15891 = new_Method_with(PArray15892, empty_Array, empty_Array, PThreadedCode15893, 1, PSend15894);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15891, Smalltalk_AST_AssignmentExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_AST_AssignmentExpression_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
<<<<<<< HEAD
    Send PSend15931 = new_Send((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, SMB_hasReturnExpression, 0);
    Array PThreadedCode15930 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_send0, (Optr)PSend15931, (Optr)&t_method_return);
    Method PMethod15929 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15930, 1, PSend15931);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15929, Smalltalk_AST_AssignmentExpression_Class);
=======
    Send PSend15897 = new_Send((Optr)slot_Smalltalk_AST_AssignmentExpression_expression, SMB_hasReturnExpression, 0);
    Array PThreadedCode15896 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_AssignmentExpression_expression, (Optr)&t_send0, (Optr)PSend15897, (Optr)&t_method_return);
    Method PMethod15895 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15896, 1, PSend15897);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod15895, Smalltalk_AST_AssignmentExpression_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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